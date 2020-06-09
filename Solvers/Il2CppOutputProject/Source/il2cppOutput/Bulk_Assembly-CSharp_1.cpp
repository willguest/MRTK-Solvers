#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// HoloToolkit.Unity.SpatialMapping.RemoveSurfaceVertices
struct RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F;
// HoloToolkit.Unity.SpatialMapping.RemoveSurfaceVertices/EventHandler
struct EventHandler_t4F7BE8CBD8EDBFA0FFF2BF5B2D1CE28266ACCC81;
// HoloToolkit.Unity.SpatialMapping.SpatialMappingManager
struct SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1;
// HoloToolkit.Unity.SpatialMapping.SpatialMappingObserver
struct SpatialMappingObserver_t79E64A101A9A3E6EF682690E899FDBC9B3F78814;
// HoloToolkit.Unity.SpatialMapping.SpatialMappingSource
struct SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC;
// HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes
struct SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19;
// HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes/EventHandler
struct EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3;
// HoloToolkit.Unity.SpatialUnderstanding
struct SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D;
// HoloToolkit.Unity.SpatialUnderstanding/OnScanDoneDelegate
struct OnScanDoneDelegate_t51BB643792EFCAD110DE85359DFFEBA7C37931E8;
// HoloToolkit.Unity.SpatialUnderstandingCustomMesh
struct SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE;
// HoloToolkit.Unity.SpatialUnderstandingDll
struct SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F;
// HoloToolkit.Unity.SpatialUnderstandingDll/Imports/MeshData[]
struct MeshDataU5BU5D_t07D180F778425BBFC939E1B74E3EC293CA0027E6;
// HoloToolkit.Unity.SpatialUnderstandingDll/Imports/PlayspaceAlignment
struct PlayspaceAlignment_t89C74C012925E7CB400A5FF25EF93691C90BAC5A;
// HoloToolkit.Unity.SpatialUnderstandingDll/Imports/PlayspaceStats
struct PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763;
// HoloToolkit.Unity.SpatialUnderstandingDll/Imports/RaycastResult
struct RaycastResult_tAF5A580D1B143831166BED9C58DFF76CE40645DF;
// HoloToolkit.Unity.SpatialUnderstandingSourceMesh
struct SpatialUnderstandingSourceMesh_t8CE378E7A743A69B4329C39D3E922BA836D6E98E;
// MeshBuilder
struct MeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2;
// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween
struct InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_t45BC4457D52541691149931505197834E2BCC506;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687;
// RemoveObjectVertices
struct RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C;
// RemoveObjectVertices/<RemoveVerticesWithinBoundsRoutine>d__11
struct U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F;
// RemoveObjectVertices/EventHandler
struct EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9;
// RoomSaver
struct RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38;
// RoomScanner
struct RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330;
// SkyHook
struct SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C;
// SurfacePlaneManager
struct SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211;
// SurfacePlaneManager/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,HoloToolkit.Unity.SpatialUnderstandingCustomMesh/MeshData>
struct Dictionary_2_t9DD3B10E0D5B0B13ED4E37F9DACA1407755B10FB;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_t8257F5C54F6FB6F37D9C06F3E47AFF42700352BC;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_tC8E0EAEC1DADF341C1157CDBF271C1462D7AFD96;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.List`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingSource/SurfaceObject>
struct List_1_t5C071976F78631C70B517C6B75174BB7562B3B5A;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Runtime.InteropServices.GCHandle>
struct List_1_t897CFD5A76D916278D41769D4682EAFEFC02CE83;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A;
// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914;
// System.Collections.Generic.Queue`1<UnityEngine.Bounds>
struct Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyCollection`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingSource/SurfaceObject>
struct ReadOnlyCollection_1_t71D14975AC50B9D12697EFEB99320B8CDA0343FF;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler`1<HoloToolkit.Unity.SpatialMapping.DataEventArgs`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingSource/SurfaceObject>>
struct EventHandler_1_t4ED17EE7B35457288027AEE2DD7A1B07D50FB582;
// System.EventHandler`1<HoloToolkit.Unity.SpatialMapping.DataEventArgs`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingSource/SurfaceUpdate>>
struct EventHandler_1_t4BDEA0EEA0BB4AFA1D1C2C751B304A5FC96467A1;
// System.EventHandler`1<HoloToolkit.Unity.SpatialMapping.PropertyChangedEventArgsEx`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingSource>>
struct EventHandler_1_t3972026D835D92E4821C94825E4461EABAC48D0B;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t0AE3AC8D80EB2E6F59F4164AD4CA43F3669A6711;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t48BB388EA438A1C355ACBE79048A63506508DF74;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Bounds[]
struct BoundsU5BU5D_t9D50E4E9894D381A31F78112F640A5B15C73B7E4;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.Mesh[]
struct MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate
struct GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF;
// UnityEngine.XR.WSA.WorldAnchor
struct WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE;
// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253;
// catapultBehaviour
struct catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53;

extern RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF_il2cpp_TypeInfo_var;
extern RuntimeClass* HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253_il2cpp_TypeInfo_var;
extern RuntimeClass* Predicate_1_t48BB388EA438A1C355ACBE79048A63506508DF74_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C_il2cpp_TypeInfo_var;
extern RuntimeClass* ScanStates_t850FF74534813DFA8691D34A2FC26FC4BB2A3D76_il2cpp_TypeInfo_var;
extern RuntimeClass* Singleton_1_t244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_il2cpp_TypeInfo_var;
extern RuntimeClass* Singleton_1_t26447018AF9300F5EC33AA5527CAACB988793DE6_il2cpp_TypeInfo_var;
extern RuntimeClass* Singleton_1_t7BBDA5EB54CB2C92DEC72266653ED8B3CF3165B6_il2cpp_TypeInfo_var;
extern RuntimeClass* Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral0BADF957C8DBB764991F665C57973784D399B5D2;
extern String_t* _stringLiteral0D9463573B24241AE3F9484280F707C1BFB9508C;
extern String_t* _stringLiteral11EB6379BFD2A43C2135C59D0E6021ED16076E2E;
extern String_t* _stringLiteral1581D60B8C3A511FBF1DB9CFC263B1A0305848B7;
extern String_t* _stringLiteral1B63D897AAE9E943E49128B782090601AEE549D2;
extern String_t* _stringLiteral1F2573F45A46AC3825D000A581E79F2B6A2C95E0;
extern String_t* _stringLiteral208061E1AC5FCFB0AD1365BC7692039694C494F1;
extern String_t* _stringLiteral20F5908E45E1E4258FC5E714CC60CEC425BF27A6;
extern String_t* _stringLiteral21DFD9E1C48D7A116E002FEA8496584D8614BA9E;
extern String_t* _stringLiteral26A33C6F42C4040296A3F3F4FC7BEBEC4B45DF98;
extern String_t* _stringLiteral2F6992681DCC73ADB24108132E8FA385EA5A7F02;
extern String_t* _stringLiteral2FEA78C09CCA645928D865F43632189FEB4461F2;
extern String_t* _stringLiteral32D332DA761F44DF7959E5887B6B94CB4667D781;
extern String_t* _stringLiteral3A28D6F078FD35A505195A0F8EC6F59E9801D7C2;
extern String_t* _stringLiteral3D92DD7D56B0B860BA30655F57759A457D8947DE;
extern String_t* _stringLiteral420A6D981D530CBD7971AC04ECFBC26DD2BC2294;
extern String_t* _stringLiteral4ACED94DEDFAD117233F1E6BAAE281BA7AA83318;
extern String_t* _stringLiteral4D5605EFF615CE812F8F6A998C982C9ADC8996F5;
extern String_t* _stringLiteral51C99A866426D242016098A30F00EB3A307D1200;
extern String_t* _stringLiteral51F3F6058315A0D52B4FE8B1124E9C509E1640E2;
extern String_t* _stringLiteral54A9F971D64FBF2D053B25EA5DA62B82D42876DA;
extern String_t* _stringLiteral60E5C188E33F5CEBEF3492975DA29288783F0AD3;
extern String_t* _stringLiteral7428B71C5E419D3F8ADDCB7464038670DDA00499;
extern String_t* _stringLiteral870C4D14A2F4F414FDC8A62288355953151615D9;
extern String_t* _stringLiteral8C4758AE32BA9B430D84636A045A88CD12C841C2;
extern String_t* _stringLiteral8D4EA7429751283C49843A2E9E63AF2EBFA80171;
extern String_t* _stringLiteral8FEE58B3EF9FBABC92ACC041F5378B7DAB315AF1;
extern String_t* _stringLiteral96CA60EC58D478AF3B2E4EBCC4D57F13468E40A3;
extern String_t* _stringLiteral97BF64A0FE16321BEDD94E09C59FBC93209C5FEA;
extern String_t* _stringLiteral9D09D3F02449593C652EB1B04C6B326E0751E7A8;
extern String_t* _stringLiteral9D13E17D60FB26F9250A778FF3723820660F747C;
extern String_t* _stringLiteral9ED9186A0F887F56122DBB5072BD588D6C9B3B7C;
extern String_t* _stringLiteralAA9CD9CDB1D2C113038D1500F66A224BB8352130;
extern String_t* _stringLiteralBDC24597B5C04337F590466D27DABD02C7672356;
extern String_t* _stringLiteralC10FACE179688B7C5FAA61929EE3DB2D7013C9B5;
extern String_t* _stringLiteralC510EA100EEE1C261FE63B56E1F3390BFB85F481;
extern String_t* _stringLiteralC5C2DBDC83C9E5D4E39D45F36D141650192B7185;
extern String_t* _stringLiteralC8CC6528EA7E50B97B15A25AE20CF925FEC490AB;
extern String_t* _stringLiteralCA396B231572735D7AC16BA7F561C29C9A2A579D;
extern String_t* _stringLiteralD2389231D8E45D70CEB022346222A8CF3CD786E3;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralDA9F7AD1DCDEA2F69D2BE9B54429FAB489465B4F;
extern String_t* _stringLiteralDCE13F7E3361B9049D77A4862591FCB29BDA6EA0;
extern String_t* _stringLiteralE3F6A9E2CACBB1F9EEED4AF5CD84DC02CD3DA53D;
extern String_t* _stringLiteralF1855368FECAC9C2FE1200241D1084F82567C82A;
extern String_t* _stringLiteralF203F5DA01122821CF231BB3C6BBE8B828F68992;
extern const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE_m7C00D85C750F60E55E159E228021E32D7F44EEE1_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mEBD8CDEEDEDA594C07FA8785E847E24F7C34550A_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mC86BB0FE0D650FDD97110ED1448CE97D10BAAB4F_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m9DD7E57B846DD679A08FF8D1D6D91EA0B2785FAB_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mED82B88562CC22F180BF24172145DC74F2ACDCDE_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisInBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_mC91114824ACBA952D28C2787030DB6BE4E55FD51_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731_m0BC9CB97FB650B71DDAF54518FB585536ECD7CF0_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_mB641FEAC42399B72BD9F987B4D9919BE52EDFCEA_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38_m33732F8F48FC0694B059822F78758C0676E087E6_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Add_m5FEEA67981187C61E1218ED72FC2FCC64E5A5CFC_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Contains_m7D494D409A5264CF5F1C2D4F5FF884F428DC21F2_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1__ctor_mAAE89C8E293B56CDA9DA04954756144DBBE6E2B4_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_get_Count_mD901FE0F60E5F733FFADDEC8CD6EE06E0503A444_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mF94F07FB1016A588B028FBFB6DC4E5D31A05192C_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Find_m7BF7690EEA49C7C1225860D999C3B58C9F604F5B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m943E5E6B39F6787CAB42B5F518E11DA814FED42C_RuntimeMethod_var;
extern const RuntimeMethod* List_1_IndexOf_m9F7F6206F384B51E590B7621EB4A7F323AC0236B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m5DB47F1B9EF500995DD9D869AA0DB946B15AA171_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mAA85317B67042280DE2323F8D64F49898A02267E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var;
extern const RuntimeMethod* Predicate_1__ctor_mBD87FCC5CFFA8FD4212C5463D3BBAC15B5702C39_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m93E62249639184DA8DC8E7B9D81F9EDF1859D7E6_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_mE9B95585DF73128DA9FE74FB947D6C6CC044005A_RuntimeMethod_var;
extern const RuntimeMethod* RoomSaver_AnchorStoreReady_m035002D3F0BFF4979B26A8419444F82A60A29AF7_RuntimeMethod_var;
extern const RuntimeMethod* RoomSaver_AttachingAnchor_OnTrackingChanged_m35EA054B1AA8880E43102D05E9BF483C185B2F7F_RuntimeMethod_var;
extern const RuntimeMethod* RoomScanner_Instance_ScanStateChanged_m0EB43AAB342D98D7395E0E3BE9CFC050C30667AC_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1_get_Instance_m0B5E5059A638EF2B49E39E22F59268289A5E8B8F_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var;
extern const RuntimeMethod* SurfacePlaneManager_SurfaceMeshesToPlanes_MakePlanesComplete_m45B7C0BB9919A3334AA5A93CF028FE28DB28E490_RuntimeMethod_var;
extern const RuntimeMethod* U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_System_Collections_IEnumerator_Reset_mE6B1B769799889053A7AD9E473DA65435118E10A_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CBuild_New_WallsU3Eb__0_mD6903AB3BBB8750BC0026E53602C402B43DDA021_RuntimeMethod_var;
extern const uint32_t RoomSaver_AnchorStoreReady_m035002D3F0BFF4979B26A8419444F82A60A29AF7_MetadataUsageId;
extern const uint32_t RoomSaver_AttachingAnchor_OnTrackingChanged_m35EA054B1AA8880E43102D05E9BF483C185B2F7F_MetadataUsageId;
extern const uint32_t RoomSaver_SaveRoom_m418D5AEA0ED894AAC64BB26070062359AD70A978_MetadataUsageId;
extern const uint32_t RoomSaver_Start_mC9CF0767AF9242EF80E85F4B7282781B0E2D4938_MetadataUsageId;
extern const uint32_t RoomScanner_Instance_ScanStateChanged_m0EB43AAB342D98D7395E0E3BE9CFC050C30667AC_MetadataUsageId;
extern const uint32_t RoomScanner_OnScan_mAC9393386445620D40F2C616BCD67E4A91F8B18B_MetadataUsageId;
extern const uint32_t RoomScanner_OnStop_mF5A6FD4F1A2BBCF030DF0AB3E4A2BDFCDD8D4B46_MetadataUsageId;
extern const uint32_t RoomScanner_Save_m23184FB0F8BD8C4A5FFA614465BABF7884291694_MetadataUsageId;
extern const uint32_t RoomScanner_Start_m77595D079F521A42DA3ED61A8F3FB0037E05E083_MetadataUsageId;
extern const uint32_t RoomScanner_Update_m3F5B4E138C37543ECA1D8F4B7FF2F32F638B46C9_MetadataUsageId;
extern const uint32_t RoomScanner_get_PrimaryText_m4C580EFA6C3FAE364269C982B14F1D95A019C804_MetadataUsageId;
extern const uint32_t RoomScanner_get_ReadyForCompletion_m178E849B7688D11B3FF7AC30793C9F41AB2213D1_MetadataUsageId;
extern const uint32_t RoomScanner_get_TargetText_m75C359AA90897F1B5C8B1E0DB7534414A6F2CA33_MetadataUsageId;
extern const uint32_t SkyHook_IsSkyReady_m647FFC80E869FB13D311400315BB92ADD0D9591C_MetadataUsageId;
extern const uint32_t SkyHook_LoadSkyMat_m758A4D80D26F242E4F141CAB3DBF67F83DB29D91_MetadataUsageId;
extern const uint32_t SurfacePlaneManager_Build_New_Walls_m14FED336903A578ADB0DCFDD4A895F033B3BBA76_MetadataUsageId;
extern const uint32_t SurfacePlaneManager_CreatePlanes_m278A0E0FD052B02AEFCD2CB2A6C8F5C776AFAE82_MetadataUsageId;
extern const uint32_t SurfacePlaneManager_Load_Sky_Material_mF67219FA89307F64B81E23372E622C990C6F2BC9_MetadataUsageId;
extern const uint32_t SurfacePlaneManager_OnDestroy_m17873D8B6A15FC4A5F9B5423452702BF8C5B9192_MetadataUsageId;
extern const uint32_t SurfacePlaneManager_RemoveVertices_mFEAEF1BF5340D467247928345E337C0BDC7D5A09_MetadataUsageId;
extern const uint32_t SurfacePlaneManager_Start_m1EFD85890BD9F3C7D8BDD1E84A6111AB9C29E521_MetadataUsageId;
extern const uint32_t SurfacePlaneManager_SurfaceMeshesToPlanes_MakePlanesComplete_m45B7C0BB9919A3334AA5A93CF028FE28DB28E490_MetadataUsageId;
extern const uint32_t SurfacePlaneManager_Update_mA52AC6D3DE08A0EFC5914F305C59F9915F517C0E_MetadataUsageId;
extern const uint32_t SurfacePlaneManager__ctor_m21EEA716C0958E7401C7E58C329C176C035ED743_MetadataUsageId;
extern const uint32_t SurfacePlaneManager_isSkyReady_m2209C9D334BCA8F6FCA56D14E03EED234F28DCDB_MetadataUsageId;
extern const uint32_t U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_MoveNext_m86A60BD08125C172AE0D417F94D8F45D2CF05524_MetadataUsageId;
extern const uint32_t U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_System_Collections_IEnumerator_Reset_mE6B1B769799889053A7AD9E473DA65435118E10A_MetadataUsageId;
extern const uint32_t U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_U3CU3Em__Finally1_mC3C65759DE4BCF6ED8E06E50E0C373156253B7B0_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass15_0_U3CBuild_New_WallsU3Eb__0_mD6903AB3BBB8750BC0026E53602C402B43DDA021_MetadataUsageId;
extern const uint32_t catapultBehaviour_CreateProjectile_mC60B06270797A148781BD204704D14661EA8FB41_MetadataUsageId;
extern const uint32_t catapultBehaviour_ReloadCatapult_mBF5D62C5E48489BD7F784A1C16CD74A9343AFB48_MetadataUsageId;
extern const uint32_t catapultBehaviour_Start_mE7C87C0B318BFE3F3980105FCBDB66C4B4C6FA7C_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef PLAYSPACESTATS_T9724B7AE8DCC7625363583DDBB73D350BEC0E763_H
#define PLAYSPACESTATS_T9724B7AE8DCC7625363583DDBB73D350BEC0E763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats
#pragma pack(push, tp, 1)
struct  PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763  : public RuntimeObject
{
public:
	// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::IsWorkingOnStats
	int32_t ___IsWorkingOnStats_0;
	// System.Single HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::HorizSurfaceArea
	float ___HorizSurfaceArea_1;
	// System.Single HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::TotalSurfaceArea
	float ___TotalSurfaceArea_2;
	// System.Single HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::UpSurfaceArea
	float ___UpSurfaceArea_3;
	// System.Single HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::DownSurfaceArea
	float ___DownSurfaceArea_4;
	// System.Single HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::WallSurfaceArea
	float ___WallSurfaceArea_5;
	// System.Single HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::VirtualCeilingSurfaceArea
	float ___VirtualCeilingSurfaceArea_6;
	// System.Single HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::VirtualWallSurfaceArea
	float ___VirtualWallSurfaceArea_7;
	// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::NumFloor
	int32_t ___NumFloor_8;
	// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::NumCeiling
	int32_t ___NumCeiling_9;
	// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::NumWall_XNeg
	int32_t ___NumWall_XNeg_10;
	// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::NumWall_XPos
	int32_t ___NumWall_XPos_11;
	// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::NumWall_ZNeg
	int32_t ___NumWall_ZNeg_12;
	// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::NumWall_ZPos
	int32_t ___NumWall_ZPos_13;
	// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::NumPlatform
	int32_t ___NumPlatform_14;
	// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::CellCount_IsPaintMode
	int32_t ___CellCount_IsPaintMode_15;
	// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::CellCount_IsSeenQualtiy_None
	int32_t ___CellCount_IsSeenQualtiy_None_16;
	// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::CellCount_IsSeenQualtiy_Seen
	int32_t ___CellCount_IsSeenQualtiy_Seen_17;
	// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats::CellCount_IsSeenQualtiy_Good
	int32_t ___CellCount_IsSeenQualtiy_Good_18;

public:
	inline static int32_t get_offset_of_IsWorkingOnStats_0() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___IsWorkingOnStats_0)); }
	inline int32_t get_IsWorkingOnStats_0() const { return ___IsWorkingOnStats_0; }
	inline int32_t* get_address_of_IsWorkingOnStats_0() { return &___IsWorkingOnStats_0; }
	inline void set_IsWorkingOnStats_0(int32_t value)
	{
		___IsWorkingOnStats_0 = value;
	}

	inline static int32_t get_offset_of_HorizSurfaceArea_1() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___HorizSurfaceArea_1)); }
	inline float get_HorizSurfaceArea_1() const { return ___HorizSurfaceArea_1; }
	inline float* get_address_of_HorizSurfaceArea_1() { return &___HorizSurfaceArea_1; }
	inline void set_HorizSurfaceArea_1(float value)
	{
		___HorizSurfaceArea_1 = value;
	}

	inline static int32_t get_offset_of_TotalSurfaceArea_2() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___TotalSurfaceArea_2)); }
	inline float get_TotalSurfaceArea_2() const { return ___TotalSurfaceArea_2; }
	inline float* get_address_of_TotalSurfaceArea_2() { return &___TotalSurfaceArea_2; }
	inline void set_TotalSurfaceArea_2(float value)
	{
		___TotalSurfaceArea_2 = value;
	}

	inline static int32_t get_offset_of_UpSurfaceArea_3() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___UpSurfaceArea_3)); }
	inline float get_UpSurfaceArea_3() const { return ___UpSurfaceArea_3; }
	inline float* get_address_of_UpSurfaceArea_3() { return &___UpSurfaceArea_3; }
	inline void set_UpSurfaceArea_3(float value)
	{
		___UpSurfaceArea_3 = value;
	}

	inline static int32_t get_offset_of_DownSurfaceArea_4() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___DownSurfaceArea_4)); }
	inline float get_DownSurfaceArea_4() const { return ___DownSurfaceArea_4; }
	inline float* get_address_of_DownSurfaceArea_4() { return &___DownSurfaceArea_4; }
	inline void set_DownSurfaceArea_4(float value)
	{
		___DownSurfaceArea_4 = value;
	}

	inline static int32_t get_offset_of_WallSurfaceArea_5() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___WallSurfaceArea_5)); }
	inline float get_WallSurfaceArea_5() const { return ___WallSurfaceArea_5; }
	inline float* get_address_of_WallSurfaceArea_5() { return &___WallSurfaceArea_5; }
	inline void set_WallSurfaceArea_5(float value)
	{
		___WallSurfaceArea_5 = value;
	}

	inline static int32_t get_offset_of_VirtualCeilingSurfaceArea_6() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___VirtualCeilingSurfaceArea_6)); }
	inline float get_VirtualCeilingSurfaceArea_6() const { return ___VirtualCeilingSurfaceArea_6; }
	inline float* get_address_of_VirtualCeilingSurfaceArea_6() { return &___VirtualCeilingSurfaceArea_6; }
	inline void set_VirtualCeilingSurfaceArea_6(float value)
	{
		___VirtualCeilingSurfaceArea_6 = value;
	}

	inline static int32_t get_offset_of_VirtualWallSurfaceArea_7() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___VirtualWallSurfaceArea_7)); }
	inline float get_VirtualWallSurfaceArea_7() const { return ___VirtualWallSurfaceArea_7; }
	inline float* get_address_of_VirtualWallSurfaceArea_7() { return &___VirtualWallSurfaceArea_7; }
	inline void set_VirtualWallSurfaceArea_7(float value)
	{
		___VirtualWallSurfaceArea_7 = value;
	}

	inline static int32_t get_offset_of_NumFloor_8() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___NumFloor_8)); }
	inline int32_t get_NumFloor_8() const { return ___NumFloor_8; }
	inline int32_t* get_address_of_NumFloor_8() { return &___NumFloor_8; }
	inline void set_NumFloor_8(int32_t value)
	{
		___NumFloor_8 = value;
	}

	inline static int32_t get_offset_of_NumCeiling_9() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___NumCeiling_9)); }
	inline int32_t get_NumCeiling_9() const { return ___NumCeiling_9; }
	inline int32_t* get_address_of_NumCeiling_9() { return &___NumCeiling_9; }
	inline void set_NumCeiling_9(int32_t value)
	{
		___NumCeiling_9 = value;
	}

	inline static int32_t get_offset_of_NumWall_XNeg_10() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___NumWall_XNeg_10)); }
	inline int32_t get_NumWall_XNeg_10() const { return ___NumWall_XNeg_10; }
	inline int32_t* get_address_of_NumWall_XNeg_10() { return &___NumWall_XNeg_10; }
	inline void set_NumWall_XNeg_10(int32_t value)
	{
		___NumWall_XNeg_10 = value;
	}

	inline static int32_t get_offset_of_NumWall_XPos_11() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___NumWall_XPos_11)); }
	inline int32_t get_NumWall_XPos_11() const { return ___NumWall_XPos_11; }
	inline int32_t* get_address_of_NumWall_XPos_11() { return &___NumWall_XPos_11; }
	inline void set_NumWall_XPos_11(int32_t value)
	{
		___NumWall_XPos_11 = value;
	}

	inline static int32_t get_offset_of_NumWall_ZNeg_12() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___NumWall_ZNeg_12)); }
	inline int32_t get_NumWall_ZNeg_12() const { return ___NumWall_ZNeg_12; }
	inline int32_t* get_address_of_NumWall_ZNeg_12() { return &___NumWall_ZNeg_12; }
	inline void set_NumWall_ZNeg_12(int32_t value)
	{
		___NumWall_ZNeg_12 = value;
	}

	inline static int32_t get_offset_of_NumWall_ZPos_13() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___NumWall_ZPos_13)); }
	inline int32_t get_NumWall_ZPos_13() const { return ___NumWall_ZPos_13; }
	inline int32_t* get_address_of_NumWall_ZPos_13() { return &___NumWall_ZPos_13; }
	inline void set_NumWall_ZPos_13(int32_t value)
	{
		___NumWall_ZPos_13 = value;
	}

	inline static int32_t get_offset_of_NumPlatform_14() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___NumPlatform_14)); }
	inline int32_t get_NumPlatform_14() const { return ___NumPlatform_14; }
	inline int32_t* get_address_of_NumPlatform_14() { return &___NumPlatform_14; }
	inline void set_NumPlatform_14(int32_t value)
	{
		___NumPlatform_14 = value;
	}

	inline static int32_t get_offset_of_CellCount_IsPaintMode_15() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___CellCount_IsPaintMode_15)); }
	inline int32_t get_CellCount_IsPaintMode_15() const { return ___CellCount_IsPaintMode_15; }
	inline int32_t* get_address_of_CellCount_IsPaintMode_15() { return &___CellCount_IsPaintMode_15; }
	inline void set_CellCount_IsPaintMode_15(int32_t value)
	{
		___CellCount_IsPaintMode_15 = value;
	}

	inline static int32_t get_offset_of_CellCount_IsSeenQualtiy_None_16() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___CellCount_IsSeenQualtiy_None_16)); }
	inline int32_t get_CellCount_IsSeenQualtiy_None_16() const { return ___CellCount_IsSeenQualtiy_None_16; }
	inline int32_t* get_address_of_CellCount_IsSeenQualtiy_None_16() { return &___CellCount_IsSeenQualtiy_None_16; }
	inline void set_CellCount_IsSeenQualtiy_None_16(int32_t value)
	{
		___CellCount_IsSeenQualtiy_None_16 = value;
	}

	inline static int32_t get_offset_of_CellCount_IsSeenQualtiy_Seen_17() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___CellCount_IsSeenQualtiy_Seen_17)); }
	inline int32_t get_CellCount_IsSeenQualtiy_Seen_17() const { return ___CellCount_IsSeenQualtiy_Seen_17; }
	inline int32_t* get_address_of_CellCount_IsSeenQualtiy_Seen_17() { return &___CellCount_IsSeenQualtiy_Seen_17; }
	inline void set_CellCount_IsSeenQualtiy_Seen_17(int32_t value)
	{
		___CellCount_IsSeenQualtiy_Seen_17 = value;
	}

	inline static int32_t get_offset_of_CellCount_IsSeenQualtiy_Good_18() { return static_cast<int32_t>(offsetof(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763, ___CellCount_IsSeenQualtiy_Good_18)); }
	inline int32_t get_CellCount_IsSeenQualtiy_Good_18() const { return ___CellCount_IsSeenQualtiy_Good_18; }
	inline int32_t* get_address_of_CellCount_IsSeenQualtiy_Good_18() { return &___CellCount_IsSeenQualtiy_Good_18; }
	inline void set_CellCount_IsSeenQualtiy_Good_18(int32_t value)
	{
		___CellCount_IsSeenQualtiy_Good_18 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of HoloToolkit.Unity.SpatialUnderstandingDll/Imports/PlayspaceStats
#pragma pack(push, tp, 1)
struct PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763_marshaled_pinvoke
{
	int32_t ___IsWorkingOnStats_0;
	float ___HorizSurfaceArea_1;
	float ___TotalSurfaceArea_2;
	float ___UpSurfaceArea_3;
	float ___DownSurfaceArea_4;
	float ___WallSurfaceArea_5;
	float ___VirtualCeilingSurfaceArea_6;
	float ___VirtualWallSurfaceArea_7;
	int32_t ___NumFloor_8;
	int32_t ___NumCeiling_9;
	int32_t ___NumWall_XNeg_10;
	int32_t ___NumWall_XPos_11;
	int32_t ___NumWall_ZNeg_12;
	int32_t ___NumWall_ZPos_13;
	int32_t ___NumPlatform_14;
	int32_t ___CellCount_IsPaintMode_15;
	int32_t ___CellCount_IsSeenQualtiy_None_16;
	int32_t ___CellCount_IsSeenQualtiy_Seen_17;
	int32_t ___CellCount_IsSeenQualtiy_Good_18;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of HoloToolkit.Unity.SpatialUnderstandingDll/Imports/PlayspaceStats
#pragma pack(push, tp, 1)
struct PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763_marshaled_com
{
	int32_t ___IsWorkingOnStats_0;
	float ___HorizSurfaceArea_1;
	float ___TotalSurfaceArea_2;
	float ___UpSurfaceArea_3;
	float ___DownSurfaceArea_4;
	float ___WallSurfaceArea_5;
	float ___VirtualCeilingSurfaceArea_6;
	float ___VirtualWallSurfaceArea_7;
	int32_t ___NumFloor_8;
	int32_t ___NumCeiling_9;
	int32_t ___NumWall_XNeg_10;
	int32_t ___NumWall_XPos_11;
	int32_t ___NumWall_ZNeg_12;
	int32_t ___NumWall_ZPos_13;
	int32_t ___NumPlatform_14;
	int32_t ___CellCount_IsPaintMode_15;
	int32_t ___CellCount_IsSeenQualtiy_None_16;
	int32_t ___CellCount_IsSeenQualtiy_Seen_17;
	int32_t ___CellCount_IsSeenQualtiy_Good_18;
};
#pragma pack(pop, tp)
#endif // PLAYSPACESTATS_T9724B7AE8DCC7625363583DDBB73D350BEC0E763_H
#ifndef U3CU3EC__DISPLAYCLASS15_0_T8003F3A8210D3B9340DD8D56588A4A1188AA68DD_H
#define U3CU3EC__DISPLAYCLASS15_0_T8003F3A8210D3B9340DD8D56588A4A1188AA68DD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SurfacePlaneManager_<>c__DisplayClass15_0
struct  U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD  : public RuntimeObject
{
public:
	// UnityEngine.GameObject SurfacePlaneManager_<>c__DisplayClass15_0::largestWall
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___largestWall_0;

public:
	inline static int32_t get_offset_of_largestWall_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD, ___largestWall_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_largestWall_0() const { return ___largestWall_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_largestWall_0() { return &___largestWall_0; }
	inline void set_largestWall_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___largestWall_0 = value;
		Il2CppCodeGenWriteBarrier((&___largestWall_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS15_0_T8003F3A8210D3B9340DD8D56588A4A1188AA68DD_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef HASHSET_1_TC4214D83D479652EF2A07346543F228C3C0A8D74_H
#define HASHSET_1_TC4214D83D479652EF2A07346543F228C3C0A8D74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<System.Int32>
struct  HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8257F5C54F6FB6F37D9C06F3E47AFF42700352BC* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((&____buckets_7), value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74, ____slots_8)); }
	inline SlotU5BU5D_t8257F5C54F6FB6F37D9C06F3E47AFF42700352BC* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t8257F5C54F6FB6F37D9C06F3E47AFF42700352BC** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t8257F5C54F6FB6F37D9C06F3E47AFF42700352BC* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((&____slots_8), value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_12), value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_TC4214D83D479652EF2A07346543F228C3C0A8D74_H
#ifndef LIST_1_TE1526161A558A17A39A8B69D8EEF3801393B6226_H
#define LIST_1_TE1526161A558A17A39A8B69D8EEF3801393B6226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE1526161A558A17A39A8B69D8EEF3801393B6226_H
#ifndef LIST_1_T99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_H
#define LIST_1_T99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____items_1)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_H
#ifndef LIST_1_T39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A_H
#define LIST_1_T39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct  List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A, ____items_1)); }
	inline MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* get__items_1() const { return ____items_1; }
	inline MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A_StaticFields, ____emptyArray_5)); }
	inline MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A_H
#ifndef LIST_1_T499E7DD54D22E9B9A7886C75E2517F84B4AFD914_H
#define LIST_1_T499E7DD54D22E9B9A7886C75E2517F84B4AFD914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct  List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914, ____items_1)); }
	inline MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* get__items_1() const { return ____items_1; }
	inline MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914_StaticFields, ____emptyArray_5)); }
	inline MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T499E7DD54D22E9B9A7886C75E2517F84B4AFD914_H
#ifndef QUEUE_1_T5E1EF1B648E6FC2986CC40C8215001858BC3F434_H
#define QUEUE_1_T5E1EF1B648E6FC2986CC40C8215001858BC3F434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<UnityEngine.Bounds>
struct  Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	BoundsU5BU5D_t9D50E4E9894D381A31F78112F640A5B15C73B7E4* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434, ____array_0)); }
	inline BoundsU5BU5D_t9D50E4E9894D381A31F78112F640A5B15C73B7E4* get__array_0() const { return ____array_0; }
	inline BoundsU5BU5D_t9D50E4E9894D381A31F78112F640A5B15C73B7E4** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(BoundsU5BU5D_t9D50E4E9894D381A31F78112F640A5B15C73B7E4* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T5E1EF1B648E6FC2986CC40C8215001858BC3F434_H
#ifndef EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
#define EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#define ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifndef ENUMERATOR_T9EFA6071D21C1230CBB2E56045AD75472BC48053_H
#define ENUMERATOR_T9EFA6071D21C1230CBB2E56045AD75472BC48053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<UnityEngine.GameObject>
struct  Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053, ___list_0)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_list_0() const { return ___list_0; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053, ___current_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_current_3() const { return ___current_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T9EFA6071D21C1230CBB2E56045AD75472BC48053_H
#ifndef ENUMERATOR_T926C64D9250EDC8183C239B4047D7D73489AEA27_H
#define ENUMERATOR_T926C64D9250EDC8183C239B4047D7D73489AEA27_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<UnityEngine.MeshFilter>
struct  Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27, ___list_0)); }
	inline List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * get_list_0() const { return ___list_0; }
	inline List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27, ___current_3)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_current_3() const { return ___current_3; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T926C64D9250EDC8183C239B4047D7D73489AEA27_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef PLANETYPES_T926A724E728FA3366852D88E1C6BA10682C27A5D_H
#define PLANETYPES_T926A724E728FA3366852D88E1C6BA10682C27A5D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.SpatialMapping.PlaneTypes
struct  PlaneTypes_t926A724E728FA3366852D88E1C6BA10682C27A5D 
{
public:
	// System.Int32 HoloToolkit.Unity.SpatialMapping.PlaneTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneTypes_t926A724E728FA3366852D88E1C6BA10682C27A5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANETYPES_T926A724E728FA3366852D88E1C6BA10682C27A5D_H
#ifndef SCANSTATES_T850FF74534813DFA8691D34A2FC26FC4BB2A3D76_H
#define SCANSTATES_T850FF74534813DFA8691D34A2FC26FC4BB2A3D76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.SpatialUnderstanding_ScanStates
struct  ScanStates_t850FF74534813DFA8691D34A2FC26FC4BB2A3D76 
{
public:
	// System.Int32 HoloToolkit.Unity.SpatialUnderstanding_ScanStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScanStates_t850FF74534813DFA8691D34A2FC26FC4BB2A3D76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCANSTATES_T850FF74534813DFA8691D34A2FC26FC4BB2A3D76_H
#ifndef SPATIALUNDERSTANDINGDLL_T8EF6388DEC666D1B878A729E2DDFF38B53E1944F_H
#define SPATIALUNDERSTANDINGDLL_T8EF6388DEC666D1B878A729E2DDFF38B53E1944F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.SpatialUnderstandingDll
struct  SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F  : public RuntimeObject
{
public:
	// HoloToolkit.Unity.SpatialUnderstandingDll_Imports_MeshData[] HoloToolkit.Unity.SpatialUnderstandingDll::reusedMeshesForMarshalling
	MeshDataU5BU5D_t07D180F778425BBFC939E1B74E3EC293CA0027E6* ___reusedMeshesForMarshalling_0;
	// System.Collections.Generic.List`1<System.Runtime.InteropServices.GCHandle> HoloToolkit.Unity.SpatialUnderstandingDll::reusedPinnedMemoryHandles
	List_1_t897CFD5A76D916278D41769D4682EAFEFC02CE83 * ___reusedPinnedMemoryHandles_1;
	// HoloToolkit.Unity.SpatialUnderstandingDll_Imports_RaycastResult HoloToolkit.Unity.SpatialUnderstandingDll::reusedRaycastResult
	RaycastResult_tAF5A580D1B143831166BED9C58DFF76CE40645DF * ___reusedRaycastResult_2;
	// System.IntPtr HoloToolkit.Unity.SpatialUnderstandingDll::reusedRaycastResultPtr
	intptr_t ___reusedRaycastResultPtr_3;
	// HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats HoloToolkit.Unity.SpatialUnderstandingDll::reusedPlayspaceStats
	PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * ___reusedPlayspaceStats_4;
	// System.IntPtr HoloToolkit.Unity.SpatialUnderstandingDll::reusedPlayspaceStatsPtr
	intptr_t ___reusedPlayspaceStatsPtr_5;
	// HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceAlignment HoloToolkit.Unity.SpatialUnderstandingDll::reusedPlayspaceAlignment
	PlayspaceAlignment_t89C74C012925E7CB400A5FF25EF93691C90BAC5A * ___reusedPlayspaceAlignment_6;
	// System.IntPtr HoloToolkit.Unity.SpatialUnderstandingDll::reusedPlayspaceAlignmentPtr
	intptr_t ___reusedPlayspaceAlignmentPtr_7;

public:
	inline static int32_t get_offset_of_reusedMeshesForMarshalling_0() { return static_cast<int32_t>(offsetof(SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F, ___reusedMeshesForMarshalling_0)); }
	inline MeshDataU5BU5D_t07D180F778425BBFC939E1B74E3EC293CA0027E6* get_reusedMeshesForMarshalling_0() const { return ___reusedMeshesForMarshalling_0; }
	inline MeshDataU5BU5D_t07D180F778425BBFC939E1B74E3EC293CA0027E6** get_address_of_reusedMeshesForMarshalling_0() { return &___reusedMeshesForMarshalling_0; }
	inline void set_reusedMeshesForMarshalling_0(MeshDataU5BU5D_t07D180F778425BBFC939E1B74E3EC293CA0027E6* value)
	{
		___reusedMeshesForMarshalling_0 = value;
		Il2CppCodeGenWriteBarrier((&___reusedMeshesForMarshalling_0), value);
	}

	inline static int32_t get_offset_of_reusedPinnedMemoryHandles_1() { return static_cast<int32_t>(offsetof(SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F, ___reusedPinnedMemoryHandles_1)); }
	inline List_1_t897CFD5A76D916278D41769D4682EAFEFC02CE83 * get_reusedPinnedMemoryHandles_1() const { return ___reusedPinnedMemoryHandles_1; }
	inline List_1_t897CFD5A76D916278D41769D4682EAFEFC02CE83 ** get_address_of_reusedPinnedMemoryHandles_1() { return &___reusedPinnedMemoryHandles_1; }
	inline void set_reusedPinnedMemoryHandles_1(List_1_t897CFD5A76D916278D41769D4682EAFEFC02CE83 * value)
	{
		___reusedPinnedMemoryHandles_1 = value;
		Il2CppCodeGenWriteBarrier((&___reusedPinnedMemoryHandles_1), value);
	}

	inline static int32_t get_offset_of_reusedRaycastResult_2() { return static_cast<int32_t>(offsetof(SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F, ___reusedRaycastResult_2)); }
	inline RaycastResult_tAF5A580D1B143831166BED9C58DFF76CE40645DF * get_reusedRaycastResult_2() const { return ___reusedRaycastResult_2; }
	inline RaycastResult_tAF5A580D1B143831166BED9C58DFF76CE40645DF ** get_address_of_reusedRaycastResult_2() { return &___reusedRaycastResult_2; }
	inline void set_reusedRaycastResult_2(RaycastResult_tAF5A580D1B143831166BED9C58DFF76CE40645DF * value)
	{
		___reusedRaycastResult_2 = value;
		Il2CppCodeGenWriteBarrier((&___reusedRaycastResult_2), value);
	}

	inline static int32_t get_offset_of_reusedRaycastResultPtr_3() { return static_cast<int32_t>(offsetof(SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F, ___reusedRaycastResultPtr_3)); }
	inline intptr_t get_reusedRaycastResultPtr_3() const { return ___reusedRaycastResultPtr_3; }
	inline intptr_t* get_address_of_reusedRaycastResultPtr_3() { return &___reusedRaycastResultPtr_3; }
	inline void set_reusedRaycastResultPtr_3(intptr_t value)
	{
		___reusedRaycastResultPtr_3 = value;
	}

	inline static int32_t get_offset_of_reusedPlayspaceStats_4() { return static_cast<int32_t>(offsetof(SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F, ___reusedPlayspaceStats_4)); }
	inline PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * get_reusedPlayspaceStats_4() const { return ___reusedPlayspaceStats_4; }
	inline PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 ** get_address_of_reusedPlayspaceStats_4() { return &___reusedPlayspaceStats_4; }
	inline void set_reusedPlayspaceStats_4(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * value)
	{
		___reusedPlayspaceStats_4 = value;
		Il2CppCodeGenWriteBarrier((&___reusedPlayspaceStats_4), value);
	}

	inline static int32_t get_offset_of_reusedPlayspaceStatsPtr_5() { return static_cast<int32_t>(offsetof(SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F, ___reusedPlayspaceStatsPtr_5)); }
	inline intptr_t get_reusedPlayspaceStatsPtr_5() const { return ___reusedPlayspaceStatsPtr_5; }
	inline intptr_t* get_address_of_reusedPlayspaceStatsPtr_5() { return &___reusedPlayspaceStatsPtr_5; }
	inline void set_reusedPlayspaceStatsPtr_5(intptr_t value)
	{
		___reusedPlayspaceStatsPtr_5 = value;
	}

	inline static int32_t get_offset_of_reusedPlayspaceAlignment_6() { return static_cast<int32_t>(offsetof(SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F, ___reusedPlayspaceAlignment_6)); }
	inline PlayspaceAlignment_t89C74C012925E7CB400A5FF25EF93691C90BAC5A * get_reusedPlayspaceAlignment_6() const { return ___reusedPlayspaceAlignment_6; }
	inline PlayspaceAlignment_t89C74C012925E7CB400A5FF25EF93691C90BAC5A ** get_address_of_reusedPlayspaceAlignment_6() { return &___reusedPlayspaceAlignment_6; }
	inline void set_reusedPlayspaceAlignment_6(PlayspaceAlignment_t89C74C012925E7CB400A5FF25EF93691C90BAC5A * value)
	{
		___reusedPlayspaceAlignment_6 = value;
		Il2CppCodeGenWriteBarrier((&___reusedPlayspaceAlignment_6), value);
	}

	inline static int32_t get_offset_of_reusedPlayspaceAlignmentPtr_7() { return static_cast<int32_t>(offsetof(SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F, ___reusedPlayspaceAlignmentPtr_7)); }
	inline intptr_t get_reusedPlayspaceAlignmentPtr_7() const { return ___reusedPlayspaceAlignmentPtr_7; }
	inline intptr_t* get_address_of_reusedPlayspaceAlignmentPtr_7() { return &___reusedPlayspaceAlignmentPtr_7; }
	inline void set_reusedPlayspaceAlignmentPtr_7(intptr_t value)
	{
		___reusedPlayspaceAlignmentPtr_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALUNDERSTANDINGDLL_T8EF6388DEC666D1B878A729E2DDFF38B53E1944F_H
#ifndef HANDEDNESS_TC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00_H
#define HANDEDNESS_TC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDEDNESS_TC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00_H
#ifndef TRACKEDHANDJOINT_TF44A8730AA131ACE1D217F560801A72245D48648_H
#define TRACKEDHANDJOINT_TF44A8730AA131ACE1D217F560801A72245D48648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDHANDJOINT_TF44A8730AA131ACE1D217F560801A72245D48648_H
#ifndef TRACKEDOBJECTTYPE_T110925E0B47321BDB33970F5772B9158B186C09A_H
#define TRACKEDOBJECTTYPE_T110925E0B47321BDB33970F5772B9158B186C09A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType
struct  TrackedObjectType_t110925E0B47321BDB33970F5772B9158B186C09A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedObjectType_t110925E0B47321BDB33970F5772B9158B186C09A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDOBJECTTYPE_T110925E0B47321BDB33970F5772B9158B186C09A_H
#ifndef VECTOR3SMOOTHED_T07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E_H
#define VECTOR3SMOOTHED_T07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed
struct  Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Current>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Goal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGoalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E, ___U3CGoalU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalU3Ek__BackingField_1() const { return ___U3CGoalU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalU3Ek__BackingField_1() { return &___U3CGoalU3Ek__BackingField_1; }
	inline void set_U3CGoalU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E, ___U3CSmoothTimeU3Ek__BackingField_2)); }
	inline float get_U3CSmoothTimeU3Ek__BackingField_2() const { return ___U3CSmoothTimeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CSmoothTimeU3Ek__BackingField_2() { return &___U3CSmoothTimeU3Ek__BackingField_2; }
	inline void set_U3CSmoothTimeU3Ek__BackingField_2(float value)
	{
		___U3CSmoothTimeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3SMOOTHED_T07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#define BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef WORLDANCHORSTORE_TD361F689FE6F087AD3F38BA8724398992434E225_H
#define WORLDANCHORSTORE_TD361F689FE6F087AD3F38BA8724398992434E225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct  WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Persistence.WorldAnchorStore::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields
{
public:
	// UnityEngine.XR.WSA.Persistence.WorldAnchorStore UnityEngine.XR.WSA.Persistence.WorldAnchorStore::s_Instance
	WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___s_Instance_1;

public:
	inline static int32_t get_offset_of_s_Instance_1() { return static_cast<int32_t>(offsetof(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields, ___s_Instance_1)); }
	inline WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * get_s_Instance_1() const { return ___s_Instance_1; }
	inline WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 ** get_address_of_s_Instance_1() { return &___s_Instance_1; }
	inline void set_s_Instance_1(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * value)
	{
		___s_Instance_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};
#endif // WORLDANCHORSTORE_TD361F689FE6F087AD3F38BA8724398992434E225_H
#ifndef U3CREMOVEVERTICESWITHINBOUNDSROUTINEU3ED__11_T6E5DFA4FC6F157ED2ACB451E305059EF463A001F_H
#define U3CREMOVEVERTICESWITHINBOUNDSROUTINEU3ED__11_T6E5DFA4FC6F157ED2ACB451E305059EF463A001F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11
struct  U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F  : public RuntimeObject
{
public:
	// System.Int32 RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// RemoveObjectVertices RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<>4__this
	RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<UnityEngine.MeshFilter> RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::meshFilters
	List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * ___meshFilters_3;
	// UnityEngine.Bounds RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<bounds>5__2
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___U3CboundsU3E5__2_4;
	// System.Collections.Generic.List`1_Enumerator<UnityEngine.MeshFilter> RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<>7__wrap2
	Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27  ___U3CU3E7__wrap2_5;
	// UnityEngine.MeshFilter RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<filter>5__4
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___U3CfilterU3E5__4_6;
	// UnityEngine.Mesh RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<mesh>5__5
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CmeshU3E5__5_7;
	// UnityEngine.Vector3[] RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<verts>5__6
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___U3CvertsU3E5__6_8;
	// System.Collections.Generic.HashSet`1<System.Int32> RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<vertsToRemove>5__7
	HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * ___U3CvertsToRemoveU3E5__7_9;
	// System.Int32[] RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<indices>5__8
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___U3CindicesU3E5__8_10;
	// System.Collections.Generic.List`1<System.Int32> RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<updatedIndices>5__9
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___U3CupdatedIndicesU3E5__9_11;
	// System.Int32 RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<i>5__10
	int32_t ___U3CiU3E5__10_12;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___U3CU3E4__this_2)); }
	inline RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_meshFilters_3() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___meshFilters_3)); }
	inline List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * get_meshFilters_3() const { return ___meshFilters_3; }
	inline List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 ** get_address_of_meshFilters_3() { return &___meshFilters_3; }
	inline void set_meshFilters_3(List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * value)
	{
		___meshFilters_3 = value;
		Il2CppCodeGenWriteBarrier((&___meshFilters_3), value);
	}

	inline static int32_t get_offset_of_U3CboundsU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___U3CboundsU3E5__2_4)); }
	inline Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  get_U3CboundsU3E5__2_4() const { return ___U3CboundsU3E5__2_4; }
	inline Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * get_address_of_U3CboundsU3E5__2_4() { return &___U3CboundsU3E5__2_4; }
	inline void set_U3CboundsU3E5__2_4(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  value)
	{
		___U3CboundsU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_5() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___U3CU3E7__wrap2_5)); }
	inline Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27  get_U3CU3E7__wrap2_5() const { return ___U3CU3E7__wrap2_5; }
	inline Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 * get_address_of_U3CU3E7__wrap2_5() { return &___U3CU3E7__wrap2_5; }
	inline void set_U3CU3E7__wrap2_5(Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27  value)
	{
		___U3CU3E7__wrap2_5 = value;
	}

	inline static int32_t get_offset_of_U3CfilterU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___U3CfilterU3E5__4_6)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_U3CfilterU3E5__4_6() const { return ___U3CfilterU3E5__4_6; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_U3CfilterU3E5__4_6() { return &___U3CfilterU3E5__4_6; }
	inline void set_U3CfilterU3E5__4_6(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___U3CfilterU3E5__4_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CfilterU3E5__4_6), value);
	}

	inline static int32_t get_offset_of_U3CmeshU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___U3CmeshU3E5__5_7)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CmeshU3E5__5_7() const { return ___U3CmeshU3E5__5_7; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CmeshU3E5__5_7() { return &___U3CmeshU3E5__5_7; }
	inline void set_U3CmeshU3E5__5_7(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CmeshU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmeshU3E5__5_7), value);
	}

	inline static int32_t get_offset_of_U3CvertsU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___U3CvertsU3E5__6_8)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_U3CvertsU3E5__6_8() const { return ___U3CvertsU3E5__6_8; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_U3CvertsU3E5__6_8() { return &___U3CvertsU3E5__6_8; }
	inline void set_U3CvertsU3E5__6_8(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___U3CvertsU3E5__6_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvertsU3E5__6_8), value);
	}

	inline static int32_t get_offset_of_U3CvertsToRemoveU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___U3CvertsToRemoveU3E5__7_9)); }
	inline HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * get_U3CvertsToRemoveU3E5__7_9() const { return ___U3CvertsToRemoveU3E5__7_9; }
	inline HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 ** get_address_of_U3CvertsToRemoveU3E5__7_9() { return &___U3CvertsToRemoveU3E5__7_9; }
	inline void set_U3CvertsToRemoveU3E5__7_9(HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * value)
	{
		___U3CvertsToRemoveU3E5__7_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvertsToRemoveU3E5__7_9), value);
	}

	inline static int32_t get_offset_of_U3CindicesU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___U3CindicesU3E5__8_10)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_U3CindicesU3E5__8_10() const { return ___U3CindicesU3E5__8_10; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_U3CindicesU3E5__8_10() { return &___U3CindicesU3E5__8_10; }
	inline void set_U3CindicesU3E5__8_10(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___U3CindicesU3E5__8_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CindicesU3E5__8_10), value);
	}

	inline static int32_t get_offset_of_U3CupdatedIndicesU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___U3CupdatedIndicesU3E5__9_11)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_U3CupdatedIndicesU3E5__9_11() const { return ___U3CupdatedIndicesU3E5__9_11; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_U3CupdatedIndicesU3E5__9_11() { return &___U3CupdatedIndicesU3E5__9_11; }
	inline void set_U3CupdatedIndicesU3E5__9_11(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___U3CupdatedIndicesU3E5__9_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CupdatedIndicesU3E5__9_11), value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__10_12() { return static_cast<int32_t>(offsetof(U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F, ___U3CiU3E5__10_12)); }
	inline int32_t get_U3CiU3E5__10_12() const { return ___U3CiU3E5__10_12; }
	inline int32_t* get_address_of_U3CiU3E5__10_12() { return &___U3CiU3E5__10_12; }
	inline void set_U3CiU3E5__10_12(int32_t value)
	{
		___U3CiU3E5__10_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREMOVEVERTICESWITHINBOUNDSROUTINEU3ED__11_T6E5DFA4FC6F157ED2ACB451E305059EF463A001F_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#define MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifndef MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#define MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifndef EVENTHANDLER_TE81EC78CF8C89D4885ED33BC43FBBC44524727B3_H
#define EVENTHANDLER_TE81EC78CF8C89D4885ED33BC43FBBC44524727B3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes_EventHandler
struct  EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_TE81EC78CF8C89D4885ED33BC43FBBC44524727B3_H
#ifndef EVENTHANDLER_T087A65FC05E9C6B70332A12DF5C8759C260F8BB9_H
#define EVENTHANDLER_T087A65FC05E9C6B70332A12DF5C8759C260F8BB9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RemoveObjectVertices_EventHandler
struct  EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T087A65FC05E9C6B70332A12DF5C8759C260F8BB9_H
#ifndef ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#define ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef PREDICATE_1_T48BB388EA438A1C355ACBE79048A63506508DF74_H
#define PREDICATE_1_T48BB388EA438A1C355ACBE79048A63506508DF74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<UnityEngine.GameObject>
struct  Predicate_1_t48BB388EA438A1C355ACBE79048A63506508DF74  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T48BB388EA438A1C355ACBE79048A63506508DF74_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#define COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifndef MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#define MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#ifndef RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#define RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifndef RIGIDBODY_TE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_H
#define RIGIDBODY_TE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_TE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_H
#ifndef TEXTMESH_T327D0DAFEF431170D8C2882083D442AF4D4A0E4A_H
#define TEXTMESH_T327D0DAFEF431170D8C2882083D442AF4D4A0E4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextMesh
struct  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESH_T327D0DAFEF431170D8C2882083D442AF4D4A0E4A_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef GETASYNCDELEGATE_T243E451DDFA40F30023A031E71AA0BDC9D9865EF_H
#define GETASYNCDELEGATE_T243E451DDFA40F30023A031E71AA0BDC9D9865EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate
struct  GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETASYNCDELEGATE_T243E451DDFA40F30023A031E71AA0BDC9D9865EF_H
#ifndef WORLDANCHOR_TD6275232D14415769601A3BD6AE1E7D5622F96EE_H
#define WORLDANCHOR_TD6275232D14415769601A3BD6AE1E7D5622F96EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldAnchor
struct  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:
	// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate UnityEngine.XR.WSA.WorldAnchor::OnTrackingChanged
	OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * ___OnTrackingChanged_4;

public:
	inline static int32_t get_offset_of_OnTrackingChanged_4() { return static_cast<int32_t>(offsetof(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE, ___OnTrackingChanged_4)); }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * get_OnTrackingChanged_4() const { return ___OnTrackingChanged_4; }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 ** get_address_of_OnTrackingChanged_4() { return &___OnTrackingChanged_4; }
	inline void set_OnTrackingChanged_4(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * value)
	{
		___OnTrackingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnTrackingChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDANCHOR_TD6275232D14415769601A3BD6AE1E7D5622F96EE_H
#ifndef ONTRACKINGCHANGEDDELEGATE_T213BE1DC543541B52A31539ACEA406782B1DB253_H
#define ONTRACKINGCHANGEDDELEGATE_T213BE1DC543541B52A31539ACEA406782B1DB253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate
struct  OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTRACKINGCHANGEDDELEGATE_T213BE1DC543541B52A31539ACEA406782B1DB253_H
#ifndef MESHCOLLIDER_T60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_H
#define MESHCOLLIDER_T60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_H
#ifndef MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#define MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef SINGLETON_1_T7BBDA5EB54CB2C92DEC72266653ED8B3CF3165B6_H
#define SINGLETON_1_T7BBDA5EB54CB2C92DEC72266653ED8B3CF3165B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.SpatialMapping.RemoveSurfaceVertices>
struct  Singleton_1_t7BBDA5EB54CB2C92DEC72266653ED8B3CF3165B6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct Singleton_1_t7BBDA5EB54CB2C92DEC72266653ED8B3CF3165B6_StaticFields
{
public:
	// T HoloToolkit.Unity.Singleton`1::instance
	RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F * ___instance_4;
	// System.Boolean HoloToolkit.Unity.Singleton`1::searchForInstance
	bool ___searchForInstance_5;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t7BBDA5EB54CB2C92DEC72266653ED8B3CF3165B6_StaticFields, ___instance_4)); }
	inline RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F * get_instance_4() const { return ___instance_4; }
	inline RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}

	inline static int32_t get_offset_of_searchForInstance_5() { return static_cast<int32_t>(offsetof(Singleton_1_t7BBDA5EB54CB2C92DEC72266653ED8B3CF3165B6_StaticFields, ___searchForInstance_5)); }
	inline bool get_searchForInstance_5() const { return ___searchForInstance_5; }
	inline bool* get_address_of_searchForInstance_5() { return &___searchForInstance_5; }
	inline void set_searchForInstance_5(bool value)
	{
		___searchForInstance_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T7BBDA5EB54CB2C92DEC72266653ED8B3CF3165B6_H
#ifndef SINGLETON_1_T26447018AF9300F5EC33AA5527CAACB988793DE6_H
#define SINGLETON_1_T26447018AF9300F5EC33AA5527CAACB988793DE6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingManager>
struct  Singleton_1_t26447018AF9300F5EC33AA5527CAACB988793DE6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct Singleton_1_t26447018AF9300F5EC33AA5527CAACB988793DE6_StaticFields
{
public:
	// T HoloToolkit.Unity.Singleton`1::instance
	SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * ___instance_4;
	// System.Boolean HoloToolkit.Unity.Singleton`1::searchForInstance
	bool ___searchForInstance_5;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t26447018AF9300F5EC33AA5527CAACB988793DE6_StaticFields, ___instance_4)); }
	inline SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * get_instance_4() const { return ___instance_4; }
	inline SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}

	inline static int32_t get_offset_of_searchForInstance_5() { return static_cast<int32_t>(offsetof(Singleton_1_t26447018AF9300F5EC33AA5527CAACB988793DE6_StaticFields, ___searchForInstance_5)); }
	inline bool get_searchForInstance_5() const { return ___searchForInstance_5; }
	inline bool* get_address_of_searchForInstance_5() { return &___searchForInstance_5; }
	inline void set_searchForInstance_5(bool value)
	{
		___searchForInstance_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T26447018AF9300F5EC33AA5527CAACB988793DE6_H
#ifndef SINGLETON_1_T244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_H
#define SINGLETON_1_T244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes>
struct  Singleton_1_t244B8DC2CA6AC51BD0656A7B78D49D591CA9614F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct Singleton_1_t244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_StaticFields
{
public:
	// T HoloToolkit.Unity.Singleton`1::instance
	SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * ___instance_4;
	// System.Boolean HoloToolkit.Unity.Singleton`1::searchForInstance
	bool ___searchForInstance_5;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_StaticFields, ___instance_4)); }
	inline SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * get_instance_4() const { return ___instance_4; }
	inline SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}

	inline static int32_t get_offset_of_searchForInstance_5() { return static_cast<int32_t>(offsetof(Singleton_1_t244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_StaticFields, ___searchForInstance_5)); }
	inline bool get_searchForInstance_5() const { return ___searchForInstance_5; }
	inline bool* get_address_of_searchForInstance_5() { return &___searchForInstance_5; }
	inline void set_searchForInstance_5(bool value)
	{
		___searchForInstance_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_H
#ifndef SINGLETON_1_TE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_H
#define SINGLETON_1_TE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.SpatialUnderstanding>
struct  Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_StaticFields
{
public:
	// T HoloToolkit.Unity.Singleton`1::instance
	SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * ___instance_4;
	// System.Boolean HoloToolkit.Unity.Singleton`1::searchForInstance
	bool ___searchForInstance_5;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_StaticFields, ___instance_4)); }
	inline SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * get_instance_4() const { return ___instance_4; }
	inline SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}

	inline static int32_t get_offset_of_searchForInstance_5() { return static_cast<int32_t>(offsetof(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_StaticFields, ___searchForInstance_5)); }
	inline bool get_searchForInstance_5() const { return ___searchForInstance_5; }
	inline bool* get_address_of_searchForInstance_5() { return &___searchForInstance_5; }
	inline void set_searchForInstance_5(bool value)
	{
		___searchForInstance_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_TE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_H
#ifndef SINGLETON_1_T496A47E7CFB5F1722CAB1F2A8BCB0F7B09775601_H
#define SINGLETON_1_T496A47E7CFB5F1722CAB1F2A8BCB0F7B09775601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.Singleton`1<RemoveObjectVertices>
struct  Singleton_1_t496A47E7CFB5F1722CAB1F2A8BCB0F7B09775601  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct Singleton_1_t496A47E7CFB5F1722CAB1F2A8BCB0F7B09775601_StaticFields
{
public:
	// T HoloToolkit.Unity.Singleton`1::instance
	RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * ___instance_4;
	// System.Boolean HoloToolkit.Unity.Singleton`1::searchForInstance
	bool ___searchForInstance_5;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t496A47E7CFB5F1722CAB1F2A8BCB0F7B09775601_StaticFields, ___instance_4)); }
	inline RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * get_instance_4() const { return ___instance_4; }
	inline RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}

	inline static int32_t get_offset_of_searchForInstance_5() { return static_cast<int32_t>(offsetof(Singleton_1_t496A47E7CFB5F1722CAB1F2A8BCB0F7B09775601_StaticFields, ___searchForInstance_5)); }
	inline bool get_searchForInstance_5() const { return ___searchForInstance_5; }
	inline bool* get_address_of_searchForInstance_5() { return &___searchForInstance_5; }
	inline void set_searchForInstance_5(bool value)
	{
		___searchForInstance_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T496A47E7CFB5F1722CAB1F2A8BCB0F7B09775601_H
#ifndef SPATIALMAPPINGSOURCE_T3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC_H
#define SPATIALMAPPINGSOURCE_T3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.SpatialMapping.SpatialMappingSource
struct  SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.EventHandler`1<HoloToolkit.Unity.SpatialMapping.DataEventArgs`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingSource_SurfaceObject>> HoloToolkit.Unity.SpatialMapping.SpatialMappingSource::SurfaceAdded
	EventHandler_1_t4ED17EE7B35457288027AEE2DD7A1B07D50FB582 * ___SurfaceAdded_4;
	// System.EventHandler`1<HoloToolkit.Unity.SpatialMapping.DataEventArgs`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingSource_SurfaceUpdate>> HoloToolkit.Unity.SpatialMapping.SpatialMappingSource::SurfaceUpdated
	EventHandler_1_t4BDEA0EEA0BB4AFA1D1C2C751B304A5FC96467A1 * ___SurfaceUpdated_5;
	// System.EventHandler`1<HoloToolkit.Unity.SpatialMapping.DataEventArgs`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingSource_SurfaceObject>> HoloToolkit.Unity.SpatialMapping.SpatialMappingSource::SurfaceRemoved
	EventHandler_1_t4ED17EE7B35457288027AEE2DD7A1B07D50FB582 * ___SurfaceRemoved_6;
	// System.EventHandler`1<System.EventArgs> HoloToolkit.Unity.SpatialMapping.SpatialMappingSource::RemovingAllSurfaces
	EventHandler_1_t0AE3AC8D80EB2E6F59F4164AD4CA43F3669A6711 * ___RemovingAllSurfaces_7;
	// System.Type[] HoloToolkit.Unity.SpatialMapping.SpatialMappingSource::componentsRequiredForSurfaceMesh
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___componentsRequiredForSurfaceMesh_8;
	// System.Collections.Generic.List`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingSource_SurfaceObject> HoloToolkit.Unity.SpatialMapping.SpatialMappingSource::surfaceObjectsWriteable
	List_1_t5C071976F78631C70B517C6B75174BB7562B3B5A * ___surfaceObjectsWriteable_9;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingSource_SurfaceObject> HoloToolkit.Unity.SpatialMapping.SpatialMappingSource::surfaceObjects
	ReadOnlyCollection_1_t71D14975AC50B9D12697EFEB99320B8CDA0343FF * ___surfaceObjects_10;

public:
	inline static int32_t get_offset_of_SurfaceAdded_4() { return static_cast<int32_t>(offsetof(SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC, ___SurfaceAdded_4)); }
	inline EventHandler_1_t4ED17EE7B35457288027AEE2DD7A1B07D50FB582 * get_SurfaceAdded_4() const { return ___SurfaceAdded_4; }
	inline EventHandler_1_t4ED17EE7B35457288027AEE2DD7A1B07D50FB582 ** get_address_of_SurfaceAdded_4() { return &___SurfaceAdded_4; }
	inline void set_SurfaceAdded_4(EventHandler_1_t4ED17EE7B35457288027AEE2DD7A1B07D50FB582 * value)
	{
		___SurfaceAdded_4 = value;
		Il2CppCodeGenWriteBarrier((&___SurfaceAdded_4), value);
	}

	inline static int32_t get_offset_of_SurfaceUpdated_5() { return static_cast<int32_t>(offsetof(SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC, ___SurfaceUpdated_5)); }
	inline EventHandler_1_t4BDEA0EEA0BB4AFA1D1C2C751B304A5FC96467A1 * get_SurfaceUpdated_5() const { return ___SurfaceUpdated_5; }
	inline EventHandler_1_t4BDEA0EEA0BB4AFA1D1C2C751B304A5FC96467A1 ** get_address_of_SurfaceUpdated_5() { return &___SurfaceUpdated_5; }
	inline void set_SurfaceUpdated_5(EventHandler_1_t4BDEA0EEA0BB4AFA1D1C2C751B304A5FC96467A1 * value)
	{
		___SurfaceUpdated_5 = value;
		Il2CppCodeGenWriteBarrier((&___SurfaceUpdated_5), value);
	}

	inline static int32_t get_offset_of_SurfaceRemoved_6() { return static_cast<int32_t>(offsetof(SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC, ___SurfaceRemoved_6)); }
	inline EventHandler_1_t4ED17EE7B35457288027AEE2DD7A1B07D50FB582 * get_SurfaceRemoved_6() const { return ___SurfaceRemoved_6; }
	inline EventHandler_1_t4ED17EE7B35457288027AEE2DD7A1B07D50FB582 ** get_address_of_SurfaceRemoved_6() { return &___SurfaceRemoved_6; }
	inline void set_SurfaceRemoved_6(EventHandler_1_t4ED17EE7B35457288027AEE2DD7A1B07D50FB582 * value)
	{
		___SurfaceRemoved_6 = value;
		Il2CppCodeGenWriteBarrier((&___SurfaceRemoved_6), value);
	}

	inline static int32_t get_offset_of_RemovingAllSurfaces_7() { return static_cast<int32_t>(offsetof(SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC, ___RemovingAllSurfaces_7)); }
	inline EventHandler_1_t0AE3AC8D80EB2E6F59F4164AD4CA43F3669A6711 * get_RemovingAllSurfaces_7() const { return ___RemovingAllSurfaces_7; }
	inline EventHandler_1_t0AE3AC8D80EB2E6F59F4164AD4CA43F3669A6711 ** get_address_of_RemovingAllSurfaces_7() { return &___RemovingAllSurfaces_7; }
	inline void set_RemovingAllSurfaces_7(EventHandler_1_t0AE3AC8D80EB2E6F59F4164AD4CA43F3669A6711 * value)
	{
		___RemovingAllSurfaces_7 = value;
		Il2CppCodeGenWriteBarrier((&___RemovingAllSurfaces_7), value);
	}

	inline static int32_t get_offset_of_componentsRequiredForSurfaceMesh_8() { return static_cast<int32_t>(offsetof(SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC, ___componentsRequiredForSurfaceMesh_8)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_componentsRequiredForSurfaceMesh_8() const { return ___componentsRequiredForSurfaceMesh_8; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_componentsRequiredForSurfaceMesh_8() { return &___componentsRequiredForSurfaceMesh_8; }
	inline void set_componentsRequiredForSurfaceMesh_8(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___componentsRequiredForSurfaceMesh_8 = value;
		Il2CppCodeGenWriteBarrier((&___componentsRequiredForSurfaceMesh_8), value);
	}

	inline static int32_t get_offset_of_surfaceObjectsWriteable_9() { return static_cast<int32_t>(offsetof(SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC, ___surfaceObjectsWriteable_9)); }
	inline List_1_t5C071976F78631C70B517C6B75174BB7562B3B5A * get_surfaceObjectsWriteable_9() const { return ___surfaceObjectsWriteable_9; }
	inline List_1_t5C071976F78631C70B517C6B75174BB7562B3B5A ** get_address_of_surfaceObjectsWriteable_9() { return &___surfaceObjectsWriteable_9; }
	inline void set_surfaceObjectsWriteable_9(List_1_t5C071976F78631C70B517C6B75174BB7562B3B5A * value)
	{
		___surfaceObjectsWriteable_9 = value;
		Il2CppCodeGenWriteBarrier((&___surfaceObjectsWriteable_9), value);
	}

	inline static int32_t get_offset_of_surfaceObjects_10() { return static_cast<int32_t>(offsetof(SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC, ___surfaceObjects_10)); }
	inline ReadOnlyCollection_1_t71D14975AC50B9D12697EFEB99320B8CDA0343FF * get_surfaceObjects_10() const { return ___surfaceObjects_10; }
	inline ReadOnlyCollection_1_t71D14975AC50B9D12697EFEB99320B8CDA0343FF ** get_address_of_surfaceObjects_10() { return &___surfaceObjects_10; }
	inline void set_surfaceObjects_10(ReadOnlyCollection_1_t71D14975AC50B9D12697EFEB99320B8CDA0343FF * value)
	{
		___surfaceObjects_10 = value;
		Il2CppCodeGenWriteBarrier((&___surfaceObjects_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALMAPPINGSOURCE_T3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC_H
#ifndef MESHBUILDER_T22B19B5214823E611271CF39C171EF7DD3590731_H
#define MESHBUILDER_T22B19B5214823E611271CF39C171EF7DD3590731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MeshBuilder
struct  MeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct MeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731_StaticFields
{
public:
	// System.Int32 MeshBuilder::vertexOffset
	int32_t ___vertexOffset_4;
	// System.Int32 MeshBuilder::normalOffset
	int32_t ___normalOffset_5;
	// System.Int32 MeshBuilder::uvOffset
	int32_t ___uvOffset_6;
	// System.Int32 MeshBuilder::faceCount
	int32_t ___faceCount_7;

public:
	inline static int32_t get_offset_of_vertexOffset_4() { return static_cast<int32_t>(offsetof(MeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731_StaticFields, ___vertexOffset_4)); }
	inline int32_t get_vertexOffset_4() const { return ___vertexOffset_4; }
	inline int32_t* get_address_of_vertexOffset_4() { return &___vertexOffset_4; }
	inline void set_vertexOffset_4(int32_t value)
	{
		___vertexOffset_4 = value;
	}

	inline static int32_t get_offset_of_normalOffset_5() { return static_cast<int32_t>(offsetof(MeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731_StaticFields, ___normalOffset_5)); }
	inline int32_t get_normalOffset_5() const { return ___normalOffset_5; }
	inline int32_t* get_address_of_normalOffset_5() { return &___normalOffset_5; }
	inline void set_normalOffset_5(int32_t value)
	{
		___normalOffset_5 = value;
	}

	inline static int32_t get_offset_of_uvOffset_6() { return static_cast<int32_t>(offsetof(MeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731_StaticFields, ___uvOffset_6)); }
	inline int32_t get_uvOffset_6() const { return ___uvOffset_6; }
	inline int32_t* get_address_of_uvOffset_6() { return &___uvOffset_6; }
	inline void set_uvOffset_6(int32_t value)
	{
		___uvOffset_6 = value;
	}

	inline static int32_t get_offset_of_faceCount_7() { return static_cast<int32_t>(offsetof(MeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731_StaticFields, ___faceCount_7)); }
	inline int32_t get_faceCount_7() const { return ___faceCount_7; }
	inline int32_t* get_address_of_faceCount_7() { return &___faceCount_7; }
	inline void set_faceCount_7(int32_t value)
	{
		___faceCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHBUILDER_T22B19B5214823E611271CF39C171EF7DD3590731_H
#ifndef SOLVER_T45BC4457D52541691149931505197834E2BCC506_H
#define SOLVER_T45BC4457D52541691149931505197834E2BCC506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct  Solver_t45BC4457D52541691149931505197834E2BCC506  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::updateLinkedTransform
	bool ___updateLinkedTransform_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::moveLerpTime
	float ___moveLerpTime_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::rotateLerpTime
	float ___rotateLerpTime_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::scaleLerpTime
	float ___scaleLerpTime_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::maintainScale
	bool ___maintainScale_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::smoothing
	bool ___smoothing_9;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::lifetime
	float ___lifetime_10;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::currentLifetime
	float ___currentLifetime_11;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverHandler
	SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * ___SolverHandler_12;

public:
	inline static int32_t get_offset_of_updateLinkedTransform_4() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___updateLinkedTransform_4)); }
	inline bool get_updateLinkedTransform_4() const { return ___updateLinkedTransform_4; }
	inline bool* get_address_of_updateLinkedTransform_4() { return &___updateLinkedTransform_4; }
	inline void set_updateLinkedTransform_4(bool value)
	{
		___updateLinkedTransform_4 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_5() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___moveLerpTime_5)); }
	inline float get_moveLerpTime_5() const { return ___moveLerpTime_5; }
	inline float* get_address_of_moveLerpTime_5() { return &___moveLerpTime_5; }
	inline void set_moveLerpTime_5(float value)
	{
		___moveLerpTime_5 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_6() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___rotateLerpTime_6)); }
	inline float get_rotateLerpTime_6() const { return ___rotateLerpTime_6; }
	inline float* get_address_of_rotateLerpTime_6() { return &___rotateLerpTime_6; }
	inline void set_rotateLerpTime_6(float value)
	{
		___rotateLerpTime_6 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_7() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___scaleLerpTime_7)); }
	inline float get_scaleLerpTime_7() const { return ___scaleLerpTime_7; }
	inline float* get_address_of_scaleLerpTime_7() { return &___scaleLerpTime_7; }
	inline void set_scaleLerpTime_7(float value)
	{
		___scaleLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_maintainScale_8() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___maintainScale_8)); }
	inline bool get_maintainScale_8() const { return ___maintainScale_8; }
	inline bool* get_address_of_maintainScale_8() { return &___maintainScale_8; }
	inline void set_maintainScale_8(bool value)
	{
		___maintainScale_8 = value;
	}

	inline static int32_t get_offset_of_smoothing_9() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___smoothing_9)); }
	inline bool get_smoothing_9() const { return ___smoothing_9; }
	inline bool* get_address_of_smoothing_9() { return &___smoothing_9; }
	inline void set_smoothing_9(bool value)
	{
		___smoothing_9 = value;
	}

	inline static int32_t get_offset_of_lifetime_10() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___lifetime_10)); }
	inline float get_lifetime_10() const { return ___lifetime_10; }
	inline float* get_address_of_lifetime_10() { return &___lifetime_10; }
	inline void set_lifetime_10(float value)
	{
		___lifetime_10 = value;
	}

	inline static int32_t get_offset_of_currentLifetime_11() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___currentLifetime_11)); }
	inline float get_currentLifetime_11() const { return ___currentLifetime_11; }
	inline float* get_address_of_currentLifetime_11() { return &___currentLifetime_11; }
	inline void set_currentLifetime_11(float value)
	{
		___currentLifetime_11 = value;
	}

	inline static int32_t get_offset_of_SolverHandler_12() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___SolverHandler_12)); }
	inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * get_SolverHandler_12() const { return ___SolverHandler_12; }
	inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 ** get_address_of_SolverHandler_12() { return &___SolverHandler_12; }
	inline void set_SolverHandler_12(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * value)
	{
		___SolverHandler_12 = value;
		Il2CppCodeGenWriteBarrier((&___SolverHandler_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVER_T45BC4457D52541691149931505197834E2BCC506_H
#ifndef SOLVERHANDLER_TDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_H
#define SOLVERHANDLER_TDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct  SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedTargetType
	int32_t ___trackedTargetType_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandness
	uint8_t ___trackedHandness_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandJoint
	int32_t ___trackedHandJoint_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::transformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transformOverride_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalOffset_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalRotation_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolvers
	bool ___updateSolvers_10;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::solvers
	List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * ___solvers_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolversList
	bool ___updateSolversList_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalPositionU3Ek__BackingField_13;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CGoalRotationU3Ek__BackingField_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalScale>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalScaleU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  ___U3CAltScaleU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::currentTrackedHandedness
	uint8_t ___currentTrackedHandedness_18;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::preferredTrackedHandedness
	uint8_t ___preferredTrackedHandedness_19;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackingTarget
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___trackingTarget_20;
	// Microsoft.MixedReality.Toolkit.Input.LinePointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::controllerRay
	LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * ___controllerRay_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_22;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::handJointService
	RuntimeObject* ___handJointService_23;

public:
	inline static int32_t get_offset_of_trackedTargetType_4() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___trackedTargetType_4)); }
	inline int32_t get_trackedTargetType_4() const { return ___trackedTargetType_4; }
	inline int32_t* get_address_of_trackedTargetType_4() { return &___trackedTargetType_4; }
	inline void set_trackedTargetType_4(int32_t value)
	{
		___trackedTargetType_4 = value;
	}

	inline static int32_t get_offset_of_trackedHandness_5() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___trackedHandness_5)); }
	inline uint8_t get_trackedHandness_5() const { return ___trackedHandness_5; }
	inline uint8_t* get_address_of_trackedHandness_5() { return &___trackedHandness_5; }
	inline void set_trackedHandness_5(uint8_t value)
	{
		___trackedHandness_5 = value;
	}

	inline static int32_t get_offset_of_trackedHandJoint_6() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___trackedHandJoint_6)); }
	inline int32_t get_trackedHandJoint_6() const { return ___trackedHandJoint_6; }
	inline int32_t* get_address_of_trackedHandJoint_6() { return &___trackedHandJoint_6; }
	inline void set_trackedHandJoint_6(int32_t value)
	{
		___trackedHandJoint_6 = value;
	}

	inline static int32_t get_offset_of_transformOverride_7() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___transformOverride_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transformOverride_7() const { return ___transformOverride_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transformOverride_7() { return &___transformOverride_7; }
	inline void set_transformOverride_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transformOverride_7 = value;
		Il2CppCodeGenWriteBarrier((&___transformOverride_7), value);
	}

	inline static int32_t get_offset_of_additionalOffset_8() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___additionalOffset_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalOffset_8() const { return ___additionalOffset_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalOffset_8() { return &___additionalOffset_8; }
	inline void set_additionalOffset_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalOffset_8 = value;
	}

	inline static int32_t get_offset_of_additionalRotation_9() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___additionalRotation_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalRotation_9() const { return ___additionalRotation_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalRotation_9() { return &___additionalRotation_9; }
	inline void set_additionalRotation_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalRotation_9 = value;
	}

	inline static int32_t get_offset_of_updateSolvers_10() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___updateSolvers_10)); }
	inline bool get_updateSolvers_10() const { return ___updateSolvers_10; }
	inline bool* get_address_of_updateSolvers_10() { return &___updateSolvers_10; }
	inline void set_updateSolvers_10(bool value)
	{
		___updateSolvers_10 = value;
	}

	inline static int32_t get_offset_of_solvers_11() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___solvers_11)); }
	inline List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * get_solvers_11() const { return ___solvers_11; }
	inline List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED ** get_address_of_solvers_11() { return &___solvers_11; }
	inline void set_solvers_11(List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * value)
	{
		___solvers_11 = value;
		Il2CppCodeGenWriteBarrier((&___solvers_11), value);
	}

	inline static int32_t get_offset_of_updateSolversList_12() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___updateSolversList_12)); }
	inline bool get_updateSolversList_12() const { return ___updateSolversList_12; }
	inline bool* get_address_of_updateSolversList_12() { return &___updateSolversList_12; }
	inline void set_updateSolversList_12(bool value)
	{
		___updateSolversList_12 = value;
	}

	inline static int32_t get_offset_of_U3CGoalPositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CGoalPositionU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalPositionU3Ek__BackingField_13() const { return ___U3CGoalPositionU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalPositionU3Ek__BackingField_13() { return &___U3CGoalPositionU3Ek__BackingField_13; }
	inline void set_U3CGoalPositionU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalPositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CGoalRotationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CGoalRotationU3Ek__BackingField_14)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CGoalRotationU3Ek__BackingField_14() const { return ___U3CGoalRotationU3Ek__BackingField_14; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CGoalRotationU3Ek__BackingField_14() { return &___U3CGoalRotationU3Ek__BackingField_14; }
	inline void set_U3CGoalRotationU3Ek__BackingField_14(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CGoalRotationU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CGoalScaleU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CGoalScaleU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalScaleU3Ek__BackingField_15() const { return ___U3CGoalScaleU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalScaleU3Ek__BackingField_15() { return &___U3CGoalScaleU3Ek__BackingField_15; }
	inline void set_U3CGoalScaleU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalScaleU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CAltScaleU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CAltScaleU3Ek__BackingField_16)); }
	inline Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  get_U3CAltScaleU3Ek__BackingField_16() const { return ___U3CAltScaleU3Ek__BackingField_16; }
	inline Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E * get_address_of_U3CAltScaleU3Ek__BackingField_16() { return &___U3CAltScaleU3Ek__BackingField_16; }
	inline void set_U3CAltScaleU3Ek__BackingField_16(Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  value)
	{
		___U3CAltScaleU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CDeltaTimeU3Ek__BackingField_17)); }
	inline float get_U3CDeltaTimeU3Ek__BackingField_17() const { return ___U3CDeltaTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CDeltaTimeU3Ek__BackingField_17() { return &___U3CDeltaTimeU3Ek__BackingField_17; }
	inline void set_U3CDeltaTimeU3Ek__BackingField_17(float value)
	{
		___U3CDeltaTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_currentTrackedHandedness_18() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___currentTrackedHandedness_18)); }
	inline uint8_t get_currentTrackedHandedness_18() const { return ___currentTrackedHandedness_18; }
	inline uint8_t* get_address_of_currentTrackedHandedness_18() { return &___currentTrackedHandedness_18; }
	inline void set_currentTrackedHandedness_18(uint8_t value)
	{
		___currentTrackedHandedness_18 = value;
	}

	inline static int32_t get_offset_of_preferredTrackedHandedness_19() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___preferredTrackedHandedness_19)); }
	inline uint8_t get_preferredTrackedHandedness_19() const { return ___preferredTrackedHandedness_19; }
	inline uint8_t* get_address_of_preferredTrackedHandedness_19() { return &___preferredTrackedHandedness_19; }
	inline void set_preferredTrackedHandedness_19(uint8_t value)
	{
		___preferredTrackedHandedness_19 = value;
	}

	inline static int32_t get_offset_of_trackingTarget_20() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___trackingTarget_20)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_trackingTarget_20() const { return ___trackingTarget_20; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_trackingTarget_20() { return &___trackingTarget_20; }
	inline void set_trackingTarget_20(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___trackingTarget_20 = value;
		Il2CppCodeGenWriteBarrier((&___trackingTarget_20), value);
	}

	inline static int32_t get_offset_of_controllerRay_21() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___controllerRay_21)); }
	inline LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * get_controllerRay_21() const { return ___controllerRay_21; }
	inline LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 ** get_address_of_controllerRay_21() { return &___controllerRay_21; }
	inline void set_controllerRay_21(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * value)
	{
		___controllerRay_21 = value;
		Il2CppCodeGenWriteBarrier((&___controllerRay_21), value);
	}

	inline static int32_t get_offset_of_lastUpdateTime_22() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___lastUpdateTime_22)); }
	inline float get_lastUpdateTime_22() const { return ___lastUpdateTime_22; }
	inline float* get_address_of_lastUpdateTime_22() { return &___lastUpdateTime_22; }
	inline void set_lastUpdateTime_22(float value)
	{
		___lastUpdateTime_22 = value;
	}

	inline static int32_t get_offset_of_handJointService_23() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___handJointService_23)); }
	inline RuntimeObject* get_handJointService_23() const { return ___handJointService_23; }
	inline RuntimeObject** get_address_of_handJointService_23() { return &___handJointService_23; }
	inline void set_handJointService_23(RuntimeObject* value)
	{
		___handJointService_23 = value;
		Il2CppCodeGenWriteBarrier((&___handJointService_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVERHANDLER_TDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_H
#ifndef ROOMSAVER_T5E548F0048082D731BEAB83B4F2FE30290275B38_H
#define ROOMSAVER_T5E548F0048082D731BEAB83B4F2FE30290275B38_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomSaver
struct  RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String RoomSaver::FileName
	String_t* ___FileName_4;
	// System.String RoomSaver::anchorStoreName
	String_t* ___anchorStoreName_5;
	// System.Collections.Generic.List`1<UnityEngine.MeshFilter> RoomSaver::roomMeshFilters
	List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * ___roomMeshFilters_6;
	// UnityEngine.XR.WSA.Persistence.WorldAnchorStore RoomSaver::anchorStore
	WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___anchorStore_7;
	// System.Int32 RoomSaver::meshCount
	int32_t ___meshCount_8;

public:
	inline static int32_t get_offset_of_FileName_4() { return static_cast<int32_t>(offsetof(RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38, ___FileName_4)); }
	inline String_t* get_FileName_4() const { return ___FileName_4; }
	inline String_t** get_address_of_FileName_4() { return &___FileName_4; }
	inline void set_FileName_4(String_t* value)
	{
		___FileName_4 = value;
		Il2CppCodeGenWriteBarrier((&___FileName_4), value);
	}

	inline static int32_t get_offset_of_anchorStoreName_5() { return static_cast<int32_t>(offsetof(RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38, ___anchorStoreName_5)); }
	inline String_t* get_anchorStoreName_5() const { return ___anchorStoreName_5; }
	inline String_t** get_address_of_anchorStoreName_5() { return &___anchorStoreName_5; }
	inline void set_anchorStoreName_5(String_t* value)
	{
		___anchorStoreName_5 = value;
		Il2CppCodeGenWriteBarrier((&___anchorStoreName_5), value);
	}

	inline static int32_t get_offset_of_roomMeshFilters_6() { return static_cast<int32_t>(offsetof(RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38, ___roomMeshFilters_6)); }
	inline List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * get_roomMeshFilters_6() const { return ___roomMeshFilters_6; }
	inline List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 ** get_address_of_roomMeshFilters_6() { return &___roomMeshFilters_6; }
	inline void set_roomMeshFilters_6(List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * value)
	{
		___roomMeshFilters_6 = value;
		Il2CppCodeGenWriteBarrier((&___roomMeshFilters_6), value);
	}

	inline static int32_t get_offset_of_anchorStore_7() { return static_cast<int32_t>(offsetof(RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38, ___anchorStore_7)); }
	inline WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * get_anchorStore_7() const { return ___anchorStore_7; }
	inline WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 ** get_address_of_anchorStore_7() { return &___anchorStore_7; }
	inline void set_anchorStore_7(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * value)
	{
		___anchorStore_7 = value;
		Il2CppCodeGenWriteBarrier((&___anchorStore_7), value);
	}

	inline static int32_t get_offset_of_meshCount_8() { return static_cast<int32_t>(offsetof(RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38, ___meshCount_8)); }
	inline int32_t get_meshCount_8() const { return ___meshCount_8; }
	inline int32_t* get_address_of_meshCount_8() { return &___meshCount_8; }
	inline void set_meshCount_8(int32_t value)
	{
		___meshCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOMSAVER_T5E548F0048082D731BEAB83B4F2FE30290275B38_H
#ifndef ROOMSCANNER_T3D739849025C0CEAF4AA01059EA52626FC46C330_H
#define ROOMSCANNER_T3D739849025C0CEAF4AA01059EA52626FC46C330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomScanner
struct  RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single RoomScanner::MinAreaForComplete
	float ___MinAreaForComplete_4;
	// System.Single RoomScanner::MinPlatormAreaForComplete
	float ___MinPlatormAreaForComplete_5;
	// UnityEngine.TextMesh RoomScanner::DebugDisplay
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___DebugDisplay_6;
	// UnityEngine.TextMesh RoomScanner::targetDisplay
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___targetDisplay_7;
	// System.Boolean RoomScanner::isScanning
	bool ___isScanning_8;
	// HoloToolkit.Unity.SpatialUnderstandingDll_Imports_PlayspaceStats RoomScanner::stats
	PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * ___stats_9;
	// HoloToolkit.Unity.SpatialUnderstandingCustomMesh RoomScanner::customMesh
	SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * ___customMesh_10;
	// UnityEngine.Material RoomScanner::occlusionMat
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___occlusionMat_11;
	// UnityEngine.Material RoomScanner::transparentMat
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___transparentMat_12;
	// UnityEngine.Material RoomScanner::newWireFrameMat
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___newWireFrameMat_13;
	// UnityEngine.GameObject RoomScanner::mySky
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mySky_14;

public:
	inline static int32_t get_offset_of_MinAreaForComplete_4() { return static_cast<int32_t>(offsetof(RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330, ___MinAreaForComplete_4)); }
	inline float get_MinAreaForComplete_4() const { return ___MinAreaForComplete_4; }
	inline float* get_address_of_MinAreaForComplete_4() { return &___MinAreaForComplete_4; }
	inline void set_MinAreaForComplete_4(float value)
	{
		___MinAreaForComplete_4 = value;
	}

	inline static int32_t get_offset_of_MinPlatormAreaForComplete_5() { return static_cast<int32_t>(offsetof(RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330, ___MinPlatormAreaForComplete_5)); }
	inline float get_MinPlatormAreaForComplete_5() const { return ___MinPlatormAreaForComplete_5; }
	inline float* get_address_of_MinPlatormAreaForComplete_5() { return &___MinPlatormAreaForComplete_5; }
	inline void set_MinPlatormAreaForComplete_5(float value)
	{
		___MinPlatormAreaForComplete_5 = value;
	}

	inline static int32_t get_offset_of_DebugDisplay_6() { return static_cast<int32_t>(offsetof(RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330, ___DebugDisplay_6)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_DebugDisplay_6() const { return ___DebugDisplay_6; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_DebugDisplay_6() { return &___DebugDisplay_6; }
	inline void set_DebugDisplay_6(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___DebugDisplay_6 = value;
		Il2CppCodeGenWriteBarrier((&___DebugDisplay_6), value);
	}

	inline static int32_t get_offset_of_targetDisplay_7() { return static_cast<int32_t>(offsetof(RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330, ___targetDisplay_7)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_targetDisplay_7() const { return ___targetDisplay_7; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_targetDisplay_7() { return &___targetDisplay_7; }
	inline void set_targetDisplay_7(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___targetDisplay_7 = value;
		Il2CppCodeGenWriteBarrier((&___targetDisplay_7), value);
	}

	inline static int32_t get_offset_of_isScanning_8() { return static_cast<int32_t>(offsetof(RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330, ___isScanning_8)); }
	inline bool get_isScanning_8() const { return ___isScanning_8; }
	inline bool* get_address_of_isScanning_8() { return &___isScanning_8; }
	inline void set_isScanning_8(bool value)
	{
		___isScanning_8 = value;
	}

	inline static int32_t get_offset_of_stats_9() { return static_cast<int32_t>(offsetof(RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330, ___stats_9)); }
	inline PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * get_stats_9() const { return ___stats_9; }
	inline PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 ** get_address_of_stats_9() { return &___stats_9; }
	inline void set_stats_9(PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * value)
	{
		___stats_9 = value;
		Il2CppCodeGenWriteBarrier((&___stats_9), value);
	}

	inline static int32_t get_offset_of_customMesh_10() { return static_cast<int32_t>(offsetof(RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330, ___customMesh_10)); }
	inline SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * get_customMesh_10() const { return ___customMesh_10; }
	inline SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE ** get_address_of_customMesh_10() { return &___customMesh_10; }
	inline void set_customMesh_10(SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * value)
	{
		___customMesh_10 = value;
		Il2CppCodeGenWriteBarrier((&___customMesh_10), value);
	}

	inline static int32_t get_offset_of_occlusionMat_11() { return static_cast<int32_t>(offsetof(RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330, ___occlusionMat_11)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_occlusionMat_11() const { return ___occlusionMat_11; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_occlusionMat_11() { return &___occlusionMat_11; }
	inline void set_occlusionMat_11(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___occlusionMat_11 = value;
		Il2CppCodeGenWriteBarrier((&___occlusionMat_11), value);
	}

	inline static int32_t get_offset_of_transparentMat_12() { return static_cast<int32_t>(offsetof(RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330, ___transparentMat_12)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_transparentMat_12() const { return ___transparentMat_12; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_transparentMat_12() { return &___transparentMat_12; }
	inline void set_transparentMat_12(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___transparentMat_12 = value;
		Il2CppCodeGenWriteBarrier((&___transparentMat_12), value);
	}

	inline static int32_t get_offset_of_newWireFrameMat_13() { return static_cast<int32_t>(offsetof(RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330, ___newWireFrameMat_13)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_newWireFrameMat_13() const { return ___newWireFrameMat_13; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_newWireFrameMat_13() { return &___newWireFrameMat_13; }
	inline void set_newWireFrameMat_13(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___newWireFrameMat_13 = value;
		Il2CppCodeGenWriteBarrier((&___newWireFrameMat_13), value);
	}

	inline static int32_t get_offset_of_mySky_14() { return static_cast<int32_t>(offsetof(RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330, ___mySky_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mySky_14() const { return ___mySky_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mySky_14() { return &___mySky_14; }
	inline void set_mySky_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mySky_14 = value;
		Il2CppCodeGenWriteBarrier((&___mySky_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOMSCANNER_T3D739849025C0CEAF4AA01059EA52626FC46C330_H
#ifndef SKYHOOK_T1EA73CA5C9FE5C354D8C8823B338CE975E08C63C_H
#define SKYHOOK_T1EA73CA5C9FE5C354D8C8823B338CE975E08C63C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkyHook
struct  SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject SkyHook::<CurrentSky>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CCurrentSkyU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CCurrentSkyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C, ___U3CCurrentSkyU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CCurrentSkyU3Ek__BackingField_4() const { return ___U3CCurrentSkyU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CCurrentSkyU3Ek__BackingField_4() { return &___U3CCurrentSkyU3Ek__BackingField_4; }
	inline void set_U3CCurrentSkyU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CCurrentSkyU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentSkyU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKYHOOK_T1EA73CA5C9FE5C354D8C8823B338CE975E08C63C_H
#ifndef SURFACEPLANEMANAGER_T54B965849568E284FCD0AC115E95483CB9782211_H
#define SURFACEPLANEMANAGER_T54B965849568E284FCD0AC115E95483CB9782211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SurfacePlaneManager
struct  SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Material SurfacePlaneManager::defaultMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___defaultMaterial_4;
	// UnityEngine.Material SurfacePlaneManager::secondaryMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___secondaryMaterial_5;
	// System.UInt32 SurfacePlaneManager::minimumWalls
	uint32_t ___minimumWalls_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SurfacePlaneManager::myTables
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___myTables_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SurfacePlaneManager::myWalls
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___myWalls_8;
	// System.Boolean SurfacePlaneManager::meshesProcessed
	bool ___meshesProcessed_9;
	// System.Boolean SurfacePlaneManager::readyToBuild
	bool ___readyToBuild_10;
	// System.Boolean SurfacePlaneManager::heavensPresent
	bool ___heavensPresent_11;
	// UnityEngine.GameObject SurfacePlaneManager::Sky
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___Sky_12;

public:
	inline static int32_t get_offset_of_defaultMaterial_4() { return static_cast<int32_t>(offsetof(SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211, ___defaultMaterial_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_defaultMaterial_4() const { return ___defaultMaterial_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_defaultMaterial_4() { return &___defaultMaterial_4; }
	inline void set_defaultMaterial_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___defaultMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultMaterial_4), value);
	}

	inline static int32_t get_offset_of_secondaryMaterial_5() { return static_cast<int32_t>(offsetof(SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211, ___secondaryMaterial_5)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_secondaryMaterial_5() const { return ___secondaryMaterial_5; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_secondaryMaterial_5() { return &___secondaryMaterial_5; }
	inline void set_secondaryMaterial_5(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___secondaryMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___secondaryMaterial_5), value);
	}

	inline static int32_t get_offset_of_minimumWalls_6() { return static_cast<int32_t>(offsetof(SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211, ___minimumWalls_6)); }
	inline uint32_t get_minimumWalls_6() const { return ___minimumWalls_6; }
	inline uint32_t* get_address_of_minimumWalls_6() { return &___minimumWalls_6; }
	inline void set_minimumWalls_6(uint32_t value)
	{
		___minimumWalls_6 = value;
	}

	inline static int32_t get_offset_of_myTables_7() { return static_cast<int32_t>(offsetof(SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211, ___myTables_7)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_myTables_7() const { return ___myTables_7; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_myTables_7() { return &___myTables_7; }
	inline void set_myTables_7(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___myTables_7 = value;
		Il2CppCodeGenWriteBarrier((&___myTables_7), value);
	}

	inline static int32_t get_offset_of_myWalls_8() { return static_cast<int32_t>(offsetof(SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211, ___myWalls_8)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_myWalls_8() const { return ___myWalls_8; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_myWalls_8() { return &___myWalls_8; }
	inline void set_myWalls_8(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___myWalls_8 = value;
		Il2CppCodeGenWriteBarrier((&___myWalls_8), value);
	}

	inline static int32_t get_offset_of_meshesProcessed_9() { return static_cast<int32_t>(offsetof(SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211, ___meshesProcessed_9)); }
	inline bool get_meshesProcessed_9() const { return ___meshesProcessed_9; }
	inline bool* get_address_of_meshesProcessed_9() { return &___meshesProcessed_9; }
	inline void set_meshesProcessed_9(bool value)
	{
		___meshesProcessed_9 = value;
	}

	inline static int32_t get_offset_of_readyToBuild_10() { return static_cast<int32_t>(offsetof(SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211, ___readyToBuild_10)); }
	inline bool get_readyToBuild_10() const { return ___readyToBuild_10; }
	inline bool* get_address_of_readyToBuild_10() { return &___readyToBuild_10; }
	inline void set_readyToBuild_10(bool value)
	{
		___readyToBuild_10 = value;
	}

	inline static int32_t get_offset_of_heavensPresent_11() { return static_cast<int32_t>(offsetof(SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211, ___heavensPresent_11)); }
	inline bool get_heavensPresent_11() const { return ___heavensPresent_11; }
	inline bool* get_address_of_heavensPresent_11() { return &___heavensPresent_11; }
	inline void set_heavensPresent_11(bool value)
	{
		___heavensPresent_11 = value;
	}

	inline static int32_t get_offset_of_Sky_12() { return static_cast<int32_t>(offsetof(SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211, ___Sky_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_Sky_12() const { return ___Sky_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_Sky_12() { return &___Sky_12; }
	inline void set_Sky_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___Sky_12 = value;
		Il2CppCodeGenWriteBarrier((&___Sky_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACEPLANEMANAGER_T54B965849568E284FCD0AC115E95483CB9782211_H
#ifndef CATAPULTBEHAVIOUR_T56F29EF4AAE65621D41869BB77EAE2045CC29A53_H
#define CATAPULTBEHAVIOUR_T56F29EF4AAE65621D41869BB77EAE2045CC29A53_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// catapultBehaviour
struct  catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject catapultBehaviour::ReleasePoint
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ReleasePoint_4;
	// System.Single catapultBehaviour::ProjectileLifetime
	float ___ProjectileLifetime_5;
	// UnityEngine.GameObject catapultBehaviour::currentProjectile
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentProjectile_6;
	// System.Int64 catapultBehaviour::projectileBirthTick
	int64_t ___projectileBirthTick_7;
	// System.Int64 catapultBehaviour::lifeTimeInTicks
	int64_t ___lifeTimeInTicks_8;

public:
	inline static int32_t get_offset_of_ReleasePoint_4() { return static_cast<int32_t>(offsetof(catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53, ___ReleasePoint_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ReleasePoint_4() const { return ___ReleasePoint_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ReleasePoint_4() { return &___ReleasePoint_4; }
	inline void set_ReleasePoint_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ReleasePoint_4 = value;
		Il2CppCodeGenWriteBarrier((&___ReleasePoint_4), value);
	}

	inline static int32_t get_offset_of_ProjectileLifetime_5() { return static_cast<int32_t>(offsetof(catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53, ___ProjectileLifetime_5)); }
	inline float get_ProjectileLifetime_5() const { return ___ProjectileLifetime_5; }
	inline float* get_address_of_ProjectileLifetime_5() { return &___ProjectileLifetime_5; }
	inline void set_ProjectileLifetime_5(float value)
	{
		___ProjectileLifetime_5 = value;
	}

	inline static int32_t get_offset_of_currentProjectile_6() { return static_cast<int32_t>(offsetof(catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53, ___currentProjectile_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentProjectile_6() const { return ___currentProjectile_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentProjectile_6() { return &___currentProjectile_6; }
	inline void set_currentProjectile_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentProjectile_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentProjectile_6), value);
	}

	inline static int32_t get_offset_of_projectileBirthTick_7() { return static_cast<int32_t>(offsetof(catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53, ___projectileBirthTick_7)); }
	inline int64_t get_projectileBirthTick_7() const { return ___projectileBirthTick_7; }
	inline int64_t* get_address_of_projectileBirthTick_7() { return &___projectileBirthTick_7; }
	inline void set_projectileBirthTick_7(int64_t value)
	{
		___projectileBirthTick_7 = value;
	}

	inline static int32_t get_offset_of_lifeTimeInTicks_8() { return static_cast<int32_t>(offsetof(catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53, ___lifeTimeInTicks_8)); }
	inline int64_t get_lifeTimeInTicks_8() const { return ___lifeTimeInTicks_8; }
	inline int64_t* get_address_of_lifeTimeInTicks_8() { return &___lifeTimeInTicks_8; }
	inline void set_lifeTimeInTicks_8(int64_t value)
	{
		___lifeTimeInTicks_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATAPULTBEHAVIOUR_T56F29EF4AAE65621D41869BB77EAE2045CC29A53_H
#ifndef REMOVESURFACEVERTICES_T4E3EF8E802112236BCBDF5E4FAEF72D9429E683F_H
#define REMOVESURFACEVERTICES_T4E3EF8E802112236BCBDF5E4FAEF72D9429E683F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.SpatialMapping.RemoveSurfaceVertices
struct  RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F  : public Singleton_1_t7BBDA5EB54CB2C92DEC72266653ED8B3CF3165B6
{
public:
	// System.Single HoloToolkit.Unity.SpatialMapping.RemoveSurfaceVertices::BoundsExpansion
	float ___BoundsExpansion_6;
	// HoloToolkit.Unity.SpatialMapping.RemoveSurfaceVertices_EventHandler HoloToolkit.Unity.SpatialMapping.RemoveSurfaceVertices::RemoveVerticesComplete
	EventHandler_t4F7BE8CBD8EDBFA0FFF2BF5B2D1CE28266ACCC81 * ___RemoveVerticesComplete_7;
	// System.Boolean HoloToolkit.Unity.SpatialMapping.RemoveSurfaceVertices::removingVerts
	bool ___removingVerts_8;
	// System.Collections.Generic.Queue`1<UnityEngine.Bounds> HoloToolkit.Unity.SpatialMapping.RemoveSurfaceVertices::boundingObjectsQueue
	Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 * ___boundingObjectsQueue_9;

public:
	inline static int32_t get_offset_of_BoundsExpansion_6() { return static_cast<int32_t>(offsetof(RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F, ___BoundsExpansion_6)); }
	inline float get_BoundsExpansion_6() const { return ___BoundsExpansion_6; }
	inline float* get_address_of_BoundsExpansion_6() { return &___BoundsExpansion_6; }
	inline void set_BoundsExpansion_6(float value)
	{
		___BoundsExpansion_6 = value;
	}

	inline static int32_t get_offset_of_RemoveVerticesComplete_7() { return static_cast<int32_t>(offsetof(RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F, ___RemoveVerticesComplete_7)); }
	inline EventHandler_t4F7BE8CBD8EDBFA0FFF2BF5B2D1CE28266ACCC81 * get_RemoveVerticesComplete_7() const { return ___RemoveVerticesComplete_7; }
	inline EventHandler_t4F7BE8CBD8EDBFA0FFF2BF5B2D1CE28266ACCC81 ** get_address_of_RemoveVerticesComplete_7() { return &___RemoveVerticesComplete_7; }
	inline void set_RemoveVerticesComplete_7(EventHandler_t4F7BE8CBD8EDBFA0FFF2BF5B2D1CE28266ACCC81 * value)
	{
		___RemoveVerticesComplete_7 = value;
		Il2CppCodeGenWriteBarrier((&___RemoveVerticesComplete_7), value);
	}

	inline static int32_t get_offset_of_removingVerts_8() { return static_cast<int32_t>(offsetof(RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F, ___removingVerts_8)); }
	inline bool get_removingVerts_8() const { return ___removingVerts_8; }
	inline bool* get_address_of_removingVerts_8() { return &___removingVerts_8; }
	inline void set_removingVerts_8(bool value)
	{
		___removingVerts_8 = value;
	}

	inline static int32_t get_offset_of_boundingObjectsQueue_9() { return static_cast<int32_t>(offsetof(RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F, ___boundingObjectsQueue_9)); }
	inline Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 * get_boundingObjectsQueue_9() const { return ___boundingObjectsQueue_9; }
	inline Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 ** get_address_of_boundingObjectsQueue_9() { return &___boundingObjectsQueue_9; }
	inline void set_boundingObjectsQueue_9(Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 * value)
	{
		___boundingObjectsQueue_9 = value;
		Il2CppCodeGenWriteBarrier((&___boundingObjectsQueue_9), value);
	}
};

struct RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F_StaticFields
{
public:
	// System.Single HoloToolkit.Unity.SpatialMapping.RemoveSurfaceVertices::FrameTime
	float ___FrameTime_10;

public:
	inline static int32_t get_offset_of_FrameTime_10() { return static_cast<int32_t>(offsetof(RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F_StaticFields, ___FrameTime_10)); }
	inline float get_FrameTime_10() const { return ___FrameTime_10; }
	inline float* get_address_of_FrameTime_10() { return &___FrameTime_10; }
	inline void set_FrameTime_10(float value)
	{
		___FrameTime_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVESURFACEVERTICES_T4E3EF8E802112236BCBDF5E4FAEF72D9429E683F_H
#ifndef SPATIALMAPPINGMANAGER_TD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1_H
#define SPATIALMAPPINGMANAGER_TD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.SpatialMapping.SpatialMappingManager
struct  SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1  : public Singleton_1_t26447018AF9300F5EC33AA5527CAACB988793DE6
{
public:
	// System.Int32 HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::PhysicsLayer
	int32_t ___PhysicsLayer_6;
	// UnityEngine.Material HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::surfaceMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___surfaceMaterial_7;
	// System.Boolean HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::autoStartObserver
	bool ___autoStartObserver_8;
	// System.Boolean HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::drawVisualMeshes
	bool ___drawVisualMeshes_9;
	// System.Boolean HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::castShadows
	bool ___castShadows_10;
	// HoloToolkit.Unity.SpatialMapping.SpatialMappingObserver HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::surfaceObserver
	SpatialMappingObserver_t79E64A101A9A3E6EF682690E899FDBC9B3F78814 * ___surfaceObserver_11;
	// System.Single HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::<StartTime>k__BackingField
	float ___U3CStartTimeU3Ek__BackingField_12;
	// HoloToolkit.Unity.SpatialMapping.SpatialMappingSource HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::source
	SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC * ___source_13;
	// System.EventHandler`1<HoloToolkit.Unity.SpatialMapping.PropertyChangedEventArgsEx`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingSource>> HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::SourceChanged
	EventHandler_1_t3972026D835D92E4821C94825E4461EABAC48D0B * ___SourceChanged_14;

public:
	inline static int32_t get_offset_of_PhysicsLayer_6() { return static_cast<int32_t>(offsetof(SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1, ___PhysicsLayer_6)); }
	inline int32_t get_PhysicsLayer_6() const { return ___PhysicsLayer_6; }
	inline int32_t* get_address_of_PhysicsLayer_6() { return &___PhysicsLayer_6; }
	inline void set_PhysicsLayer_6(int32_t value)
	{
		___PhysicsLayer_6 = value;
	}

	inline static int32_t get_offset_of_surfaceMaterial_7() { return static_cast<int32_t>(offsetof(SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1, ___surfaceMaterial_7)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_surfaceMaterial_7() const { return ___surfaceMaterial_7; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_surfaceMaterial_7() { return &___surfaceMaterial_7; }
	inline void set_surfaceMaterial_7(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___surfaceMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((&___surfaceMaterial_7), value);
	}

	inline static int32_t get_offset_of_autoStartObserver_8() { return static_cast<int32_t>(offsetof(SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1, ___autoStartObserver_8)); }
	inline bool get_autoStartObserver_8() const { return ___autoStartObserver_8; }
	inline bool* get_address_of_autoStartObserver_8() { return &___autoStartObserver_8; }
	inline void set_autoStartObserver_8(bool value)
	{
		___autoStartObserver_8 = value;
	}

	inline static int32_t get_offset_of_drawVisualMeshes_9() { return static_cast<int32_t>(offsetof(SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1, ___drawVisualMeshes_9)); }
	inline bool get_drawVisualMeshes_9() const { return ___drawVisualMeshes_9; }
	inline bool* get_address_of_drawVisualMeshes_9() { return &___drawVisualMeshes_9; }
	inline void set_drawVisualMeshes_9(bool value)
	{
		___drawVisualMeshes_9 = value;
	}

	inline static int32_t get_offset_of_castShadows_10() { return static_cast<int32_t>(offsetof(SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1, ___castShadows_10)); }
	inline bool get_castShadows_10() const { return ___castShadows_10; }
	inline bool* get_address_of_castShadows_10() { return &___castShadows_10; }
	inline void set_castShadows_10(bool value)
	{
		___castShadows_10 = value;
	}

	inline static int32_t get_offset_of_surfaceObserver_11() { return static_cast<int32_t>(offsetof(SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1, ___surfaceObserver_11)); }
	inline SpatialMappingObserver_t79E64A101A9A3E6EF682690E899FDBC9B3F78814 * get_surfaceObserver_11() const { return ___surfaceObserver_11; }
	inline SpatialMappingObserver_t79E64A101A9A3E6EF682690E899FDBC9B3F78814 ** get_address_of_surfaceObserver_11() { return &___surfaceObserver_11; }
	inline void set_surfaceObserver_11(SpatialMappingObserver_t79E64A101A9A3E6EF682690E899FDBC9B3F78814 * value)
	{
		___surfaceObserver_11 = value;
		Il2CppCodeGenWriteBarrier((&___surfaceObserver_11), value);
	}

	inline static int32_t get_offset_of_U3CStartTimeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1, ___U3CStartTimeU3Ek__BackingField_12)); }
	inline float get_U3CStartTimeU3Ek__BackingField_12() const { return ___U3CStartTimeU3Ek__BackingField_12; }
	inline float* get_address_of_U3CStartTimeU3Ek__BackingField_12() { return &___U3CStartTimeU3Ek__BackingField_12; }
	inline void set_U3CStartTimeU3Ek__BackingField_12(float value)
	{
		___U3CStartTimeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_source_13() { return static_cast<int32_t>(offsetof(SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1, ___source_13)); }
	inline SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC * get_source_13() const { return ___source_13; }
	inline SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC ** get_address_of_source_13() { return &___source_13; }
	inline void set_source_13(SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC * value)
	{
		___source_13 = value;
		Il2CppCodeGenWriteBarrier((&___source_13), value);
	}

	inline static int32_t get_offset_of_SourceChanged_14() { return static_cast<int32_t>(offsetof(SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1, ___SourceChanged_14)); }
	inline EventHandler_1_t3972026D835D92E4821C94825E4461EABAC48D0B * get_SourceChanged_14() const { return ___SourceChanged_14; }
	inline EventHandler_1_t3972026D835D92E4821C94825E4461EABAC48D0B ** get_address_of_SourceChanged_14() { return &___SourceChanged_14; }
	inline void set_SourceChanged_14(EventHandler_1_t3972026D835D92E4821C94825E4461EABAC48D0B * value)
	{
		___SourceChanged_14 = value;
		Il2CppCodeGenWriteBarrier((&___SourceChanged_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALMAPPINGMANAGER_TD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1_H
#ifndef SURFACEMESHESTOPLANES_T75239C96CD6469865F5E03C650BB03EE443DFF19_H
#define SURFACEMESHESTOPLANES_T75239C96CD6469865F5E03C650BB03EE443DFF19_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes
struct  SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19  : public Singleton_1_t244B8DC2CA6AC51BD0656A7B78D49D591CA9614F
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::ActivePlanes
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___ActivePlanes_6;
	// UnityEngine.GameObject HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::SurfacePlanePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___SurfacePlanePrefab_7;
	// System.Single HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::MinArea
	float ___MinArea_8;
	// HoloToolkit.Unity.SpatialMapping.PlaneTypes HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::drawPlanesMask
	int32_t ___drawPlanesMask_9;
	// HoloToolkit.Unity.SpatialMapping.PlaneTypes HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::destroyPlanesMask
	int32_t ___destroyPlanesMask_10;
	// System.Single HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::<FloorYPosition>k__BackingField
	float ___U3CFloorYPositionU3Ek__BackingField_11;
	// System.Single HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::<CeilingYPosition>k__BackingField
	float ___U3CCeilingYPositionU3Ek__BackingField_12;
	// HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes_EventHandler HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::MakePlanesComplete
	EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3 * ___MakePlanesComplete_13;
	// UnityEngine.GameObject HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::planesParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___planesParent_14;
	// System.Single HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::snapToGravityThreshold
	float ___snapToGravityThreshold_15;
	// System.Boolean HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::makingPlanes
	bool ___makingPlanes_16;

public:
	inline static int32_t get_offset_of_ActivePlanes_6() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19, ___ActivePlanes_6)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_ActivePlanes_6() const { return ___ActivePlanes_6; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_ActivePlanes_6() { return &___ActivePlanes_6; }
	inline void set_ActivePlanes_6(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___ActivePlanes_6 = value;
		Il2CppCodeGenWriteBarrier((&___ActivePlanes_6), value);
	}

	inline static int32_t get_offset_of_SurfacePlanePrefab_7() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19, ___SurfacePlanePrefab_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_SurfacePlanePrefab_7() const { return ___SurfacePlanePrefab_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_SurfacePlanePrefab_7() { return &___SurfacePlanePrefab_7; }
	inline void set_SurfacePlanePrefab_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___SurfacePlanePrefab_7 = value;
		Il2CppCodeGenWriteBarrier((&___SurfacePlanePrefab_7), value);
	}

	inline static int32_t get_offset_of_MinArea_8() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19, ___MinArea_8)); }
	inline float get_MinArea_8() const { return ___MinArea_8; }
	inline float* get_address_of_MinArea_8() { return &___MinArea_8; }
	inline void set_MinArea_8(float value)
	{
		___MinArea_8 = value;
	}

	inline static int32_t get_offset_of_drawPlanesMask_9() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19, ___drawPlanesMask_9)); }
	inline int32_t get_drawPlanesMask_9() const { return ___drawPlanesMask_9; }
	inline int32_t* get_address_of_drawPlanesMask_9() { return &___drawPlanesMask_9; }
	inline void set_drawPlanesMask_9(int32_t value)
	{
		___drawPlanesMask_9 = value;
	}

	inline static int32_t get_offset_of_destroyPlanesMask_10() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19, ___destroyPlanesMask_10)); }
	inline int32_t get_destroyPlanesMask_10() const { return ___destroyPlanesMask_10; }
	inline int32_t* get_address_of_destroyPlanesMask_10() { return &___destroyPlanesMask_10; }
	inline void set_destroyPlanesMask_10(int32_t value)
	{
		___destroyPlanesMask_10 = value;
	}

	inline static int32_t get_offset_of_U3CFloorYPositionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19, ___U3CFloorYPositionU3Ek__BackingField_11)); }
	inline float get_U3CFloorYPositionU3Ek__BackingField_11() const { return ___U3CFloorYPositionU3Ek__BackingField_11; }
	inline float* get_address_of_U3CFloorYPositionU3Ek__BackingField_11() { return &___U3CFloorYPositionU3Ek__BackingField_11; }
	inline void set_U3CFloorYPositionU3Ek__BackingField_11(float value)
	{
		___U3CFloorYPositionU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CCeilingYPositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19, ___U3CCeilingYPositionU3Ek__BackingField_12)); }
	inline float get_U3CCeilingYPositionU3Ek__BackingField_12() const { return ___U3CCeilingYPositionU3Ek__BackingField_12; }
	inline float* get_address_of_U3CCeilingYPositionU3Ek__BackingField_12() { return &___U3CCeilingYPositionU3Ek__BackingField_12; }
	inline void set_U3CCeilingYPositionU3Ek__BackingField_12(float value)
	{
		___U3CCeilingYPositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_MakePlanesComplete_13() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19, ___MakePlanesComplete_13)); }
	inline EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3 * get_MakePlanesComplete_13() const { return ___MakePlanesComplete_13; }
	inline EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3 ** get_address_of_MakePlanesComplete_13() { return &___MakePlanesComplete_13; }
	inline void set_MakePlanesComplete_13(EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3 * value)
	{
		___MakePlanesComplete_13 = value;
		Il2CppCodeGenWriteBarrier((&___MakePlanesComplete_13), value);
	}

	inline static int32_t get_offset_of_planesParent_14() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19, ___planesParent_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_planesParent_14() const { return ___planesParent_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_planesParent_14() { return &___planesParent_14; }
	inline void set_planesParent_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___planesParent_14 = value;
		Il2CppCodeGenWriteBarrier((&___planesParent_14), value);
	}

	inline static int32_t get_offset_of_snapToGravityThreshold_15() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19, ___snapToGravityThreshold_15)); }
	inline float get_snapToGravityThreshold_15() const { return ___snapToGravityThreshold_15; }
	inline float* get_address_of_snapToGravityThreshold_15() { return &___snapToGravityThreshold_15; }
	inline void set_snapToGravityThreshold_15(float value)
	{
		___snapToGravityThreshold_15 = value;
	}

	inline static int32_t get_offset_of_makingPlanes_16() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19, ___makingPlanes_16)); }
	inline bool get_makingPlanes_16() const { return ___makingPlanes_16; }
	inline bool* get_address_of_makingPlanes_16() { return &___makingPlanes_16; }
	inline void set_makingPlanes_16(bool value)
	{
		___makingPlanes_16 = value;
	}
};

struct SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19_StaticFields
{
public:
	// System.Single HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::FrameTime
	float ___FrameTime_17;

public:
	inline static int32_t get_offset_of_FrameTime_17() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19_StaticFields, ___FrameTime_17)); }
	inline float get_FrameTime_17() const { return ___FrameTime_17; }
	inline float* get_address_of_FrameTime_17() { return &___FrameTime_17; }
	inline void set_FrameTime_17(float value)
	{
		___FrameTime_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACEMESHESTOPLANES_T75239C96CD6469865F5E03C650BB03EE443DFF19_H
#ifndef SPATIALUNDERSTANDING_T4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D_H
#define SPATIALUNDERSTANDING_T4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.SpatialUnderstanding
struct  SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D  : public Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55
{
public:
	// System.Boolean HoloToolkit.Unity.SpatialUnderstanding::AutoBeginScanning
	bool ___AutoBeginScanning_7;
	// System.Single HoloToolkit.Unity.SpatialUnderstanding::UpdatePeriod_DuringScanning
	float ___UpdatePeriod_DuringScanning_8;
	// System.Single HoloToolkit.Unity.SpatialUnderstanding::UpdatePeriod_AfterScanning
	float ___UpdatePeriod_AfterScanning_9;
	// HoloToolkit.Unity.SpatialUnderstandingDll HoloToolkit.Unity.SpatialUnderstanding::<UnderstandingDLL>k__BackingField
	SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F * ___U3CUnderstandingDLLU3Ek__BackingField_10;
	// HoloToolkit.Unity.SpatialUnderstandingSourceMesh HoloToolkit.Unity.SpatialUnderstanding::<UnderstandingSourceMesh>k__BackingField
	SpatialUnderstandingSourceMesh_t8CE378E7A743A69B4329C39D3E922BA836D6E98E * ___U3CUnderstandingSourceMeshU3Ek__BackingField_11;
	// HoloToolkit.Unity.SpatialUnderstandingCustomMesh HoloToolkit.Unity.SpatialUnderstanding::<UnderstandingCustomMesh>k__BackingField
	SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * ___U3CUnderstandingCustomMeshU3Ek__BackingField_12;
	// HoloToolkit.Unity.SpatialUnderstanding_OnScanDoneDelegate HoloToolkit.Unity.SpatialUnderstanding::OnScanDone
	OnScanDoneDelegate_t51BB643792EFCAD110DE85359DFFEBA7C37931E8 * ___OnScanDone_13;
	// System.Action HoloToolkit.Unity.SpatialUnderstanding::ScanStateChanged
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___ScanStateChanged_14;
	// HoloToolkit.Unity.SpatialUnderstanding_ScanStates HoloToolkit.Unity.SpatialUnderstanding::scanState
	int32_t ___scanState_15;
	// System.Single HoloToolkit.Unity.SpatialUnderstanding::timeSinceLastUpdate
	float ___timeSinceLastUpdate_16;

public:
	inline static int32_t get_offset_of_AutoBeginScanning_7() { return static_cast<int32_t>(offsetof(SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D, ___AutoBeginScanning_7)); }
	inline bool get_AutoBeginScanning_7() const { return ___AutoBeginScanning_7; }
	inline bool* get_address_of_AutoBeginScanning_7() { return &___AutoBeginScanning_7; }
	inline void set_AutoBeginScanning_7(bool value)
	{
		___AutoBeginScanning_7 = value;
	}

	inline static int32_t get_offset_of_UpdatePeriod_DuringScanning_8() { return static_cast<int32_t>(offsetof(SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D, ___UpdatePeriod_DuringScanning_8)); }
	inline float get_UpdatePeriod_DuringScanning_8() const { return ___UpdatePeriod_DuringScanning_8; }
	inline float* get_address_of_UpdatePeriod_DuringScanning_8() { return &___UpdatePeriod_DuringScanning_8; }
	inline void set_UpdatePeriod_DuringScanning_8(float value)
	{
		___UpdatePeriod_DuringScanning_8 = value;
	}

	inline static int32_t get_offset_of_UpdatePeriod_AfterScanning_9() { return static_cast<int32_t>(offsetof(SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D, ___UpdatePeriod_AfterScanning_9)); }
	inline float get_UpdatePeriod_AfterScanning_9() const { return ___UpdatePeriod_AfterScanning_9; }
	inline float* get_address_of_UpdatePeriod_AfterScanning_9() { return &___UpdatePeriod_AfterScanning_9; }
	inline void set_UpdatePeriod_AfterScanning_9(float value)
	{
		___UpdatePeriod_AfterScanning_9 = value;
	}

	inline static int32_t get_offset_of_U3CUnderstandingDLLU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D, ___U3CUnderstandingDLLU3Ek__BackingField_10)); }
	inline SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F * get_U3CUnderstandingDLLU3Ek__BackingField_10() const { return ___U3CUnderstandingDLLU3Ek__BackingField_10; }
	inline SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F ** get_address_of_U3CUnderstandingDLLU3Ek__BackingField_10() { return &___U3CUnderstandingDLLU3Ek__BackingField_10; }
	inline void set_U3CUnderstandingDLLU3Ek__BackingField_10(SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F * value)
	{
		___U3CUnderstandingDLLU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUnderstandingDLLU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CUnderstandingSourceMeshU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D, ___U3CUnderstandingSourceMeshU3Ek__BackingField_11)); }
	inline SpatialUnderstandingSourceMesh_t8CE378E7A743A69B4329C39D3E922BA836D6E98E * get_U3CUnderstandingSourceMeshU3Ek__BackingField_11() const { return ___U3CUnderstandingSourceMeshU3Ek__BackingField_11; }
	inline SpatialUnderstandingSourceMesh_t8CE378E7A743A69B4329C39D3E922BA836D6E98E ** get_address_of_U3CUnderstandingSourceMeshU3Ek__BackingField_11() { return &___U3CUnderstandingSourceMeshU3Ek__BackingField_11; }
	inline void set_U3CUnderstandingSourceMeshU3Ek__BackingField_11(SpatialUnderstandingSourceMesh_t8CE378E7A743A69B4329C39D3E922BA836D6E98E * value)
	{
		___U3CUnderstandingSourceMeshU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUnderstandingSourceMeshU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CUnderstandingCustomMeshU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D, ___U3CUnderstandingCustomMeshU3Ek__BackingField_12)); }
	inline SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * get_U3CUnderstandingCustomMeshU3Ek__BackingField_12() const { return ___U3CUnderstandingCustomMeshU3Ek__BackingField_12; }
	inline SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE ** get_address_of_U3CUnderstandingCustomMeshU3Ek__BackingField_12() { return &___U3CUnderstandingCustomMeshU3Ek__BackingField_12; }
	inline void set_U3CUnderstandingCustomMeshU3Ek__BackingField_12(SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * value)
	{
		___U3CUnderstandingCustomMeshU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUnderstandingCustomMeshU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_OnScanDone_13() { return static_cast<int32_t>(offsetof(SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D, ___OnScanDone_13)); }
	inline OnScanDoneDelegate_t51BB643792EFCAD110DE85359DFFEBA7C37931E8 * get_OnScanDone_13() const { return ___OnScanDone_13; }
	inline OnScanDoneDelegate_t51BB643792EFCAD110DE85359DFFEBA7C37931E8 ** get_address_of_OnScanDone_13() { return &___OnScanDone_13; }
	inline void set_OnScanDone_13(OnScanDoneDelegate_t51BB643792EFCAD110DE85359DFFEBA7C37931E8 * value)
	{
		___OnScanDone_13 = value;
		Il2CppCodeGenWriteBarrier((&___OnScanDone_13), value);
	}

	inline static int32_t get_offset_of_ScanStateChanged_14() { return static_cast<int32_t>(offsetof(SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D, ___ScanStateChanged_14)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_ScanStateChanged_14() const { return ___ScanStateChanged_14; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_ScanStateChanged_14() { return &___ScanStateChanged_14; }
	inline void set_ScanStateChanged_14(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___ScanStateChanged_14 = value;
		Il2CppCodeGenWriteBarrier((&___ScanStateChanged_14), value);
	}

	inline static int32_t get_offset_of_scanState_15() { return static_cast<int32_t>(offsetof(SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D, ___scanState_15)); }
	inline int32_t get_scanState_15() const { return ___scanState_15; }
	inline int32_t* get_address_of_scanState_15() { return &___scanState_15; }
	inline void set_scanState_15(int32_t value)
	{
		___scanState_15 = value;
	}

	inline static int32_t get_offset_of_timeSinceLastUpdate_16() { return static_cast<int32_t>(offsetof(SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D, ___timeSinceLastUpdate_16)); }
	inline float get_timeSinceLastUpdate_16() const { return ___timeSinceLastUpdate_16; }
	inline float* get_address_of_timeSinceLastUpdate_16() { return &___timeSinceLastUpdate_16; }
	inline void set_timeSinceLastUpdate_16(float value)
	{
		___timeSinceLastUpdate_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALUNDERSTANDING_T4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D_H
#ifndef SPATIALUNDERSTANDINGCUSTOMMESH_TBF908D80C67D380B39196D327B1EE5D0A91BACCE_H
#define SPATIALUNDERSTANDINGCUSTOMMESH_TBF908D80C67D380B39196D327B1EE5D0A91BACCE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HoloToolkit.Unity.SpatialUnderstandingCustomMesh
struct  SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE  : public SpatialMappingSource_t3C0D40CF9BF506C3926A625AF0A4A6DC3E1174CC
{
public:
	// System.Single HoloToolkit.Unity.SpatialUnderstandingCustomMesh::ImportMeshPeriod
	float ___ImportMeshPeriod_11;
	// UnityEngine.Material HoloToolkit.Unity.SpatialUnderstandingCustomMesh::meshMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___meshMaterial_12;
	// System.Single HoloToolkit.Unity.SpatialUnderstandingCustomMesh::MaxFrameTime
	float ___MaxFrameTime_13;
	// System.Boolean HoloToolkit.Unity.SpatialUnderstandingCustomMesh::CreateMeshColliders
	bool ___CreateMeshColliders_14;
	// System.Boolean HoloToolkit.Unity.SpatialUnderstandingCustomMesh::drawProcessedMesh
	bool ___drawProcessedMesh_15;
	// System.Boolean HoloToolkit.Unity.SpatialUnderstandingCustomMesh::<IsImportActive>k__BackingField
	bool ___U3CIsImportActiveU3Ek__BackingField_16;
	// System.Single HoloToolkit.Unity.SpatialUnderstandingCustomMesh::timeLastImportedMesh
	float ___timeLastImportedMesh_17;
	// HoloToolkit.Unity.SpatialUnderstanding HoloToolkit.Unity.SpatialUnderstandingCustomMesh::spatialUnderstanding
	SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * ___spatialUnderstanding_18;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,HoloToolkit.Unity.SpatialUnderstandingCustomMesh_MeshData> HoloToolkit.Unity.SpatialUnderstandingCustomMesh::meshSectors
	Dictionary_2_t9DD3B10E0D5B0B13ED4E37F9DACA1407755B10FB * ___meshSectors_19;

public:
	inline static int32_t get_offset_of_ImportMeshPeriod_11() { return static_cast<int32_t>(offsetof(SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE, ___ImportMeshPeriod_11)); }
	inline float get_ImportMeshPeriod_11() const { return ___ImportMeshPeriod_11; }
	inline float* get_address_of_ImportMeshPeriod_11() { return &___ImportMeshPeriod_11; }
	inline void set_ImportMeshPeriod_11(float value)
	{
		___ImportMeshPeriod_11 = value;
	}

	inline static int32_t get_offset_of_meshMaterial_12() { return static_cast<int32_t>(offsetof(SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE, ___meshMaterial_12)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_meshMaterial_12() const { return ___meshMaterial_12; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_meshMaterial_12() { return &___meshMaterial_12; }
	inline void set_meshMaterial_12(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___meshMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((&___meshMaterial_12), value);
	}

	inline static int32_t get_offset_of_MaxFrameTime_13() { return static_cast<int32_t>(offsetof(SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE, ___MaxFrameTime_13)); }
	inline float get_MaxFrameTime_13() const { return ___MaxFrameTime_13; }
	inline float* get_address_of_MaxFrameTime_13() { return &___MaxFrameTime_13; }
	inline void set_MaxFrameTime_13(float value)
	{
		___MaxFrameTime_13 = value;
	}

	inline static int32_t get_offset_of_CreateMeshColliders_14() { return static_cast<int32_t>(offsetof(SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE, ___CreateMeshColliders_14)); }
	inline bool get_CreateMeshColliders_14() const { return ___CreateMeshColliders_14; }
	inline bool* get_address_of_CreateMeshColliders_14() { return &___CreateMeshColliders_14; }
	inline void set_CreateMeshColliders_14(bool value)
	{
		___CreateMeshColliders_14 = value;
	}

	inline static int32_t get_offset_of_drawProcessedMesh_15() { return static_cast<int32_t>(offsetof(SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE, ___drawProcessedMesh_15)); }
	inline bool get_drawProcessedMesh_15() const { return ___drawProcessedMesh_15; }
	inline bool* get_address_of_drawProcessedMesh_15() { return &___drawProcessedMesh_15; }
	inline void set_drawProcessedMesh_15(bool value)
	{
		___drawProcessedMesh_15 = value;
	}

	inline static int32_t get_offset_of_U3CIsImportActiveU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE, ___U3CIsImportActiveU3Ek__BackingField_16)); }
	inline bool get_U3CIsImportActiveU3Ek__BackingField_16() const { return ___U3CIsImportActiveU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsImportActiveU3Ek__BackingField_16() { return &___U3CIsImportActiveU3Ek__BackingField_16; }
	inline void set_U3CIsImportActiveU3Ek__BackingField_16(bool value)
	{
		___U3CIsImportActiveU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_timeLastImportedMesh_17() { return static_cast<int32_t>(offsetof(SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE, ___timeLastImportedMesh_17)); }
	inline float get_timeLastImportedMesh_17() const { return ___timeLastImportedMesh_17; }
	inline float* get_address_of_timeLastImportedMesh_17() { return &___timeLastImportedMesh_17; }
	inline void set_timeLastImportedMesh_17(float value)
	{
		___timeLastImportedMesh_17 = value;
	}

	inline static int32_t get_offset_of_spatialUnderstanding_18() { return static_cast<int32_t>(offsetof(SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE, ___spatialUnderstanding_18)); }
	inline SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * get_spatialUnderstanding_18() const { return ___spatialUnderstanding_18; }
	inline SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D ** get_address_of_spatialUnderstanding_18() { return &___spatialUnderstanding_18; }
	inline void set_spatialUnderstanding_18(SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * value)
	{
		___spatialUnderstanding_18 = value;
		Il2CppCodeGenWriteBarrier((&___spatialUnderstanding_18), value);
	}

	inline static int32_t get_offset_of_meshSectors_19() { return static_cast<int32_t>(offsetof(SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE, ___meshSectors_19)); }
	inline Dictionary_2_t9DD3B10E0D5B0B13ED4E37F9DACA1407755B10FB * get_meshSectors_19() const { return ___meshSectors_19; }
	inline Dictionary_2_t9DD3B10E0D5B0B13ED4E37F9DACA1407755B10FB ** get_address_of_meshSectors_19() { return &___meshSectors_19; }
	inline void set_meshSectors_19(Dictionary_2_t9DD3B10E0D5B0B13ED4E37F9DACA1407755B10FB * value)
	{
		___meshSectors_19 = value;
		Il2CppCodeGenWriteBarrier((&___meshSectors_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALUNDERSTANDINGCUSTOMMESH_TBF908D80C67D380B39196D327B1EE5D0A91BACCE_H
#ifndef INBETWEEN_TCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_H
#define INBETWEEN_TCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween
struct  InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::partwayOffset
	float ___partwayOffset_13;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondTrackedObjectType
	int32_t ___secondTrackedObjectType_14;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondTransformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransformOverride_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondSolverHandler
	SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * ___secondSolverHandler_16;

public:
	inline static int32_t get_offset_of_partwayOffset_13() { return static_cast<int32_t>(offsetof(InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542, ___partwayOffset_13)); }
	inline float get_partwayOffset_13() const { return ___partwayOffset_13; }
	inline float* get_address_of_partwayOffset_13() { return &___partwayOffset_13; }
	inline void set_partwayOffset_13(float value)
	{
		___partwayOffset_13 = value;
	}

	inline static int32_t get_offset_of_secondTrackedObjectType_14() { return static_cast<int32_t>(offsetof(InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542, ___secondTrackedObjectType_14)); }
	inline int32_t get_secondTrackedObjectType_14() const { return ___secondTrackedObjectType_14; }
	inline int32_t* get_address_of_secondTrackedObjectType_14() { return &___secondTrackedObjectType_14; }
	inline void set_secondTrackedObjectType_14(int32_t value)
	{
		___secondTrackedObjectType_14 = value;
	}

	inline static int32_t get_offset_of_secondTransformOverride_15() { return static_cast<int32_t>(offsetof(InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542, ___secondTransformOverride_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_secondTransformOverride_15() const { return ___secondTransformOverride_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_secondTransformOverride_15() { return &___secondTransformOverride_15; }
	inline void set_secondTransformOverride_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___secondTransformOverride_15 = value;
		Il2CppCodeGenWriteBarrier((&___secondTransformOverride_15), value);
	}

	inline static int32_t get_offset_of_secondSolverHandler_16() { return static_cast<int32_t>(offsetof(InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542, ___secondSolverHandler_16)); }
	inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * get_secondSolverHandler_16() const { return ___secondSolverHandler_16; }
	inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 ** get_address_of_secondSolverHandler_16() { return &___secondSolverHandler_16; }
	inline void set_secondSolverHandler_16(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * value)
	{
		___secondSolverHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___secondSolverHandler_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INBETWEEN_TCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_H
#ifndef REMOVEOBJECTVERTICES_T6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C_H
#define REMOVEOBJECTVERTICES_T6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RemoveObjectVertices
struct  RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C  : public Singleton_1_t496A47E7CFB5F1722CAB1F2A8BCB0F7B09775601
{
public:
	// System.Single RemoveObjectVertices::BoundsExpansion
	float ___BoundsExpansion_6;
	// RemoveObjectVertices_EventHandler RemoveObjectVertices::RemoveVerticesComplete
	EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 * ___RemoveVerticesComplete_7;
	// System.Boolean RemoveObjectVertices::removingVerts
	bool ___removingVerts_8;
	// System.Collections.Generic.Queue`1<UnityEngine.Bounds> RemoveObjectVertices::boundingObjectsQueue
	Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 * ___boundingObjectsQueue_9;

public:
	inline static int32_t get_offset_of_BoundsExpansion_6() { return static_cast<int32_t>(offsetof(RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C, ___BoundsExpansion_6)); }
	inline float get_BoundsExpansion_6() const { return ___BoundsExpansion_6; }
	inline float* get_address_of_BoundsExpansion_6() { return &___BoundsExpansion_6; }
	inline void set_BoundsExpansion_6(float value)
	{
		___BoundsExpansion_6 = value;
	}

	inline static int32_t get_offset_of_RemoveVerticesComplete_7() { return static_cast<int32_t>(offsetof(RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C, ___RemoveVerticesComplete_7)); }
	inline EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 * get_RemoveVerticesComplete_7() const { return ___RemoveVerticesComplete_7; }
	inline EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 ** get_address_of_RemoveVerticesComplete_7() { return &___RemoveVerticesComplete_7; }
	inline void set_RemoveVerticesComplete_7(EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 * value)
	{
		___RemoveVerticesComplete_7 = value;
		Il2CppCodeGenWriteBarrier((&___RemoveVerticesComplete_7), value);
	}

	inline static int32_t get_offset_of_removingVerts_8() { return static_cast<int32_t>(offsetof(RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C, ___removingVerts_8)); }
	inline bool get_removingVerts_8() const { return ___removingVerts_8; }
	inline bool* get_address_of_removingVerts_8() { return &___removingVerts_8; }
	inline void set_removingVerts_8(bool value)
	{
		___removingVerts_8 = value;
	}

	inline static int32_t get_offset_of_boundingObjectsQueue_9() { return static_cast<int32_t>(offsetof(RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C, ___boundingObjectsQueue_9)); }
	inline Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 * get_boundingObjectsQueue_9() const { return ___boundingObjectsQueue_9; }
	inline Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 ** get_address_of_boundingObjectsQueue_9() { return &___boundingObjectsQueue_9; }
	inline void set_boundingObjectsQueue_9(Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 * value)
	{
		___boundingObjectsQueue_9 = value;
		Il2CppCodeGenWriteBarrier((&___boundingObjectsQueue_9), value);
	}
};

struct RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C_StaticFields
{
public:
	// System.Single RemoveObjectVertices::FrameTime
	float ___FrameTime_10;

public:
	inline static int32_t get_offset_of_FrameTime_10() { return static_cast<int32_t>(offsetof(RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C_StaticFields, ___FrameTime_10)); }
	inline float get_FrameTime_10() const { return ___FrameTime_10; }
	inline float* get_address_of_FrameTime_10() { return &___FrameTime_10; }
	inline void set_FrameTime_10(float value)
	{
		___FrameTime_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOVEOBJECTVERTICES_T6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C_H
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Mesh[]
struct MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * m_Items[1];

public:
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !0 System.Collections.Generic.Queue`1<UnityEngine.Bounds>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Queue_1_Dequeue_m93E62249639184DA8DC8E7B9D81F9EDF1859D7E6_gshared (Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAAE89C8E293B56CDA9DA04954756144DBBE6E2B4_gshared (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Add_m5FEEA67981187C61E1218ED72FC2FCC64E5A5CFC_gshared (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mD901FE0F60E5F733FFADDEC8CD6EE06E0503A444_gshared (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m7D494D409A5264CF5F1C2D4F5FF884F428DC21F2_gshared (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Bounds>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE9B95585DF73128DA9FE74FB947D6C6CC044005A_gshared (Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// T HoloToolkit.Unity.Singleton`1<System.Object>::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_m1D20787BECD55E0BF723C66964784557993350F4_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared (RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m98E4245F46A6D90AE3E96EFF3880D50ED6E2C728_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Predicate_1__ctor_mBC07C59B061E1B719FFE2B6E5541E9011D906C3C_gshared (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<!0>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_Find_m94A7087C83ECAC7AB1F55201714D2A6D70BFF211_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared (RuntimeObject * p0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void RemoveObjectVertices/<RemoveVerticesWithinBoundsRoutine>d__11::<>m__Finally1()
extern "C" IL2CPP_METHOD_ATTR void U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_U3CU3Em__Finally1_mC3C65759DE4BCF6ED8E06E50E0C373156253B7B0 (U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.Bounds>::Dequeue()
inline Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Queue_1_Dequeue_m93E62249639184DA8DC8E7B9D81F9EDF1859D7E6 (Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 * __this, const RuntimeMethod* method)
{
	return ((  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  (*) (Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 *, const RuntimeMethod*))Queue_1_Dequeue_m93E62249639184DA8DC8E7B9D81F9EDF1859D7E6_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.MeshFilter>::GetEnumerator()
inline Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27  List_1_GetEnumerator_m943E5E6B39F6787CAB42B5F518E11DA814FED42C (List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27  (*) (List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.MeshFilter>::get_Current()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Enumerator_get_Current_m9DD7E57B846DD679A08FF8D1D6D91EA0B2785FAB (Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Renderer_get_bounds_mB29E41E26DD95939C09F3EC67F5B2793A438BDB5 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern "C" IL2CPP_METHOD_ATTR bool Bounds_Intersects_m7B1398FDAC8ECA19677D0956E67FF92EB0BADA9E (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  p0, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
inline void HashSet_1__ctor_mAAE89C8E293B56CDA9DA04954756144DBBE6E2B4 (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 *, const RuntimeMethod*))HashSet_1__ctor_mAAE89C8E293B56CDA9DA04954756144DBBE6E2B4_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Bounds_Contains_mD0387F6A414484534BE1E50E0FC55EDE1E138319 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(!0)
inline bool HashSet_1_Add_m5FEEA67981187C61E1218ED72FC2FCC64E5A5CFC (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 *, int32_t, const RuntimeMethod*))HashSet_1_Add_m5FEEA67981187C61E1218ED72FC2FCC64E5A5CFC_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
inline int32_t HashSet_1_get_Count_mD901FE0F60E5F733FFADDEC8CD6EE06E0503A444 (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 *, const RuntimeMethod*))HashSet_1_get_Count_mD901FE0F60E5F733FFADDEC8CD6EE06E0503A444_gshared)(__this, method);
}
// System.Int32[] UnityEngine.Mesh::GetTriangles(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* Mesh_GetTriangles_m67C18411DD13FFE79A9F0B15599D87B2EC1121F4 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0)
inline bool HashSet_1_Contains_m7D494D409A5264CF5F1C2D4F5FF884F428DC21F2 (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 *, int32_t, const RuntimeMethod*))HashSet_1_Contains_m7D494D409A5264CF5F1C2D4F5FF884F428DC21F2_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::SetTriangles(System.Int32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mE0345D985099C3A4911A3D8ABD35F41C3AD65B8E (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_m1BF701FE2CEA4E8E1183FF878B812808ED1EBA49 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshCollider>()
inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * GameObject_GetComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_mB641FEAC42399B72BD9F987B4D9919BE52EDFCEA (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m88BE136B396DA960BC78F1A563BE0A810AA0FBBA (MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.MeshFilter>::MoveNext()
inline bool Enumerator_MoveNext_mC86BB0FE0D650FDD97110ED1448CE97D10BAAB4F (Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Bounds>::get_Count()
inline int32_t Queue_1_get_Count_mE9B95585DF73128DA9FE74FB947D6C6CC044005A (Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 *, const RuntimeMethod*))Queue_1_get_Count_mE9B95585DF73128DA9FE74FB947D6C6CC044005A_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void RemoveObjectVertices/EventHandler::Invoke(System.Object,System.EventArgs)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_Invoke_mFB3F4A4B8365D03EDC3613415ABE69051B3ACBA3 (EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 * __this, RuntimeObject * ___source0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method);
// System.Void RemoveObjectVertices/<RemoveVerticesWithinBoundsRoutine>d__11::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_System_IDisposable_Dispose_mC49ADED5F996FD3DA49DAFB6CA6F7CB01264980B (U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.MeshFilter>::Dispose()
inline void Enumerator_Dispose_mEBD8CDEEDEDA594C07FA8785E847E24F7C34550A (Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void GetAsyncDelegate__ctor_m718A627539796C39CA29D6854A1A39A50965358F (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::GetAsync(UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchorStore_GetAsync_mF912B2556FDDAC9FADB4BE2A335FCCB92DBDA8D6 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String[] UnityEngine.XR.WSA.Persistence.WorldAnchorStore::GetAllIds()
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* WorldAnchorStore_GetAllIds_mA75D37CFC73BB616C704D843394CFF61FBC7175C (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Load(System.String,UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * WorldAnchorStore_Load_m229510D067D4607C59BF752A21211B82609ADE7E (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, String_t* p0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p1, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Delete(System.String)
extern "C" IL2CPP_METHOD_ATTR bool WorldAnchorStore_Delete_mB519C56F58E9312FBBD868A2D6D8560FCADC1063 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, String_t* p0, const RuntimeMethod* method);
// T HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.SpatialUnderstanding>::get_Instance()
inline SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B (const RuntimeMethod* method)
{
	return ((  SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1D20787BECD55E0BF723C66964784557993350F4_gshared)(method);
}
// HoloToolkit.Unity.SpatialUnderstandingCustomMesh HoloToolkit.Unity.SpatialUnderstanding::get_UnderstandingCustomMesh()
extern "C" IL2CPP_METHOD_ATTR SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * SpatialUnderstanding_get_UnderstandingCustomMesh_mBD4B38A1EE752661F200DF3A234296F8E7864260 (SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Mesh>::.ctor()
inline void List_1__ctor_mAA85317B67042280DE2323F8D64F49898A02267E (List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Mesh>::Add(!0)
inline void List_1_Add_mF94F07FB1016A588B028FBFB6DC4E5D31A05192C (List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A *, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.WorldAnchor::get_isLocated()
extern "C" IL2CPP_METHOD_ATTR bool WorldAnchor_get_isLocated_mBD0794267AA2F92CBB835F7DE9CFCB2A04B14EE6 (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Save(System.String,UnityEngine.XR.WSA.WorldAnchor)
extern "C" IL2CPP_METHOD_ATTR bool WorldAnchorStore_Save_m1A82C4156B8870A40AC80E0D9027638C2307729B (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, String_t* p0, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate__ctor_m9CAD493361EE71D73CB61E7BFD889E88B5649497 (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldAnchor::add_OnTrackingChanged(UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchor_add_OnTrackingChanged_m0810CA0788E01F8421C38A372993FB94B2E59D7D (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * __this, OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MeshBuilder>()
inline MeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731 * GameObject_GetComponent_TisMeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731_m0BC9CB97FB650B71DDAF54518FB585536ECD7CF0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Mesh>::ToArray()
inline MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* List_1_ToArray_m5DB47F1B9EF500995DD9D869AA0DB946B15AA171 (List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A * __this, const RuntimeMethod* method)
{
	return ((  MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* (*) (List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.Void MeshBuilder::SaveMeshesToFile(UnityEngine.Mesh[],System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void MeshBuilder_SaveMeshesToFile_mC6B0A5145B168C9A1178A4843734B7FD226B8689 (MeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731 * __this, MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* ___meshes0, String_t* ___folder1, String_t* ___filename2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldAnchor::remove_OnTrackingChanged(UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR void WorldAnchor_remove_OnTrackingChanged_m3F6B4A3000D652E29ADFA585D779C6DA73930E60 (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * __this, OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1 (String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.SpatialUnderstanding::add_ScanStateChanged(System.Action)
extern "C" IL2CPP_METHOD_ATTR void SpatialUnderstanding_add_ScanStateChanged_mD38BDC3B438316A1E738FA780463F159F6CDC88E (SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method);
// HoloToolkit.Unity.SpatialUnderstanding/ScanStates HoloToolkit.Unity.SpatialUnderstanding::get_ScanState()
extern "C" IL2CPP_METHOD_ATTR int32_t SpatialUnderstanding_get_ScanState_mB90F82A1F7944226DD22EAEF214DD2E5566CC9D9 (SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * __this, const RuntimeMethod* method);
// System.Boolean HoloToolkit.Unity.SpatialUnderstanding::get_AllowSpatialUnderstanding()
extern "C" IL2CPP_METHOD_ATTR bool SpatialUnderstanding_get_AllowSpatialUnderstanding_m50B6964F235968B8317D16F752A25BBEBDCC4790 (SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * __this, const RuntimeMethod* method);
// T HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.SpatialMapping.SpatialMappingManager>::get_Instance()
inline SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727 (const RuntimeMethod* method)
{
	return ((  SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1D20787BECD55E0BF723C66964784557993350F4_gshared)(method);
}
// System.Void HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::StartObserver()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingManager_StartObserver_mAF83868F66575C8031916F75AB8BA9E42714B4D2 (SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.String System.DateTime::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* DateTime_ToString_mBB245CB189C10659D35E8E273FB03E34EA1A7122 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.SpatialUnderstanding::RequestBeginScanning()
extern "C" IL2CPP_METHOD_ATTR void SpatialUnderstanding_RequestBeginScanning_mFC43D6CD60E8E4A3C894C2BC25B1C382004EAB8D (SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::set_DrawVisualMeshes(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingManager_set_DrawVisualMeshes_m5C16634C73CCD8CC8085D8C545410C7FF8090703 (SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<HoloToolkit.Unity.SpatialUnderstandingCustomMesh>()
inline SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * Component_GetComponent_TisSpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE_m7C00D85C750F60E55E159E228021E32D7F44EEE1 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void HoloToolkit.Unity.SpatialUnderstandingCustomMesh::set_DrawProcessedMesh(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SpatialUnderstandingCustomMesh_set_DrawProcessedMesh_m3A2DE602B0B8ABCF468321F37282BFF63D53A3B7 (SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::StopObserver()
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingManager_StopObserver_mE50F472E7A0F85561EB98BD20AE00B8C3113CA80 (SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.SpatialUnderstanding::RequestFinishScan()
extern "C" IL2CPP_METHOD_ATTR void SpatialUnderstanding_RequestFinishScan_mB9D16D4DFEB0DC751BCBFDD63D30EC37BBB7A914 (SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.SpatialUnderstandingCustomMesh::set_MeshMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void SpatialUnderstandingCustomMesh_set_MeshMaterial_m3F5B586D5B842B2345FE95A8FAB2546109A06F7D (SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared)(p0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<RoomSaver>()
inline RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38 * GameObject_GetComponent_TisRoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38_m33732F8F48FC0694B059822F78758C0676E087E6 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.Void RoomSaver::SaveRoom()
extern "C" IL2CPP_METHOD_ATTR void RoomSaver_SaveRoom_m418D5AEA0ED894AAC64BB26070062359AD70A978 (RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38 * __this, const RuntimeMethod* method);
// System.String RoomScanner::get_PrimaryText()
extern "C" IL2CPP_METHOD_ATTR String_t* RoomScanner_get_PrimaryText_m4C580EFA6C3FAE364269C982B14F1D95A019C804 (RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, String_t* p0, const RuntimeMethod* method);
// HoloToolkit.Unity.SpatialUnderstandingDll HoloToolkit.Unity.SpatialUnderstanding::get_UnderstandingDLL()
extern "C" IL2CPP_METHOD_ATTR SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F * SpatialUnderstanding_get_UnderstandingDLL_m0E60DCEE687A7985BD593860B32BA159EC51F2E6 (SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * __this, const RuntimeMethod* method);
// System.IntPtr HoloToolkit.Unity.SpatialUnderstandingDll::GetStaticPlayspaceStatsPtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t SpatialUnderstandingDll_GetStaticPlayspaceStatsPtr_m6356049431B97F4AB0B9AC04F1D0B98432146027 (SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F * __this, const RuntimeMethod* method);
// System.Int32 HoloToolkit.Unity.SpatialUnderstandingDll/Imports::QueryPlayspaceStats(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t Imports_QueryPlayspaceStats_m652714C6FEB399651665A83B9F50F9E5E0154A9D (intptr_t ___playspaceStats0, const RuntimeMethod* method);
// HoloToolkit.Unity.SpatialUnderstandingDll/Imports/PlayspaceStats HoloToolkit.Unity.SpatialUnderstandingDll::GetStaticPlayspaceStats()
extern "C" IL2CPP_METHOD_ATTR PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * SpatialUnderstandingDll_GetStaticPlayspaceStats_m9282A92024D23FDA08F698B6933990F4E775EA02 (SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::GetTextureOffset(System.String)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Material_GetTextureOffset_m3C0722B8C77DF728586E121E4DD81AED28097789 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Material_SetTextureOffset_mAF1B6A6AD9E952262F7AE80B17B31D8FF720ADE7 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.String System.Single::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void SkyHook::set_CurrentSky(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void SkyHook_set_CurrentSky_mC31AAA0FD5FACAFB2A16374247C01B3D5A893EB5 (SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// System.Boolean SkyHook::IsSkyReady()
extern "C" IL2CPP_METHOD_ATTR bool SkyHook_IsSkyReady_m647FFC80E869FB13D311400315BB92ADD0D9591C (SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C * __this, const RuntimeMethod* method);
// UnityEngine.GameObject SkyHook::get_CurrentSky()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * SkyHook_get_CurrentSky_m8970399A508B83D91E86409403CE9076F8BB1547 (SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::SetSurfaceMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void SpatialMappingManager_SetSurfaceMaterial_mDBA545F74DB61335DFDAD8852080819EF8E4FD7C (SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___setSurfaceMaterial0, const RuntimeMethod* method);
// T HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes>::get_Instance()
inline SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6 (const RuntimeMethod* method)
{
	return ((  SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1D20787BECD55E0BF723C66964784557993350F4_gshared)(method);
}
// System.Void HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes/EventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler__ctor_m40846AA4A2E8DD23EAB766D4980FE6A3833A2C84 (EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::add_MakePlanesComplete(HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMeshesToPlanes_add_MakePlanesComplete_m3079288A006DA5DB029B93C1BCA227E3105BDC94 (SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * __this, EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3 * ___value0, const RuntimeMethod* method);
// System.Boolean HoloToolkit.Unity.SpatialMapping.SpatialMappingManager::IsObserverRunning()
extern "C" IL2CPP_METHOD_ATTR bool SpatialMappingManager_IsObserverRunning_m88A13920F194678FA7F9184F69E01096027D2869 (SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * __this, const RuntimeMethod* method);
// System.Void SurfacePlaneManager::CreatePlanes()
extern "C" IL2CPP_METHOD_ATTR void SurfacePlaneManager_CreatePlanes_m278A0E0FD052B02AEFCD2CB2A6C8F5C776AFAE82 (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.GameObject> HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::GetActivePlanes(HoloToolkit.Unity.SpatialMapping.PlaneTypes)
extern "C" IL2CPP_METHOD_ATTR List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * SurfaceMeshesToPlanes_GetActivePlanes_m2D29EC3E018E7055E17A7D0E249F3AC9871940AB (SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * __this, int32_t ___planeTypes0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::MakePlanes()
extern "C" IL2CPP_METHOD_ATTR void SurfaceMeshesToPlanes_MakePlanes_mC49CD572142028FD966A2ED0BB40AC4F879CB85B (SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * __this, const RuntimeMethod* method);
// T HoloToolkit.Unity.Singleton`1<HoloToolkit.Unity.SpatialMapping.RemoveSurfaceVertices>::get_Instance()
inline RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F * Singleton_1_get_Instance_m0B5E5059A638EF2B49E39E22F59268289A5E8B8F (const RuntimeMethod* method)
{
	return ((  RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1D20787BECD55E0BF723C66964784557993350F4_gshared)(method);
}
// System.Void HoloToolkit.Unity.SpatialMapping.RemoveSurfaceVertices::RemoveSurfaceVerticesWithinBounds(System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR void RemoveSurfaceVertices_RemoveSurfaceVerticesWithinBounds_mAC01455D54B270DB01ADB85C8E618C324AF67005 (RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F * __this, RuntimeObject* ___boundingObjects0, const RuntimeMethod* method);
// System.Void SurfacePlaneManager/<>c__DisplayClass15_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m7631039EC04B660C62C12AD78E8375C1D06728CA (U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800 (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(!0)
inline int32_t List_1_IndexOf_m9F7F6206F384B51E590B7621EB4A7F323AC0236B (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_IndexOf_m98E4245F46A6D90AE3E96EFF3880D50ED6E2C728_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969 (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812 (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Void System.Predicate`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mBD87FCC5CFFA8FD4212C5463D3BBAC15B5702C39 (Predicate_1_t48BB388EA438A1C355ACBE79048A63506508DF74 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t48BB388EA438A1C355ACBE79048A63506508DF74 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_mBC07C59B061E1B719FFE2B6E5541E9011D906C3C_gshared)(__this, p0, p1, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::Find(System.Predicate`1<!0>)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * List_1_Find_m7BF7690EEA49C7C1225860D999C3B58C9F604F5B (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, Predicate_1_t48BB388EA438A1C355ACBE79048A63506508DF74 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, Predicate_1_t48BB388EA438A1C355ACBE79048A63506508DF74 *, const RuntimeMethod*))List_1_Find_m94A7087C83ECAC7AB1F55201714D2A6D70BFF211_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Void SurfacePlaneManager::RemoveVertices(System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR void SurfacePlaneManager_RemoveVertices_mFEAEF1BF5340D467247928345E337C0BDC7D5A09 (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, RuntimeObject* ___boundingObjects0, const RuntimeMethod* method);
// System.Boolean SurfacePlaneManager::isSkyReady()
extern "C" IL2CPP_METHOD_ATTR bool SurfacePlaneManager_isSkyReady_m2209C9D334BCA8F6FCA56D14E03EED234F28DCDB (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, const RuntimeMethod* method);
// System.Void HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes::remove_MakePlanesComplete(HoloToolkit.Unity.SpatialMapping.SurfaceMeshesToPlanes/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMeshesToPlanes_remove_MakePlanesComplete_m948F2B095CF5096F247E47620CD2C16D3F79521B (SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * __this, EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D (String_t* p0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
extern "C" IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1 (const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
extern "C" IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Void catapultBehaviour::ReloadCatapult()
extern "C" IL2CPP_METHOD_ATTR void catapultBehaviour_ReloadCatapult_mBF5D62C5E48489BD7F784A1C16CD74A9343AFB48 (catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared)(p0, p1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_mB0D957A9D8A9819E18D2E81F465C5C0B60CBC6DA (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * GameObject_AddComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mED82B88562CC22F180BF24172145DC74F2ACDCDE (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m3EC1B0663FC2B4E076EB81A2542D68CD77995A68 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformOverride(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_m1B17A0062A3BC4E0310347578426A31DE1CEF4E3 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween>()
inline InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * GameObject_GetComponent_TisInBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_mC91114824ACBA952D28C2787030DB6BE4E55FD51 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_Lifetime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_Lifetime_mD22A0F4EC649A405AE6A65B8CC4B9B38DFCECCDC (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, float p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_PartwayOffset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void InBetween_set_PartwayOffset_mA61C26A918E2662475C67CAE7EEAADD3B40E35DD (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_SecondTransformOverride(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void InBetween_set_SecondTransformOverride_m571D59399588177B775713ECFC536A09FFCC8660 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// System.Void catapultBehaviour::CreateProjectile()
extern "C" IL2CPP_METHOD_ATTR void catapultBehaviour_CreateProjectile_mC60B06270797A148781BD204704D14661EA8FB41 (catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CRemoveVerticesWithinBoundsRoutineU3Ed__11__ctor_m048D0C09C820038A519FF534699486E60F344CC2 (U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_System_IDisposable_Dispose_mC49ADED5F996FD3DA49DAFB6CA6F7CB01264980B (U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_U3CU3Em__Finally1_mC3C65759DE4BCF6ED8E06E50E0C373156253B7B0(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_MoveNext_m86A60BD08125C172AE0D417F94D8F45D2CF05524 (U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_MoveNext_m86A60BD08125C172AE0D417F94D8F45D2CF05524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * V_2 = NULL;
	float V_3 = 0.0f;
	EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 * V_4 = NULL;
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * V_5 = NULL;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * V_6 = NULL;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_7;
	memset(&V_7, 0, sizeof(V_7));
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_0170;
				}
				case 2:
				{
					goto IL_02a0;
				}
				case 3:
				{
					goto IL_031e;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_03fb;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// float start = Time.realtimeSinceStartup;
			float L_3 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
			V_3 = L_3;
			goto IL_03b5;
		}

IL_003d:
		{
			// Bounds bounds = boundingObjectsQueue.Dequeue();
			RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * L_4 = V_2;
			NullCheck(L_4);
			Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 * L_5 = L_4->get_boundingObjectsQueue_9();
			NullCheck(L_5);
			Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_6 = Queue_1_Dequeue_m93E62249639184DA8DC8E7B9D81F9EDF1859D7E6(L_5, /*hidden argument*/Queue_1_Dequeue_m93E62249639184DA8DC8E7B9D81F9EDF1859D7E6_RuntimeMethod_var);
			__this->set_U3CboundsU3E5__2_4(L_6);
			// foreach (MeshFilter filter in meshFilters)
			List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * L_7 = __this->get_meshFilters_3();
			NullCheck(L_7);
			Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27  L_8 = List_1_GetEnumerator_m943E5E6B39F6787CAB42B5F518E11DA814FED42C(L_7, /*hidden argument*/List_1_GetEnumerator_m943E5E6B39F6787CAB42B5F518E11DA814FED42C_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap2_5(L_8);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0387;
		}

IL_006c:
		{
			// foreach (MeshFilter filter in meshFilters)
			Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 * L_9 = __this->get_address_of_U3CU3E7__wrap2_5();
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_10 = Enumerator_get_Current_m9DD7E57B846DD679A08FF8D1D6D91EA0B2785FAB((Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 *)L_9, /*hidden argument*/Enumerator_get_Current_m9DD7E57B846DD679A08FF8D1D6D91EA0B2785FAB_RuntimeMethod_var);
			__this->set_U3CfilterU3E5__4_6(L_10);
			// if (filter == null)
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_11 = __this->get_U3CfilterU3E5__4_6();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_12 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0387;
			}
		}

IL_008e:
		{
			// Mesh mesh = filter.sharedMesh;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_13 = __this->get_U3CfilterU3E5__4_6();
			NullCheck(L_13);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_14 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_13, /*hidden argument*/NULL);
			__this->set_U3CmeshU3E5__5_7(L_14);
			// MeshRenderer meshRenderer = filter.GetComponent<MeshRenderer>();
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_15 = __this->get_U3CfilterU3E5__4_6();
			NullCheck(L_15);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_16 = Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D(L_15, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var);
			V_5 = L_16;
			// if (mesh == null || meshRenderer == null || !meshRenderer.bounds.Intersects(bounds))
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_17 = __this->get_U3CmeshU3E5__5_7();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_18 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_0387;
			}
		}

IL_00bd:
		{
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_19 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_20 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_0387;
			}
		}

IL_00ca:
		{
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_21 = V_5;
			NullCheck(L_21);
			Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_22 = Renderer_get_bounds_mB29E41E26DD95939C09F3EC67F5B2793A438BDB5(L_21, /*hidden argument*/NULL);
			V_7 = L_22;
			Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_23 = __this->get_U3CboundsU3E5__2_4();
			bool L_24 = Bounds_Intersects_m7B1398FDAC8ECA19677D0956E67FF92EB0BADA9E((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_7), L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_0387;
			}
		}

IL_00e5:
		{
			// Vector3[] verts = mesh.vertices;
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_25 = __this->get_U3CmeshU3E5__5_7();
			NullCheck(L_25);
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_26 = Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9(L_25, /*hidden argument*/NULL);
			__this->set_U3CvertsU3E5__6_8(L_26);
			// HashSet<int> vertsToRemove = new HashSet<int>();
			HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * L_27 = (HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 *)il2cpp_codegen_object_new(HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74_il2cpp_TypeInfo_var);
			HashSet_1__ctor_mAAE89C8E293B56CDA9DA04954756144DBBE6E2B4(L_27, /*hidden argument*/HashSet_1__ctor_mAAE89C8E293B56CDA9DA04954756144DBBE6E2B4_RuntimeMethod_var);
			__this->set_U3CvertsToRemoveU3E5__7_9(L_27);
			// for (int i = 0; i < verts.Length; ++i)
			__this->set_U3CiU3E5__10_12(0);
			goto IL_0190;
		}

IL_010d:
		{
			// if (bounds.Contains(filter.transform.TransformPoint(verts[i])))
			Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * L_28 = __this->get_address_of_U3CboundsU3E5__2_4();
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_29 = __this->get_U3CfilterU3E5__4_6();
			NullCheck(L_29);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_29, /*hidden argument*/NULL);
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_31 = __this->get_U3CvertsU3E5__6_8();
			int32_t L_32 = __this->get_U3CiU3E5__10_12();
			NullCheck(L_31);
			int32_t L_33 = L_32;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			NullCheck(L_30);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB(L_30, L_34, /*hidden argument*/NULL);
			bool L_36 = Bounds_Contains_mD0387F6A414484534BE1E50E0FC55EDE1E138319((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)L_28, L_35, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_014d;
			}
		}

IL_013b:
		{
			// vertsToRemove.Add(i);
			HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * L_37 = __this->get_U3CvertsToRemoveU3E5__7_9();
			int32_t L_38 = __this->get_U3CiU3E5__10_12();
			NullCheck(L_37);
			HashSet_1_Add_m5FEEA67981187C61E1218ED72FC2FCC64E5A5CFC(L_37, L_38, /*hidden argument*/HashSet_1_Add_m5FEEA67981187C61E1218ED72FC2FCC64E5A5CFC_RuntimeMethod_var);
		}

IL_014d:
		{
			// if ((Time.realtimeSinceStartup - start) > FrameTime)
			float L_39 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
			float L_40 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C_il2cpp_TypeInfo_var);
			float L_41 = ((RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C_StaticFields*)il2cpp_codegen_static_fields_for(RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C_il2cpp_TypeInfo_var))->get_FrameTime_10();
			if ((!(((float)((float)il2cpp_codegen_subtract((float)L_39, (float)L_40))) > ((float)L_41))))
			{
				goto IL_017e;
			}
		}

IL_015b:
		{
			// yield return null;
			__this->set_U3CU3E2__current_1(NULL);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_03fb;
		}

IL_0170:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// start = Time.realtimeSinceStartup;
			float L_42 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
			V_3 = L_42;
		}

IL_017e:
		{
			// for (int i = 0; i < verts.Length; ++i)
			int32_t L_43 = __this->get_U3CiU3E5__10_12();
			V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
			int32_t L_44 = V_8;
			__this->set_U3CiU3E5__10_12(L_44);
		}

IL_0190:
		{
			// for (int i = 0; i < verts.Length; ++i)
			int32_t L_45 = __this->get_U3CiU3E5__10_12();
			Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_46 = __this->get_U3CvertsU3E5__6_8();
			NullCheck(L_46);
			if ((((int32_t)L_45) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_46)->max_length)))))))
			{
				goto IL_010d;
			}
		}

IL_01a3:
		{
			// if (vertsToRemove.Count == 0)
			HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * L_47 = __this->get_U3CvertsToRemoveU3E5__7_9();
			NullCheck(L_47);
			int32_t L_48 = HashSet_1_get_Count_mD901FE0F60E5F733FFADDEC8CD6EE06E0503A444(L_47, /*hidden argument*/HashSet_1_get_Count_mD901FE0F60E5F733FFADDEC8CD6EE06E0503A444_RuntimeMethod_var);
			if (!L_48)
			{
				goto IL_0387;
			}
		}

IL_01b3:
		{
			// int[] indices = mesh.GetTriangles(0);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_49 = __this->get_U3CmeshU3E5__5_7();
			NullCheck(L_49);
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_50 = Mesh_GetTriangles_m67C18411DD13FFE79A9F0B15599D87B2EC1121F4(L_49, 0, /*hidden argument*/NULL);
			__this->set_U3CindicesU3E5__8_10(L_50);
			// List<int> updatedIndices = new List<int>();
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_51 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
			List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_51, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
			__this->set_U3CupdatedIndicesU3E5__9_11(L_51);
			// for (int index = 0; index < indices.Length; index += 3)
			__this->set_U3CiU3E5__10_12(0);
			goto IL_02bc;
		}

IL_01dc:
		{
			// if (vertsToRemove.Contains(indices[index]) ||
			//     vertsToRemove.Contains(indices[index + 1]) ||
			//     vertsToRemove.Contains(indices[index + 2]))
			HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * L_52 = __this->get_U3CvertsToRemoveU3E5__7_9();
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_53 = __this->get_U3CindicesU3E5__8_10();
			int32_t L_54 = __this->get_U3CiU3E5__10_12();
			NullCheck(L_53);
			int32_t L_55 = L_54;
			int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
			NullCheck(L_52);
			bool L_57 = HashSet_1_Contains_m7D494D409A5264CF5F1C2D4F5FF884F428DC21F2(L_52, L_56, /*hidden argument*/HashSet_1_Contains_m7D494D409A5264CF5F1C2D4F5FF884F428DC21F2_RuntimeMethod_var);
			if (L_57)
			{
				goto IL_027d;
			}
		}

IL_01f9:
		{
			HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * L_58 = __this->get_U3CvertsToRemoveU3E5__7_9();
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_59 = __this->get_U3CindicesU3E5__8_10();
			int32_t L_60 = __this->get_U3CiU3E5__10_12();
			NullCheck(L_59);
			int32_t L_61 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
			int32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
			NullCheck(L_58);
			bool L_63 = HashSet_1_Contains_m7D494D409A5264CF5F1C2D4F5FF884F428DC21F2(L_58, L_62, /*hidden argument*/HashSet_1_Contains_m7D494D409A5264CF5F1C2D4F5FF884F428DC21F2_RuntimeMethod_var);
			if (L_63)
			{
				goto IL_027d;
			}
		}

IL_0215:
		{
			HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 * L_64 = __this->get_U3CvertsToRemoveU3E5__7_9();
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_65 = __this->get_U3CindicesU3E5__8_10();
			int32_t L_66 = __this->get_U3CiU3E5__10_12();
			NullCheck(L_65);
			int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)2));
			int32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
			NullCheck(L_64);
			bool L_69 = HashSet_1_Contains_m7D494D409A5264CF5F1C2D4F5FF884F428DC21F2(L_64, L_68, /*hidden argument*/HashSet_1_Contains_m7D494D409A5264CF5F1C2D4F5FF884F428DC21F2_RuntimeMethod_var);
			if (L_69)
			{
				goto IL_027d;
			}
		}

IL_0231:
		{
			// updatedIndices.Add(indices[index]);
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_70 = __this->get_U3CupdatedIndicesU3E5__9_11();
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_71 = __this->get_U3CindicesU3E5__8_10();
			int32_t L_72 = __this->get_U3CiU3E5__10_12();
			NullCheck(L_71);
			int32_t L_73 = L_72;
			int32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
			NullCheck(L_70);
			List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_70, L_74, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
			// updatedIndices.Add(indices[index + 1]);
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_75 = __this->get_U3CupdatedIndicesU3E5__9_11();
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_76 = __this->get_U3CindicesU3E5__8_10();
			int32_t L_77 = __this->get_U3CiU3E5__10_12();
			NullCheck(L_76);
			int32_t L_78 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
			int32_t L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
			NullCheck(L_75);
			List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_75, L_79, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
			// updatedIndices.Add(indices[index + 2]);
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_80 = __this->get_U3CupdatedIndicesU3E5__9_11();
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_81 = __this->get_U3CindicesU3E5__8_10();
			int32_t L_82 = __this->get_U3CiU3E5__10_12();
			NullCheck(L_81);
			int32_t L_83 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)2));
			int32_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
			NullCheck(L_80);
			List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_80, L_84, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		}

IL_027d:
		{
			// if ((Time.realtimeSinceStartup - start) > FrameTime)
			float L_85 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
			float L_86 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C_il2cpp_TypeInfo_var);
			float L_87 = ((RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C_StaticFields*)il2cpp_codegen_static_fields_for(RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C_il2cpp_TypeInfo_var))->get_FrameTime_10();
			if ((!(((float)((float)il2cpp_codegen_subtract((float)L_85, (float)L_86))) > ((float)L_87))))
			{
				goto IL_02ae;
			}
		}

IL_028b:
		{
			// yield return null;
			__this->set_U3CU3E2__current_1(NULL);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_03fb;
		}

IL_02a0:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// start = Time.realtimeSinceStartup;
			float L_88 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
			V_3 = L_88;
		}

IL_02ae:
		{
			// for (int index = 0; index < indices.Length; index += 3)
			int32_t L_89 = __this->get_U3CiU3E5__10_12();
			__this->set_U3CiU3E5__10_12(((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)3)));
		}

IL_02bc:
		{
			// for (int index = 0; index < indices.Length; index += 3)
			int32_t L_90 = __this->get_U3CiU3E5__10_12();
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_91 = __this->get_U3CindicesU3E5__8_10();
			NullCheck(L_91);
			if ((((int32_t)L_90) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_91)->max_length)))))))
			{
				goto IL_01dc;
			}
		}

IL_02cf:
		{
			// if (indices.Length == updatedIndices.Count)
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_92 = __this->get_U3CindicesU3E5__8_10();
			NullCheck(L_92);
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_93 = __this->get_U3CupdatedIndicesU3E5__9_11();
			NullCheck(L_93);
			int32_t L_94 = List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033(L_93, /*hidden argument*/List_1_get_Count_m7984BA6C664D8EAE284C168D0568FE2B9136A033_RuntimeMethod_var);
			if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_92)->max_length))))) == ((int32_t)L_94)))
			{
				goto IL_0387;
			}
		}

IL_02e7:
		{
			// mesh.SetTriangles(updatedIndices.ToArray(), 0);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_95 = __this->get_U3CmeshU3E5__5_7();
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_96 = __this->get_U3CupdatedIndicesU3E5__9_11();
			NullCheck(L_96);
			Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_97 = List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98(L_96, /*hidden argument*/List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_RuntimeMethod_var);
			NullCheck(L_95);
			Mesh_SetTriangles_mE0345D985099C3A4911A3D8ABD35F41C3AD65B8E(L_95, L_97, 0, /*hidden argument*/NULL);
			// mesh.RecalculateBounds();
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_98 = __this->get_U3CmeshU3E5__5_7();
			NullCheck(L_98);
			Mesh_RecalculateBounds_m1BF701FE2CEA4E8E1183FF878B812808ED1EBA49(L_98, /*hidden argument*/NULL);
			// yield return null;
			__this->set_U3CU3E2__current_1(NULL);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_03fb;
		}

IL_031e:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// start = Time.realtimeSinceStartup;
			float L_99 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
			V_3 = L_99;
			// MeshCollider meshCollider = filter.gameObject.GetComponent<MeshCollider>();
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_100 = __this->get_U3CfilterU3E5__4_6();
			NullCheck(L_100);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_101 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_100, /*hidden argument*/NULL);
			NullCheck(L_101);
			MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_102 = GameObject_GetComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_mB641FEAC42399B72BD9F987B4D9919BE52EDFCEA(L_101, /*hidden argument*/GameObject_GetComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_mB641FEAC42399B72BD9F987B4D9919BE52EDFCEA_RuntimeMethod_var);
			V_6 = L_102;
			// if (meshCollider != null)
			MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_103 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_104 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_103, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_104)
			{
				goto IL_035d;
			}
		}

IL_0348:
		{
			// meshCollider.sharedMesh = null;
			MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_105 = V_6;
			NullCheck(L_105);
			MeshCollider_set_sharedMesh_m88BE136B396DA960BC78F1A563BE0A810AA0FBBA(L_105, (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)NULL, /*hidden argument*/NULL);
			// meshCollider.sharedMesh = mesh;
			MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_106 = V_6;
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_107 = __this->get_U3CmeshU3E5__5_7();
			NullCheck(L_106);
			MeshCollider_set_sharedMesh_m88BE136B396DA960BC78F1A563BE0A810AA0FBBA(L_106, L_107, /*hidden argument*/NULL);
		}

IL_035d:
		{
			// }
			__this->set_U3CmeshU3E5__5_7((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)NULL);
			__this->set_U3CvertsU3E5__6_8((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL);
			__this->set_U3CvertsToRemoveU3E5__7_9((HashSet_1_tC4214D83D479652EF2A07346543F228C3C0A8D74 *)NULL);
			__this->set_U3CindicesU3E5__8_10((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)NULL);
			__this->set_U3CupdatedIndicesU3E5__9_11((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)NULL);
			__this->set_U3CfilterU3E5__4_6((MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)NULL);
		}

IL_0387:
		{
			// foreach (MeshFilter filter in meshFilters)
			Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 * L_108 = __this->get_address_of_U3CU3E7__wrap2_5();
			bool L_109 = Enumerator_MoveNext_mC86BB0FE0D650FDD97110ED1448CE97D10BAAB4F((Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 *)L_108, /*hidden argument*/Enumerator_MoveNext_mC86BB0FE0D650FDD97110ED1448CE97D10BAAB4F_RuntimeMethod_var);
			if (L_109)
			{
				goto IL_006c;
			}
		}

IL_0397:
		{
			U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_U3CU3Em__Finally1_mC3C65759DE4BCF6ED8E06E50E0C373156253B7B0(__this, /*hidden argument*/NULL);
			Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 * L_110 = __this->get_address_of_U3CU3E7__wrap2_5();
			il2cpp_codegen_initobj(L_110, sizeof(Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 ));
			// }
			Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * L_111 = __this->get_address_of_U3CboundsU3E5__2_4();
			il2cpp_codegen_initobj(L_111, sizeof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 ));
		}

IL_03b5:
		{
			// while (boundingObjectsQueue.Count > 0)
			RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * L_112 = V_2;
			NullCheck(L_112);
			Queue_1_t5E1EF1B648E6FC2986CC40C8215001858BC3F434 * L_113 = L_112->get_boundingObjectsQueue_9();
			NullCheck(L_113);
			int32_t L_114 = Queue_1_get_Count_mE9B95585DF73128DA9FE74FB947D6C6CC044005A(L_113, /*hidden argument*/Queue_1_get_Count_mE9B95585DF73128DA9FE74FB947D6C6CC044005A_RuntimeMethod_var);
			if ((((int32_t)L_114) > ((int32_t)0)))
			{
				goto IL_003d;
			}
		}

IL_03c6:
		{
			// Debug.Log("Finished removing vertices.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralDA9F7AD1DCDEA2F69D2BE9B54429FAB489465B4F, /*hidden argument*/NULL);
			// EventHandler handler = RemoveVerticesComplete;
			RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * L_115 = V_2;
			NullCheck(L_115);
			EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 * L_116 = L_115->get_RemoveVerticesComplete_7();
			V_4 = L_116;
			// if (handler != null)
			EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 * L_117 = V_4;
			if (!L_117)
			{
				goto IL_03e9;
			}
		}

IL_03dc:
		{
			// handler(this, EventArgs.Empty);
			EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 * L_118 = V_4;
			RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * L_119 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
			EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_120 = ((EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var))->get_Empty_0();
			NullCheck(L_118);
			EventHandler_Invoke_mFB3F4A4B8365D03EDC3613415ABE69051B3ACBA3(L_118, L_119, L_120, /*hidden argument*/NULL);
		}

IL_03e9:
		{
			// removingVerts = false;
			RemoveObjectVertices_t6E1BA241920BB2BADBDD816A5ADA7EF5F904A00C * L_121 = V_2;
			NullCheck(L_121);
			L_121->set_removingVerts_8((bool)0);
			// }
			V_0 = (bool)0;
			goto IL_03fb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_03f4;
	}

FAULT_03f4:
	{ // begin fault (depth: 1)
		U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_System_IDisposable_Dispose_mC49ADED5F996FD3DA49DAFB6CA6F7CB01264980B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(1012)
	} // end fault
	IL2CPP_CLEANUP(1012)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_03fb:
	{
		bool L_122 = V_0;
		return L_122;
	}
}
// System.Void RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::<>m__Finally1()
extern "C" IL2CPP_METHOD_ATTR void U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_U3CU3Em__Finally1_mC3C65759DE4BCF6ED8E06E50E0C373156253B7B0 (U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_U3CU3Em__Finally1_mC3C65759DE4BCF6ED8E06E50E0C373156253B7B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 * L_0 = __this->get_address_of_U3CU3E7__wrap2_5();
		Enumerator_Dispose_mEBD8CDEEDEDA594C07FA8785E847E24F7C34550A((Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 *)L_0, /*hidden argument*/Enumerator_Dispose_mEBD8CDEEDEDA594C07FA8785E847E24F7C34550A_RuntimeMethod_var);
		return;
	}
}
// System.Object RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBAE249C492BE99A7A6FF1B39C667E54BAE655B02 (U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_System_Collections_IEnumerator_Reset_mE6B1B769799889053A7AD9E473DA65435118E10A (U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_System_Collections_IEnumerator_Reset_mE6B1B769799889053A7AD9E473DA65435118E10A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_System_Collections_IEnumerator_Reset_mE6B1B769799889053A7AD9E473DA65435118E10A_RuntimeMethod_var);
	}
}
// System.Object RemoveObjectVertices_<RemoveVerticesWithinBoundsRoutine>d__11::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_System_Collections_IEnumerator_get_Current_mB2460997A8F15B3CDDF0C1C3A30F193250FD901D (U3CRemoveVerticesWithinBoundsRoutineU3Ed__11_t6E5DFA4FC6F157ED2ACB451E305059EF463A001F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RemoveObjectVertices_EventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler__ctor_m86EE09D5C5DAB9B56EF3E5AB66292C64FC963300 (EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void RemoveObjectVertices_EventHandler::Invoke(System.Object,System.EventArgs)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_Invoke_mFB3F4A4B8365D03EDC3613415ABE69051B3ACBA3 (EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 * __this, RuntimeObject * ___source0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___args1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___args1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, ___source0, ___args1);
							else
								GenericVirtActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, ___source0, ___args1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___args1);
							else
								VirtActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___args1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___args1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___source0, ___args1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, targetThis, ___source0, ___args1);
							else
								GenericVirtActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, targetThis, ___source0, ___args1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___args1);
							else
								VirtActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___args1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___args1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, ___source0, ___args1);
						else
							GenericVirtActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, ___source0, ___args1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___args1);
						else
							VirtActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___args1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___source0, ___args1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, targetThis, ___source0, ___args1);
						else
							GenericVirtActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, targetThis, ___source0, ___args1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___args1);
						else
							VirtActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___args1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___args1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult RemoveObjectVertices_EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EventHandler_BeginInvoke_mBE52CE39E6ADEDA7E7524829E144C887FA2CEE95 (EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 * __this, RuntimeObject * ___source0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void RemoveObjectVertices_EventHandler::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_EndInvoke_m1957A5B267665BC1A53830BF66C6600858BE27E8 (EventHandler_t087A65FC05E9C6B70332A12DF5C8759C260F8BB9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RoomSaver::Start()
extern "C" IL2CPP_METHOD_ATTR void RoomSaver_Start_mC9CF0767AF9242EF80E85F4B7282781B0E2D4938 (RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomSaver_Start_mC9CF0767AF9242EF80E85F4B7282781B0E2D4938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WorldAnchorStore.GetAsync(AnchorStoreReady);
		GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * L_0 = (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF *)il2cpp_codegen_object_new(GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF_il2cpp_TypeInfo_var);
		GetAsyncDelegate__ctor_m718A627539796C39CA29D6854A1A39A50965358F(L_0, __this, (intptr_t)((intptr_t)RoomSaver_AnchorStoreReady_m035002D3F0BFF4979B26A8419444F82A60A29AF7_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var);
		WorldAnchorStore_GetAsync_mF912B2556FDDAC9FADB4BE2A335FCCB92DBDA8D6(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RoomSaver::AnchorStoreReady(UnityEngine.XR.WSA.Persistence.WorldAnchorStore)
extern "C" IL2CPP_METHOD_ATTR void RoomSaver_AnchorStoreReady_m035002D3F0BFF4979B26A8419444F82A60A29AF7 (RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38 * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomSaver_AnchorStoreReady_m035002D3F0BFF4979B26A8419444F82A60A29AF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// anchorStore = store;
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_0 = ___store0;
		__this->set_anchorStore_7(L_0);
		// Debug.Log("looking for " + anchorStoreName);
		String_t* L_1 = __this->get_anchorStoreName_5();
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral4ACED94DEDFAD117233F1E6BAAE281BA7AA83318, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		// string[] ids = anchorStore.GetAllIds();
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_3 = __this->get_anchorStore_7();
		NullCheck(L_3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = WorldAnchorStore_GetAllIds_mA75D37CFC73BB616C704D843394CFF61FBC7175C(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// for (int index = 0; index < ids.Length; index++)
		V_1 = 0;
		goto IL_005e;
	}

IL_002c:
	{
		// Debug.Log(ids[index]);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_8, /*hidden argument*/NULL);
		// if (ids[index] == anchorStoreName)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		String_t* L_13 = __this->get_anchorStoreName_5();
		bool L_14 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		// WorldAnchor wa = anchorStore.Load(ids[index], gameObject);
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_15 = __this->get_anchorStore_7();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		WorldAnchorStore_Load_m229510D067D4607C59BF752A21211B82609ADE7E(L_15, L_19, L_20, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_005a:
	{
		// for (int index = 0; index < ids.Length; index++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_005e:
	{
		// for (int index = 0; index < ids.Length; index++)
		int32_t L_22 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_002c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RoomSaver::SaveRoom()
extern "C" IL2CPP_METHOD_ATTR void RoomSaver_SaveRoom_m418D5AEA0ED894AAC64BB26070062359AD70A978 (RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomSaver_SaveRoom_m418D5AEA0ED894AAC64BB26070062359AD70A978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A * V_1 = NULL;
	int32_t V_2 = 0;
	Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27  V_3;
	memset(&V_3, 0, sizeof(V_3));
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * V_4 = NULL;
	String_t* V_5 = NULL;
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (anchorStore == null)
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_0 = __this->get_anchorStore_7();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.Log("anchor store null, exiting");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral9D13E17D60FB26F9250A778FF3723820660F747C, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// string[] anchorIds = anchorStore.GetAllIds();
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_1 = __this->get_anchorStore_7();
		NullCheck(L_1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = WorldAnchorStore_GetAllIds_mA75D37CFC73BB616C704D843394CFF61FBC7175C(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// for (int i = 0; i < anchorIds.Length; i++)
		V_2 = 0;
		goto IL_0046;
	}

IL_0023:
	{
		// if (anchorIds[i].Contains(anchorStoreName))
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = V_0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		String_t* L_7 = __this->get_anchorStoreName_5();
		NullCheck(L_6);
		bool L_8 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		// anchorStore.Delete(anchorIds[i]);
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_9 = __this->get_anchorStore_7();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		WorldAnchorStore_Delete_mB519C56F58E9312FBBD868A2D6D8560FCADC1063(L_9, L_13, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// for (int i = 0; i < anchorIds.Length; i++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0046:
	{
		// for (int i = 0; i < anchorIds.Length; i++)
		int32_t L_15 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		// Debug.Log("Old anchors deleted...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralF1855368FECAC9C2FE1200241D1084F82567C82A, /*hidden argument*/NULL);
		// roomMeshFilters = SpatialUnderstanding.Instance.UnderstandingCustomMesh.GetMeshFilters() as List<MeshFilter>;
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_17 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_17);
		SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * L_18 = SpatialUnderstanding_get_UnderstandingCustomMesh_mBD4B38A1EE752661F200DF3A234296F8E7864260(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * L_19 = VirtFuncInvoker0< List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * >::Invoke(6 /* System.Collections.Generic.List`1<UnityEngine.MeshFilter> HoloToolkit.Unity.SpatialMapping.SpatialMappingSource::GetMeshFilters() */, L_18);
		__this->set_roomMeshFilters_6(L_19);
		// Debug.Log("Mesh filters fetched...");
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral26A33C6F42C4040296A3F3F4FC7BEBEC4B45DF98, /*hidden argument*/NULL);
		// List<Mesh> roomMeshes = new List<Mesh>();
		List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A * L_20 = (List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A *)il2cpp_codegen_object_new(List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A_il2cpp_TypeInfo_var);
		List_1__ctor_mAA85317B67042280DE2323F8D64F49898A02267E(L_20, /*hidden argument*/List_1__ctor_mAA85317B67042280DE2323F8D64F49898A02267E_RuntimeMethod_var);
		V_1 = L_20;
		// foreach (MeshFilter filter in roomMeshFilters)
		List_1_t499E7DD54D22E9B9A7886C75E2517F84B4AFD914 * L_21 = __this->get_roomMeshFilters_6();
		NullCheck(L_21);
		Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27  L_22 = List_1_GetEnumerator_m943E5E6B39F6787CAB42B5F518E11DA814FED42C(L_21, /*hidden argument*/List_1_GetEnumerator_m943E5E6B39F6787CAB42B5F518E11DA814FED42C_RuntimeMethod_var);
		V_3 = L_22;
	}

IL_0087:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0153;
		}

IL_008c:
		{
			// foreach (MeshFilter filter in roomMeshFilters)
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_23 = Enumerator_get_Current_m9DD7E57B846DD679A08FF8D1D6D91EA0B2785FAB((Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m9DD7E57B846DD679A08FF8D1D6D91EA0B2785FAB_RuntimeMethod_var);
			V_4 = L_23;
			// meshCount++;
			int32_t L_24 = __this->get_meshCount_8();
			__this->set_meshCount_8(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
			// string meshName = anchorStoreName + meshCount.ToString();
			String_t* L_25 = __this->get_anchorStoreName_5();
			int32_t* L_26 = __this->get_address_of_meshCount_8();
			String_t* L_27 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_26, /*hidden argument*/NULL);
			String_t* L_28 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_25, L_27, /*hidden argument*/NULL);
			V_5 = L_28;
			// filter.mesh.name = meshName;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_29 = V_4;
			NullCheck(L_29);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_30 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_29, /*hidden argument*/NULL);
			String_t* L_31 = V_5;
			NullCheck(L_30);
			Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_30, L_31, /*hidden argument*/NULL);
			// roomMeshes.Add(filter.mesh);
			List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A * L_32 = V_1;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_33 = V_4;
			NullCheck(L_33);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_34 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			List_1_Add_mF94F07FB1016A588B028FBFB6DC4E5D31A05192C(L_32, L_34, /*hidden argument*/List_1_Add_mF94F07FB1016A588B028FBFB6DC4E5D31A05192C_RuntimeMethod_var);
			// WorldAnchor attachingAnchor = filter.gameObject.GetComponent<WorldAnchor>();
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_35 = V_4;
			NullCheck(L_35);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_35, /*hidden argument*/NULL);
			NullCheck(L_36);
			WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_37 = GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971(L_36, /*hidden argument*/GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971_RuntimeMethod_var);
			V_6 = L_37;
			// if (attachingAnchor == null)
			WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_38 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_39 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_38, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_39)
			{
				goto IL_00fe;
			}
		}

IL_00ee:
		{
			// attachingAnchor = filter.gameObject.AddComponent<WorldAnchor>();
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_40 = V_4;
			NullCheck(L_40);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_40, /*hidden argument*/NULL);
			NullCheck(L_41);
			WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_42 = GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF(L_41, /*hidden argument*/GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF_RuntimeMethod_var);
			V_6 = L_42;
			// }
			goto IL_0113;
		}

IL_00fe:
		{
			// DestroyImmediate(attachingAnchor);
			WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_43 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_43, /*hidden argument*/NULL);
			// attachingAnchor = filter.gameObject.AddComponent<WorldAnchor>();
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_44 = V_4;
			NullCheck(L_44);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_45 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_44, /*hidden argument*/NULL);
			NullCheck(L_45);
			WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_46 = GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF(L_45, /*hidden argument*/GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF_RuntimeMethod_var);
			V_6 = L_46;
		}

IL_0113:
		{
			// if (attachingAnchor.isLocated)
			WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_47 = V_6;
			NullCheck(L_47);
			bool L_48 = WorldAnchor_get_isLocated_mBD0794267AA2F92CBB835F7DE9CFCB2A04B14EE6(L_47, /*hidden argument*/NULL);
			if (!L_48)
			{
				goto IL_0140;
			}
		}

IL_011c:
		{
			// if (!anchorStore.Save(meshName, attachingAnchor))
			WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_49 = __this->get_anchorStore_7();
			String_t* L_50 = V_5;
			WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_51 = V_6;
			NullCheck(L_49);
			bool L_52 = WorldAnchorStore_Save_m1A82C4156B8870A40AC80E0D9027638C2307729B(L_49, L_50, L_51, /*hidden argument*/NULL);
			if (L_52)
			{
				goto IL_0153;
			}
		}

IL_012d:
		{
			// Debug.Log("" + meshName + ": Anchor save failed...");
			String_t* L_53 = V_5;
			String_t* L_54 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_53, _stringLiteralDCE13F7E3361B9049D77A4862591FCB29BDA6EA0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_54, /*hidden argument*/NULL);
			// }
			goto IL_0153;
		}

IL_0140:
		{
			// attachingAnchor.OnTrackingChanged += AttachingAnchor_OnTrackingChanged;
			WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_55 = V_6;
			OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_56 = (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 *)il2cpp_codegen_object_new(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253_il2cpp_TypeInfo_var);
			OnTrackingChangedDelegate__ctor_m9CAD493361EE71D73CB61E7BFD889E88B5649497(L_56, __this, (intptr_t)((intptr_t)RoomSaver_AttachingAnchor_OnTrackingChanged_m35EA054B1AA8880E43102D05E9BF483C185B2F7F_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_55);
			WorldAnchor_add_OnTrackingChanged_m0810CA0788E01F8421C38A372993FB94B2E59D7D(L_55, L_56, /*hidden argument*/NULL);
		}

IL_0153:
		{
			// foreach (MeshFilter filter in roomMeshFilters)
			bool L_57 = Enumerator_MoveNext_mC86BB0FE0D650FDD97110ED1448CE97D10BAAB4F((Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mC86BB0FE0D650FDD97110ED1448CE97D10BAAB4F_RuntimeMethod_var);
			if (L_57)
			{
				goto IL_008c;
			}
		}

IL_015f:
		{
			IL2CPP_LEAVE(0x16F, FINALLY_0161);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0161;
	}

FINALLY_0161:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEBD8CDEEDEDA594C07FA8785E847E24F7C34550A((Enumerator_t926C64D9250EDC8183C239B4047D7D73489AEA27 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mEBD8CDEEDEDA594C07FA8785E847E24F7C34550A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(353)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(353)
	{
		IL2CPP_JUMP_TBL(0x16F, IL_016f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_016f:
	{
		// MeshBuilder builder = gameObject.GetComponent<MeshBuilder>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_58 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		MeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731 * L_59 = GameObject_GetComponent_TisMeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731_m0BC9CB97FB650B71DDAF54518FB585536ECD7CF0(L_58, /*hidden argument*/GameObject_GetComponent_TisMeshBuilder_t22B19B5214823E611271CF39C171EF7DD3590731_m0BC9CB97FB650B71DDAF54518FB585536ECD7CF0_RuntimeMethod_var);
		// builder.SaveMeshesToFile(roomMeshes.ToArray(), "Rooms", FileName);
		List_1_t39C55964794FC06CD3EA3C0F3B62CA1CD6EE250A * L_60 = V_1;
		NullCheck(L_60);
		MeshU5BU5D_tDD9C723AA6F0225B35A93D871CDC2CEFF7F8CB89* L_61 = List_1_ToArray_m5DB47F1B9EF500995DD9D869AA0DB946B15AA171(L_60, /*hidden argument*/List_1_ToArray_m5DB47F1B9EF500995DD9D869AA0DB946B15AA171_RuntimeMethod_var);
		String_t* L_62 = __this->get_FileName_4();
		NullCheck(L_59);
		MeshBuilder_SaveMeshesToFile_mC6B0A5145B168C9A1178A4843734B7FD226B8689(L_59, L_61, _stringLiteral3A28D6F078FD35A505195A0F8EC6F59E9801D7C2, L_62, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RoomSaver::AttachingAnchor_OnTrackingChanged(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RoomSaver_AttachingAnchor_OnTrackingChanged_m35EA054B1AA8880E43102D05E9BF483C185B2F7F (RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___self0, bool ___located1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomSaver_AttachingAnchor_OnTrackingChanged_m35EA054B1AA8880E43102D05E9BF483C185B2F7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (located)
		bool L_0 = ___located1;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		// string meshName = self.gameObject.GetComponent<MeshFilter>().mesh.name;
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_1 = ___self0;
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_3 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_2, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		NullCheck(L_3);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_4 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (!anchorStore.Save(meshName, self))
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_6 = __this->get_anchorStore_7();
		String_t* L_7 = V_0;
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_8 = ___self0;
		NullCheck(L_6);
		bool L_9 = WorldAnchorStore_Save_m1A82C4156B8870A40AC80E0D9027638C2307729B(L_6, L_7, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		// { Debug.Log("" + meshName + ": Anchor save failed..."); }
		String_t* L_10 = V_0;
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_10, _stringLiteralDCE13F7E3361B9049D77A4862591FCB29BDA6EA0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_11, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// self.OnTrackingChanged -= AttachingAnchor_OnTrackingChanged;
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_12 = ___self0;
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_13 = (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 *)il2cpp_codegen_object_new(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253_il2cpp_TypeInfo_var);
		OnTrackingChangedDelegate__ctor_m9CAD493361EE71D73CB61E7BFD889E88B5649497(L_13, __this, (intptr_t)((intptr_t)RoomSaver_AttachingAnchor_OnTrackingChanged_m35EA054B1AA8880E43102D05E9BF483C185B2F7F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_12);
		WorldAnchor_remove_OnTrackingChanged_m3F6B4A3000D652E29ADFA585D779C6DA73930E60(L_12, L_13, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void RoomSaver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RoomSaver__ctor_mEC0E5FC5829FEBCE73C0FCF7ADBC22441C6FF3C5 (RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RoomScanner::Start()
extern "C" IL2CPP_METHOD_ATTR void RoomScanner_Start_m77595D079F521A42DA3ED61A8F3FB0037E05E083 (RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomScanner_Start_m77595D079F521A42DA3ED61A8F3FB0037E05E083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// customMesh = SpatialUnderstanding.Instance.UnderstandingCustomMesh;
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_0 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_0);
		SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * L_1 = SpatialUnderstanding_get_UnderstandingCustomMesh_mBD4B38A1EE752661F200DF3A234296F8E7864260(L_0, /*hidden argument*/NULL);
		__this->set_customMesh_10(L_1);
		// occlusionMat = new Material(Resources.Load("Graphics/Materials/BackdropOcclusion") as Material);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_2 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteral1F2573F45A46AC3825D000A581E79F2B6A2C95E0, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_3, ((Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)IsInstClass((RuntimeObject*)L_2, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->set_occlusionMat_11(L_3);
		// transparentMat = new Material(Resources.Load("Graphics/Materials/transparent") as Material);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_4 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteral0BADF957C8DBB764991F665C57973784D399B5D2, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_5, ((Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)IsInstClass((RuntimeObject*)L_4, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->set_transparentMat_12(L_5);
		// newWireFrameMat = new Material(Resources.Load("Materials/newWireFrame") as Material);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_6 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteral51C99A866426D242016098A30F00EB3A307D1200, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_7, ((Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)IsInstClass((RuntimeObject*)L_6, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->set_newWireFrameMat_13(L_7);
		// SpatialUnderstanding.Instance.ScanStateChanged += Instance_ScanStateChanged;
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_8 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_9, __this, (intptr_t)((intptr_t)RoomScanner_Instance_ScanStateChanged_m0EB43AAB342D98D7395E0E3BE9CFC050C30667AC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		SpatialUnderstanding_add_ScanStateChanged_mD38BDC3B438316A1E738FA780463F159F6CDC88E(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RoomScanner::Instance_ScanStateChanged()
extern "C" IL2CPP_METHOD_ATTR void RoomScanner_Instance_ScanStateChanged_m0EB43AAB342D98D7395E0E3BE9CFC050C30667AC (RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomScanner_Instance_ScanStateChanged_m0EB43AAB342D98D7395E0E3BE9CFC050C30667AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((SpatialUnderstanding.Instance.ScanState == SpatialUnderstanding.ScanStates.Done)
		//     && SpatialUnderstanding.Instance.AllowSpatialUnderstanding)
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_0 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = SpatialUnderstanding_get_ScanState_mB90F82A1F7944226DD22EAEF214DD2E5566CC9D9(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_2 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = SpatialUnderstanding_get_AllowSpatialUnderstanding_m50B6964F235968B8317D16F752A25BBEBDCC4790(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// this.isScanning = false;
		__this->set_isScanning_8((bool)0);
		// Debug.Log("scan completed, state set to 'done'");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralC8CC6528EA7E50B97B15A25AE20CF925FEC490AB, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void RoomScanner::OnScan()
extern "C" IL2CPP_METHOD_ATTR void RoomScanner_OnScan_mAC9393386445620D40F2C616BCD67E4A91F8B18B (RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomScanner_OnScan_mAC9393386445620D40F2C616BCD67E4A91F8B18B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (!this.isScanning)
		bool L_0 = __this->get_isScanning_8();
		if (L_0)
		{
			goto IL_0066;
		}
	}
	{
		// this.isScanning = true;
		__this->set_isScanning_8((bool)1);
		// SpatialMappingManager.Instance.StartObserver();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t26447018AF9300F5EC33AA5527CAACB988793DE6_il2cpp_TypeInfo_var);
		SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * L_1 = Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727(/*hidden argument*/Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727_RuntimeMethod_var);
		NullCheck(L_1);
		SpatialMappingManager_StartObserver_mAF83868F66575C8031916F75AB8BA9E42714B4D2(L_1, /*hidden argument*/NULL);
		// Debug.Log("started scanning: " + DateTime.Now.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = DateTime_ToString_mBB245CB189C10659D35E8E273FB03E34EA1A7122((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral96CA60EC58D478AF3B2E4EBCC4D57F13468E40A3, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_4, /*hidden argument*/NULL);
		// SpatialUnderstanding.Instance.RequestBeginScanning();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_5 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_5);
		SpatialUnderstanding_RequestBeginScanning_mFC43D6CD60E8E4A3C894C2BC25B1C382004EAB8D(L_5, /*hidden argument*/NULL);
		// SpatialMappingManager.Instance.DrawVisualMeshes = true;
		SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * L_6 = Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727(/*hidden argument*/Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727_RuntimeMethod_var);
		NullCheck(L_6);
		SpatialMappingManager_set_DrawVisualMeshes_m5C16634C73CCD8CC8085D8C545410C7FF8090703(L_6, (bool)1, /*hidden argument*/NULL);
		// customMesh = SpatialUnderstanding.Instance.GetComponent<SpatialUnderstandingCustomMesh>();
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_7 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_7);
		SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * L_8 = Component_GetComponent_TisSpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE_m7C00D85C750F60E55E159E228021E32D7F44EEE1(L_7, /*hidden argument*/Component_GetComponent_TisSpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE_m7C00D85C750F60E55E159E228021E32D7F44EEE1_RuntimeMethod_var);
		__this->set_customMesh_10(L_8);
		// customMesh.DrawProcessedMesh = true;
		SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * L_9 = __this->get_customMesh_10();
		NullCheck(L_9);
		SpatialUnderstandingCustomMesh_set_DrawProcessedMesh_m3A2DE602B0B8ABCF468321F37282BFF63D53A3B7(L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void RoomScanner::OnStop()
extern "C" IL2CPP_METHOD_ATTR void RoomScanner_OnStop_mF5A6FD4F1A2BBCF030DF0AB3E4A2BDFCDD8D4B46 (RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomScanner_OnStop_mF5A6FD4F1A2BBCF030DF0AB3E4A2BDFCDD8D4B46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (this.isScanning)
		bool L_0 = __this->get_isScanning_8();
		if (!L_0)
		{
			goto IL_0092;
		}
	}
	{
		// Debug.Log("stopped scanning: " + DateTime.Now.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = DateTime_ToString_mBB245CB189C10659D35E8E273FB03E34EA1A7122((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF203F5DA01122821CF231BB3C6BBE8B828F68992, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// SpatialMappingManager.Instance.StopObserver();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t26447018AF9300F5EC33AA5527CAACB988793DE6_il2cpp_TypeInfo_var);
		SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * L_4 = Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727(/*hidden argument*/Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727_RuntimeMethod_var);
		NullCheck(L_4);
		SpatialMappingManager_StopObserver_mE50F472E7A0F85561EB98BD20AE00B8C3113CA80(L_4, /*hidden argument*/NULL);
		// SpatialUnderstanding.Instance.RequestFinishScan();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_5 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_5);
		SpatialUnderstanding_RequestFinishScan_mB9D16D4DFEB0DC751BCBFDD63D30EC37BBB7A914(L_5, /*hidden argument*/NULL);
		// customMesh.MeshMaterial = occlusionMat;
		SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * L_6 = __this->get_customMesh_10();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = __this->get_occlusionMat_11();
		NullCheck(L_6);
		SpatialUnderstandingCustomMesh_set_MeshMaterial_m3F5B586D5B842B2345FE95A8FAB2546109A06F7D(L_6, L_7, /*hidden argument*/NULL);
		// customMesh.DrawProcessedMesh = true;
		SpatialUnderstandingCustomMesh_tBF908D80C67D380B39196D327B1EE5D0A91BACCE * L_8 = __this->get_customMesh_10();
		NullCheck(L_8);
		SpatialUnderstandingCustomMesh_set_DrawProcessedMesh_m3A2DE602B0B8ABCF468321F37282BFF63D53A3B7(L_8, (bool)1, /*hidden argument*/NULL);
		// SpatialMappingManager.Instance.DrawVisualMeshes = true;
		SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * L_9 = Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727(/*hidden argument*/Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727_RuntimeMethod_var);
		NullCheck(L_9);
		SpatialMappingManager_set_DrawVisualMeshes_m5C16634C73CCD8CC8085D8C545410C7FF8090703(L_9, (bool)1, /*hidden argument*/NULL);
		// this.isScanning = false;
		__this->set_isScanning_8((bool)0);
		// if (mySky == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_mySky_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0092;
		}
	}
	{
		// mySky = Instantiate(Resources.Load("Prefabs/SkyPrefab") as GameObject);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_12 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteralD2389231D8E45D70CEB022346222A8CF3CD786E3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E(((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_12, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var);
		__this->set_mySky_14(L_13);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void RoomScanner::Save()
extern "C" IL2CPP_METHOD_ATTR void RoomScanner_Save_m23184FB0F8BD8C4A5FFA614465BABF7884291694 (RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomScanner_Save_m23184FB0F8BD8C4A5FFA614465BABF7884291694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RoomSaver rs = gameObject.GetComponent<RoomSaver>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38 * L_1 = GameObject_GetComponent_TisRoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38_m33732F8F48FC0694B059822F78758C0676E087E6(L_0, /*hidden argument*/GameObject_GetComponent_TisRoomSaver_t5E548F0048082D731BEAB83B4F2FE30290275B38_m33732F8F48FC0694B059822F78758C0676E087E6_RuntimeMethod_var);
		// rs.SaveRoom();
		NullCheck(L_1);
		RoomSaver_SaveRoom_m418D5AEA0ED894AAC64BB26070062359AD70A978(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RoomScanner::Update()
extern "C" IL2CPP_METHOD_ATTR void RoomScanner_Update_m3F5B4E138C37543ECA1D8F4B7FF2F32F638B46C9 (RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomScanner_Update_m3F5B4E138C37543ECA1D8F4B7FF2F32F638B46C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DebugDisplay != null)
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_0 = __this->get_DebugDisplay_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// DebugDisplay.text = PrimaryText;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_2 = __this->get_DebugDisplay_6();
		String_t* L_3 = RoomScanner_get_PrimaryText_m4C580EFA6C3FAE364269C982B14F1D95A019C804(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.String RoomScanner::get_PrimaryText()
extern "C" IL2CPP_METHOD_ATTR String_t* RoomScanner_get_PrimaryText_m4C580EFA6C3FAE364269C982B14F1D95A019C804 (RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomScanner_get_PrimaryText_m4C580EFA6C3FAE364269C982B14F1D95A019C804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		// if (SpatialUnderstanding.Instance.AllowSpatialUnderstanding)
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_0 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = SpatialUnderstanding_get_AllowSpatialUnderstanding_m50B6964F235968B8317D16F752A25BBEBDCC4790(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00f8;
		}
	}
	{
		// switch (SpatialUnderstanding.Instance.ScanState)
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_2 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = SpatialUnderstanding_get_ScanState_mB90F82A1F7944226DD22EAEF214DD2E5566CC9D9(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00cf;
			}
			case 1:
			{
				goto IL_0037;
			}
			case 2:
			{
				goto IL_00c3;
			}
			case 3:
			{
				goto IL_00c9;
			}
		}
	}
	{
		goto IL_00d5;
	}

IL_0037:
	{
		// IntPtr statsPtr = SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticPlayspaceStatsPtr();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_5 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_5);
		SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F * L_6 = SpatialUnderstanding_get_UnderstandingDLL_m0E60DCEE687A7985BD593860B32BA159EC51F2E6(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		intptr_t L_7 = SpatialUnderstandingDll_GetStaticPlayspaceStatsPtr_m6356049431B97F4AB0B9AC04F1D0B98432146027(L_6, /*hidden argument*/NULL);
		// if (SpatialUnderstandingDll.Imports.QueryPlayspaceStats(statsPtr) == 0)
		int32_t L_8 = Imports_QueryPlayspaceStats_m652714C6FEB399651665A83B9F50F9E5E0154A9D((intptr_t)L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0053;
		}
	}
	{
		// return "playspace stats query failed";
		return _stringLiteral9ED9186A0F887F56122DBB5072BD588D6C9B3B7C;
	}

IL_0053:
	{
		// SpatialUnderstandingDll.Imports.PlayspaceStats stats =
		//     SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticPlayspaceStats();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_9 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_9);
		SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F * L_10 = SpatialUnderstanding_get_UnderstandingDLL_m0E60DCEE687A7985BD593860B32BA159EC51F2E6(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * L_11 = SpatialUnderstandingDll_GetStaticPlayspaceStats_m9282A92024D23FDA08F698B6933990F4E775EA02(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// Renderer thisRend = GameObject.Find("sampleUI/ScanButton").GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral60E5C188E33F5CEBEF3492975DA29288783F0AD3, /*hidden argument*/NULL);
		NullCheck(L_12);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_13 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_12, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		// Vector2 myTexOffset = thisRend.material.GetTextureOffset("_MainTex");
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_14 = L_13;
		NullCheck(L_14);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = Material_GetTextureOffset_m3C0722B8C77DF728586E121E4DD81AED28097789(L_15, _stringLiteralC510EA100EEE1C261FE63B56E1F3390BFB85F481, /*hidden argument*/NULL);
		// float newTexOffset = myTexOffset.y - 0.01f;
		float L_17 = L_16.get_y_1();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_17, (float)(0.01f)));
		// thisRend.material.SetTextureOffset("_MainTex", new Vector2(0, newTexOffset));
		NullCheck(L_14);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_18 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_14, /*hidden argument*/NULL);
		float L_19 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_20), (0.0f), L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		Material_SetTextureOffset_mAF1B6A6AD9E952262F7AE80B17B31D8FF720ADE7(L_18, _stringLiteralC510EA100EEE1C261FE63B56E1F3390BFB85F481, L_20, /*hidden argument*/NULL);
		// return @"Area: " + stats.TotalSurfaceArea.ToString() + " m2";
		PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * L_21 = V_1;
		NullCheck(L_21);
		float* L_22 = L_21->get_address_of_TotalSurfaceArea_2();
		String_t* L_23 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_22, /*hidden argument*/NULL);
		String_t* L_24 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral7428B71C5E419D3F8ADDCB7464038670DDA00499, L_23, _stringLiteral97BF64A0FE16321BEDD94E09C59FBC93209C5FEA, /*hidden argument*/NULL);
		return L_24;
	}

IL_00c3:
	{
		// return "Finalizing scan (please wait)";
		return _stringLiteral420A6D981D530CBD7971AC04ECFBC26DD2BC2294;
	}

IL_00c9:
	{
		// return "Scan complete";
		return _stringLiteralE3F6A9E2CACBB1F9EEED4AF5CD84DC02CD3DA53D;
	}

IL_00cf:
	{
		// return "Ready to Scan";
		return _stringLiteral2F6992681DCC73ADB24108132E8FA385EA5A7F02;
	}

IL_00d5:
	{
		// string workingMsg = @"Working, ScanState = " + SpatialUnderstanding.Instance.ScanState.ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_25 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_25);
		int32_t L_26 = SpatialUnderstanding_get_ScanState_mB90F82A1F7944226DD22EAEF214DD2E5566CC9D9(L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		RuntimeObject * L_27 = Box(ScanStates_t850FF74534813DFA8691D34A2FC26FC4BB2A3D76_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_27);
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		V_0 = *(int32_t*)UnBox(L_27);
		String_t* L_29 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral2FEA78C09CCA645928D865F43632189FEB4461F2, L_28, /*hidden argument*/NULL);
		// return workingMsg;
		return L_29;
	}

IL_00f8:
	{
		// return "Let's start by scanning the room. Tap the green button to continue";
		return _stringLiteralC5C2DBDC83C9E5D4E39D45F36D141650192B7185;
	}
}
// System.String RoomScanner::get_TargetText()
extern "C" IL2CPP_METHOD_ATTR String_t* RoomScanner_get_TargetText_m75C359AA90897F1B5C8B1E0DB7534414A6F2CA33 (RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomScanner_get_TargetText_m75C359AA90897F1B5C8B1E0DB7534414A6F2CA33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return ""; }
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Boolean RoomScanner::get_ReadyForCompletion()
extern "C" IL2CPP_METHOD_ATTR bool RoomScanner_get_ReadyForCompletion_m178E849B7688D11B3FF7AC30793C9F41AB2213D1 (RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomScanner_get_ReadyForCompletion_m178E849B7688D11B3FF7AC30793C9F41AB2213D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((SpatialUnderstanding.Instance.ScanState != SpatialUnderstanding.ScanStates.Scanning) ||
		//     (!SpatialUnderstanding.Instance.AllowSpatialUnderstanding))
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_0 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = SpatialUnderstanding_get_ScanState_mB90F82A1F7944226DD22EAEF214DD2E5566CC9D9(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_2 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = SpatialUnderstanding_get_AllowSpatialUnderstanding_m50B6964F235968B8317D16F752A25BBEBDCC4790(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001b;
		}
	}

IL_0019:
	{
		// return false;
		return (bool)0;
	}

IL_001b:
	{
		// var statsPtr = SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticPlayspaceStatsPtr();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_4 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_4);
		SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F * L_5 = SpatialUnderstanding_get_UnderstandingDLL_m0E60DCEE687A7985BD593860B32BA159EC51F2E6(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		intptr_t L_6 = SpatialUnderstandingDll_GetStaticPlayspaceStatsPtr_m6356049431B97F4AB0B9AC04F1D0B98432146027(L_5, /*hidden argument*/NULL);
		// if (SpatialUnderstandingDll.Imports.QueryPlayspaceStats(statsPtr) == 0)
		int32_t L_7 = Imports_QueryPlayspaceStats_m652714C6FEB399651665A83B9F50F9E5E0154A9D((intptr_t)L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0033:
	{
		// stats = SpatialUnderstanding.Instance.UnderstandingDLL.GetStaticPlayspaceStats();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tE1D059B20BB9B7EB0F33C2CCD265A5A095D1AE55_il2cpp_TypeInfo_var);
		SpatialUnderstanding_t4CE44A5BAA582BF50D5ED20B3F1CAFE8DACED38D * L_8 = Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B(/*hidden argument*/Singleton_1_get_Instance_mED4AD14589369A533FA25244553E80AC1A0BDF5B_RuntimeMethod_var);
		NullCheck(L_8);
		SpatialUnderstandingDll_t8EF6388DEC666D1B878A729E2DDFF38B53E1944F * L_9 = SpatialUnderstanding_get_UnderstandingDLL_m0E60DCEE687A7985BD593860B32BA159EC51F2E6(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * L_10 = SpatialUnderstandingDll_GetStaticPlayspaceStats_m9282A92024D23FDA08F698B6933990F4E775EA02(L_9, /*hidden argument*/NULL);
		__this->set_stats_9(L_10);
		// if ((stats.TotalSurfaceArea > MinAreaForComplete) &&
		//     (stats.UpSurfaceArea > MinPlatormAreaForComplete))
		PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * L_11 = __this->get_stats_9();
		NullCheck(L_11);
		float L_12 = L_11->get_TotalSurfaceArea_2();
		float L_13 = __this->get_MinAreaForComplete_4();
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_007a;
		}
	}
	{
		PlayspaceStats_t9724B7AE8DCC7625363583DDBB73D350BEC0E763 * L_14 = __this->get_stats_9();
		NullCheck(L_14);
		float L_15 = L_14->get_UpSurfaceArea_3();
		float L_16 = __this->get_MinPlatormAreaForComplete_5();
		if ((!(((float)L_15) > ((float)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		// Debug.Log("found a worthy platform, closing mesh...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral8D4EA7429751283C49843A2E9E63AF2EBFA80171, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_007a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void RoomScanner::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RoomScanner__ctor_m00114CB7AFC30C0DB4523D2DBAB319E0DD4AEB8F (RoomScanner_t3D739849025C0CEAF4AA01059EA52626FC46C330 * __this, const RuntimeMethod* method)
{
	{
		// private float MinAreaForComplete = 10.0f;
		__this->set_MinAreaForComplete_4((10.0f));
		// private float MinPlatormAreaForComplete = 2.0f;
		__this->set_MinPlatormAreaForComplete_5((2.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject SkyHook::get_CurrentSky()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * SkyHook_get_CurrentSky_m8970399A508B83D91E86409403CE9076F8BB1547 (SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C * __this, const RuntimeMethod* method)
{
	{
		// public GameObject CurrentSky { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_U3CCurrentSkyU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void SkyHook::set_CurrentSky(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void SkyHook_set_CurrentSky_mC31AAA0FD5FACAFB2A16374247C01B3D5A893EB5 (SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject CurrentSky { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_U3CCurrentSkyU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void SkyHook::Start()
extern "C" IL2CPP_METHOD_ATTR void SkyHook_Start_m3482D2AF9501C91B112C472A4C74A3D2F83A28F3 (SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SkyHook::Update()
extern "C" IL2CPP_METHOD_ATTR void SkyHook_Update_m10A3C5EF3210397BBCE8FA303E07154FB28A47F0 (SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean SkyHook::IsSkyReady()
extern "C" IL2CPP_METHOD_ATTR bool SkyHook_IsSkyReady_m647FFC80E869FB13D311400315BB92ADD0D9591C (SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkyHook_IsSkyReady_m647FFC80E869FB13D311400315BB92ADD0D9591C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameObject.Find("Holograms/SkyPrefab") == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral20F5908E45E1E4258FC5E714CC60CEC425BF27A6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// CurrentSky = Instantiate(Resources.Load("Prefabs/SkyPrefab") as GameObject);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_2 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteralD2389231D8E45D70CEB022346222A8CF3CD786E3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E(((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_2, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var);
		SkyHook_set_CurrentSky_mC31AAA0FD5FACAFB2A16374247C01B3D5A893EB5(__this, L_3, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// CurrentSky = GameObject.Find("SkyPrefab") as GameObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralC10FACE179688B7C5FAA61929EE3DB2D7013C9B5, /*hidden argument*/NULL);
		SkyHook_set_CurrentSky_mC31AAA0FD5FACAFB2A16374247C01B3D5A893EB5(__this, L_4, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void SkyHook::LoadSkyMat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SkyHook_LoadSkyMat_m758A4D80D26F242E4F141CAB3DBF67F83DB29D91 (SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C * __this, String_t* ___category0, String_t* ___itemName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkyHook_LoadSkyMat_m758A4D80D26F242E4F141CAB3DBF67F83DB29D91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_1 = NULL;
	{
		// if (!IsSkyReady()) { return; }
		bool L_0 = SkyHook_IsSkyReady_m647FFC80E869FB13D311400315BB92ADD0D9591C(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsSkyReady()) { return; }
		return;
	}

IL_0009:
	{
		// MeshRenderer globeMesh = CurrentSky.GetComponent<MeshRenderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = SkyHook_get_CurrentSky_m8970399A508B83D91E86409403CE9076F8BB1547(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_2 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_1, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		// string fullMatPath = "Graphics/Sprites/SpacePics/" + category + "/Materials/Panoramic/" + itemName;
		String_t* L_3 = ___category0;
		String_t* L_4 = ___itemName1;
		String_t* L_5 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral54A9F971D64FBF2D053B25EA5DA62B82D42876DA, L_3, _stringLiteralBDC24597B5C04337F590466D27DABD02C7672356, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Debug.Log("loading sky material: " + fullMatPath);
		String_t* L_6 = V_0;
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral8FEE58B3EF9FBABC92ACC041F5378B7DAB315AF1, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// Material targetMaterial = new Material(Resources.Load(fullMatPath) as Material);
		String_t* L_8 = V_0;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_9 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(L_8, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_10 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_10, ((Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)IsInstClass((RuntimeObject*)L_9, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_10;
		// globeMesh.material = targetMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = V_1;
		NullCheck(L_2);
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_2, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SkyHook::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SkyHook__ctor_m02174EFF43412F18F1A10721FDF6FE151127C9AE (SkyHook_t1EA73CA5C9FE5C354D8C8823B338CE975E08C63C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SurfacePlaneManager::Start()
extern "C" IL2CPP_METHOD_ATTR void SurfacePlaneManager_Start_m1EFD85890BD9F3C7D8BDD1E84A6111AB9C29E521 (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfacePlaneManager_Start_m1EFD85890BD9F3C7D8BDD1E84A6111AB9C29E521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SpatialMappingManager.Instance.SetSurfaceMaterial(defaultMaterial);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t26447018AF9300F5EC33AA5527CAACB988793DE6_il2cpp_TypeInfo_var);
		SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * L_0 = Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727(/*hidden argument*/Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727_RuntimeMethod_var);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = __this->get_defaultMaterial_4();
		NullCheck(L_0);
		SpatialMappingManager_SetSurfaceMaterial_mDBA545F74DB61335DFDAD8852080819EF8E4FD7C(L_0, L_1, /*hidden argument*/NULL);
		// SurfaceMeshesToPlanes.Instance.MakePlanesComplete += SurfaceMeshesToPlanes_MakePlanesComplete;
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_il2cpp_TypeInfo_var);
		SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * L_2 = Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6(/*hidden argument*/Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6_RuntimeMethod_var);
		EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3 * L_3 = (EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3 *)il2cpp_codegen_object_new(EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3_il2cpp_TypeInfo_var);
		EventHandler__ctor_m40846AA4A2E8DD23EAB766D4980FE6A3833A2C84(L_3, __this, (intptr_t)((intptr_t)SurfacePlaneManager_SurfaceMeshesToPlanes_MakePlanesComplete_m45B7C0BB9919A3334AA5A93CF028FE28DB28E490_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		SurfaceMeshesToPlanes_add_MakePlanesComplete_m3079288A006DA5DB029B93C1BCA227E3105BDC94(L_2, L_3, /*hidden argument*/NULL);
		// Debug.Log("Surface Plane Manager Started");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral21DFD9E1C48D7A116E002FEA8496584D8614BA9E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SurfacePlaneManager::Initialise()
extern "C" IL2CPP_METHOD_ATTR void SurfacePlaneManager_Initialise_mE1A596E46E4C247374B79FBBC054C04CB555394D (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, const RuntimeMethod* method)
{
	{
		// readyToBuild = true;
		__this->set_readyToBuild_10((bool)1);
		// }
		return;
	}
}
// System.Void SurfacePlaneManager::Update()
extern "C" IL2CPP_METHOD_ATTR void SurfacePlaneManager_Update_mA52AC6D3DE08A0EFC5914F305C59F9915F517C0E (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfacePlaneManager_Update_mA52AC6D3DE08A0EFC5914F305C59F9915F517C0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!meshesProcessed && readyToBuild)
		bool L_0 = __this->get_meshesProcessed_9();
		if (L_0)
		{
			goto IL_003d;
		}
	}
	{
		bool L_1 = __this->get_readyToBuild_10();
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// if (SpatialMappingManager.Instance.IsObserverRunning())
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t26447018AF9300F5EC33AA5527CAACB988793DE6_il2cpp_TypeInfo_var);
		SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * L_2 = Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727(/*hidden argument*/Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = SpatialMappingManager_IsObserverRunning_m88A13920F194678FA7F9184F69E01096027D2869(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// SpatialMappingManager.Instance.StopObserver();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t26447018AF9300F5EC33AA5527CAACB988793DE6_il2cpp_TypeInfo_var);
		SpatialMappingManager_tD0F7D28E4A17BB93A79AAA8AC31468E97A4284E1 * L_4 = Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727(/*hidden argument*/Singleton_1_get_Instance_m0BAA79E167B3C8C0433C731BDEB596CDEA26C727_RuntimeMethod_var);
		NullCheck(L_4);
		SpatialMappingManager_StopObserver_mE50F472E7A0F85561EB98BD20AE00B8C3113CA80(L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// CreatePlanes();
		SurfacePlaneManager_CreatePlanes_m278A0E0FD052B02AEFCD2CB2A6C8F5C776AFAE82(__this, /*hidden argument*/NULL);
		// meshesProcessed = true;
		__this->set_meshesProcessed_9((bool)1);
		// Debug.Log("planes created");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral0D9463573B24241AE3F9484280F707C1BFB9508C, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void SurfacePlaneManager::SurfaceMeshesToPlanes_MakePlanesComplete(System.Object,System.EventArgs)
extern "C" IL2CPP_METHOD_ATTR void SurfacePlaneManager_SurfaceMeshesToPlanes_MakePlanesComplete_m45B7C0BB9919A3334AA5A93CF028FE28DB28E490 (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, RuntimeObject * ___source0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfacePlaneManager_SurfaceMeshesToPlanes_MakePlanesComplete_m45B7C0BB9919A3334AA5A93CF028FE28DB28E490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myTables = SurfaceMeshesToPlanes.Instance.GetActivePlanes(PlaneTypes.Table);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_il2cpp_TypeInfo_var);
		SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * L_0 = Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6(/*hidden argument*/Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_1 = SurfaceMeshesToPlanes_GetActivePlanes_m2D29EC3E018E7055E17A7D0E249F3AC9871940AB(L_0, 8, /*hidden argument*/NULL);
		__this->set_myTables_7(L_1);
		// myWalls = SurfaceMeshesToPlanes.Instance.GetActivePlanes(PlaneTypes.Wall);
		SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * L_2 = Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6(/*hidden argument*/Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_3 = SurfaceMeshesToPlanes_GetActivePlanes_m2D29EC3E018E7055E17A7D0E249F3AC9871940AB(L_2, 1, /*hidden argument*/NULL);
		__this->set_myWalls_8(L_3);
		// Debug.Log(myWalls.Count + " walls found, " + myTables.Count + " tables found");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_6 = __this->get_myWalls_8();
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_6, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_5;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral11EB6379BFD2A43C2135C59D0E6021ED16076E2E);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral11EB6379BFD2A43C2135C59D0E6021ED16076E2E);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_12 = __this->get_myTables_7();
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_12, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_11;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral8C4758AE32BA9B430D84636A045A88CD12C841C2);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral8C4758AE32BA9B430D84636A045A88CD12C841C2);
		String_t* L_17 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_17, /*hidden argument*/NULL);
		// if (!heavensPresent)
		bool L_18 = __this->get_heavensPresent_11();
		if (L_18)
		{
			goto IL_00c6;
		}
	}
	{
		// Sky = Instantiate(Resources.Load("Prefabs/SkyPrefab") as GameObject);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_19 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteralD2389231D8E45D70CEB022346222A8CF3CD786E3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E(((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_19, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var);
		__this->set_Sky_12(L_20);
		// Sky.transform.parent = this.gameObject.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_Sky_12();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_21, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_22, L_24, /*hidden argument*/NULL);
		// Sky.name = "SkyPrefab";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = __this->get_Sky_12();
		NullCheck(L_25);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_25, _stringLiteralC10FACE179688B7C5FAA61929EE3DB2D7013C9B5, /*hidden argument*/NULL);
		// heavensPresent = true;
		__this->set_heavensPresent_11((bool)1);
		// Debug.Log("Heavens placed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral4D5605EFF615CE812F8F6A998C982C9ADC8996F5, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		// }
		return;
	}
}
// System.Void SurfacePlaneManager::CreatePlanes()
extern "C" IL2CPP_METHOD_ATTR void SurfacePlaneManager_CreatePlanes_m278A0E0FD052B02AEFCD2CB2A6C8F5C776AFAE82 (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfacePlaneManager_CreatePlanes_m278A0E0FD052B02AEFCD2CB2A6C8F5C776AFAE82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * V_0 = NULL;
	{
		// SurfaceMeshesToPlanes surfaceToPlanes = SurfaceMeshesToPlanes.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_il2cpp_TypeInfo_var);
		SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * L_0 = Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6(/*hidden argument*/Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6_RuntimeMethod_var);
		V_0 = L_0;
		// if (surfaceToPlanes != null && surfaceToPlanes.enabled)
		SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// surfaceToPlanes.MakePlanes();
		SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * L_5 = V_0;
		NullCheck(L_5);
		SurfaceMeshesToPlanes_MakePlanes_mC49CD572142028FD966A2ED0BB40AC4F879CB85B(L_5, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void SurfacePlaneManager::RemoveVertices(System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR void SurfacePlaneManager_RemoveVertices_mFEAEF1BF5340D467247928345E337C0BDC7D5A09 (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, RuntimeObject* ___boundingObjects0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfacePlaneManager_RemoveVertices_mFEAEF1BF5340D467247928345E337C0BDC7D5A09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F * V_0 = NULL;
	{
		// RemoveSurfaceVertices removeVerts = RemoveSurfaceVertices.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t7BBDA5EB54CB2C92DEC72266653ED8B3CF3165B6_il2cpp_TypeInfo_var);
		RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F * L_0 = Singleton_1_get_Instance_m0B5E5059A638EF2B49E39E22F59268289A5E8B8F(/*hidden argument*/Singleton_1_get_Instance_m0B5E5059A638EF2B49E39E22F59268289A5E8B8F_RuntimeMethod_var);
		V_0 = L_0;
		// if (removeVerts != null && removeVerts.enabled)
		RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// removeVerts.RemoveSurfaceVerticesWithinBounds(boundingObjects);
		RemoveSurfaceVertices_t4E3EF8E802112236BCBDF5E4FAEF72D9429E683F * L_5 = V_0;
		RuntimeObject* L_6 = ___boundingObjects0;
		NullCheck(L_5);
		RemoveSurfaceVertices_RemoveSurfaceVerticesWithinBounds_mAC01455D54B270DB01ADB85C8E618C324AF67005(L_5, L_6, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void SurfacePlaneManager::Build_New_Walls(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR void SurfacePlaneManager_Build_New_Walls_m14FED336903A578ADB0DCFDD4A895F033B3BBA76 (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___vertical0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfacePlaneManager_Build_New_Walls_m14FED336903A578ADB0DCFDD4A895F033B3BBA76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD * V_0 = NULL;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_4 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * V_6 = NULL;
	Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  V_7;
	memset(&V_7, 0, sizeof(V_7));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_8 = NULL;
	float V_9 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD * L_0 = (U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass15_0__ctor_m7631039EC04B660C62C12AD78E8375C1D06728CA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// float maxPlaneSize = 0;
		V_1 = (0.0f);
		// int bigWallIndex = 0;
		V_2 = 0;
		// foreach (GameObject p in vertical)
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_1 = ___vertical0;
		NullCheck(L_1);
		Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  L_2 = List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B(L_1, /*hidden argument*/List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B_RuntimeMethod_var);
		V_7 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_0018:
		{
			// foreach (GameObject p in vertical)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_7), /*hidden argument*/Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_RuntimeMethod_var);
			V_8 = L_3;
			// float _area = p.transform.localScale.x * p.transform.localScale.y;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_8;
			NullCheck(L_4);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_5, /*hidden argument*/NULL);
			float L_7 = L_6.get_x_2();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_8;
			NullCheck(L_8);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_9, /*hidden argument*/NULL);
			float L_11 = L_10.get_y_3();
			V_9 = ((float)il2cpp_codegen_multiply((float)L_7, (float)L_11));
			// if (_area > maxPlaneSize)
			float L_12 = V_9;
			float L_13 = V_1;
			if ((!(((float)L_12) > ((float)L_13))))
			{
				goto IL_0057;
			}
		}

IL_004b:
		{
			// maxPlaneSize = _area;
			float L_14 = V_9;
			V_1 = L_14;
			// bigWallIndex = vertical.IndexOf(p);
			List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_15 = ___vertical0;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = V_8;
			NullCheck(L_15);
			int32_t L_17 = List_1_IndexOf_m9F7F6206F384B51E590B7621EB4A7F323AC0236B(L_15, L_16, /*hidden argument*/List_1_IndexOf_m9F7F6206F384B51E590B7621EB4A7F323AC0236B_RuntimeMethod_var);
			V_2 = L_17;
		}

IL_0057:
		{
			// foreach (GameObject p in vertical)
			bool L_18 = Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0018;
			}
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_7), /*hidden argument*/Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x70, IL_0070)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0070:
	{
		// Debug.Log(vertical.Count + " walls found. The largest identified at index " + bigWallIndex +
		//     " with area: " + maxPlaneSize.ToString() + "m2");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_19;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_21 = ___vertical0;
		NullCheck(L_21);
		int32_t L_22 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_21, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_24);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_24);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = L_20;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral9D09D3F02449593C652EB1B04C6B326E0751E7A8);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral9D09D3F02449593C652EB1B04C6B326E0751E7A8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = L_25;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_29);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = L_26;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral51F3F6058315A0D52B4FE8B1124E9C509E1640E2);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral51F3F6058315A0D52B4FE8B1124E9C509E1640E2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_31 = L_30;
		String_t* L_32 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_32);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = L_31;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral32D332DA761F44DF7959E5887B6B94CB4667D781);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral32D332DA761F44DF7959E5887B6B94CB4667D781);
		String_t* L_34 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_34, /*hidden argument*/NULL);
		// GameObject largestWall = vertical[bigWallIndex];
		U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD * L_35 = V_0;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_36 = ___vertical0;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_38 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_36, L_37, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		NullCheck(L_35);
		L_35->set_largestWall_0(L_38);
		// GameObject daWall = SurfaceMeshesToPlanes.Instance.GetActivePlanes(PlaneTypes.Wall).Find(a => a.gameObject == largestWall);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_il2cpp_TypeInfo_var);
		SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * L_39 = Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6(/*hidden argument*/Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6_RuntimeMethod_var);
		NullCheck(L_39);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_40 = SurfaceMeshesToPlanes_GetActivePlanes_m2D29EC3E018E7055E17A7D0E249F3AC9871940AB(L_39, 1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD * L_41 = V_0;
		Predicate_1_t48BB388EA438A1C355ACBE79048A63506508DF74 * L_42 = (Predicate_1_t48BB388EA438A1C355ACBE79048A63506508DF74 *)il2cpp_codegen_object_new(Predicate_1_t48BB388EA438A1C355ACBE79048A63506508DF74_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mBD87FCC5CFFA8FD4212C5463D3BBAC15B5702C39(L_42, L_41, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass15_0_U3CBuild_New_WallsU3Eb__0_mD6903AB3BBB8750BC0026E53602C402B43DDA021_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_mBD87FCC5CFFA8FD4212C5463D3BBAC15B5702C39_RuntimeMethod_var);
		NullCheck(L_40);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = List_1_Find_m7BF7690EEA49C7C1225860D999C3B58C9F604F5B(L_40, L_42, /*hidden argument*/List_1_Find_m7BF7690EEA49C7C1225860D999C3B58C9F604F5B_RuntimeMethod_var);
		V_3 = L_43;
		// daWall.GetComponent<MeshRenderer>().material = new Material(Resources.Load("Graphics/Materials/transparent") as Material);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = V_3;
		NullCheck(L_44);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_45 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_44, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_46 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteral0BADF957C8DBB764991F665C57973784D399B5D2, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_47 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_47, ((Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)IsInstClass((RuntimeObject*)L_46, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_45);
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_45, L_47, /*hidden argument*/NULL);
		// GameObject myWindow = Instantiate(Resources.Load("Prefabs/WindowInWall") as GameObject);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_48 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteral870C4D14A2F4F414FDC8A62288355953151615D9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_49 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E(((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_48, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var);
		V_4 = L_49;
		// myWindow.transform.position = largestWall.transform.position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_50 = V_4;
		NullCheck(L_50);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_50, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD * L_52 = V_0;
		NullCheck(L_52);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_53 = L_52->get_largestWall_0();
		NullCheck(L_53);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_54 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_54, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_51, L_55, /*hidden argument*/NULL);
		// myWindow.transform.rotation = largestWall.transform.rotation * Quaternion.Euler(0f, 0f, 90f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_56 = V_4;
		NullCheck(L_56);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_57 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_56, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD * L_58 = V_0;
		NullCheck(L_58);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_59 = L_58->get_largestWall_0();
		NullCheck(L_59);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_60 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_61 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_62 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_63 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_61, L_62, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_57, L_63, /*hidden argument*/NULL);
		// Vector3 wallScale = largestWall.transform.localScale;
		U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD * L_64 = V_0;
		NullCheck(L_64);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_65 = L_64->get_largestWall_0();
		NullCheck(L_65);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_66 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_66, /*hidden argument*/NULL);
		V_5 = L_67;
		// myWindow.transform.localScale = new Vector3(wallScale.x/2, wallScale.y/2, myWindow.transform.localScale.z);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_68 = V_4;
		NullCheck(L_68);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_69 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_68, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_70 = V_5;
		float L_71 = L_70.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = V_5;
		float L_73 = L_72.get_y_3();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_74 = V_4;
		NullCheck(L_74);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_75 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_74, /*hidden argument*/NULL);
		NullCheck(L_75);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_75, /*hidden argument*/NULL);
		float L_77 = L_76.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78;
		memset(&L_78, 0, sizeof(L_78));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_78), ((float)((float)L_71/(float)(2.0f))), ((float)((float)L_73/(float)(2.0f))), L_77, /*hidden argument*/NULL);
		NullCheck(L_69);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_69, L_78, /*hidden argument*/NULL);
		// Debug.Log("window placed. " +
		//                 "\n POS: " + myWindow.transform.position +
		//                 "\n ROT: " + myWindow.transform.rotation +
		//                 "\n SCL: " + myWindow.transform.localScale);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_79 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_80 = L_79;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, _stringLiteral3D92DD7D56B0B860BA30655F57759A457D8947DE);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3D92DD7D56B0B860BA30655F57759A457D8947DE);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_81 = L_80;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_82 = V_4;
		NullCheck(L_82);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_83 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_82, /*hidden argument*/NULL);
		NullCheck(L_83);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_83, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85 = L_84;
		RuntimeObject * L_86 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_85);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_86);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_86);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_87 = L_81;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, _stringLiteralCA396B231572735D7AC16BA7F561C29C9A2A579D);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralCA396B231572735D7AC16BA7F561C29C9A2A579D);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_88 = L_87;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_89 = V_4;
		NullCheck(L_89);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_90 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_89, /*hidden argument*/NULL);
		NullCheck(L_90);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_91 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_90, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_92 = L_91;
		RuntimeObject * L_93 = Box(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var, &L_92);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_93);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_93);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_94 = L_88;
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, _stringLiteralAA9CD9CDB1D2C113038D1500F66A224BB8352130);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralAA9CD9CDB1D2C113038D1500F66A224BB8352130);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_95 = L_94;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_96 = V_4;
		NullCheck(L_96);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_97 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_98 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_97, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_99 = L_98;
		RuntimeObject * L_100 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_99);
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, L_100);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_100);
		String_t* L_101 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_95, /*hidden argument*/NULL);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_101, /*hidden argument*/NULL);
		// Debug.Log("wall material set to " + daWall.GetComponent<MeshRenderer>().material.name);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_102 = V_3;
		NullCheck(L_102);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_103 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_102, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		NullCheck(L_103);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_104 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_103, /*hidden argument*/NULL);
		NullCheck(L_104);
		String_t* L_105 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_104, /*hidden argument*/NULL);
		String_t* L_106 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral1581D60B8C3A511FBF1DB9CFC263B1A0305848B7, L_105, /*hidden argument*/NULL);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_106, /*hidden argument*/NULL);
		// List<GameObject> ObjectsToRemove = new List<GameObject> { largestWall };
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_107 = (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *)il2cpp_codegen_object_new(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var);
		List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6(L_107, /*hidden argument*/List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_108 = L_107;
		U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD * L_109 = V_0;
		NullCheck(L_109);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_110 = L_109->get_largestWall_0();
		NullCheck(L_108);
		List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112(L_108, L_110, /*hidden argument*/List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var);
		V_6 = L_108;
		// RemoveVertices(ObjectsToRemove);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_111 = V_6;
		SurfacePlaneManager_RemoveVertices_mFEAEF1BF5340D467247928345E337C0BDC7D5A09(__this, L_111, /*hidden argument*/NULL);
		// RemoveVertices(SurfaceMeshesToPlanes.Instance.ActivePlanes);
		SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * L_112 = Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6(/*hidden argument*/Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6_RuntimeMethod_var);
		NullCheck(L_112);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_113 = L_112->get_ActivePlanes_6();
		SurfacePlaneManager_RemoveVertices_mFEAEF1BF5340D467247928345E337C0BDC7D5A09(__this, L_113, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SurfacePlaneManager::isSkyReady()
extern "C" IL2CPP_METHOD_ATTR bool SurfacePlaneManager_isSkyReady_m2209C9D334BCA8F6FCA56D14E03EED234F28DCDB (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfacePlaneManager_isSkyReady_m2209C9D334BCA8F6FCA56D14E03EED234F28DCDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameObject.Find("Holograms/SkyPrefab") == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral20F5908E45E1E4258FC5E714CC60CEC425BF27A6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// Sky = GameObject.Find("Holograms/SkyPrefab") as GameObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral20F5908E45E1E4258FC5E714CC60CEC425BF27A6, /*hidden argument*/NULL);
		__this->set_Sky_12(L_2);
		// return true;
		return (bool)1;
	}
}
// System.Void SurfacePlaneManager::Load_Sky_Material(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SurfacePlaneManager_Load_Sky_Material_mF67219FA89307F64B81E23372E622C990C6F2BC9 (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, String_t* ___category0, String_t* ___itemName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfacePlaneManager_Load_Sky_Material_mF67219FA89307F64B81E23372E622C990C6F2BC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_1 = NULL;
	{
		// if (!isSkyReady()) { return; }
		bool L_0 = SurfacePlaneManager_isSkyReady_m2209C9D334BCA8F6FCA56D14E03EED234F28DCDB(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!isSkyReady()) { return; }
		return;
	}

IL_0009:
	{
		// MeshRenderer globeMesh = Sky.GetComponent<MeshRenderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_Sky_12();
		NullCheck(L_1);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_2 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_1, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		// string fullMatPath = "Graphics/Sprites/SpacePics/" + category + "/Materials/Panoramic/" + itemName;
		String_t* L_3 = ___category0;
		String_t* L_4 = ___itemName1;
		String_t* L_5 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral54A9F971D64FBF2D053B25EA5DA62B82D42876DA, L_3, _stringLiteralBDC24597B5C04337F590466D27DABD02C7672356, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Debug.Log("loading sky material: " + fullMatPath);
		String_t* L_6 = V_0;
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral8FEE58B3EF9FBABC92ACC041F5378B7DAB315AF1, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// Material targetMaterial = new Material(Resources.Load(fullMatPath) as Material);
		String_t* L_8 = V_0;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_9 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(L_8, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_10 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_10, ((Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)IsInstClass((RuntimeObject*)L_9, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_10;
		// globeMesh.material = targetMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = V_1;
		NullCheck(L_2);
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_2, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SurfacePlaneManager::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void SurfacePlaneManager_OnDestroy_m17873D8B6A15FC4A5F9B5423452702BF8C5B9192 (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfacePlaneManager_OnDestroy_m17873D8B6A15FC4A5F9B5423452702BF8C5B9192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SurfaceMeshesToPlanes.Instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_il2cpp_TypeInfo_var);
		SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * L_0 = Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6(/*hidden argument*/Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// SurfaceMeshesToPlanes.Instance.MakePlanesComplete -= SurfaceMeshesToPlanes_MakePlanesComplete;
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t244B8DC2CA6AC51BD0656A7B78D49D591CA9614F_il2cpp_TypeInfo_var);
		SurfaceMeshesToPlanes_t75239C96CD6469865F5E03C650BB03EE443DFF19 * L_2 = Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6(/*hidden argument*/Singleton_1_get_Instance_m83AD857CDC9794B9912EE3FA17707F837A2FEAD6_RuntimeMethod_var);
		EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3 * L_3 = (EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3 *)il2cpp_codegen_object_new(EventHandler_tE81EC78CF8C89D4885ED33BC43FBBC44524727B3_il2cpp_TypeInfo_var);
		EventHandler__ctor_m40846AA4A2E8DD23EAB766D4980FE6A3833A2C84(L_3, __this, (intptr_t)((intptr_t)SurfacePlaneManager_SurfaceMeshesToPlanes_MakePlanesComplete_m45B7C0BB9919A3334AA5A93CF028FE28DB28E490_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		SurfaceMeshesToPlanes_remove_MakePlanesComplete_m948F2B095CF5096F247E47620CD2C16D3F79521B(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void SurfacePlaneManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SurfacePlaneManager__ctor_m21EEA716C0958E7401C7E58C329C176C035ED743 (SurfacePlaneManager_t54B965849568E284FCD0AC115E95483CB9782211 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfacePlaneManager__ctor_m21EEA716C0958E7401C7E58C329C176C035ED743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public uint minimumWalls = 1;
		__this->set_minimumWalls_6(1);
		// private List<GameObject> myTables = new List<GameObject>();
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_0 = (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *)il2cpp_codegen_object_new(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var);
		List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6(L_0, /*hidden argument*/List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var);
		__this->set_myTables_7(L_0);
		// private List<GameObject> myWalls = new List<GameObject>();
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_1 = (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *)il2cpp_codegen_object_new(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var);
		List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6(L_1, /*hidden argument*/List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var);
		__this->set_myWalls_8(L_1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SurfacePlaneManager_<>c__DisplayClass15_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m7631039EC04B660C62C12AD78E8375C1D06728CA (U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SurfacePlaneManager_<>c__DisplayClass15_0::<Build_New_Walls>b__0(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CBuild_New_WallsU3Eb__0_mD6903AB3BBB8750BC0026E53602C402B43DDA021 (U3CU3Ec__DisplayClass15_0_t8003F3A8210D3B9340DD8D56588A4A1188AA68DD * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass15_0_U3CBuild_New_WallsU3Eb__0_mD6903AB3BBB8750BC0026E53602C402B43DDA021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject daWall = SurfaceMeshesToPlanes.Instance.GetActivePlanes(PlaneTypes.Wall).Find(a => a.gameObject == largestWall);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___a0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_largestWall_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void catapultBehaviour::Start()
extern "C" IL2CPP_METHOD_ATTR void catapultBehaviour_Start_mE7C87C0B318BFE3F3980105FCBDB66C4B4C6FA7C (catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (catapultBehaviour_Start_mE7C87C0B318BFE3F3980105FCBDB66C4B4C6FA7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// lifeTimeInTicks = ((int)(ProjectileLifetime * 100)) * 100000;
		float L_0 = __this->get_ProjectileLifetime_5();
		__this->set_lifeTimeInTicks_8((((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_0, (float)(100.0f)))))), (int32_t)((int32_t)100000)))))));
		// currentProjectile = GameObject.FindGameObjectWithTag("Respawn");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteral1B63D897AAE9E943E49128B782090601AEE549D2, /*hidden argument*/NULL);
		__this->set_currentProjectile_6(L_1);
		// if (currentProjectile != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_currentProjectile_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		// projectileBirthTick = DateTime.UtcNow.Ticks;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_4 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_0 = L_4;
		int64_t L_5 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), /*hidden argument*/NULL);
		__this->set_projectileBirthTick_7(L_5);
	}

IL_004b:
	{
		// ReloadCatapult();
		catapultBehaviour_ReloadCatapult_mBF5D62C5E48489BD7F784A1C16CD74A9343AFB48(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void catapultBehaviour::CreateProjectile()
extern "C" IL2CPP_METHOD_ATTR void catapultBehaviour_CreateProjectile_mC60B06270797A148781BD204704D14661EA8FB41 (catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (catapultBehaviour_CreateProjectile_mC60B06270797A148781BD204704D14661EA8FB41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// currentProjectile = Instantiate(Resources.Load("Prefabs/projectile") as GameObject, ReleasePoint.transform);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteral208061E1AC5FCFB0AD1365BC7692039694C494F1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_ReleasePoint_4();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var)), L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		__this->set_currentProjectile_6(L_3);
		// currentProjectile.GetComponent<Rigidbody>().useGravity = false;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_currentProjectile_6();
		NullCheck(L_4);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_5 = GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903(L_4, /*hidden argument*/GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var);
		NullCheck(L_5);
		Rigidbody_set_useGravity_mB0D957A9D8A9819E18D2E81F465C5C0B60CBC6DA(L_5, (bool)0, /*hidden argument*/NULL);
		// projectileBirthTick = DateTime.UtcNow.Ticks;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_6 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_0 = L_6;
		int64_t L_7 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), /*hidden argument*/NULL);
		__this->set_projectileBirthTick_7(L_7);
		// SolverHandler mySH = currentProjectile.AddComponent<SolverHandler>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentProjectile_6();
		NullCheck(L_8);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_9 = GameObject_AddComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mED82B88562CC22F180BF24172145DC74F2ACDCDE(L_8, /*hidden argument*/GameObject_AddComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mED82B88562CC22F180BF24172145DC74F2ACDCDE_RuntimeMethod_var);
		// mySH.TrackedTargetType = Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType.CustomOverride;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_10 = L_9;
		NullCheck(L_10);
		SolverHandler_set_TrackedTargetType_m3EC1B0663FC2B4E076EB81A2542D68CD77995A68(L_10, 7, /*hidden argument*/NULL);
		// mySH.TransformOverride = ReleasePoint.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_ReleasePoint_4();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		SolverHandler_set_TransformOverride_m1B17A0062A3BC4E0310347578426A31DE1CEF4E3(L_10, L_12, /*hidden argument*/NULL);
		// currentProjectile.GetComponent<InBetween>().Lifetime = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_currentProjectile_6();
		NullCheck(L_13);
		InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * L_14 = GameObject_GetComponent_TisInBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_mC91114824ACBA952D28C2787030DB6BE4E55FD51(L_13, /*hidden argument*/GameObject_GetComponent_TisInBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_mC91114824ACBA952D28C2787030DB6BE4E55FD51_RuntimeMethod_var);
		NullCheck(L_14);
		Solver_set_Lifetime_mD22A0F4EC649A405AE6A65B8CC4B9B38DFCECCDC(L_14, (0.0f), /*hidden argument*/NULL);
		// currentProjectile.GetComponent<InBetween>().PartwayOffset = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_currentProjectile_6();
		NullCheck(L_15);
		InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * L_16 = GameObject_GetComponent_TisInBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_mC91114824ACBA952D28C2787030DB6BE4E55FD51(L_15, /*hidden argument*/GameObject_GetComponent_TisInBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_mC91114824ACBA952D28C2787030DB6BE4E55FD51_RuntimeMethod_var);
		NullCheck(L_16);
		InBetween_set_PartwayOffset_mA61C26A918E2662475C67CAE7EEAADD3B40E35DD(L_16, (0.0f), /*hidden argument*/NULL);
		// currentProjectile.GetComponent<InBetween>().enabled = true;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_currentProjectile_6();
		NullCheck(L_17);
		InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * L_18 = GameObject_GetComponent_TisInBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_mC91114824ACBA952D28C2787030DB6BE4E55FD51(L_17, /*hidden argument*/GameObject_GetComponent_TisInBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_mC91114824ACBA952D28C2787030DB6BE4E55FD51_RuntimeMethod_var);
		NullCheck(L_18);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_18, (bool)1, /*hidden argument*/NULL);
		// currentProjectile.GetComponent<InBetween>().SecondTransformOverride = ReleasePoint.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_currentProjectile_6();
		NullCheck(L_19);
		InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * L_20 = GameObject_GetComponent_TisInBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_mC91114824ACBA952D28C2787030DB6BE4E55FD51(L_19, /*hidden argument*/GameObject_GetComponent_TisInBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_mC91114824ACBA952D28C2787030DB6BE4E55FD51_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_ReleasePoint_4();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		InBetween_set_SecondTransformOverride_m571D59399588177B775713ECFC536A09FFCC8660(L_20, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void catapultBehaviour::ReloadCatapult()
extern "C" IL2CPP_METHOD_ATTR void catapultBehaviour_ReloadCatapult_mBF5D62C5E48489BD7F784A1C16CD74A9343AFB48 (catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (catapultBehaviour_ReloadCatapult_mBF5D62C5E48489BD7F784A1C16CD74A9343AFB48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (currentProjectile == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_currentProjectile_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// CreateProjectile();
		catapultBehaviour_CreateProjectile_mC60B06270797A148781BD204704D14661EA8FB41(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// else if (DateTime.UtcNow.Ticks - projectileBirthTick > lifeTimeInTicks)
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_0 = L_2;
		int64_t L_3 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), /*hidden argument*/NULL);
		int64_t L_4 = __this->get_projectileBirthTick_7();
		int64_t L_5 = __this->get_lifeTimeInTicks_8();
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)L_4))) <= ((int64_t)L_5)))
		{
			goto IL_0049;
		}
	}
	{
		// Destroy(currentProjectile);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_currentProjectile_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
		// currentProjectile = null;
		__this->set_currentProjectile_6((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// CreateProjectile();
		catapultBehaviour_CreateProjectile_mC60B06270797A148781BD204704D14661EA8FB41(__this, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void catapultBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void catapultBehaviour__ctor_m5D9B996DEC17C6D4A5CFA8E5380E89F88BD24E3D (catapultBehaviour_t56F29EF4AAE65621D41869BB77EAE2045CC29A53 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
