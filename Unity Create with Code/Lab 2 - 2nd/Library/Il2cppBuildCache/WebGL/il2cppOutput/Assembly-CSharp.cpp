#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// DestroyOutOfBounds
struct DestroyOutOfBounds_t106A4BE09BBC6641F890F615A33EFD6EF8B402BA;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// MissileController
struct MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// SpawnManager
struct SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral68541C9C1CE3A413A4F706117EC712FF91E04484;
IL2CPP_EXTERN_C String_t* _stringLiteral76531CE4E854E094EC40A41CB0598C949FF0C8DA;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2;
IL2CPP_EXTERN_C String_t* _stringLiteralA326F67D6CC6C7DBF9B7DDA9C7108EBD82B15A17;
IL2CPP_EXTERN_C String_t* _stringLiteralB17325C47E763EB7B3B3BF062AE30931D13759C8;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC51DA38E72D438F873E3480F1342BE979DB390;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralEC05F0607D8E97E40B15477EB785D8EFE887EA15;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA_m35C1B3560C4BCFCCB42EBD064B6B76FA1CA84BA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE_m7830182BC2D4BE0BC6B2D1EDF77854F0C5F8C0AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct  ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_4), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_12 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// DestroyOutOfBounds
struct  DestroyOutOfBounds_t106A4BE09BBC6641F890F615A33EFD6EF8B402BA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SpawnManager DestroyOutOfBounds::spawnManager
	SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * ___spawnManager_4;
	// System.Single DestroyOutOfBounds::xBounds
	float ___xBounds_5;
	// System.Single DestroyOutOfBounds::zBounds
	float ___zBounds_6;
	// System.Single DestroyOutOfBounds::offset
	float ___offset_7;

public:
	inline static int32_t get_offset_of_spawnManager_4() { return static_cast<int32_t>(offsetof(DestroyOutOfBounds_t106A4BE09BBC6641F890F615A33EFD6EF8B402BA, ___spawnManager_4)); }
	inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * get_spawnManager_4() const { return ___spawnManager_4; }
	inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE ** get_address_of_spawnManager_4() { return &___spawnManager_4; }
	inline void set_spawnManager_4(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * value)
	{
		___spawnManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_xBounds_5() { return static_cast<int32_t>(offsetof(DestroyOutOfBounds_t106A4BE09BBC6641F890F615A33EFD6EF8B402BA, ___xBounds_5)); }
	inline float get_xBounds_5() const { return ___xBounds_5; }
	inline float* get_address_of_xBounds_5() { return &___xBounds_5; }
	inline void set_xBounds_5(float value)
	{
		___xBounds_5 = value;
	}

	inline static int32_t get_offset_of_zBounds_6() { return static_cast<int32_t>(offsetof(DestroyOutOfBounds_t106A4BE09BBC6641F890F615A33EFD6EF8B402BA, ___zBounds_6)); }
	inline float get_zBounds_6() const { return ___zBounds_6; }
	inline float* get_address_of_zBounds_6() { return &___zBounds_6; }
	inline void set_zBounds_6(float value)
	{
		___zBounds_6 = value;
	}

	inline static int32_t get_offset_of_offset_7() { return static_cast<int32_t>(offsetof(DestroyOutOfBounds_t106A4BE09BBC6641F890F615A33EFD6EF8B402BA, ___offset_7)); }
	inline float get_offset_7() const { return ___offset_7; }
	inline float* get_address_of_offset_7() { return &___offset_7; }
	inline void set_offset_7(float value)
	{
		___offset_7 = value;
	}
};


// MissileController
struct  MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MissileController::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};


// PlayerController
struct  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PlayerController::speed
	float ___speed_4;
	// System.Single PlayerController::xBound
	float ___xBound_5;
	// System.Single PlayerController::zBound
	float ___zBound_6;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_xBound_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___xBound_5)); }
	inline float get_xBound_5() const { return ___xBound_5; }
	inline float* get_address_of_xBound_5() { return &___xBound_5; }
	inline void set_xBound_5(float value)
	{
		___xBound_5 = value;
	}

	inline static int32_t get_offset_of_zBound_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___zBound_6)); }
	inline float get_zBound_6() const { return ___zBound_6; }
	inline float* get_address_of_zBound_6() { return &___zBound_6; }
	inline void set_zBound_6(float value)
	{
		___zBound_6 = value;
	}
};


// SpawnManager
struct  SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject SpawnManager::missile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___missile_4;
	// System.Single SpawnManager::xBound
	float ___xBound_5;
	// System.Single SpawnManager::zBound
	float ___zBound_6;
	// System.Single SpawnManager::elapsedTime
	float ___elapsedTime_7;
	// System.Single SpawnManager::spawnSpeedOrigin
	float ___spawnSpeedOrigin_8;
	// System.Single SpawnManager::spawnSpeed
	float ___spawnSpeed_9;
	// System.Single SpawnManager::spawnSpeedIncr
	float ___spawnSpeedIncr_10;
	// System.Single SpawnManager::offset
	float ___offset_11;
	// System.Int32 SpawnManager::counter
	int32_t ___counter_12;

public:
	inline static int32_t get_offset_of_missile_4() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___missile_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_missile_4() const { return ___missile_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_missile_4() { return &___missile_4; }
	inline void set_missile_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___missile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missile_4), (void*)value);
	}

	inline static int32_t get_offset_of_xBound_5() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___xBound_5)); }
	inline float get_xBound_5() const { return ___xBound_5; }
	inline float* get_address_of_xBound_5() { return &___xBound_5; }
	inline void set_xBound_5(float value)
	{
		___xBound_5 = value;
	}

	inline static int32_t get_offset_of_zBound_6() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___zBound_6)); }
	inline float get_zBound_6() const { return ___zBound_6; }
	inline float* get_address_of_zBound_6() { return &___zBound_6; }
	inline void set_zBound_6(float value)
	{
		___zBound_6 = value;
	}

	inline static int32_t get_offset_of_elapsedTime_7() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___elapsedTime_7)); }
	inline float get_elapsedTime_7() const { return ___elapsedTime_7; }
	inline float* get_address_of_elapsedTime_7() { return &___elapsedTime_7; }
	inline void set_elapsedTime_7(float value)
	{
		___elapsedTime_7 = value;
	}

	inline static int32_t get_offset_of_spawnSpeedOrigin_8() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___spawnSpeedOrigin_8)); }
	inline float get_spawnSpeedOrigin_8() const { return ___spawnSpeedOrigin_8; }
	inline float* get_address_of_spawnSpeedOrigin_8() { return &___spawnSpeedOrigin_8; }
	inline void set_spawnSpeedOrigin_8(float value)
	{
		___spawnSpeedOrigin_8 = value;
	}

	inline static int32_t get_offset_of_spawnSpeed_9() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___spawnSpeed_9)); }
	inline float get_spawnSpeed_9() const { return ___spawnSpeed_9; }
	inline float* get_address_of_spawnSpeed_9() { return &___spawnSpeed_9; }
	inline void set_spawnSpeed_9(float value)
	{
		___spawnSpeed_9 = value;
	}

	inline static int32_t get_offset_of_spawnSpeedIncr_10() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___spawnSpeedIncr_10)); }
	inline float get_spawnSpeedIncr_10() const { return ___spawnSpeedIncr_10; }
	inline float* get_address_of_spawnSpeedIncr_10() { return &___spawnSpeedIncr_10; }
	inline void set_spawnSpeedIncr_10(float value)
	{
		___spawnSpeedIncr_10 = value;
	}

	inline static int32_t get_offset_of_offset_11() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___offset_11)); }
	inline float get_offset_11() const { return ___offset_11; }
	inline float* get_address_of_offset_11() { return &___offset_11; }
	inline void set_offset_11(float value)
	{
		___offset_11 = value;
	}

	inline static int32_t get_offset_of_counter_12() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___counter_12)); }
	inline int32_t get_counter_12() const { return ___counter_12; }
	inline int32_t* get_address_of_counter_12() { return &___counter_12; }
	inline void set_counter_12(int32_t value)
	{
		___counter_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SpawnManager>()
inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * GameObject_GetComponent_TisSpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE_m7830182BC2D4BE0BC6B2D1EDF77854F0C5F8C0AD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * __this, const RuntimeMethod* method);
// System.Collections.ArrayList SpawnManager::getBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * SpawnManager_getBounds_mB70F1567DDC5D3928AB8BA911362CA5398209BE6 (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void SpawnManager::Difficulty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_Difficulty_mD6DA30474FDBF1AB501218AB33FF312A9ABD405B (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MissileController>()
inline MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA * GameObject_GetComponent_TisMissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA_m35C1B3560C4BCFCCB42EBD064B6B76FA1CA84BA2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 SpawnManager::getStartPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SpawnManager_getStartPosition_m18A970870D6C1E1EC821E1386B0F3AEA9164C678 (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 SpawnManager::getEndPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SpawnManager_getEndPosition_m3274B782C650142B6DC3EB952D1AAAF6CA20C48E (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void MissileController::addSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_addSpeed_m1DD38F5A7D1A586FB843B3EE7BE6132E24CE0D5B (MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA * __this, float ___s0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DestroyOutOfBounds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOutOfBounds_Start_mF1982FE2F4AF5912172A4359E1C65ED580ABD67C (DestroyOutOfBounds_t106A4BE09BBC6641F890F615A33EFD6EF8B402BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE_m7830182BC2D4BE0BC6B2D1EDF77854F0C5F8C0AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB17325C47E763EB7B3B3BF062AE30931D13759C8);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * V_0 = NULL;
	{
		// spawnManager = GameObject.Find("SpawnManager").GetComponent<SpawnManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB17325C47E763EB7B3B3BF062AE30931D13759C8, /*hidden argument*/NULL);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_1;
		L_1 = GameObject_GetComponent_TisSpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE_m7830182BC2D4BE0BC6B2D1EDF77854F0C5F8C0AD(L_0, /*hidden argument*/GameObject_GetComponent_TisSpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE_m7830182BC2D4BE0BC6B2D1EDF77854F0C5F8C0AD_RuntimeMethod_var);
		__this->set_spawnManager_4(L_1);
		// ArrayList test = new ArrayList();
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_2 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_2, /*hidden argument*/NULL);
		// ArrayList boundsOffset = spawnManager.getBounds();
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_3 = __this->get_spawnManager_4();
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_4;
		L_4 = SpawnManager_getBounds_mB70F1567DDC5D3928AB8BA911362CA5398209BE6(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// xBounds = (float)boundsOffset[0];
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_5 = V_0;
		RuntimeObject * L_6;
		L_6 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_5, 0);
		__this->set_xBounds_5(((*(float*)((float*)UnBox(L_6, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))));
		// zBounds = (float)boundsOffset[1];
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_7 = V_0;
		RuntimeObject * L_8;
		L_8 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_7, 1);
		__this->set_zBounds_6(((*(float*)((float*)UnBox(L_8, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))));
		// offset = (float)boundsOffset[2];
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_9 = V_0;
		RuntimeObject * L_10;
		L_10 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(22 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_9, 2);
		__this->set_offset_7(((*(float*)((float*)UnBox(L_10, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))));
		// }
		return;
	}
}
// System.Void DestroyOutOfBounds::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOutOfBounds_Update_m2337730029C731551291E932F658C0E098AAFE59 (DestroyOutOfBounds_t106A4BE09BBC6641F890F615A33EFD6EF8B402BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gameObject.transform.position.x > xBounds + offset * 2 ||
		//    gameObject.transform.position.x < -xBounds - offset * 2 ||
		//    gameObject.transform.position.z > zBounds + offset * 2 ||
		//    gameObject.transform.position.z < -zBounds - offset * 2 )
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_0();
		float L_4 = __this->get_xBounds_5();
		float L_5 = __this->get_offset_7();
		if ((((float)L_3) > ((float)((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)(2.0f))))))))
		{
			goto IL_00ad;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_0();
		float L_10 = __this->get_xBounds_5();
		float L_11 = __this->get_offset_7();
		if ((((float)L_9) < ((float)((float)il2cpp_codegen_subtract((float)((-L_10)), (float)((float)il2cpp_codegen_multiply((float)L_11, (float)(2.0f))))))))
		{
			goto IL_00ad;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_2();
		float L_16 = __this->get_zBounds_6();
		float L_17 = __this->get_offset_7();
		if ((((float)L_15) > ((float)((float)il2cpp_codegen_add((float)L_16, (float)((float)il2cpp_codegen_multiply((float)L_17, (float)(2.0f))))))))
		{
			goto IL_00ad;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_z_2();
		float L_22 = __this->get_zBounds_6();
		float L_23 = __this->get_offset_7();
		if ((!(((float)L_21) < ((float)((float)il2cpp_codegen_subtract((float)((-L_22)), (float)((float)il2cpp_codegen_multiply((float)L_23, (float)(2.0f)))))))))
		{
			goto IL_00c3;
		}
	}

IL_00ad:
	{
		// spawnManager.Difficulty();
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_24 = __this->get_spawnManager_4();
		SpawnManager_Difficulty_mD6DA30474FDBF1AB501218AB33FF312A9ABD405B(L_24, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_25, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void DestroyOutOfBounds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOutOfBounds__ctor_mB18D293D861B36C889E2E31B07673E10C0CDD5DC (DestroyOutOfBounds_t106A4BE09BBC6641F890F615A33EFD6EF8B402BA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MissileController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_Start_mE5C97F72EDE5A4BD3CB230B195B08638082099F5 (MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MissileController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_Update_mD8A97D534873B0C72EAD14B485AEE9DC81962638 (MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA * __this, const RuntimeMethod* method)
{
	{
		// transform.position = new Vector3(transform.position.x, 1, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), L_3, (1.0f), L_6, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_7, /*hidden argument*/NULL);
		// transform.Translate(Vector3.up * Time.deltaTime * speed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_12, /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_8, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MissileController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_OnTriggerEnter_m81B4B1A43D4B83E3AA7B39D0A2FAD8497D5B83C2 (MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.name == "Player")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.Log("hit");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void MissileController::addSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController_addSpeed_m1DD38F5A7D1A586FB843B3EE7BE6132E24CE0D5B (MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA * __this, float ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC05F0607D8E97E40B15477EB785D8EFE887EA15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Speed added");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralEC05F0607D8E97E40B15477EB785D8EFE887EA15, /*hidden argument*/NULL);
		// speed += s;
		float L_0 = __this->get_speed_4();
		float L_1 = ___s0;
		__this->set_speed_4(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// System.Void MissileController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileController__ctor_m9720A999D87D869B8D7EAC867BD319F8F65AE75C (MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 10;
		__this->set_speed_4((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m9531F30EC892BDD1758A2EEC724E86EFBDA150A3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_mB31159CAD7DD2329859472554BC9154A83D8E794 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Translate(new Vector3(
		//     Input.GetAxis("Horizontal") * Time.deltaTime * speed,
		//     0,
		//     Input.GetAxis("Vertical") * Time.deltaTime * speed));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_3 = __this->get_speed_4();
		float L_4;
		L_4 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_6 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), (float)L_3)), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (float)L_6)), /*hidden argument*/NULL);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_7, /*hidden argument*/NULL);
		// if(transform.position.x > xBound)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_0();
		float L_11 = __this->get_xBound_5();
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0094;
		}
	}
	{
		// transform.position = new Vector3(-xBound, transform.position.y, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_13 = __this->get_xBound_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), ((-L_13)), L_16, L_19, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_20, /*hidden argument*/NULL);
		// }else if (transform.position.x < -xBound)
		goto IL_00e3;
	}

IL_0094:
	{
		// }else if (transform.position.x < -xBound)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_0();
		float L_24 = __this->get_xBound_5();
		if ((!(((float)L_23) < ((float)((-L_24))))))
		{
			goto IL_00e3;
		}
	}
	{
		// transform.position = new Vector3(xBound, transform.position.y, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_26 = __this->get_xBound_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_y_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), L_26, L_29, L_32, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_33, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		// if (transform.position.z > zBound)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_z_2();
		float L_37 = __this->get_zBound_6();
		if ((!(((float)L_36) > ((float)L_37))))
		{
			goto IL_0134;
		}
	}
	{
		// transform.position = new Vector3(-transform.position.x, transform.position.y, -zBound);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		float L_44 = L_43.get_y_1();
		float L_45 = __this->get_zBound_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_46), ((-L_41)), L_44, ((-L_45)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_38, L_46, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0134:
	{
		// else if (transform.position.z < -zBound)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_z_2();
		float L_50 = __this->get_zBound_6();
		if ((!(((float)L_49) < ((float)((-L_50))))))
		{
			goto IL_0183;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x, transform.position.y, zBound);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		float L_54 = L_53.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_55, /*hidden argument*/NULL);
		float L_57 = L_56.get_y_1();
		float L_58 = __this->get_zBound_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_59), L_54, L_57, L_58, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_51, L_59, /*hidden argument*/NULL);
	}

IL_0183:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 20;
		__this->set_speed_4((20.0f));
		// private float xBound = 24.5f;
		__this->set_xBound_5((24.5f));
		// private float zBound = 17f;
		__this->set_zBound_6((17.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SpawnManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_Start_mFA050B5C59C7CC47F4430CA0F5A646051D5442CB (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA_m35C1B3560C4BCFCCB42EBD064B6B76FA1CA84BA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnSpeedOrigin = spawnSpeed;
		float L_0 = __this->get_spawnSpeed_9();
		__this->set_spawnSpeedOrigin_8(L_0);
		// missile.GetComponent<MissileController>().speed = 10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_missile_4();
		MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA * L_2;
		L_2 = GameObject_GetComponent_TisMissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA_m35C1B3560C4BCFCCB42EBD064B6B76FA1CA84BA2(L_1, /*hidden argument*/GameObject_GetComponent_TisMissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA_m35C1B3560C4BCFCCB42EBD064B6B76FA1CA84BA2_RuntimeMethod_var);
		L_2->set_speed_4((10.0f));
		// }
		return;
	}
}
// System.Void SpawnManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_Update_m68C1739F474F0D29A0BF533BD44BA82786A3C96B (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// elapsedTime += Time.deltaTime;
		float L_0 = __this->get_elapsedTime_7();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_elapsedTime_7(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if(elapsedTime >= spawnSpeed)
		float L_2 = __this->get_elapsedTime_7();
		float L_3 = __this->get_spawnSpeed_9();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0089;
		}
	}
	{
		// Vector3 startPos = getStartPosition();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = SpawnManager_getStartPosition_m18A970870D6C1E1EC821E1386B0F3AEA9164C678(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		// Vector3 endPos = getEndPosition(startPos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = SpawnManager_getEndPosition_m3274B782C650142B6DC3EB952D1AAAF6CA20C48E(__this, L_5, /*hidden argument*/NULL);
		// Vector3 targetDir = endPos - startPos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_6, L_7, /*hidden argument*/NULL);
		// Vector3 up = missile.transform.up;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_missile_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// float angle = Vector3.SignedAngle(targetDir, up, Vector3.up);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_14;
		L_14 = Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A(L_8, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		// Instantiate(missile, startPos, missile.transform.rotation * Quaternion.AngleAxis(angle, Vector3.right));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_missile_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_missile_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_18, /*hidden argument*/NULL);
		float L_20 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_20, L_21, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_19, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_16, L_23, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// elapsedTime = 0;
		__this->set_elapsedTime_7((0.0f));
	}

IL_0089:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 SpawnManager::getStartPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SpawnManager_getStartPosition_m18A970870D6C1E1EC821E1386B0F3AEA9164C678 (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int side = Random.Range(1, 4);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 4, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 position = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_002b;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_0089;
			}
			case 3:
			{
				goto IL_00b6;
			}
		}
	}
	{
		goto IL_00e2;
	}

IL_002b:
	{
		// position = new Vector3(-xBound - offset, 0, Random.Range(-zBound, zBound));
		float L_3 = __this->get_xBound_5();
		float L_4 = __this->get_offset_11();
		float L_5 = __this->get_zBound_6();
		float L_6 = __this->get_zBound_6();
		float L_7;
		L_7 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_5)), L_6, /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)il2cpp_codegen_subtract((float)((-L_3)), (float)L_4)), (0.0f), L_7, /*hidden argument*/NULL);
		// break;
		goto IL_00e2;
	}

IL_005c:
	{
		// position = new Vector3(Random.Range(-xBound, xBound), 0, zBound + offset);
		float L_8 = __this->get_xBound_5();
		float L_9 = __this->get_xBound_5();
		float L_10;
		L_10 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_8)), L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_zBound_6();
		float L_12 = __this->get_offset_11();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_10, (0.0f), ((float)il2cpp_codegen_add((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		// break;
		goto IL_00e2;
	}

IL_0089:
	{
		// position = new Vector3(xBound + offset, 0, Random.Range(-zBound, zBound));
		float L_13 = __this->get_xBound_5();
		float L_14 = __this->get_offset_11();
		float L_15 = __this->get_zBound_6();
		float L_16 = __this->get_zBound_6();
		float L_17;
		L_17 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_15)), L_16, /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)il2cpp_codegen_add((float)L_13, (float)L_14)), (0.0f), L_17, /*hidden argument*/NULL);
		// break;
		goto IL_00e2;
	}

IL_00b6:
	{
		// position = new Vector3(Random.Range(-xBound, xBound), 0, -zBound - offset);
		float L_18 = __this->get_xBound_5();
		float L_19 = __this->get_xBound_5();
		float L_20;
		L_20 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_18)), L_19, /*hidden argument*/NULL);
		float L_21 = __this->get_zBound_6();
		float L_22 = __this->get_offset_11();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_20, (0.0f), ((float)il2cpp_codegen_subtract((float)((-L_21)), (float)L_22)), /*hidden argument*/NULL);
	}

IL_00e2:
	{
		// return position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_1;
		return L_23;
	}
}
// UnityEngine.Vector3 SpawnManager::getEndPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SpawnManager_getEndPosition_m3274B782C650142B6DC3EB952D1AAAF6CA20C48E (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 endPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (startPosition.x < -xBound)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___startPosition0;
		float L_2 = L_1.get_x_0();
		float L_3 = __this->get_xBound_5();
		if ((!(((float)L_2) < ((float)((-L_3))))))
		{
			goto IL_0043;
		}
	}
	{
		// endPosition = new Vector3(Random.Range(0, xBound), 0, Random.Range(-zBound, zBound));
		float L_4 = __this->get_xBound_5();
		float L_5;
		L_5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_zBound_6();
		float L_7 = __this->get_zBound_6();
		float L_8;
		L_8 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_6)), L_7, /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_5, (0.0f), L_8, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// if (startPosition.z > zBound)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___startPosition0;
		float L_10 = L_9.get_z_2();
		float L_11 = __this->get_zBound_6();
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0080;
		}
	}
	{
		// endPosition = new Vector3(Random.Range(-xBound, xBound), 0, Random.Range(-zBound, 0));
		float L_12 = __this->get_xBound_5();
		float L_13 = __this->get_xBound_5();
		float L_14;
		L_14 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_12)), L_13, /*hidden argument*/NULL);
		float L_15 = __this->get_zBound_6();
		float L_16;
		L_16 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_15)), (0.0f), /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_14, (0.0f), L_16, /*hidden argument*/NULL);
	}

IL_0080:
	{
		// if (startPosition.x > xBound)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = ___startPosition0;
		float L_18 = L_17.get_x_0();
		float L_19 = __this->get_xBound_5();
		if ((!(((float)L_18) > ((float)L_19))))
		{
			goto IL_00bd;
		}
	}
	{
		// endPosition = new Vector3(Random.Range(-xBound, 0), 0, Random.Range(-zBound, zBound));
		float L_20 = __this->get_xBound_5();
		float L_21;
		L_21 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_20)), (0.0f), /*hidden argument*/NULL);
		float L_22 = __this->get_zBound_6();
		float L_23 = __this->get_zBound_6();
		float L_24;
		L_24 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_22)), L_23, /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_21, (0.0f), L_24, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// if (startPosition.z < -zBound)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = ___startPosition0;
		float L_26 = L_25.get_z_2();
		float L_27 = __this->get_zBound_6();
		if ((!(((float)L_26) < ((float)((-L_27))))))
		{
			goto IL_00fa;
		}
	}
	{
		// endPosition = new Vector3(Random.Range(-xBound, xBound), 0, Random.Range(0, zBound));
		float L_28 = __this->get_xBound_5();
		float L_29 = __this->get_xBound_5();
		float L_30;
		L_30 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_28)), L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_zBound_6();
		float L_32;
		L_32 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), L_31, /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_30, (0.0f), L_32, /*hidden argument*/NULL);
	}

IL_00fa:
	{
		// return endPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_0;
		return L_33;
	}
}
// System.Collections.ArrayList SpawnManager::getBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * SpawnManager_getBounds_mB70F1567DDC5D3928AB8BA911362CA5398209BE6 (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ArrayList bounds = new ArrayList { xBound, zBound, offset};
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_0, /*hidden argument*/NULL);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_1 = L_0;
		float L_2 = __this->get_xBound_5();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5;
		L_5 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_1, L_4);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_6 = L_1;
		float L_7 = __this->get_zBound_6();
		float L_8 = L_7;
		RuntimeObject * L_9 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_8);
		int32_t L_10;
		L_10 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_6, L_9);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_11 = L_6;
		float L_12 = __this->get_offset_11();
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_13);
		int32_t L_15;
		L_15 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(24 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_11, L_14);
		// return bounds;
		return L_11;
	}
}
// System.Void SpawnManager::Difficulty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_Difficulty_mD6DA30474FDBF1AB501218AB33FF312A9ABD405B (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA_m35C1B3560C4BCFCCB42EBD064B6B76FA1CA84BA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68541C9C1CE3A413A4F706117EC712FF91E04484);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76531CE4E854E094EC40A41CB0598C949FF0C8DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA326F67D6CC6C7DBF9B7DDA9C7108EBD82B15A17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC51DA38E72D438F873E3480F1342BE979DB390);
		s_Il2CppMethodInitialized = true;
	}
	{
		// counter += 1;
		int32_t L_0 = __this->get_counter_12();
		__this->set_counter_12(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// Debug.Log("dif " + counter + " " + missile.GetComponent<MissileController>().speed);
		int32_t* L_1 = __this->get_address_of_counter_12();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_missile_4();
		MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA * L_4;
		L_4 = GameObject_GetComponent_TisMissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA_m35C1B3560C4BCFCCB42EBD064B6B76FA1CA84BA2(L_3, /*hidden argument*/GameObject_GetComponent_TisMissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA_m35C1B3560C4BCFCCB42EBD064B6B76FA1CA84BA2_RuntimeMethod_var);
		float* L_5 = L_4->get_address_of_speed_4();
		String_t* L_6;
		L_6 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral68541C9C1CE3A413A4F706117EC712FF91E04484, L_2, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// if (counter == missile.GetComponent<MissileController>().speed)
		int32_t L_8 = __this->get_counter_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_missile_4();
		MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA * L_10;
		L_10 = GameObject_GetComponent_TisMissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA_m35C1B3560C4BCFCCB42EBD064B6B76FA1CA84BA2(L_9, /*hidden argument*/GameObject_GetComponent_TisMissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA_m35C1B3560C4BCFCCB42EBD064B6B76FA1CA84BA2_RuntimeMethod_var);
		float L_11 = L_10->get_speed_4();
		if ((!(((float)((float)((float)L_8))) == ((float)L_11))))
		{
			goto IL_00cf;
		}
	}
	{
		// Debug.Log("reset counter");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBDC51DA38E72D438F873E3480F1342BE979DB390, /*hidden argument*/NULL);
		// counter = 0;
		__this->set_counter_12(0);
		// missile.GetComponent<MissileController>().addSpeed(1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_missile_4();
		MissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA * L_13;
		L_13 = GameObject_GetComponent_TisMissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA_m35C1B3560C4BCFCCB42EBD064B6B76FA1CA84BA2(L_12, /*hidden argument*/GameObject_GetComponent_TisMissileController_t09013E9BC389457552DD8266F3B0C31E46494BCA_m35C1B3560C4BCFCCB42EBD064B6B76FA1CA84BA2_RuntimeMethod_var);
		MissileController_addSpeed_m1DD38F5A7D1A586FB843B3EE7BE6132E24CE0D5B(L_13, (1.0f), /*hidden argument*/NULL);
		// if (spawnSpeed > 0 + spawnSpeedIncr)
		float L_14 = __this->get_spawnSpeed_9();
		float L_15 = __this->get_spawnSpeedIncr_10();
		if ((!(((float)L_14) > ((float)((float)il2cpp_codegen_add((float)(0.0f), (float)L_15))))))
		{
			goto IL_00b3;
		}
	}
	{
		// Debug.Log("Spawn Speed incr");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA326F67D6CC6C7DBF9B7DDA9C7108EBD82B15A17, /*hidden argument*/NULL);
		// spawnSpeed -= spawnSpeedIncr;
		float L_16 = __this->get_spawnSpeed_9();
		float L_17 = __this->get_spawnSpeedIncr_10();
		__this->set_spawnSpeed_9(((float)il2cpp_codegen_subtract((float)L_16, (float)L_17)));
		// }
		return;
	}

IL_00b3:
	{
		// spawnSpeed = spawnSpeed / 2;
		float L_18 = __this->get_spawnSpeed_9();
		__this->set_spawnSpeed_9(((float)((float)L_18/(float)(2.0f))));
		// Debug.Log("stupid Spawn Speed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral76531CE4E854E094EC40A41CB0598C949FF0C8DA, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void SpawnManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager__ctor_mBCD48EEAB1EB733A88D47C85ACC373C796F20E59 (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method)
{
	{
		// private float xBound = 25;
		__this->set_xBound_5((25.0f));
		// private float zBound = 17;
		__this->set_zBound_6((17.0f));
		// private float spawnSpeed = 1;
		__this->set_spawnSpeed_9((1.0f));
		// private float spawnSpeedIncr = 0.1f;
		__this->set_spawnSpeedIncr_10((0.100000001f));
		// private float offset = 10;
		__this->set_offset_11((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___z2;
		__this->set_z_2(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_2();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
