#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4;
// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C;
// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC;
// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3;
// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F;
// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0;
// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA;
// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// ExitGames.Client.Photon.PreserveAttribute
struct PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;
// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4, ___m_company_0)); }
	inline String_t* get_m_company_0() const { return ___m_company_0; }
	inline String_t** get_address_of_m_company_0() { return &___m_company_0; }
	inline void set_m_company_0(String_t* value)
	{
		___m_company_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_company_0), (void*)value);
	}
};


// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::m_configuration
	String_t* ___m_configuration_0;

public:
	inline static int32_t get_offset_of_m_configuration_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C, ___m_configuration_0)); }
	inline String_t* get_m_configuration_0() const { return ___m_configuration_0; }
	inline String_t** get_address_of_m_configuration_0() { return &___m_configuration_0; }
	inline void set_m_configuration_0(String_t* value)
	{
		___m_configuration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_configuration_0), (void*)value);
	}
};


// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC, ___m_copyright_0)); }
	inline String_t* get_m_copyright_0() const { return ___m_copyright_0; }
	inline String_t** get_address_of_m_copyright_0() { return &___m_copyright_0; }
	inline void set_m_copyright_0(String_t* value)
	{
		___m_copyright_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_copyright_0), (void*)value);
	}
};


// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::m_description
	String_t* ___m_description_0;

public:
	inline static int32_t get_offset_of_m_description_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3, ___m_description_0)); }
	inline String_t* get_m_description_0() const { return ___m_description_0; }
	inline String_t** get_address_of_m_description_0() { return &___m_description_0; }
	inline void set_m_description_0(String_t* value)
	{
		___m_description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_description_0), (void*)value);
	}
};


// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____version_0), (void*)value);
	}
};


// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::m_informationalVersion
	String_t* ___m_informationalVersion_0;

public:
	inline static int32_t get_offset_of_m_informationalVersion_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0, ___m_informationalVersion_0)); }
	inline String_t* get_m_informationalVersion_0() const { return ___m_informationalVersion_0; }
	inline String_t** get_address_of_m_informationalVersion_0() { return &___m_informationalVersion_0; }
	inline void set_m_informationalVersion_0(String_t* value)
	{
		___m_informationalVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_informationalVersion_0), (void*)value);
	}
};


// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::m_product
	String_t* ___m_product_0;

public:
	inline static int32_t get_offset_of_m_product_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA, ___m_product_0)); }
	inline String_t* get_m_product_0() const { return ___m_product_0; }
	inline String_t** get_address_of_m_product_0() { return &___m_product_0; }
	inline void set_m_product_0(String_t* value)
	{
		___m_product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_product_0), (void*)value);
	}
};


// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::m_title
	String_t* ___m_title_0;

public:
	inline static int32_t get_offset_of_m_title_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7, ___m_title_0)); }
	inline String_t* get_m_title_0() const { return ___m_title_0; }
	inline String_t** get_address_of_m_title_0() { return &___m_title_0; }
	inline void set_m_title_0(String_t* value)
	{
		___m_title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_title_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_memberName_0), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// ExitGames.Client.Photon.PreserveAttribute
struct PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkName
	String_t* ____frameworkName_0;
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkDisplayName
	String_t* ____frameworkDisplayName_1;

public:
	inline static int32_t get_offset_of__frameworkName_0() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkName_0)); }
	inline String_t* get__frameworkName_0() const { return ____frameworkName_0; }
	inline String_t** get_address_of__frameworkName_0() { return &____frameworkName_0; }
	inline void set__frameworkName_0(String_t* value)
	{
		____frameworkName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkName_0), (void*)value);
	}

	inline static int32_t get_offset_of__frameworkDisplayName_1() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkDisplayName_1)); }
	inline String_t* get__frameworkDisplayName_1() const { return ____frameworkDisplayName_1; }
	inline String_t** get_address_of__frameworkDisplayName_1() { return &____frameworkDisplayName_1; }
	inline void set__frameworkDisplayName_1(String_t* value)
	{
		____frameworkDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkDisplayName_1), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Diagnostics.DebuggerBrowsableState
struct DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyInformationalVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678 (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * __this, String_t* ___informationalVersion0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25 (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * __this, String_t* ___description0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3 (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * __this, String_t* ___copyright0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyConfigurationAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757 (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * __this, String_t* ___configuration0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0 (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * __this, String_t* ___company0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___frameworkName0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::set_FrameworkDisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8 (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * __this, String_t* ___product0, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5 (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mF554E615AABA52B09603056EE3728E3511502D33 (PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F * __this, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, const RuntimeMethod* method);
static void Photon3Unity3D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * tmp = (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 *)cache->attributes[0];
		AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x33\x55\x6E\x69\x74\x79\x33\x44"), NULL);
	}
	{
		AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * tmp = (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 *)cache->attributes[1];
		AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678(tmp, il2cpp_codegen_string_new_wrapper("\x34\x2E\x31\x2E\x36\x2E\x36"), NULL);
	}
	{
		AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * tmp = (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F *)cache->attributes[2];
		AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D(tmp, il2cpp_codegen_string_new_wrapper("\x34\x2E\x31\x2E\x36\x2E\x36"), NULL);
	}
	{
		AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * tmp = (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 *)cache->attributes[3];
		AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x20\x2E\x4E\x65\x74\x20\x43\x6C\x69\x65\x6E\x74\x20\x4C\x69\x62\x72\x61\x72\x79\x2E\x20\x44\x65\x62\x75\x67\x2E"), NULL);
	}
	{
		AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * tmp = (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC *)cache->attributes[4];
		AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3(tmp, il2cpp_codegen_string_new_wrapper("\x28\x63\x29\x20\x45\x78\x69\x74\x20\x47\x61\x6D\x65\x73\x20\x47\x6D\x62\x48\x2C\x20\x68\x74\x74\x70\x3A\x2F\x2F\x77\x77\x77\x2E\x65\x78\x69\x74\x67\x61\x6D\x65\x73\x2E\x63\x6F\x6D"), NULL);
	}
	{
		AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * tmp = (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C *)cache->attributes[5];
		AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2D\x44\x65\x62\x75\x67"), NULL);
	}
	{
		AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * tmp = (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 *)cache->attributes[6];
		AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0(tmp, il2cpp_codegen_string_new_wrapper("\x45\x78\x69\x74\x20\x47\x61\x6D\x65\x73\x20\x47\x6D\x62\x48"), NULL);
	}
	{
		TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * tmp = (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 *)cache->attributes[7];
		TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x53\x74\x61\x6E\x64\x61\x72\x64\x2C\x56\x65\x72\x73\x69\x6F\x6E\x3D\x76\x32\x2E\x30"), NULL);
		TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[8];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[9];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[10];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[11];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * tmp = (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA *)cache->attributes[12];
		AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x20\x2E\x4E\x65\x74\x20\x43\x6C\x69\x65\x6E\x74\x20\x4C\x69\x62\x72\x61\x72\x79\x2E\x20\x44\x65\x62\x75\x67\x2E"), NULL);
	}
}
static void NonAllocDictionary_2_t2DD82FB92AE9C3E5F1F16CB8910C1920AD3908E2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void Hashtable_tB5732E013B84CF7F91D09778047812257378883F_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void EnetPeer_tE4CE5DC65280A358016AE7D4476A46EC65A72DC4_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__67_0_mF336BF95DBF1A0FE191BF631BE1DBDF26FF34C1C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CServerIpAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CAddressResolvedAsIpv6U3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CUrlProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CUrlPathU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_State_mDCA9C8732A8F6A39288B07167654E869C67BBC2A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_State_m2C9CFC4BD3F1B4893F19CA0AB4C4808623DA1029(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_m34234C3815907A9D89DB01BF6C1F02FD47BA8060(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_m44C1B239DA2156AD22CA2C86EBCAC2D55EB6CB71(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_ProxyServerAddress_mED87A8711FA95CF0AF7EB33D09AEA1D3BCE39847(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_ProxyServerAddress_mA82D2323EC3207F1C8D16C27C571969DCB565F65(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerIpAddress_m6697EAD91005EDC1EC36CDD3C9EC603D69E32891(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerIpAddress_m4B80355EC8ACF42665345195319BAD11FDFF2EC7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_mB484861AEAB4AE2A9F9F829EBC32B340BEF75D5C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_m39C4779C4023011988EBDB89D49D60D5A4AA4EB4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_AddressResolvedAsIpv6_m527751B0260E023AC5CD680991EF799B7420FF7A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_AddressResolvedAsIpv6_m4359D2BD693E0361B316240AFF0E9567AEF131CB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlProtocol_m69094E45A98EDEFB0479EE5888FF63278DE4E6B8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlProtocol_mE0372E987BC392814BDEEC998E062BE91E94B1E8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlPath_m62F0BB093A180957E92BB619571F3DA872974BDE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlPath_m917B48D78AAF8EFE5ABFF96E6665A8830014A4D7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_GetIpAddress_m7A706CAA27A283D18834397BEDDD807BC57CE1C0(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x47\x65\x74\x49\x70\x41\x64\x64\x72\x65\x73\x73\x65\x73\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__52_0_m15322DF67574B6A64F370C002B7F70C7A118CE5B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tC1449243E785B1DEA712CC4AB68D0584CDEBA505_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IProtocol_t65ADB0A0BE3F586A291933B3E5A4B4C7936558E7_CustomAttributesCacheGenerator_IProtocol_SerializeOperationRequest_m0D1849F9F5C9CBBD2F9C1EBB4B6A78398149CD16(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SimulationItem_t1F4276B0E2EDC28394DC1B3FA1E3CF1EE56EE569_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SimulationItem_t1F4276B0E2EDC28394DC1B3FA1E3CF1EE56EE569_CustomAttributesCacheGenerator_SimulationItem_get_Delay_m7C6E9BC31D2FD6ADC3CCE443A7345C772813773B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SimulationItem_t1F4276B0E2EDC28394DC1B3FA1E3CF1EE56EE569_CustomAttributesCacheGenerator_SimulationItem_set_Delay_m7BBCEF60D1D995929AC8719B1A894FCEB93B5D67(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tA57B52562C42C28902E35A58D691AD186B9B95AB_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void NetworkSimulationSet_tA57B52562C42C28902E35A58D691AD186B9B95AB_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void NetworkSimulationSet_tA57B52562C42C28902E35A58D691AD186B9B95AB_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_mFBCEE8DCEA72227AFE5599B37F780DDDAFFDE8AD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tA57B52562C42C28902E35A58D691AD186B9B95AB_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_m340D92CEC85690A5281EEF7747B57FC29978BE78(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tA57B52562C42C28902E35A58D691AD186B9B95AB_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_mF0AE773043DAD2B6BFC72A67CDB6C76DEC42C339(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_tA57B52562C42C28902E35A58D691AD186B9B95AB_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_m37A1EBE9EC9351B972EE0E6E529782A36A940478(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ParameterDictionary_t0D8325EA838A48561F15F47ADE8A2111F42BA4F5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void InitV3Flags_tC7D968C429A396A08B0C9FC76628C5CB73132905_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void PeerBase_tD57036BBCD920389768D52C80B6659F9877F5EC1_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PeerBase_tD57036BBCD920389768D52C80B6659F9877F5EC1_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PeerBase_tD57036BBCD920389768D52C80B6659F9877F5EC1_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_mBC46909C06D755FFBB27A069D9C91F8B9F4DDCC9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_tD57036BBCD920389768D52C80B6659F9877F5EC1_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_m10E3FCC338A7B2EAD68F78E5AC6FAC58E7FA4EE6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_tD57036BBCD920389768D52C80B6659F9877F5EC1_CustomAttributesCacheGenerator_PeerBase_get_ProxyServerAddress_m555AEEFEFC35B1FE40D1606E4152A9D01E9758B6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_tD57036BBCD920389768D52C80B6659F9877F5EC1_CustomAttributesCacheGenerator_PeerBase_set_ProxyServerAddress_m777B808EAF7B4C1F96822D8A2F76ABA6CB6A95E4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass108_0_t869543CE706A2AC9D4CF4416ED8F51F0DF8FD5E5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass109_0_t94AA879E4569F2F8354434390BD82E2C074CFADC_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonClientWebSocket_t904612AA3DC7C289EC20940E27397BE08810079F_CustomAttributesCacheGenerator_PhotonClientWebSocket__ctor_m0292739BEDD2572FB82513FB83A5A14ACFD2ACCF(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F * tmp = (PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F *)cache->attributes[0];
		PreserveAttribute__ctor_mF554E615AABA52B09603056EE3728E3511502D33(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CCommandBufferSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CLimitOfUnreliableCommandsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_WarningSize(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x43\x68\x65\x63\x6B\x20\x51\x75\x65\x75\x65\x64\x4F\x75\x74\x67\x6F\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x20\x61\x6E\x64\x20\x51\x75\x65\x75\x65\x64\x49\x6E\x63\x6F\x6D\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x20\x6F\x6E\x20\x64\x65\x6D\x61\x6E\x64\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_NativeDatagramEncrypt(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x72\x65\x20\x64\x79\x6E\x61\x6D\x69\x63\x20\x6C\x69\x6E\x6B\x69\x6E\x67\x20\x69\x73\x20\x61\x76\x61\x69\x6C\x61\x62\x6C\x65\x2C\x20\x74\x68\x69\x73\x20\x6C\x69\x62\x72\x61\x72\x79\x20\x77\x69\x6C\x6C\x20\x61\x74\x74\x65\x6D\x70\x74\x20\x74\x6F\x20\x6C\x6F\x61\x64\x20\x69\x74\x20\x61\x6E\x64\x20\x66\x61\x6C\x6C\x62\x61\x63\x6B\x20\x74\x6F\x20\x61\x20\x6D\x61\x6E\x61\x67\x65\x64\x20\x69\x6D\x70\x6C\x65\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x69\x73\x20\x61\x6C\x77\x61\x79\x73\x20\x74\x72\x75\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_CommandLogSize(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x74\x68\x65\x20\x49\x54\x72\x61\x66\x66\x69\x63\x52\x65\x63\x6F\x72\x64\x65\x72\x20\x74\x6F\x20\x63\x61\x70\x74\x75\x72\x65\x20\x61\x6C\x6C\x20\x74\x72\x61\x66\x66\x69\x63\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_NativeSocketLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x41\x20\x4E\x61\x74\x69\x76\x65\x20\x53\x6F\x63\x6B\x65\x74\x20\x69\x6D\x70\x6C\x65\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_NativePayloadEncryptionLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x74\x69\x76\x65\x20\x50\x61\x79\x6C\x6F\x61\x64\x20\x45\x6E\x63\x72\x79\x70\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_NativeDatagramEncryptionLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x74\x69\x76\x65\x20\x44\x61\x74\x61\x67\x72\x61\x6D\x20\x45\x6E\x63\x72\x79\x70\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CSerializationProtocolTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CSocketImplementationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_OnDisconnectMessage(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CEnableServerTracingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CTransportProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CTrafficStatsIncomingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CTrafficStatsOutgoingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CTrafficStatsGameLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CCountDiscardedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CDeltaUnreliableNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_CommandBufferSize_m76975C7AE171DBF401B4B4CE5FC24326B3FD23B6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_CommandBufferSize_m836B44916DE6D2259A09BD834F4C0C436FBFFD2B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_LimitOfUnreliableCommands_m46C43DA5715377165BB3BF6C6A71C43C4A1D5639(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_LimitOfUnreliableCommands_mE3E7FF8F0924BA7355F907A9336E8D99C438EFD8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_CommandLogToString_m5F783F01CC9751081E3089320AFEC361EC15A7EF(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x74\x68\x65\x20\x49\x54\x72\x61\x66\x66\x69\x63\x52\x65\x63\x6F\x72\x64\x65\x72\x20\x74\x6F\x20\x63\x61\x70\x74\x75\x72\x65\x20\x61\x6C\x6C\x20\x74\x72\x61\x66\x66\x69\x63\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_SerializationProtocolType_m9C4B77524145C1822B304F8972FAB226ECE6449B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_SerializationProtocolType_m446CC7BAE2F5676672911D7B9AB910217BA649AB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_SocketImplementation_mDE5D6C99D22DAA96F31BDFCF722A843720798B96(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_SocketImplementation_mB941CD1F81B284149693533919B852D8A563C979(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_Listener_m26B0C5FEA73D78BA3A4F6E645DF7CFEEE6907653(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_Listener_mC0813179D30AC226C460DC28C45538F22AE34768(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_add_OnDisconnectMessage_m0B3B795BD37B4A46E00C3BC02E9B236782BE1D0C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_remove_OnDisconnectMessage_m9C0400F4AA6D28434E5B1333B190FA8B104E985A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_EnableServerTracing_m25A0F327790FA7A1CC4025BB041D330640FCDED7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_EnableServerTracing_m8B837545501D74D30DA00E2EC6437107D18216C6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_TransportProtocol_mC7A77BC13F168E8686280967F207CEF534A1F21F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_TransportProtocol_m310F8CDC34987EFDE8E45C3269B4F766656D9067(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_IsSendingOnlyAcks_m108B4987845D878502DF00E54FBE63A09E7AD8B5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_IsSendingOnlyAcks_mBE4912578A498C82D068EA7F755FF4A4BF96D9B1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsIncoming_m0BA063DC9EAC5E4E6FA2C6D082FD7A1245F55B03(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsIncoming_mC5FAB1023FA3B8D820425A50D1C6EB52E7D98DD1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsOutgoing_m398535EE0A1032D186BEC382904473A0BD1B734A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsOutgoing_mEDE59C1B0E1B91B7F64FB4D6B94F285DC107F77D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsGameLevel_m2CFCF50E122E646C2457E65FA1FD7EF11D8F952D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsGameLevel_mB5BDF48DF922D692F1AC2493309221E411A9086D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_CountDiscarded_mC90B5CC17C1239ECE808E97A735DABD2E5D9F7CC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_CountDiscarded_m9CDE0742A6F32E3EDFB2611B26788D795A31A56A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_DeltaUnreliableNumber_mFAA5EC1EA66F31689DD6CD5C4025B28723EE80D5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_DeltaUnreliableNumber_m84CF3B79052FB3F007EA2156771B7A63DA28BA08(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_U3CEstablishEncryptionU3Eb__220_0_m55DD77A7B965F71A21950BAA983ECB27FE9F7450(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F____CommandBufferSize_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x65\x20\x72\x65\x6D\x61\x72\x6B\x73\x2E"), NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F____LimitOfUnreliableCommands_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x65\x20\x72\x65\x6D\x61\x72\x6B\x73\x2E"), NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F____LocalTimeInMilliSeconds_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x52\x65\x74\x75\x72\x6E\x73\x20\x53\x75\x70\x70\x6F\x72\x74\x43\x6C\x61\x73\x73\x2E\x47\x65\x74\x54\x69\x63\x6B\x43\x6F\x75\x6E\x74\x28\x29\x2E\x20\x53\x68\x6F\x75\x6C\x64\x20\x62\x65\x20\x72\x65\x70\x6C\x61\x63\x65\x64\x20\x62\x79\x20\x61\x20\x53\x74\x6F\x70\x57\x61\x74\x63\x68\x20\x6F\x72\x20\x74\x68\x65\x20\x70\x65\x72\x20\x70\x65\x65\x72\x20\x50\x68\x6F\x74\x6F\x6E\x50\x65\x65\x72\x2E\x43\x6C\x69\x65\x6E\x74\x54\x69\x6D\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F____ClientVersion_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x73\x74\x61\x74\x69\x63\x20\x73\x74\x72\x69\x6E\x67\x20\x56\x65\x72\x73\x69\x6F\x6E\x20\x73\x68\x6F\x75\x6C\x64\x20\x62\x65\x20\x70\x72\x65\x66\x65\x72\x72\x65\x64\x2E"), NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F____LocalMsTimestampDelegate_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x50\x68\x6F\x74\x6F\x6E\x50\x65\x65\x72\x20\x77\x69\x6C\x6C\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x75\x73\x65\x20\x74\x68\x69\x73\x20\x64\x65\x6C\x65\x67\x61\x74\x65\x2E\x20\x49\x74\x20\x75\x73\x65\x73\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x69\x6E\x20\x61\x6C\x6C\x20\x63\x61\x73\x65\x73\x2E\x20\x59\x6F\x75\x20\x63\x61\x6E\x20\x61\x63\x63\x65\x73\x73\x20\x50\x68\x6F\x74\x6F\x6E\x50\x65\x65\x72\x2E\x43\x6F\x6E\x6E\x65\x63\x74\x69\x6F\x6E\x54\x69\x6D\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F____IsSendingOnlyAcks_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x49\x6E\x74\x65\x72\x6E\x61\x6C\x6C\x79\x20\x6E\x6F\x74\x20\x75\x73\x65\x64\x20\x61\x6E\x79\x6D\x6F\x72\x65\x2E\x20\x43\x61\x6C\x6C\x20\x53\x65\x6E\x64\x41\x63\x6B\x73\x4F\x6E\x6C\x79\x28\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void OperationResponse_t00BC6E6D9DC1771331426FC52FC50A4D5F5B354B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void EventData_tAC0E30D0E14F6D95BF9D3D407CFBD18301245329_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void Protocol_tDF21CDD2457EFF8155B828F1563675B5CE0323BC_CustomAttributesCacheGenerator_Protocol_Serialize_mD2B0517C386A20DDFC47DFD91F9025F750BD034C(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Protocol_tDF21CDD2457EFF8155B828F1563675B5CE0323BC_CustomAttributesCacheGenerator_Protocol_Deserialize_m1E76AF9F8BDC879B0F001A848951024A68E1CB34(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Protocol16_tCF9190CB8EAF549F85207711AA27700685DBFF96_CustomAttributesCacheGenerator_Protocol16_SerializeOperationRequest_m2AA9A13E253F5FFC17DEBBB669B8C53636C5A9F8(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void Protocol16_tCF9190CB8EAF549F85207711AA27700685DBFF96_CustomAttributesCacheGenerator_Protocol16_SerializeParameterTable_m5F49CDCEB0FBBEA076A8AAF31BDF73F6B3EEFC57(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x6F\x66\x20\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x3C\x62\x79\x74\x65\x2C\x20\x6F\x62\x6A\x65\x63\x74\x3E\x2E"), NULL);
	}
}
static void Protocol18_t7ED837BF6B92272E2D4B14B7D276A4EA4DDC435C_CustomAttributesCacheGenerator_Protocol18_ReadParameterTable_m514926A42E04B5C5C910EC8D5B64A156FFA9FC7B(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void Protocol18_t7ED837BF6B92272E2D4B14B7D276A4EA4DDC435C_CustomAttributesCacheGenerator_Protocol18_SerializeOperationRequest_mF6F31F4EF13729EE1FF9D708B1614B1587CBE5A4(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SocketTcp_t06F7C69B7CCA44E4BBB6D7D3E865B9B317D31F12_CustomAttributesCacheGenerator_SocketTcp__ctor_m6F9033DD417A1F7B7A27686756EAF9C9A923F738(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F * tmp = (PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F *)cache->attributes[0];
		PreserveAttribute__ctor_mF554E615AABA52B09603056EE3728E3511502D33(tmp, NULL);
	}
}
static void SocketTcpAsync_tA62C57CDF7444788E7BAB653EE79D08187EBA283_CustomAttributesCacheGenerator_SocketTcpAsync__ctor_mC0A8054F48AA3FDD80DB8875FC7C51864386B8B7(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F * tmp = (PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F *)cache->attributes[0];
		PreserveAttribute__ctor_mF554E615AABA52B09603056EE3728E3511502D33(tmp, NULL);
	}
}
static void SocketUdp_tC651018B26A078253A1B173906F49E86E654EC90_CustomAttributesCacheGenerator_SocketUdp__ctor_mA2B31B6BFB83AE323E5392944434CA98F1C620D3(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F * tmp = (PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F *)cache->attributes[0];
		PreserveAttribute__ctor_mF554E615AABA52B09603056EE3728E3511502D33(tmp, NULL);
	}
}
static void SocketUdpAsync_tF6C16F2CDABD8B827D7351FBC275AC9721CDF5CB_CustomAttributesCacheGenerator_SocketUdpAsync__ctor_m5E841777C62E05E0913034832A7D863CF817AD7C(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F * tmp = (PreserveAttribute_tFAFE7BD1EAB18C088AC264C7898180D8672E0F1F *)cache->attributes[0];
		PreserveAttribute__ctor_mF554E615AABA52B09603056EE3728E3511502D33(tmp, NULL);
	}
}
static void SupportClass_t20B05EC48240FEBC471D02463010C427F34A9763_CustomAttributesCacheGenerator_IntegerMilliseconds(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SupportClass_t20B05EC48240FEBC471D02463010C427F34A9763_CustomAttributesCacheGenerator_SupportClass_GetTickCount_m33D9D50BFC8C01E9C4D466EAABE6D3459C9A9293(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SupportClass_t20B05EC48240FEBC471D02463010C427F34A9763_CustomAttributesCacheGenerator_SupportClass_HashtableToString_mEC563E8F50ABAE1699AE5705F3201A844B6969A0(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x54\x6F\x53\x74\x72\x69\x6E\x67\x28\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void IntegerMillisecondsDelegate_t6DAB068BFF58BE16CD7EF5118B5C02A827F3399F_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void U3CU3Ec__DisplayClass6_0_t2D6FEAE51C58C0FAC24D8586B0E688C375963891_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tABE5C2203F3C4DC9274CD463F00C8D7B3999D0EF_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pool_1_t8328987FA6941944DB3F781B08BF02CDBC045090_CustomAttributesCacheGenerator_Pool_1_Push_m38300DFCF7679043B97C94167B9BC9BDFCC952DF(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x52\x65\x6C\x65\x61\x73\x65\x28\x29\x20\x72\x61\x74\x68\x65\x72\x20\x74\x68\x61\x6E\x20\x50\x75\x73\x68\x28\x29"), NULL);
	}
}
static void Pool_1_t8328987FA6941944DB3F781B08BF02CDBC045090_CustomAttributesCacheGenerator_Pool_1_Pop_mBF56D1479EF5AE56429971A26A4D10E3CEE07FAF(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x41\x63\x71\x75\x69\x72\x65\x28\x29\x20\x72\x61\x74\x68\x65\x72\x20\x74\x68\x61\x6E\x20\x50\x6F\x70\x28\x29"), NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestMessageCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestRawMessageCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_m70EC935BCCB4CF0A3F5E15EDE558F2A6AD6A9A1D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_mAD82A8DD7570B4FB89F983D1E0986A16A36F061E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_m85451EBF2CA2FD699DB332A76B48F6176D127249(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_m6B67C843179BF25306CDDAE7889A6D61486A1BF7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_m3630128F663546718D8FDD198378D79AB525F025(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_m6D86C660D3F7CB9CCA2CB66063129EDEE358E332(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_m72B75D47D7A5C937D0DC4CF55D45D1A10D2F5FC7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_m92939223BBB56FFCEAF7B97F762632AA26132914(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m695F56482431A181C9E69C1D67B4EC928FAFD9B7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_mF032C10804A070F241FAE204B6B02B82EC0FFE5A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_m48E45D00E569E512D03CE635949FF91A31E9E4D8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_mC5DD9196317D3CC1CE36071438A3202AF889D891(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_m83EDB3927C3CC86BA1CE22FB3CD3605F94FE079B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_m6FDF640342820BF81E51AC0DBFDE23B74D8686F8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_mFAC3107072394001413A1193DE0A02DF993BE039(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m388E045519580D3CC823622D4226E18A084A4CD8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_m316F68A5BA7FCD1385AC1A0AFCFDAA4ED94D63F3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_m6E1E5A77FC9207A3FED1DFB20BE15E9BAF2711AF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestMessageCallback_mD525714E010442D05594CCDEC72CCEA897FDEC32(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestMessageCallback_m64CC6C98EA8A0FBDAD9BD056DCAA01C8E061512C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestRawMessageCallback_m3858BC0ED310C292D2B361801C598AB4F0E5D22E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestRawMessageCallback_m5E8D784B086102A2E3CF1FD0836242C86B1B9BF0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallbackCode_mAC974FB000D380BC5557DB621884E40D13C70932(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_m909C5B0C231FC6CE7D1251DE4B8C3C2FA43E2D91(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m9EBE6769CA1D23DEFD48B2E900CD014512D41AD6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_mF81E9137A05E61D319AA0327321AF3D18164E890(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m8A892FAF3DB62833667FC9D77355359F79964506(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m7EA93CA8A025EF5C26B4B8921DF570D0D9A99149(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m00D7C2F50260BF9559B8E19D04A001D2A26D9BE9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m4FE0ACFF1EA0E0EF423F87F445A33764C0CE5814(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m8F435AC81C2E3ABF4B91941B456CF0D9219A8E99(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m08891648E557472BF280482ACA3C2C37E1AA95CC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557____DispatchCalls_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x44\x69\x73\x70\x61\x74\x63\x68\x49\x6E\x63\x6F\x6D\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x43\x61\x6C\x6C\x73\x2C\x20\x77\x68\x69\x63\x68\x20\x68\x61\x73\x20\x70\x72\x6F\x70\x65\x72\x20\x6E\x61\x6D\x69\x6E\x67\x2E"), NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_m48A24B3083A09FF3CB4D0F982D50BDCA4E3C8AD0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_m053F076F62517909A4F3269AA3E4BAF2E1FD405A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_m3C96F9F87F260351C543E7E74A2368D6A6A88D9F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_m4233BA2B361617821025BC00437C05D415129438(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_mDFEE9B7EE1473924E91F3867A73C312EB6053C2E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m6DF0F90A8BB951AE06DBC0356452B3D3D732A830(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_mE5E4DA13757146853186FAB278132ED213EE856B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_m1FB365AC1FFD0DD067AC12394A1F9EDF0AC9E1CF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_m1AF1E13DDF0FB909C55A09F29984675B137B06A0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_m075CB5CB43B9022944029420AFA3B7A92CB8ADD7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_m4922B1E824DA9907DF475A0FA81BE684E7ADF34B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_m6CD440B404ABA1BCAC9D675EEAA975E54F89587A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_m979646A55B4036DDF9641C6BB2BDB382715A6B13(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m0246306B8792F1982B2AA66A8408B2CABB4D33BB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_mC35357E0D8B67B58D82EBD18C3ADE9F694D81A4F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_m2FEF8C3BD59319FCE293BE28C3000102645949B2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m0FAB75523EED27B13722A6F3CA43E5E5579DA434(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_mFB9AAD92000BCB6C940960C77AE94EADABAE8100(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_m60CD466FFED13241C9CEBDAB97B070B96FA90D51(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_m1CC131AECD8203A667E30972D29C5F1E3791623D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_mB5DE4D4B2112A65658AF97FE8DA43886FAB52CE8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_m47DF2B1DD47087095925FDB4349DC1E9688A9539(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastAck_m2955B6A4E4AB207393E06C011B3523E1E9F13AED(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_m22A565AD83A932387BE717D244FBD606BDBE0936(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastReliableCommand_mFC4D6073A4FA7324C21D042C99976AC26022B504(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_mCE323C8388AFD55BC0C5D884F557BC799CB40B7B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_tA0A7C7D4C0DC466814D7348DCC5CFDB5F208034C_CustomAttributesCacheGenerator_U3CReturnPoolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_tA0A7C7D4C0DC466814D7348DCC5CFDB5F208034C_CustomAttributesCacheGenerator_StructWrapper_1_get_ReturnPool_mD803FF218DF8C91C3291069A46C3AD7EE915C3C4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_tA0A7C7D4C0DC466814D7348DCC5CFDB5F208034C_CustomAttributesCacheGenerator_StructWrapper_1_set_ReturnPool_m20C9276F5C4C157D71B83F6B411D2DCC65696B56(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapperUtility_t1087BBD86B84B281187A2DBEB71148DB4C45B882_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void StructWrapperUtility_t1087BBD86B84B281187A2DBEB71148DB4C45B882_CustomAttributesCacheGenerator_StructWrapperUtility_Unwrap_mF1F732512514361ADFE4BAACD98B1E3CB4F29356(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void StructWrapperUtility_t1087BBD86B84B281187A2DBEB71148DB4C45B882_CustomAttributesCacheGenerator_StructWrapperUtility_Get_m031A08FBF767F5DE90BAD10C0AB2737DEFEA0621(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_t88DD604DC716AA5F9FADB69DB4A68CB736907C51_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Photon3Unity3D_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Photon3Unity3D_AttributeGenerators[223] = 
{
	NonAllocDictionary_2_t2DD82FB92AE9C3E5F1F16CB8910C1920AD3908E2_CustomAttributesCacheGenerator,
	Hashtable_tB5732E013B84CF7F91D09778047812257378883F_CustomAttributesCacheGenerator,
	U3CU3Ec_tC1449243E785B1DEA712CC4AB68D0584CDEBA505_CustomAttributesCacheGenerator,
	ParameterDictionary_t0D8325EA838A48561F15F47ADE8A2111F42BA4F5_CustomAttributesCacheGenerator,
	InitV3Flags_tC7D968C429A396A08B0C9FC76628C5CB73132905_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass108_0_t869543CE706A2AC9D4CF4416ED8F51F0DF8FD5E5_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass109_0_t94AA879E4569F2F8354434390BD82E2C074CFADC_CustomAttributesCacheGenerator,
	OperationResponse_t00BC6E6D9DC1771331426FC52FC50A4D5F5B354B_CustomAttributesCacheGenerator,
	EventData_tAC0E30D0E14F6D95BF9D3D407CFBD18301245329_CustomAttributesCacheGenerator,
	IntegerMillisecondsDelegate_t6DAB068BFF58BE16CD7EF5118B5C02A827F3399F_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass6_0_t2D6FEAE51C58C0FAC24D8586B0E688C375963891_CustomAttributesCacheGenerator,
	U3CU3Ec_tABE5C2203F3C4DC9274CD463F00C8D7B3999D0EF_CustomAttributesCacheGenerator,
	StructWrapperUtility_t1087BBD86B84B281187A2DBEB71148DB4C45B882_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t88DD604DC716AA5F9FADB69DB4A68CB736907C51_CustomAttributesCacheGenerator,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CServerIpAddressU3Ek__BackingField,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CAddressResolvedAsIpv6U3Ek__BackingField,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CUrlProtocolU3Ek__BackingField,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_U3CUrlPathU3Ek__BackingField,
	SimulationItem_t1F4276B0E2EDC28394DC1B3FA1E3CF1EE56EE569_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField,
	NetworkSimulationSet_tA57B52562C42C28902E35A58D691AD186B9B95AB_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField,
	NetworkSimulationSet_tA57B52562C42C28902E35A58D691AD186B9B95AB_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField,
	PeerBase_tD57036BBCD920389768D52C80B6659F9877F5EC1_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	PeerBase_tD57036BBCD920389768D52C80B6659F9877F5EC1_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CCommandBufferSizeU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CLimitOfUnreliableCommandsU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_WarningSize,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_NativeDatagramEncrypt,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_CommandLogSize,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_NativeSocketLibAvailable,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_NativePayloadEncryptionLibAvailable,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_NativeDatagramEncryptionLibAvailable,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CSerializationProtocolTypeU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CSocketImplementationU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_OnDisconnectMessage,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CEnableServerTracingU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CTransportProtocolU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CTrafficStatsIncomingU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CTrafficStatsOutgoingU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CTrafficStatsGameLevelU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CCountDiscardedU3Ek__BackingField,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_U3CDeltaUnreliableNumberU3Ek__BackingField,
	SupportClass_t20B05EC48240FEBC471D02463010C427F34A9763_CustomAttributesCacheGenerator_IntegerMilliseconds,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestMessageCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestRawMessageCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField,
	StructWrapper_1_tA0A7C7D4C0DC466814D7348DCC5CFDB5F208034C_CustomAttributesCacheGenerator_U3CReturnPoolU3Ek__BackingField,
	EnetPeer_tE4CE5DC65280A358016AE7D4476A46EC65A72DC4_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__67_0_mF336BF95DBF1A0FE191BF631BE1DBDF26FF34C1C,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_State_mDCA9C8732A8F6A39288B07167654E869C67BBC2A,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_State_m2C9CFC4BD3F1B4893F19CA0AB4C4808623DA1029,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_m34234C3815907A9D89DB01BF6C1F02FD47BA8060,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_m44C1B239DA2156AD22CA2C86EBCAC2D55EB6CB71,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_ProxyServerAddress_mED87A8711FA95CF0AF7EB33D09AEA1D3BCE39847,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_ProxyServerAddress_mA82D2323EC3207F1C8D16C27C571969DCB565F65,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerIpAddress_m6697EAD91005EDC1EC36CDD3C9EC603D69E32891,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerIpAddress_m4B80355EC8ACF42665345195319BAD11FDFF2EC7,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_mB484861AEAB4AE2A9F9F829EBC32B340BEF75D5C,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_m39C4779C4023011988EBDB89D49D60D5A4AA4EB4,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_AddressResolvedAsIpv6_m527751B0260E023AC5CD680991EF799B7420FF7A,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_AddressResolvedAsIpv6_m4359D2BD693E0361B316240AFF0E9567AEF131CB,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlProtocol_m69094E45A98EDEFB0479EE5888FF63278DE4E6B8,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlProtocol_mE0372E987BC392814BDEEC998E062BE91E94B1E8,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlPath_m62F0BB093A180957E92BB619571F3DA872974BDE,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlPath_m917B48D78AAF8EFE5ABFF96E6665A8830014A4D7,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_GetIpAddress_m7A706CAA27A283D18834397BEDDD807BC57CE1C0,
	IPhotonSocket_tC26F3FD0BC8AAF7A4B623F6E10E6944868FDA3F4_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__52_0_m15322DF67574B6A64F370C002B7F70C7A118CE5B,
	IProtocol_t65ADB0A0BE3F586A291933B3E5A4B4C7936558E7_CustomAttributesCacheGenerator_IProtocol_SerializeOperationRequest_m0D1849F9F5C9CBBD2F9C1EBB4B6A78398149CD16,
	SimulationItem_t1F4276B0E2EDC28394DC1B3FA1E3CF1EE56EE569_CustomAttributesCacheGenerator_SimulationItem_get_Delay_m7C6E9BC31D2FD6ADC3CCE443A7345C772813773B,
	SimulationItem_t1F4276B0E2EDC28394DC1B3FA1E3CF1EE56EE569_CustomAttributesCacheGenerator_SimulationItem_set_Delay_m7BBCEF60D1D995929AC8719B1A894FCEB93B5D67,
	NetworkSimulationSet_tA57B52562C42C28902E35A58D691AD186B9B95AB_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_mFBCEE8DCEA72227AFE5599B37F780DDDAFFDE8AD,
	NetworkSimulationSet_tA57B52562C42C28902E35A58D691AD186B9B95AB_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_m340D92CEC85690A5281EEF7747B57FC29978BE78,
	NetworkSimulationSet_tA57B52562C42C28902E35A58D691AD186B9B95AB_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_mF0AE773043DAD2B6BFC72A67CDB6C76DEC42C339,
	NetworkSimulationSet_tA57B52562C42C28902E35A58D691AD186B9B95AB_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_m37A1EBE9EC9351B972EE0E6E529782A36A940478,
	PeerBase_tD57036BBCD920389768D52C80B6659F9877F5EC1_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_mBC46909C06D755FFBB27A069D9C91F8B9F4DDCC9,
	PeerBase_tD57036BBCD920389768D52C80B6659F9877F5EC1_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_m10E3FCC338A7B2EAD68F78E5AC6FAC58E7FA4EE6,
	PeerBase_tD57036BBCD920389768D52C80B6659F9877F5EC1_CustomAttributesCacheGenerator_PeerBase_get_ProxyServerAddress_m555AEEFEFC35B1FE40D1606E4152A9D01E9758B6,
	PeerBase_tD57036BBCD920389768D52C80B6659F9877F5EC1_CustomAttributesCacheGenerator_PeerBase_set_ProxyServerAddress_m777B808EAF7B4C1F96822D8A2F76ABA6CB6A95E4,
	PhotonClientWebSocket_t904612AA3DC7C289EC20940E27397BE08810079F_CustomAttributesCacheGenerator_PhotonClientWebSocket__ctor_m0292739BEDD2572FB82513FB83A5A14ACFD2ACCF,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_CommandBufferSize_m76975C7AE171DBF401B4B4CE5FC24326B3FD23B6,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_CommandBufferSize_m836B44916DE6D2259A09BD834F4C0C436FBFFD2B,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_LimitOfUnreliableCommands_m46C43DA5715377165BB3BF6C6A71C43C4A1D5639,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_LimitOfUnreliableCommands_mE3E7FF8F0924BA7355F907A9336E8D99C438EFD8,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_CommandLogToString_m5F783F01CC9751081E3089320AFEC361EC15A7EF,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_SerializationProtocolType_m9C4B77524145C1822B304F8972FAB226ECE6449B,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_SerializationProtocolType_m446CC7BAE2F5676672911D7B9AB910217BA649AB,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_SocketImplementation_mDE5D6C99D22DAA96F31BDFCF722A843720798B96,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_SocketImplementation_mB941CD1F81B284149693533919B852D8A563C979,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_Listener_m26B0C5FEA73D78BA3A4F6E645DF7CFEEE6907653,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_Listener_mC0813179D30AC226C460DC28C45538F22AE34768,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_add_OnDisconnectMessage_m0B3B795BD37B4A46E00C3BC02E9B236782BE1D0C,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_remove_OnDisconnectMessage_m9C0400F4AA6D28434E5B1333B190FA8B104E985A,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_EnableServerTracing_m25A0F327790FA7A1CC4025BB041D330640FCDED7,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_EnableServerTracing_m8B837545501D74D30DA00E2EC6437107D18216C6,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_TransportProtocol_mC7A77BC13F168E8686280967F207CEF534A1F21F,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_TransportProtocol_m310F8CDC34987EFDE8E45C3269B4F766656D9067,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_IsSendingOnlyAcks_m108B4987845D878502DF00E54FBE63A09E7AD8B5,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_IsSendingOnlyAcks_mBE4912578A498C82D068EA7F755FF4A4BF96D9B1,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsIncoming_m0BA063DC9EAC5E4E6FA2C6D082FD7A1245F55B03,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsIncoming_mC5FAB1023FA3B8D820425A50D1C6EB52E7D98DD1,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsOutgoing_m398535EE0A1032D186BEC382904473A0BD1B734A,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsOutgoing_mEDE59C1B0E1B91B7F64FB4D6B94F285DC107F77D,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsGameLevel_m2CFCF50E122E646C2457E65FA1FD7EF11D8F952D,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsGameLevel_mB5BDF48DF922D692F1AC2493309221E411A9086D,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_CountDiscarded_mC90B5CC17C1239ECE808E97A735DABD2E5D9F7CC,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_CountDiscarded_m9CDE0742A6F32E3EDFB2611B26788D795A31A56A,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_get_DeltaUnreliableNumber_mFAA5EC1EA66F31689DD6CD5C4025B28723EE80D5,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_set_DeltaUnreliableNumber_m84CF3B79052FB3F007EA2156771B7A63DA28BA08,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_U3CEstablishEncryptionU3Eb__220_0_m55DD77A7B965F71A21950BAA983ECB27FE9F7450,
	Protocol_tDF21CDD2457EFF8155B828F1563675B5CE0323BC_CustomAttributesCacheGenerator_Protocol_Serialize_mD2B0517C386A20DDFC47DFD91F9025F750BD034C,
	Protocol_tDF21CDD2457EFF8155B828F1563675B5CE0323BC_CustomAttributesCacheGenerator_Protocol_Deserialize_m1E76AF9F8BDC879B0F001A848951024A68E1CB34,
	Protocol16_tCF9190CB8EAF549F85207711AA27700685DBFF96_CustomAttributesCacheGenerator_Protocol16_SerializeOperationRequest_m2AA9A13E253F5FFC17DEBBB669B8C53636C5A9F8,
	Protocol16_tCF9190CB8EAF549F85207711AA27700685DBFF96_CustomAttributesCacheGenerator_Protocol16_SerializeParameterTable_m5F49CDCEB0FBBEA076A8AAF31BDF73F6B3EEFC57,
	Protocol18_t7ED837BF6B92272E2D4B14B7D276A4EA4DDC435C_CustomAttributesCacheGenerator_Protocol18_ReadParameterTable_m514926A42E04B5C5C910EC8D5B64A156FFA9FC7B,
	Protocol18_t7ED837BF6B92272E2D4B14B7D276A4EA4DDC435C_CustomAttributesCacheGenerator_Protocol18_SerializeOperationRequest_mF6F31F4EF13729EE1FF9D708B1614B1587CBE5A4,
	SocketTcp_t06F7C69B7CCA44E4BBB6D7D3E865B9B317D31F12_CustomAttributesCacheGenerator_SocketTcp__ctor_m6F9033DD417A1F7B7A27686756EAF9C9A923F738,
	SocketTcpAsync_tA62C57CDF7444788E7BAB653EE79D08187EBA283_CustomAttributesCacheGenerator_SocketTcpAsync__ctor_mC0A8054F48AA3FDD80DB8875FC7C51864386B8B7,
	SocketUdp_tC651018B26A078253A1B173906F49E86E654EC90_CustomAttributesCacheGenerator_SocketUdp__ctor_mA2B31B6BFB83AE323E5392944434CA98F1C620D3,
	SocketUdpAsync_tF6C16F2CDABD8B827D7351FBC275AC9721CDF5CB_CustomAttributesCacheGenerator_SocketUdpAsync__ctor_m5E841777C62E05E0913034832A7D863CF817AD7C,
	SupportClass_t20B05EC48240FEBC471D02463010C427F34A9763_CustomAttributesCacheGenerator_SupportClass_GetTickCount_m33D9D50BFC8C01E9C4D466EAABE6D3459C9A9293,
	SupportClass_t20B05EC48240FEBC471D02463010C427F34A9763_CustomAttributesCacheGenerator_SupportClass_HashtableToString_mEC563E8F50ABAE1699AE5705F3201A844B6969A0,
	Pool_1_t8328987FA6941944DB3F781B08BF02CDBC045090_CustomAttributesCacheGenerator_Pool_1_Push_m38300DFCF7679043B97C94167B9BC9BDFCC952DF,
	Pool_1_t8328987FA6941944DB3F781B08BF02CDBC045090_CustomAttributesCacheGenerator_Pool_1_Pop_mBF56D1479EF5AE56429971A26A4D10E3CEE07FAF,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_m70EC935BCCB4CF0A3F5E15EDE558F2A6AD6A9A1D,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_mAD82A8DD7570B4FB89F983D1E0986A16A36F061E,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_m85451EBF2CA2FD699DB332A76B48F6176D127249,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_m6B67C843179BF25306CDDAE7889A6D61486A1BF7,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_m3630128F663546718D8FDD198378D79AB525F025,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_m6D86C660D3F7CB9CCA2CB66063129EDEE358E332,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_m72B75D47D7A5C937D0DC4CF55D45D1A10D2F5FC7,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_m92939223BBB56FFCEAF7B97F762632AA26132914,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m695F56482431A181C9E69C1D67B4EC928FAFD9B7,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_mF032C10804A070F241FAE204B6B02B82EC0FFE5A,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_m48E45D00E569E512D03CE635949FF91A31E9E4D8,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_mC5DD9196317D3CC1CE36071438A3202AF889D891,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_m83EDB3927C3CC86BA1CE22FB3CD3605F94FE079B,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_m6FDF640342820BF81E51AC0DBFDE23B74D8686F8,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_mFAC3107072394001413A1193DE0A02DF993BE039,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m388E045519580D3CC823622D4226E18A084A4CD8,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_m316F68A5BA7FCD1385AC1A0AFCFDAA4ED94D63F3,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_m6E1E5A77FC9207A3FED1DFB20BE15E9BAF2711AF,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestMessageCallback_mD525714E010442D05594CCDEC72CCEA897FDEC32,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestMessageCallback_m64CC6C98EA8A0FBDAD9BD056DCAA01C8E061512C,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestRawMessageCallback_m3858BC0ED310C292D2B361801C598AB4F0E5D22E,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestRawMessageCallback_m5E8D784B086102A2E3CF1FD0836242C86B1B9BF0,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallbackCode_mAC974FB000D380BC5557DB621884E40D13C70932,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_m909C5B0C231FC6CE7D1251DE4B8C3C2FA43E2D91,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m9EBE6769CA1D23DEFD48B2E900CD014512D41AD6,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_mF81E9137A05E61D319AA0327321AF3D18164E890,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m8A892FAF3DB62833667FC9D77355359F79964506,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m7EA93CA8A025EF5C26B4B8921DF570D0D9A99149,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m00D7C2F50260BF9559B8E19D04A001D2A26D9BE9,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m4FE0ACFF1EA0E0EF423F87F445A33764C0CE5814,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m8F435AC81C2E3ABF4B91941B456CF0D9219A8E99,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m08891648E557472BF280482ACA3C2C37E1AA95CC,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_m48A24B3083A09FF3CB4D0F982D50BDCA4E3C8AD0,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_m053F076F62517909A4F3269AA3E4BAF2E1FD405A,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_m3C96F9F87F260351C543E7E74A2368D6A6A88D9F,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_m4233BA2B361617821025BC00437C05D415129438,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_mDFEE9B7EE1473924E91F3867A73C312EB6053C2E,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m6DF0F90A8BB951AE06DBC0356452B3D3D732A830,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_mE5E4DA13757146853186FAB278132ED213EE856B,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_m1FB365AC1FFD0DD067AC12394A1F9EDF0AC9E1CF,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_m1AF1E13DDF0FB909C55A09F29984675B137B06A0,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_m075CB5CB43B9022944029420AFA3B7A92CB8ADD7,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_m4922B1E824DA9907DF475A0FA81BE684E7ADF34B,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_m6CD440B404ABA1BCAC9D675EEAA975E54F89587A,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_m979646A55B4036DDF9641C6BB2BDB382715A6B13,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m0246306B8792F1982B2AA66A8408B2CABB4D33BB,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_mC35357E0D8B67B58D82EBD18C3ADE9F694D81A4F,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_m2FEF8C3BD59319FCE293BE28C3000102645949B2,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m0FAB75523EED27B13722A6F3CA43E5E5579DA434,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_mFB9AAD92000BCB6C940960C77AE94EADABAE8100,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_m60CD466FFED13241C9CEBDAB97B070B96FA90D51,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_m1CC131AECD8203A667E30972D29C5F1E3791623D,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_mB5DE4D4B2112A65658AF97FE8DA43886FAB52CE8,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_m47DF2B1DD47087095925FDB4349DC1E9688A9539,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastAck_m2955B6A4E4AB207393E06C011B3523E1E9F13AED,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_m22A565AD83A932387BE717D244FBD606BDBE0936,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastReliableCommand_mFC4D6073A4FA7324C21D042C99976AC26022B504,
	TrafficStats_tB806413DB6DC7B3E57DDDCBA631623DD5383B9CC_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_mCE323C8388AFD55BC0C5D884F557BC799CB40B7B,
	StructWrapper_1_tA0A7C7D4C0DC466814D7348DCC5CFDB5F208034C_CustomAttributesCacheGenerator_StructWrapper_1_get_ReturnPool_mD803FF218DF8C91C3291069A46C3AD7EE915C3C4,
	StructWrapper_1_tA0A7C7D4C0DC466814D7348DCC5CFDB5F208034C_CustomAttributesCacheGenerator_StructWrapper_1_set_ReturnPool_m20C9276F5C4C157D71B83F6B411D2DCC65696B56,
	StructWrapperUtility_t1087BBD86B84B281187A2DBEB71148DB4C45B882_CustomAttributesCacheGenerator_StructWrapperUtility_Unwrap_mF1F732512514361ADFE4BAACD98B1E3CB4F29356,
	StructWrapperUtility_t1087BBD86B84B281187A2DBEB71148DB4C45B882_CustomAttributesCacheGenerator_StructWrapperUtility_Get_m031A08FBF767F5DE90BAD10C0AB2737DEFEA0621,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F____CommandBufferSize_PropertyInfo,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F____LimitOfUnreliableCommands_PropertyInfo,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F____LocalTimeInMilliSeconds_PropertyInfo,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F____ClientVersion_PropertyInfo,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F____LocalMsTimestampDelegate_PropertyInfo,
	PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F_CustomAttributesCacheGenerator_PhotonPeer_tC9E4AC690DC9EA3BA7C4B454921ECE90CF667A5F____IsSendingOnlyAcks_PropertyInfo,
	TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557_CustomAttributesCacheGenerator_TrafficStatsGameLevel_t19287851B27932659D1D1ADB7E681EDE325C1557____DispatchCalls_PropertyInfo,
	Photon3Unity3D_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__frameworkDisplayName_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
