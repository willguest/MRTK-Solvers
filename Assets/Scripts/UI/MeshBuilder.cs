// https://github.com/Microsoft/MixedRealityToolkit-Unity/issues/188 
// this is the basis, on to which i've added a couple of features


using UnityEngine;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System;

#if WINDOWS_UWP
using Windows.Storage;
#endif

struct ObjMaterial
{
    public string name;
    public string textureName;
}

public class MeshBuilder : MonoBehaviour
{
    private static int vertexOffset = 0;
    private static int normalOffset = 0;
    private static int uvOffset = 0;
    private static int faceCount = 0;

    /// <summary>
    /// Uses a stringBuilder to iteratively write each section's mesh
    /// to a block of text with the title 'o Object. X'
    /// [you can use 'g ___' to set titles of the sections]
    /// </summary>
    /// <param name="m"></param>
    /// <param name="lastFaceIndex"></param>
    /// <returns></returns>
    public static string MeshToString(Mesh m, int lastFaceIndex = 0)
    {
        StringBuilder sb = new StringBuilder();
        foreach (Vector3 v in m.vertices)
        {
            sb.Append(string.Format("v {0} {1} {2}\n", -v.x, v.y, v.z));
        }
        sb.Append("\n");

        foreach (Vector3 v in m.normals)
        {
            sb.Append(string.Format("vn {0} {1} {2}\n", -v.x, v.y, v.z));
        }
        sb.Append("\n");

        foreach (Vector3 v in m.uv)
        {
            sb.Append(string.Format("vt {0} {1}\n", v.x, v.y));
        }

        for (int material = 0; material < m.subMeshCount; material++)
        {
            int[] triangles = m.GetTriangles(material);
            for (int i = 0; i < triangles.Length; i += 3)
            {
                faceCount += 3;
                sb.Append(string.Format("f {1}/{1}/{1} {0}/{0}/{0} {2}/{2}/{2}\n",
                    triangles[i] + 1 + lastFaceIndex, triangles[i + 1] + 1 + lastFaceIndex, triangles[i + 2] + 1 + lastFaceIndex));
            }
        }
        sb.Append("\n\n");

        return sb.ToString();
    }


    private static string MeshFilterToString(MeshFilter mf, Dictionary<string, ObjMaterial> materialList)
    {
        Mesh m = mf.sharedMesh;
        Material[] mats = mf.GetComponent<Renderer>().sharedMaterials;

        StringBuilder sb = new StringBuilder();

        sb.Append("g ").Append(mf.name).Append("\n");

        foreach (Vector3 lv in m.vertices)
        {
            Vector3 wv = mf.transform.TransformPoint(lv);

            //This is sort of ugly - inverting x-component since we're in
            //a different coordinate system than "everyone" is "used to".
            sb.Append(string.Format("v {0} {1} {2}\n", -wv.x, wv.y, wv.z));
        }
        sb.Append("\n");

        foreach (Vector3 lv in m.normals)
        {
            Vector3 xv = mf.transform.TransformDirection(lv);

            sb.Append(string.Format("vn {0} {1} {2}\n", -xv.x, xv.y, xv.z));
        }
        sb.Append("\n");

        foreach (Vector3 v in m.uv)
        {
            sb.Append(string.Format("vt {0} {1}\n", v.x, v.y));
        }

        for (int material = 0; material < m.subMeshCount; material++)
        {
            sb.Append("\n");
            sb.Append("usemtl ").Append(mats[material].name).Append("\n");
            sb.Append("usemap ").Append(mats[material].name).Append("\n");

            //See if this material is already in the materiallist.
            try
            {
                ObjMaterial objMaterial = new ObjMaterial();

                objMaterial.name = mats[material].name;

                if (mats[material].mainTexture)
                {
                    objMaterial.textureName = mats[material].mainTexture.name;
                }
                else
                {
                    objMaterial.textureName = null;
                }
                materialList.Add(objMaterial.name, objMaterial);
            }
            catch (ArgumentException)
            {
                //Already in the dictionary
            }

            int[] triangles = m.GetTriangles(material);
            for (int i = 0; i < triangles.Length; i += 3)
            {
                //Because we inverted the x-component, we also needed to alter the triangle winding.
                sb.Append(string.Format("f {1}/{1}/{1} {0}/{0}/{0} {2}/{2}/{2}\n",
                    triangles[i] + 1 + vertexOffset, triangles[i + 1] + 1 + normalOffset, triangles[i + 2] + 1 + uvOffset));
            }

        }

        vertexOffset += m.vertices.Length;
        normalOffset += m.normals.Length;
        uvOffset += m.uv.Length;

        return sb.ToString();
    }

    private static void Clear()
    {
        vertexOffset = 0;
        normalOffset = 0;
        uvOffset = 0;
        faceCount = 0;
    }

    private static Dictionary<string, ObjMaterial> PrepareFileWrite()
    {
        Clear();
        return new Dictionary<string, ObjMaterial>();
    }

    private void MaterialsToFile(Dictionary<string, ObjMaterial> materialList, string folder, string filename)
    {
        String folderName = Application.persistentDataPath;
        string filePath = Path.Combine(folderName, "Rooms", filename + ".mtl");
        Stream myStream = new FileStream(filePath, FileMode.OpenOrCreate, FileAccess.Write);

        //Stream SFstream = System.Threading.Tasks.Task.Run(async () => await Get_Stream(folder, filename)).Result;
        myStream.SetLength(0);

        using (StreamWriter sw = new StreamWriter(myStream))
        {
            foreach (KeyValuePair<string, ObjMaterial> kvp in materialList)
            {
                sw.Write("\n");
                sw.Write("newmtl {0}\n", kvp.Key);
                sw.Write("Ka  0.6 0.6 0.6\n");
                sw.Write("Kd  0.6 0.6 0.6\n");
                sw.Write("Ks  0.9 0.9 0.9\n");
                sw.Write("d  1.0\n");
                sw.Write("Ns  0.0\n");
                sw.Write("illum 2\n");

                if (kvp.Value.textureName != null)
                {
                    string destinationFile = kvp.Value.textureName;

                    int stripIndex = destinationFile.LastIndexOf(Path.PathSeparator);

                    if (stripIndex >= 0)
                    { destinationFile = destinationFile.Substring(stripIndex + 1).Trim(); }

                    string relativeFile = destinationFile;

                    destinationFile = folder + Path.PathSeparator + destinationFile;

                    Debug.Log("Copying texture from " + kvp.Value.textureName + " to " + destinationFile);

                    // this doesn't work, but it's not far away
                    try
                    {
                        //Copy the source file
                        File.Copy(kvp.Value.textureName, destinationFile);
                    }
                    catch
                    {
                        Debug.Log("failed trying to copy textureName to destinationFile");
                    }

                    sw.Write("map_Kd {0}", relativeFile);
                }

                sw.Write("\n\n\n");
            }
        }
    }


    private async System.Threading.Tasks.Task<Stream> Get_Stream(string folder, string filename)
    {
#if WINDOWS_UWP
        StorageFolder storageFolder = await KnownFolders.Objects3D.CreateFolderAsync(folder, CreationCollisionOption.ReplaceExisting);
        StorageFile sampleFile = await storageFolder.CreateFileAsync(filename + ".obj", Windows.Storage.CreationCollisionOption.ReplaceExisting);
        return await sampleFile.OpenStreamForWriteAsync();
#endif
#if UNITY_EDITOR

        String basePath = Application.persistentDataPath;
        string filePath = Path.Combine(basePath, "Rooms", filename + ".obj");

        Stream myStream = new FileStream(filePath, FileMode.Create, FileAccess.Write);
        return myStream;
#endif
    }


    /// <summary>
    /// After establishing a filestream, writes an '.obj' file
    /// either to the '3D Objects' folder on the HoloLens, 
    /// or the 'LocalState' folder when running in the editor
    /// </summary>
    /// <param name="meshes"></param>
    /// <param name="folder"></param>
    /// <param name="filename"></param>
    public void SaveMeshesToFile(Mesh[] meshes, string folder, string filename)
    {
        Dictionary<string, ObjMaterial> materialList = PrepareFileWrite();

        Stream SFstream = System.Threading.Tasks.Task.Run(async () => await Get_Stream(folder, filename)).Result;
        SFstream.SetLength(0);

        using (StreamWriter sw = new StreamWriter(SFstream))
        {
            // header for materials file
            sw.Write("mtllib ./" + filename + ".mtl\n");

            // write each mesh to a line in the .obj
            for (int i = 0; i < meshes.Length; i++)
            {
                sw.WriteLine("o Object." + i);
                sw.Write(MeshToString(meshes[i], faceCount));
            }
        }
    }


    // Building a file from mesh filters allow the inclusion of texture
    public void SaveMeshFiltersToFile(MeshFilter[] mf, string folder, string filename)
    {
        Dictionary<string, ObjMaterial> materialList = PrepareFileWrite();

        Stream SFstream = System.Threading.Tasks.Task.Run(async () => await Get_Stream(folder, filename)).Result;
        SFstream.SetLength(0);
        /*
        String folderName = Application.persistentDataPath;
        string filePath = Path.Combine(folderName, filename + ".obj");

        Debug.Log(String.Format("Saving mesh file: {0}", filePath));

        Stream myStream = new FileStream(filePath, FileMode.Create, FileAccess.Write);
        */
        using (StreamWriter sw = new StreamWriter(SFstream))
        {
            sw.Write("mtllib ./" + filename + ".mtl\n");

            for (int i = 0; i < mf.Length; i++)
            {
                sw.Write(MeshFilterToString(mf[i], materialList));
            }
        }

        MaterialsToFile(materialList, folder, filename);
    }





}
