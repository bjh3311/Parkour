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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// GoogleMobileAds.Api.AdError
struct AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t0E45FC9ABD7DDC9C990CB1DEE7AED5BC26C2C199;
// GoogleMobileAds.Api.AdValue
struct AdValue_t942653EA562471F66C331011553D25F178130164;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tBAE54E40D14C918C13A826CF36284256427A72B5;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_tF4B1469E9B1B2E249D3A2408EA95EC0689DE274B;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754;
// GoogleMobileAds.Api.MobileAds
struct MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC;
// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t50AA27AD53E66688AE04F2C8C226831A6264F345;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_tD76B23ADE2D0A63D16BBECBFCF291B01062CEB7E;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t003075D29C3D2AB7E748C1A7940135835EED9BF3;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t6B2D0708D4B035A8AFD789145BBA74ED5FF7751D;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t0E77550074AD885911C610E15542756503DDB15A;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t0AF4CB966872E8894D736E7F82C18B9FD23F0ED1;
// GoogleMobileAds.Common.IMobileAdsClient
struct IMobileAdsClient_t66D3DBE7B87D42048C03C116371EBCED51DA269E;
// GoogleMobileAds.Common.IResponseInfoClient
struct IResponseInfoClient_tA3E5F71A1A19A9010F115B4B2977BD65713F29F7;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t28E66BBF9AA8E0970CC6783258261C806C1EA735;
// GoogleMobileAds.IClientFactory
struct IClientFactory_tA661F4E5A5D8350EAF36A0B6305C7B333B98BAAB;
// ResponseInfo
struct ResponseInfo_t8B429442354CD168EF6F8883A89E746F69A1B497;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t0F426AC2F966F8F0B822D54B82A1B428A94BCA65;
// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t28A2BCEFB70AEFE6E99554A511BBA80C3034919D;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t023EFF9EF15FEC485F6F37568D1AD38757CD6E8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_tC1F5784438E8B83F0CA1A1F165B45218A10B275B;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_t2AC534EAC6FA1F91BF6E544392BE220122F2F06E;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t4D0A90E94A8557872655B61A7F18514E11943F14;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t28A2BCEFB70AEFE6E99554A511BBA80C3034919D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t2AC534EAC6FA1F91BF6E544392BE220122F2F06E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t4D0A90E94A8557872655B61A7F18514E11943F14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAdErrorClient_tD76B23ADE2D0A63D16BBECBFCF291B01062CEB7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_tA661F4E5A5D8350EAF36A0B6305C7B333B98BAAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialClient_t0E77550074AD885911C610E15542756503DDB15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILoadAdErrorClient_t0AF4CB966872E8894D736E7F82C18B9FD23F0ED1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileAdsClient_t66D3DBE7B87D42048C03C116371EBCED51DA269E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationStatus_tF4B1469E9B1B2E249D3A2408EA95EC0689DE274B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_tCDEDC87B1CCD3B93044E078DB6CB2ECA3B08F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseInfo_t8B429442354CD168EF6F8883A89E746F69A1B497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral55D7DE77013E8A327C6934CC3264902283F7D427;
IL2CPP_EXTERN_C String_t* _stringLiteralA6292443F1F74698A3C4B93DE7A4584298C22FD7;
IL2CPP_EXTERN_C String_t* _stringLiteralC0343BD0A8FFCF941DD99486D38BB493EE32F4D6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mC56E07BE80F9CA1ECD5CFBF3A395D43C3F480491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD778CE63BC94853A17A4BCD35F624016434279D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m03914269BE236BAD28550BBEB687B22E118EFAC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m3A6F7A18F68E8FC4E27DD3EDAE97007CCF52B593_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m654D7DD1BE45560B3343091C8CBA3F5D50EF72B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m5F623C37741167D325387014BD22ADE75657EEF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m871138CC7822D00277B947D5530F77C1A29EBB25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mD945FC59D4979FD0F75D81D489E3259B799F6A2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__0_mF982E5879A42F28194D091EDA0653D95787BF557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__1_m59EB5EC4F76DE7B77BF295E60F9428428715B537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__2_m8540EFCBC00002627CFE7394FF1D970A58730577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__3_mA41788AEB629BF1CEBACB39A92EF111863BF5168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__4_mF0C6BFE87C8BC0696905473F0961F651A4E633EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__5_m24A0C751606FB929F32B3B91C88D7D4CA68DE784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__6_mCB2D13442C2685218CD374C794CDE298EBC6642C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m70CA3D6EBCB16133952EAA3FD3844633A29A472B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AdErrorEventArgs__ctor_mCCEB588CFBFDC3DE7A6D2B74197AF6199D1DE50E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdError_GetCause_mF807AA38272D8A602884B710CC82D62E489FFD72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdError_GetCode_m9E7378CD526721E9983205C216E84758AAA9E09A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdError_GetDomain_m45D939C644EE4402C78B38991BF87621648BF1F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdError_GetMessage_mEFFE7C35655F867988B21AC2FAF5BAF55959214D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdFailedToLoadEventArgs__ctor_mF4088863FCB30B71A525562A4D487C51E3AC00CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_LoadAd_m4937B1A7B927387D07E64BE1B5CFE5A78EBD9524_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_Show_mE4042A4466F5520E95EE7220F163D8D323C798A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__0_mF982E5879A42F28194D091EDA0653D95787BF557_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__1_m59EB5EC4F76DE7B77BF295E60F9428428715B537_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__2_m8540EFCBC00002627CFE7394FF1D970A58730577_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__3_mA41788AEB629BF1CEBACB39A92EF111863BF5168_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__4_mF0C6BFE87C8BC0696905473F0961F651A4E633EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__5_m24A0C751606FB929F32B3B91C88D7D4CA68DE784_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_U3CInterstitialAdU3Em__6_mCB2D13442C2685218CD374C794CDE298EBC6642C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd__ctor_mD4AC46357AB6167B8D0E36D38D4DA69E40C0A544_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_add_OnAdClosed_m252F4E6A7C0B5A8E35D223432625CBDC5600897B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_add_OnAdFailedToLoad_m86F7EEDA5A6B227C8698E965ADF73599732406F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_add_OnAdLoaded_m27682497EFB4755CFB3F7223B5A539893AED1DF3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_add_OnAdOpening_mAC371A613738D8FC355FA9BDDF9545190293EDA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_remove_OnAdClosed_m0137112EE3F744DFF1B4493E0DD383534DD56E97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_remove_OnAdFailedToLoad_mAC84242736EC0A4B42B16CE8A0A3415178E1670C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_remove_OnAdLoaded_m0D868797197CBA19D9953C4FE0C6D2CBC3D19F14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InterstitialAd_remove_OnAdOpening_m44ACC4603AA1428326ADFD643C0894F2A5318C24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LoadAdError_GetResponseInfo_m18EFFFE0BE67F6762F4A4C176F2BD5CEF4476952_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileAds_GetClientFactory_mC44252B2B0CDA90E7D0B7DC133CBF0B18F7A4A62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileAds_GetMobileAdsClient_mE241D4D07D43AF83152A44D57D2632E91BBC07AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileAds_Initialize_m139996A833514FA93328FD98B5D7EB7D5A76ADBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MobileAds_get_Instance_mB2838CA024F73E186DC023195880F37015CD76A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m70CA3D6EBCB16133952EAA3FD3844633A29A472B_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tA77BFCD0629EE6FC4177676039D42FC521868650 
{
public:

public:
};


// System.Object


// GoogleMobileAds.Api.AdError
struct  AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest
struct  AdRequest_t0E45FC9ABD7DDC9C990CB1DEE7AED5BC26C2C199  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___U3CExtrasU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t023EFF9EF15FEC485F6F37568D1AD38757CD6E8B * ___U3CMediationExtrasU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdRequest_t0E45FC9ABD7DDC9C990CB1DEE7AED5BC26C2C199, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_t0E45FC9ABD7DDC9C990CB1DEE7AED5BC26C2C199, ___U3CExtrasU3Ek__BackingField_2)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_U3CExtrasU3Ek__BackingField_2() const { return ___U3CExtrasU3Ek__BackingField_2; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_U3CExtrasU3Ek__BackingField_2() { return &___U3CExtrasU3Ek__BackingField_2; }
	inline void set_U3CExtrasU3Ek__BackingField_2(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___U3CExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_t0E45FC9ABD7DDC9C990CB1DEE7AED5BC26C2C199, ___U3CMediationExtrasU3Ek__BackingField_3)); }
	inline List_1_t023EFF9EF15FEC485F6F37568D1AD38757CD6E8B * get_U3CMediationExtrasU3Ek__BackingField_3() const { return ___U3CMediationExtrasU3Ek__BackingField_3; }
	inline List_1_t023EFF9EF15FEC485F6F37568D1AD38757CD6E8B ** get_address_of_U3CMediationExtrasU3Ek__BackingField_3() { return &___U3CMediationExtrasU3Ek__BackingField_3; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_3(List_1_t023EFF9EF15FEC485F6F37568D1AD38757CD6E8B * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_3), (void*)value);
	}
};

struct AdRequest_t0E45FC9ABD7DDC9C990CB1DEE7AED5BC26C2C199_StaticFields
{
public:
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdRequest_t0E45FC9ABD7DDC9C990CB1DEE7AED5BC26C2C199_StaticFields, ___U3CVersionU3Ek__BackingField_0)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_0), (void*)value);
	}
};


// GoogleMobileAds.Api.BannerView
struct  BannerView_t78459A8A871A01B76E59FA8EF33A752172891E78  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D * ___OnPaidEvent_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(BannerView_t78459A8A871A01B76E59FA8EF33A752172891E78, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdLoaded_1() { return static_cast<int32_t>(offsetof(BannerView_t78459A8A871A01B76E59FA8EF33A752172891E78, ___OnAdLoaded_1)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdLoaded_1() const { return ___OnAdLoaded_1; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdLoaded_1() { return &___OnAdLoaded_1; }
	inline void set_OnAdLoaded_1(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdLoaded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_2() { return static_cast<int32_t>(offsetof(BannerView_t78459A8A871A01B76E59FA8EF33A752172891E78, ___OnAdFailedToLoad_2)); }
	inline EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * get_OnAdFailedToLoad_2() const { return ___OnAdFailedToLoad_2; }
	inline EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 ** get_address_of_OnAdFailedToLoad_2() { return &___OnAdFailedToLoad_2; }
	inline void set_OnAdFailedToLoad_2(EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * value)
	{
		___OnAdFailedToLoad_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_3() { return static_cast<int32_t>(offsetof(BannerView_t78459A8A871A01B76E59FA8EF33A752172891E78, ___OnAdOpening_3)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdOpening_3() const { return ___OnAdOpening_3; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdOpening_3() { return &___OnAdOpening_3; }
	inline void set_OnAdOpening_3(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdOpening_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(BannerView_t78459A8A871A01B76E59FA8EF33A752172891E78, ___OnAdClosed_4)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_5() { return static_cast<int32_t>(offsetof(BannerView_t78459A8A871A01B76E59FA8EF33A752172891E78, ___OnPaidEvent_5)); }
	inline EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D * get_OnPaidEvent_5() const { return ___OnPaidEvent_5; }
	inline EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D ** get_address_of_OnPaidEvent_5() { return &___OnPaidEvent_5; }
	inline void set_OnPaidEvent_5(EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D * value)
	{
		___OnPaidEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_5), (void*)value);
	}
};


// GoogleMobileAds.Api.InitializationStatus
struct  InitializationStatus_tF4B1469E9B1B2E249D3A2408EA95EC0689DE274B  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InitializationStatus_tF4B1469E9B1B2E249D3A2408EA95EC0689DE274B, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InterstitialAd
struct  InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_tC1F5784438E8B83F0CA1A1F165B45218A10B275B * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D * ___OnPaidEvent_9;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE, ___OnAdLoaded_3)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE, ___OnAdOpening_5)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE, ___OnAdClosed_6)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_tC1F5784438E8B83F0CA1A1F165B45218A10B275B * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_tC1F5784438E8B83F0CA1A1F165B45218A10B275B ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_tC1F5784438E8B83F0CA1A1F165B45218A10B275B * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_9() { return static_cast<int32_t>(offsetof(InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE, ___OnPaidEvent_9)); }
	inline EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D * get_OnPaidEvent_9() const { return ___OnPaidEvent_9; }
	inline EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D ** get_address_of_OnPaidEvent_9() { return &___OnPaidEvent_9; }
	inline void set_OnPaidEvent_9(EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D * value)
	{
		___OnPaidEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_9), (void*)value);
	}
};


// GoogleMobileAds.Api.MobileAds
struct  MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};

struct MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_StaticFields
{
public:
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_1;
	// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::instance
	MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC * ___instance_2;

public:
	inline static int32_t get_offset_of_clientFactory_1() { return static_cast<int32_t>(offsetof(MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_StaticFields, ___clientFactory_1)); }
	inline RuntimeObject* get_clientFactory_1() const { return ___clientFactory_1; }
	inline RuntimeObject** get_address_of_clientFactory_1() { return &___clientFactory_1; }
	inline void set_clientFactory_1(RuntimeObject* value)
	{
		___clientFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientFactory_1), (void*)value);
	}

	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_StaticFields, ___instance_2)); }
	inline MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC * get_instance_2() const { return ___instance_2; }
	inline MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_2), (void*)value);
	}
};


// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct  U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F  : public RuntimeObject
{
public:
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::initCompleteAction
	Action_1_t0F426AC2F966F8F0B822D54B82A1B428A94BCA65 * ___initCompleteAction_0;

public:
	inline static int32_t get_offset_of_initCompleteAction_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F, ___initCompleteAction_0)); }
	inline Action_1_t0F426AC2F966F8F0B822D54B82A1B428A94BCA65 * get_initCompleteAction_0() const { return ___initCompleteAction_0; }
	inline Action_1_t0F426AC2F966F8F0B822D54B82A1B428A94BCA65 ** get_address_of_initCompleteAction_0() { return &___initCompleteAction_0; }
	inline void set_initCompleteAction_0(Action_1_t0F426AC2F966F8F0B822D54B82A1B428A94BCA65 * value)
	{
		___initCompleteAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initCompleteAction_0), (void*)value);
	}
};


// ResponseInfo
struct  ResponseInfo_t8B429442354CD168EF6F8883A89E746F69A1B497  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IResponseInfoClient ResponseInfo::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(ResponseInfo_t8B429442354CD168EF6F8883A89E746F69A1B497, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// GoogleMobileAds.Api.AdErrorEventArgs
struct  AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D, ___U3CAdErrorU3Ek__BackingField_1)); }
	inline AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * get_U3CAdErrorU3Ek__BackingField_1() const { return ___U3CAdErrorU3Ek__BackingField_1; }
	inline AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D ** get_address_of_U3CAdErrorU3Ek__BackingField_1() { return &___U3CAdErrorU3Ek__BackingField_1; }
	inline void set_U3CAdErrorU3Ek__BackingField_1(AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * value)
	{
		___U3CAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}
};


// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct  AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * ___U3CLoadAdErrorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73, ___U3CLoadAdErrorU3Ek__BackingField_1)); }
	inline LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * get_U3CLoadAdErrorU3Ek__BackingField_1() const { return ___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 ** get_address_of_U3CLoadAdErrorU3Ek__BackingField_1() { return &___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorU3Ek__BackingField_1(LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * value)
	{
		___U3CLoadAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdValueEventArgs
struct  AdValueEventArgs_tBAE54E40D14C918C13A826CF36284256427A72B5  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t942653EA562471F66C331011553D25F178130164 * ___U3CAdValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValueEventArgs_tBAE54E40D14C918C13A826CF36284256427A72B5, ___U3CAdValueU3Ek__BackingField_1)); }
	inline AdValue_t942653EA562471F66C331011553D25F178130164 * get_U3CAdValueU3Ek__BackingField_1() const { return ___U3CAdValueU3Ek__BackingField_1; }
	inline AdValue_t942653EA562471F66C331011553D25F178130164 ** get_address_of_U3CAdValueU3Ek__BackingField_1() { return &___U3CAdValueU3Ek__BackingField_1; }
	inline void set_U3CAdValueU3Ek__BackingField_1(AdValue_t942653EA562471F66C331011553D25F178130164 * value)
	{
		___U3CAdValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdValueU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.LoadAdError
struct  LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754  : public AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::client
	RuntimeObject* ___client_1;

public:
	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754, ___client_1)); }
	inline RuntimeObject* get_client_1() const { return ___client_1; }
	inline RuntimeObject** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(RuntimeObject* value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}
};


// GoogleMobileAds.Common.AdErrorClientEventArgs
struct  AdErrorClientEventArgs_t50AA27AD53E66688AE04F2C8C226831A6264F345  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorClientEventArgs_t50AA27AD53E66688AE04F2C8C226831A6264F345, ___U3CAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAdErrorClientU3Ek__BackingField_1() const { return ___U3CAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAdErrorClientU3Ek__BackingField_1() { return &___U3CAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct  LoadAdErrorClientEventArgs_t28E66BBF9AA8E0970CC6783258261C806C1EA735  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadAdErrorClientEventArgs_t28E66BBF9AA8E0970CC6783258261C806C1EA735, ___U3CLoadAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLoadAdErrorClientU3Ek__BackingField_1() const { return ___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return &___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLoadAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

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
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

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

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

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

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct  Action_1_t0F426AC2F966F8F0B822D54B82A1B428A94BCA65  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct  Action_1_t28A2BCEFB70AEFE6E99554A511BBA80C3034919D  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct  EventHandler_1_tC1F5784438E8B83F0CA1A1F165B45218A10B275B  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct  EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct  EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct  EventHandler_1_t2AC534EAC6FA1F91BF6E544392BE220122F2F06E  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct  EventHandler_1_t4D0A90E94A8557872655B61A7F18514E11943F14  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct  EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m02A042FB5108634F10C7EE1D64CE94E0AEA9EB58 (AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mC44252B2B0CDA90E7D0B7DC133CBF0B18F7A4A62 (const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m871138CC7822D00277B947D5530F77C1A29EBB25 (EventHandler_1_t4D0A90E94A8557872655B61A7F18514E11943F14 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t4D0A90E94A8557872655B61A7F18514E11943F14 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m5F623C37741167D325387014BD22ADE75657EEF5 (EventHandler_1_t2AC534EAC6FA1F91BF6E544392BE220122F2F06E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2AC534EAC6FA1F91BF6E544392BE220122F2F06E *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mD945FC59D4979FD0F75D81D489E3259B799F6A2F (EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m2B63E0185E48A8399ABDEB01EBEA4EF5A05797DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0 (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m8E95A15CEDC1958B0EE28BB5709EC7BF4BF02204_inline (LoadAdErrorClientEventArgs_t28E66BBF9AA8E0970CC6783258261C806C1EA735 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m98832AEB2B722BA9DA37129522BCBDDAC951324A (LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_mF4088863FCB30B71A525562A4D487C51E3AC00CD (AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_m4A8C1ABE0ECCC23ED8ABD7C9F535DE184499333D_inline (AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 * __this, LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m654D7DD1BE45560B3343091C8CBA3F5D50EF72B1 (EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 *, RuntimeObject *, AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_m1611BAB060DD9B8E2A04BEC0BA9F63101989DB17_inline (AdErrorClientEventArgs_t50AA27AD53E66688AE04F2C8C226831A6264F345 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mCCEB588CFBFDC3DE7A6D2B74197AF6199D1DE50E (AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m1F6AABC558CF329FCC9CDC30FCDDF114B3601636_inline (AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D * __this, AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m3A6F7A18F68E8FC4E27DD3EDAE97007CCF52B593 (EventHandler_1_tC1F5784438E8B83F0CA1A1F165B45218A10B275B * __this, RuntimeObject * ___sender0, AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC1F5784438E8B83F0CA1A1F165B45218A10B275B *, RuntimeObject *, AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m03914269BE236BAD28550BBEB687B22E118EFAC2 (EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D * __this, RuntimeObject * ___sender0, AdValueEventArgs_tBAE54E40D14C918C13A826CF36284256427A72B5 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D *, RuntimeObject *, AdValueEventArgs_tBAE54E40D14C918C13A826CF36284256427A72B5 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void ResponseInfo::.ctor(GoogleMobileAds.Common.IResponseInfoClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseInfo__ctor_mD8763C1956C90E245F3C594A76E706436B3CE2E2 (ResponseInfo_t8B429442354CD168EF6F8883A89E746F69A1B497 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_mE241D4D07D43AF83152A44D57D2632E91BBC07AA (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_m44F17A7A796231B9ACE9C4A95967227089E0E4C4 (MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_mCFCB74A38E8757051A0A1A2825FA4F9B048E49ED (U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC * MobileAds_get_Instance_mB2838CA024F73E186DC023195880F37015CD76A2 (const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD778CE63BC94853A17A4BCD35F624016434279D3 (Action_1_t28A2BCEFB70AEFE6E99554A511BBA80C3034919D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t28A2BCEFB70AEFE6E99554A511BBA80C3034919D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_mB52D93379B4D45D0254D751EB34B8AA9006EDBB7 (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetType_mCF0A3B28889C9FFB9987C8D30C23DF0912E7C00C (String_t* ___typeName0, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_mE2257744BBE31A4EC74625EB3C9AE4E3154BC961 (InitializationStatus_tF4B1469E9B1B2E249D3A2408EA95EC0689DE274B * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::Invoke(!0)
inline void Action_1_Invoke_mC56E07BE80F9CA1ECD5CFBF3A395D43C3F480491 (Action_1_t0F426AC2F966F8F0B822D54B82A1B428A94BCA65 * __this, InitializationStatus_tF4B1469E9B1B2E249D3A2408EA95EC0689DE274B * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0F426AC2F966F8F0B822D54B82A1B428A94BCA65 *, InitializationStatus_tF4B1469E9B1B2E249D3A2408EA95EC0689DE274B *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
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
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m02A042FB5108634F10C7EE1D64CE94E0AEA9EB58 (AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
		return;
	}
}
// System.Int32 GoogleMobileAds.Api.AdError::GetCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdError_GetCode_m9E7378CD526721E9983205C216E84758AAA9E09A (AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdError_GetCode_m9E7378CD526721E9983205C216E84758AAA9E09A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 GoogleMobileAds.Common.IAdErrorClient::GetCode() */, IAdErrorClient_tD76B23ADE2D0A63D16BBECBFCF291B01062CEB7E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.AdError::GetDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_GetDomain_m45D939C644EE4402C78B38991BF87621648BF1F7 (AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdError_GetDomain_m45D939C644EE4402C78B38991BF87621648BF1F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		String_t* L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String GoogleMobileAds.Common.IAdErrorClient::GetDomain() */, IAdErrorClient_tD76B23ADE2D0A63D16BBECBFCF291B01062CEB7E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.AdError::GetMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_GetMessage_mEFFE7C35655F867988B21AC2FAF5BAF55959214D (AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdError_GetMessage_mEFFE7C35655F867988B21AC2FAF5BAF55959214D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		String_t* L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String GoogleMobileAds.Common.IAdErrorClient::GetMessage() */, IAdErrorClient_tD76B23ADE2D0A63D16BBECBFCF291B01062CEB7E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdError::GetCause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * AdError_GetCause_mF807AA38272D8A602884B710CC82D62E489FFD72 (AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdError_GetCause_mF807AA38272D8A602884B710CC82D62E489FFD72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.IAdErrorClient::GetCause() */, IAdErrorClient_tD76B23ADE2D0A63D16BBECBFCF291B01062CEB7E_il2cpp_TypeInfo_var, L_0);
		AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * L_2 = (AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D *)il2cpp_codegen_object_new(AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D_il2cpp_TypeInfo_var);
		AdError__ctor_m02A042FB5108634F10C7EE1D64CE94E0AEA9EB58(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_mC3E6994058CB833B3BE803B3B8C5F0EE94CC2017 (AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mCCEB588CFBFDC3DE7A6D2B74197AF6199D1DE50E (AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdErrorEventArgs__ctor_mCCEB588CFBFDC3DE7A6D2B74197AF6199D1DE50E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m1F6AABC558CF329FCC9CDC30FCDDF114B3601636 (AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D * __this, AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
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
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_mF4088863FCB30B71A525562A4D487C51E3AC00CD (AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdFailedToLoadEventArgs__ctor_mF4088863FCB30B71A525562A4D487C51E3AC00CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::get_LoadAdError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * AdFailedToLoadEventArgs_get_LoadAdError_m8FB4C19A8DFA7AFFB310FBFCA65A08F3EC5F8AA2 (AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 * __this, const RuntimeMethod* method)
{
	{
		LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * L_0 = __this->get_U3CLoadAdErrorU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_m4A8C1ABE0ECCC23ED8ABD7C9F535DE184499333D (AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 * __this, LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_mE2257744BBE31A4EC74625EB3C9AE4E3154BC961 (InitializationStatus_tF4B1469E9B1B2E249D3A2408EA95EC0689DE274B * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
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
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_mD4AC46357AB6167B8D0E36D38D4DA69E40C0A544 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd__ctor_mD4AC46357AB6167B8D0E36D38D4DA69E40C0A544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = MobileAds_GetClientFactory_mC44252B2B0CDA90E7D0B7DC133CBF0B18F7A4A62(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.IClientFactory::BuildInterstitialClient() */, IClientFactory_tA661F4E5A5D8350EAF36A0B6305C7B333B98BAAB_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		String_t* L_2 = ___adUnitId0;
		__this->set_adUnitId_1(L_2);
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_3 = __this->get_client_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAds.Common.IInterstitialClient::CreateInterstitialAd() */, IInterstitialClient_t0E77550074AD885911C610E15542756503DDB15A_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_5 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_5, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__0_mF982E5879A42F28194D091EDA0653D95787BF557_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t0E77550074AD885911C610E15542756503DDB15A_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_t4D0A90E94A8557872655B61A7F18514E11943F14 * L_7 = (EventHandler_1_t4D0A90E94A8557872655B61A7F18514E11943F14 *)il2cpp_codegen_object_new(EventHandler_1_t4D0A90E94A8557872655B61A7F18514E11943F14_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m871138CC7822D00277B947D5530F77C1A29EBB25(L_7, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__1_m59EB5EC4F76DE7B77BF295E60F9428428715B537_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m871138CC7822D00277B947D5530F77C1A29EBB25_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_t4D0A90E94A8557872655B61A7F18514E11943F14 * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IInterstitialClient_t0E77550074AD885911C610E15542756503DDB15A_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_9, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__2_m8540EFCBC00002627CFE7394FF1D970A58730577_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t0E77550074AD885911C610E15542756503DDB15A_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_11 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_11, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__3_mA41788AEB629BF1CEBACB39A92EF111863BF5168_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(10 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t0E77550074AD885911C610E15542756503DDB15A_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get_client_0();
		EventHandler_1_t2AC534EAC6FA1F91BF6E544392BE220122F2F06E * L_13 = (EventHandler_1_t2AC534EAC6FA1F91BF6E544392BE220122F2F06E *)il2cpp_codegen_object_new(EventHandler_1_t2AC534EAC6FA1F91BF6E544392BE220122F2F06E_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m5F623C37741167D325387014BD22ADE75657EEF5(L_13, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__4_mF0C6BFE87C8BC0696905473F0961F651A4E633EB_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m5F623C37741167D325387014BD22ADE75657EEF5_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_t2AC534EAC6FA1F91BF6E544392BE220122F2F06E * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IInterstitialClient_t0E77550074AD885911C610E15542756503DDB15A_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->get_client_0();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_15 = (EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)il2cpp_codegen_object_new(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A(L_15, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__5_m24A0C751606FB929F32B3B91C88D7D4CA68DE784_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m95BE445179DEC2B410097D8B7B780F04EBA97E6A_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t0E77550074AD885911C610E15542756503DDB15A_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->get_client_0();
		EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D * L_17 = (EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D *)il2cpp_codegen_object_new(EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD945FC59D4979FD0F75D81D489E3259B799F6A2F(L_17, __this, (intptr_t)((intptr_t)InterstitialAd_U3CInterstitialAdU3Em__6_mCB2D13442C2685218CD374C794CDE298EBC6642C_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mD945FC59D4979FD0F75D81D489E3259B799F6A2F_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IInterstitialClient_t0E77550074AD885911C610E15542756503DDB15A_il2cpp_TypeInfo_var, L_16, L_17);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_m27682497EFB4755CFB3F7223B5A539893AED1DF3 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_add_OnAdLoaded_m27682497EFB4755CFB3F7223B5A539893AED1DF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdLoaded_m0D868797197CBA19D9953C4FE0C6D2CBC3D19F14 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_remove_OnAdLoaded_m0D868797197CBA19D9953C4FE0C6D2CBC3D19F14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_m86F7EEDA5A6B227C8698E965ADF73599732406F8 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_add_OnAdFailedToLoad_m86F7EEDA5A6B227C8698E965ADF73599732406F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * V_0 = NULL;
	EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * V_1 = NULL;
	{
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_3 = V_1;
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_6 = V_0;
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 *>((EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 **)L_2, ((EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_8 = V_0;
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 *)L_8) == ((RuntimeObject*)(EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFailedToLoad_mAC84242736EC0A4B42B16CE8A0A3415178E1670C (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_remove_OnAdFailedToLoad_mAC84242736EC0A4B42B16CE8A0A3415178E1670C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * V_0 = NULL;
	EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * V_1 = NULL;
	{
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_3 = V_1;
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_6 = V_0;
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 *>((EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 **)L_2, ((EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_8 = V_0;
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 *)L_8) == ((RuntimeObject*)(EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdOpening_mAC371A613738D8FC355FA9BDDF9545190293EDA4 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_add_OnAdOpening_mAC371A613738D8FC355FA9BDDF9545190293EDA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdOpening_m44ACC4603AA1428326ADFD643C0894F2A5318C24 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_remove_OnAdOpening_m44ACC4603AA1428326ADFD643C0894F2A5318C24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m252F4E6A7C0B5A8E35D223432625CBDC5600897B (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_add_OnAdClosed_m252F4E6A7C0B5A8E35D223432625CBDC5600897B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdClosed_m0137112EE3F744DFF1B4493E0DD383534DD56E97 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_remove_OnAdClosed_m0137112EE3F744DFF1B4493E0DD383534DD56E97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_0 = NULL;
	EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * V_1 = NULL;
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_3 = V_1;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_6 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *>((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C **)L_2, ((EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_8 = V_0;
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_8) == ((RuntimeObject*)(EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_m4937B1A7B927387D07E64BE1B5CFE5A78EBD9524 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, AdRequest_t0E45FC9ABD7DDC9C990CB1DEE7AED5BC26C2C199 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_LoadAd_m4937B1A7B927387D07E64BE1B5CFE5A78EBD9524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		String_t* L_1 = __this->get_adUnitId_1();
		AdRequest_t0E45FC9ABD7DDC9C990CB1DEE7AED5BC26C2C199 * L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_t0E45FC9ABD7DDC9C990CB1DEE7AED5BC26C2C199 * >::Invoke(15 /* System.Void GoogleMobileAds.Common.IInterstitialClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IInterstitialClient_t0E77550074AD885911C610E15542756503DDB15A_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m5ADF22BC1BDC783244F2F38EB644C449574BB2A2 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoaded_2();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_mE4042A4466F5520E95EE7220F163D8D323C798A6 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_Show_mE4042A4466F5520E95EE7220F163D8D323C798A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IInterstitialClient::Show() */, IInterstitialClient_t0E77550074AD885911C610E15542756503DDB15A_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__0_mF982E5879A42F28194D091EDA0653D95787BF557 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__0_mF982E5879A42F28194D091EDA0653D95787BF557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)1);
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdLoaded_3();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdLoaded_3();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__1_m59EB5EC4F76DE7B77BF295E60F9428428715B537 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_t28E66BBF9AA8E0970CC6783258261C806C1EA735 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__1_m59EB5EC4F76DE7B77BF295E60F9428428715B537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * V_0 = NULL;
	AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 * V_1 = NULL;
	{
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_0 = __this->get_OnAdFailedToLoad_4();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t28E66BBF9AA8E0970CC6783258261C806C1EA735 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m8E95A15CEDC1958B0EE28BB5709EC7BF4BF02204_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * L_3 = (LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 *)il2cpp_codegen_object_new(LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m98832AEB2B722BA9DA37129522BCBDDAC951324A(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tECF3D0509A0E8C99B27EA3492464E42E544FF728 * L_4 = __this->get_OnAdFailedToLoad_4();
		AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 * L_5 = (AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_mF4088863FCB30B71A525562A4D487C51E3AC00CD(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 * L_6 = V_1;
		LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_m4A8C1ABE0ECCC23ED8ABD7C9F535DE184499333D_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m654D7DD1BE45560B3343091C8CBA3F5D50EF72B1(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m654D7DD1BE45560B3343091C8CBA3F5D50EF72B1_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__2_m8540EFCBC00002627CFE7394FF1D970A58730577 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__2_m8540EFCBC00002627CFE7394FF1D970A58730577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdOpening_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdOpening_5();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__3_mA41788AEB629BF1CEBACB39A92EF111863BF5168 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__3_mA41788AEB629BF1CEBACB39A92EF111863BF5168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdClosed_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdClosed_6();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__4(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__4_mF0C6BFE87C8BC0696905473F0961F651A4E633EB (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_t50AA27AD53E66688AE04F2C8C226831A6264F345 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__4_mF0C6BFE87C8BC0696905473F0961F651A4E633EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * V_0 = NULL;
	AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D * V_1 = NULL;
	{
		EventHandler_1_tC1F5784438E8B83F0CA1A1F165B45218A10B275B * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t50AA27AD53E66688AE04F2C8C226831A6264F345 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2 = AdErrorClientEventArgs_get_AdErrorClient_m1611BAB060DD9B8E2A04BEC0BA9F63101989DB17_inline(L_1, /*hidden argument*/NULL);
		AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * L_3 = (AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D *)il2cpp_codegen_object_new(AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D_il2cpp_TypeInfo_var);
		AdError__ctor_m02A042FB5108634F10C7EE1D64CE94E0AEA9EB58(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_tC1F5784438E8B83F0CA1A1F165B45218A10B275B * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D * L_5 = (AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D *)il2cpp_codegen_object_new(AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_mCCEB588CFBFDC3DE7A6D2B74197AF6199D1DE50E(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D * L_6 = V_1;
		AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m1F6AABC558CF329FCC9CDC30FCDDF114B3601636_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m3A6F7A18F68E8FC4E27DD3EDAE97007CCF52B593(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m3A6F7A18F68E8FC4E27DD3EDAE97007CCF52B593_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__5_m24A0C751606FB929F32B3B91C88D7D4CA68DE784 (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__5_m24A0C751606FB929F32B3B91C88D7D4CA68DE784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_0 = __this->get_OnAdDidRecordImpression_8();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tC6215D2159DD2BDB1C7F565DFF0AB31BF690F92C * L_1 = __this->get_OnAdDidRecordImpression_8();
		EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m155EB01CC36678145C1332553A330549DC2BC3C0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__6(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__6_mCB2D13442C2685218CD374C794CDE298EBC6642C (InterstitialAd_t58C91F5F28B4F433ACCE01969991218EBD81C6FE * __this, RuntimeObject * ___sender0, AdValueEventArgs_tBAE54E40D14C918C13A826CF36284256427A72B5 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InterstitialAd_U3CInterstitialAdU3Em__6_mCB2D13442C2685218CD374C794CDE298EBC6642C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D * L_0 = __this->get_OnPaidEvent_9();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA3FDFF85A9E8637D03B0A86EB81D77AA93C6407D * L_1 = __this->get_OnPaidEvent_9();
		AdValueEventArgs_tBAE54E40D14C918C13A826CF36284256427A72B5 * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m03914269BE236BAD28550BBEB687B22E118EFAC2(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m03914269BE236BAD28550BBEB687B22E118EFAC2_RuntimeMethod_var);
	}

IL_0018:
	{
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
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m98832AEB2B722BA9DA37129522BCBDDAC951324A (LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m02A042FB5108634F10C7EE1D64CE94E0AEA9EB58(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___client0;
		__this->set_client_1(L_1);
		return;
	}
}
// ResponseInfo GoogleMobileAds.Api.LoadAdError::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t8B429442354CD168EF6F8883A89E746F69A1B497 * LoadAdError_GetResponseInfo_m18EFFFE0BE67F6762F4A4C176F2BD5CEF4476952 (LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoadAdError_GetResponseInfo_m18EFFFE0BE67F6762F4A4C176F2BD5CEF4476952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.ILoadAdErrorClient::GetResponseInfoClient() */, ILoadAdErrorClient_t0AF4CB966872E8894D736E7F82C18B9FD23F0ED1_il2cpp_TypeInfo_var, L_0);
		ResponseInfo_t8B429442354CD168EF6F8883A89E746F69A1B497 * L_2 = (ResponseInfo_t8B429442354CD168EF6F8883A89E746F69A1B497 *)il2cpp_codegen_object_new(ResponseInfo_t8B429442354CD168EF6F8883A89E746F69A1B497_il2cpp_TypeInfo_var);
		ResponseInfo__ctor_mD8763C1956C90E245F3C594A76E706436B3CE2E2(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_m895194C3D627E3C4EA08A6A85BACB707EA6F7FA9 (LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_m44F17A7A796231B9ACE9C4A95967227089E0E4C4 (MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = MobileAds_GetMobileAdsClient_mE241D4D07D43AF83152A44D57D2632E91BBC07AA(/*hidden argument*/NULL);
		__this->set_client_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC * MobileAds_get_Instance_mB2838CA024F73E186DC023195880F37015CD76A2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAds_get_Instance_mB2838CA024F73E186DC023195880F37015CD76A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC * L_0 = ((MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_il2cpp_TypeInfo_var))->get_instance_2();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC * L_1 = (MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC *)il2cpp_codegen_object_new(MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_il2cpp_TypeInfo_var);
		MobileAds__ctor_m44F17A7A796231B9ACE9C4A95967227089E0E4C4(L_1, /*hidden argument*/NULL);
		((MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_il2cpp_TypeInfo_var))->set_instance_2(L_1);
	}

IL_0014:
	{
		MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC * L_2 = ((MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_il2cpp_TypeInfo_var))->get_instance_2();
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m139996A833514FA93328FD98B5D7EB7D5A76ADBA (Action_1_t0F426AC2F966F8F0B822D54B82A1B428A94BCA65 * ___initCompleteAction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAds_Initialize_m139996A833514FA93328FD98B5D7EB7D5A76ADBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F * V_0 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F * L_0 = (U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F *)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F_il2cpp_TypeInfo_var);
		U3CInitializeU3Ec__AnonStorey0__ctor_mCFCB74A38E8757051A0A1A2825FA4F9B048E49ED(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F * L_1 = V_0;
		Action_1_t0F426AC2F966F8F0B822D54B82A1B428A94BCA65 * L_2 = ___initCompleteAction0;
		NullCheck(L_1);
		L_1->set_initCompleteAction_0(L_2);
		MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC * L_3 = MobileAds_get_Instance_mB2838CA024F73E186DC023195880F37015CD76A2(/*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_client_0();
		U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F * L_5 = V_0;
		Action_1_t28A2BCEFB70AEFE6E99554A511BBA80C3034919D * L_6 = (Action_1_t28A2BCEFB70AEFE6E99554A511BBA80C3034919D *)il2cpp_codegen_object_new(Action_1_t28A2BCEFB70AEFE6E99554A511BBA80C3034919D_il2cpp_TypeInfo_var);
		Action_1__ctor_mD778CE63BC94853A17A4BCD35F624016434279D3(L_6, L_5, (intptr_t)((intptr_t)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m70CA3D6EBCB16133952EAA3FD3844633A29A472B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD778CE63BC94853A17A4BCD35F624016434279D3_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t28A2BCEFB70AEFE6E99554A511BBA80C3034919D * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::Initialize(System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>) */, IMobileAdsClient_t66D3DBE7B87D42048C03C116371EBCED51DA269E_il2cpp_TypeInfo_var, L_4, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_tCDEDC87B1CCD3B93044E078DB6CB2ECA3B08F4E8_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_mB52D93379B4D45D0254D751EB34B8AA9006EDBB7(/*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mC44252B2B0CDA90E7D0B7DC133CBF0B18F7A4A62 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAds_GetClientFactory_mC44252B2B0CDA90E7D0B7DC133CBF0B18F7A4A62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_il2cpp_TypeInfo_var))->get_clientFactory_1();
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteralC0343BD0A8FFCF941DD99486D38BB493EE32F4D6;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteral55D7DE77013E8A327C6934CC3264902283F7D427;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralA6292443F1F74698A3C4B93DE7A4584298C22FD7;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_mCF0A3B28889C9FFB9987C8D30C23DF0912E7C00C, L_3, "GoogleMobileAds, Version=7.2.0.0, Culture=neutral, PublicKeyToken=null");
		V_1 = L_4;
		Type_t * L_5 = V_1;
		RuntimeObject * L_6 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_5, /*hidden argument*/NULL);
		((MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_il2cpp_TypeInfo_var))->set_clientFactory_1(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_tA661F4E5A5D8350EAF36A0B6305C7B333B98BAAB_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_t820C5852798FA1072C9F4245F96F8C36D3B56BAC_il2cpp_TypeInfo_var))->get_clientFactory_1();
		return L_7;
	}
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_mE241D4D07D43AF83152A44D57D2632E91BBC07AA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileAds_GetMobileAdsClient_mE241D4D07D43AF83152A44D57D2632E91BBC07AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = MobileAds_GetClientFactory_mC44252B2B0CDA90E7D0B7DC133CBF0B18F7A4A62(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.IClientFactory::MobileAdsInstance() */, IClientFactory_tA661F4E5A5D8350EAF36A0B6305C7B333B98BAAB_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_mCFCB74A38E8757051A0A1A2825FA4F9B048E49ED (U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::<>m__0(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m70CA3D6EBCB16133952EAA3FD3844633A29A472B (U3CInitializeU3Ec__AnonStorey0_t250A616412E1B2494DAD03DA662E3815389D048F * __this, RuntimeObject* ___initStatusClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m70CA3D6EBCB16133952EAA3FD3844633A29A472B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t0F426AC2F966F8F0B822D54B82A1B428A94BCA65 * L_0 = __this->get_initCompleteAction_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Action_1_t0F426AC2F966F8F0B822D54B82A1B428A94BCA65 * L_1 = __this->get_initCompleteAction_0();
		RuntimeObject* L_2 = ___initStatusClient0;
		InitializationStatus_tF4B1469E9B1B2E249D3A2408EA95EC0689DE274B * L_3 = (InitializationStatus_tF4B1469E9B1B2E249D3A2408EA95EC0689DE274B *)il2cpp_codegen_object_new(InitializationStatus_tF4B1469E9B1B2E249D3A2408EA95EC0689DE274B_il2cpp_TypeInfo_var);
		InitializationStatus__ctor_mE2257744BBE31A4EC74625EB3C9AE4E3154BC961(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_mC56E07BE80F9CA1ECD5CFBF3A395D43C3F480491(L_1, L_3, /*hidden argument*/Action_1_Invoke_mC56E07BE80F9CA1ECD5CFBF3A395D43C3F480491_RuntimeMethod_var);
	}

IL_001c:
	{
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
// System.Void ResponseInfo::.ctor(GoogleMobileAds.Common.IResponseInfoClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseInfo__ctor_mD8763C1956C90E245F3C594A76E706436B3CE2E2 (ResponseInfo_t8B429442354CD168EF6F8883A89E746F69A1B497 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
		return;
	}
}
// System.String ResponseInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseInfo_ToString_m38AEE773C8638E4C4760A724F51ADC37198469B4 (ResponseInfo_t8B429442354CD168EF6F8883A89E746F69A1B497 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m8E95A15CEDC1958B0EE28BB5709EC7BF4BF02204_inline (LoadAdErrorClientEventArgs_t28E66BBF9AA8E0970CC6783258261C806C1EA735 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLoadAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_m4A8C1ABE0ECCC23ED8ABD7C9F535DE184499333D_inline (AdFailedToLoadEventArgs_tF2E917A359557368859169F5F60EB9D0ACF71A73 * __this, LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_t485193E4B8FA1E30A9818B9C905A4EAEC2C29754 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_m1611BAB060DD9B8E2A04BEC0BA9F63101989DB17_inline (AdErrorClientEventArgs_t50AA27AD53E66688AE04F2C8C226831A6264F345 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m1F6AABC558CF329FCC9CDC30FCDDF114B3601636_inline (AdErrorEventArgs_t1CDB348F69553F21FAD9B3DA203083F8C5D9E07D * __this, AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t82C41BE041450535E25131EA1BCC90C28F38D99D * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
