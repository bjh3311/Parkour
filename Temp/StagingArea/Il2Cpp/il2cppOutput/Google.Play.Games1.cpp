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

template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// GooglePlayGames.Android.AndroidClient
struct AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5;
// GooglePlayGames.Android.AndroidNearbyConnectionClient
struct AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355;
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249;
// GooglePlayGames.BasicApi.DummyClient
struct DummyClient_tE38F53999E10D9E4AB27B18622CC9D4B1FA08D79;
// GooglePlayGames.BasicApi.Events.IEventsClient
struct IEventsClient_tF98E4071266B4BF91E598E4AF816344057F209E3;
// GooglePlayGames.BasicApi.IPlayGamesClient
struct IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465;
// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B;
// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116;
// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener
struct IDiscoveryListener_t30C6BB2C9E966F2ABF574C0679B9A6E92BB531C6;
// GooglePlayGames.BasicApi.Nearby.IMessageListener
struct IMessageListener_tF3D9040ED2CEACF29EEE6E4A625390AF0B24F010;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_t61EAF447B23ADD646B228E6C8A304C7D32249891;
// GooglePlayGames.BasicApi.Player
struct Player_tEC085BE46190556937E5B56A0C781F2EA63AD330;
// GooglePlayGames.BasicApi.PlayerProfile
struct PlayerProfile_tA0DF9F1A43E6DD0142622D5A3CEE428386B1D356;
// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_tA93142401005301ACAEAD0A56454A0CA9AAD7A5C;
// GooglePlayGames.BasicApi.SavedGame.IConflictResolver
struct IConflictResolver_t6BCF37D643FA12BEC5C0FDBAC1FDB3FDB4CD7B35;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient
struct ISavedGameClient_t6187A34A46859D2F0DA0176E9E63AF6F1A59C5A3;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_tDC44B9091652F09E2D77F933B22CCF59C8776644;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF;
// GooglePlayGames.OurUtils.Logger
struct Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA;
// GooglePlayGames.OurUtils.Logger/<>c
struct U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384;
// GooglePlayGames.OurUtils.NearbyHelperObject
struct NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831;
// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403;
// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8;
// GooglePlayGames.PlayGamesAchievement
struct PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262;
// GooglePlayGames.PlayGamesClientFactory
struct PlayGamesClientFactory_t5BDBE0E4765B5483496C7FFEF07979EE62A173D2;
// GooglePlayGames.PlayGamesLeaderboard
struct PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A;
// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005;
// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE;
// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F;
// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201;
// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174;
// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F;
// GooglePlayGames.PlayGamesScore[]
struct PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B;
// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F;
// GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23
struct U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE;
// GooglePlayGames.PluginVersion
struct PluginVersion_tBBB57C356E91EC4B74040A933E1AF276BE52A3D2;
// GooglePlayGames.ReportProgress
struct ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action[]
struct ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B;
// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>
struct Action_1_t40C6281DD9B38B590C5280473351A8E16A632837;
// System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>
struct Action_1_t8EE1F0EF0F6740B5EB111E67F42584240D45AC60;
// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D;
// System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>
struct Action_1_tCF450FEFD3D9E1C5274C1C003E30D3F9ADC214E3;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t64A694A91CF48AF6DAA61B8200255AB7B9CCD0F9;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_t8C34D5D44EE2A3197926F3A14FC0991FC91E76B2;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct Action_1_tB2CE7529CCFA223AAD9AEA138F9B78EDA6CD10FE;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>
struct Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_tDE6242754045E413334AD30795D5F15C91E26560;
// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D;
// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<System.Boolean>[]
struct Action_1U5BU5D_t3034A3AD7E26360C4625A301DB6299EF6B61C0BC;
// System.Action`1<System.Int32Enum>
struct Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_tE5C7AC57BC589DA8234AF9ECC8F8B62ACEA5F826;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t4E18081213FC1908A4742B1D7ADF71081B45A2BF;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44;
// System.Action`2<System.Int32Enum,System.Object>
struct Action_2_t09C1E11292657FC36043DAE90BD5849628F3D9FC;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_tCE71EC02CDCA4BF2BD03C29A2F9FE92F0DF345C8;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_tB173AC5659F7F584EAC1883D6CCA72F750215EF0;
// UnityEngine.SocialPlatforms.IAchievementDescription
struct IAchievementDescription_tEE6425D0EB6C5DC5215A3692C2A44674F606A0D5;
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C;
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t7071592562FA847344065DBB0352B1DE4937671A;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_tBC76330E834731738E32468FA46DAE98003D48D6;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t8EC2280EF29BB961820B7DF6D14E28EEE6CCF315;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C;
// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_tA84A16F8E6959FFAFE619CE9F69F26DEF58FB347;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_tC713F9B213435D4D58FDFA96118E02F5BC90FBF1;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t40C6281DD9B38B590C5280473351A8E16A632837_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tDE6242754045E413334AD30795D5F15C91E26560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyClient_tE38F53999E10D9E4AB27B18622CC9D4B1FA08D79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILeaderboard_t7071592562FA847344065DBB0352B1DE4937671A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INearbyConnectionClient_t61EAF447B23ADD646B228E6C8A304C7D32249891_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInStatus_tDB7CC62A7FBD2F0C04DF3D8991D4328BE181E0DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral025A63FFA169F26B605C16CA69D0B1E95EC4FB19;
IL2CPP_EXTERN_C String_t* _stringLiteral05355346DBCE636FA92A396107EE51714DFD80CC;
IL2CPP_EXTERN_C String_t* _stringLiteral0B99CEBE565822C64AC5D84AECB00FE40E59CBD3;
IL2CPP_EXTERN_C String_t* _stringLiteral0DF2FD657310BCC8D2402FF26AB87F791C8FD4BF;
IL2CPP_EXTERN_C String_t* _stringLiteral0F4909A702426B8182ABC533C057778C970ED140;
IL2CPP_EXTERN_C String_t* _stringLiteral100E2A29CB501AB296EB7434C4F0D6860E976B9A;
IL2CPP_EXTERN_C String_t* _stringLiteral12D7948F6A3F9300B064A719814E82CA34E4A5CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1351FE64ADFC9AC005B2D4BB86270BA8DAE40B39;
IL2CPP_EXTERN_C String_t* _stringLiteral14CF01B28794DD054986DF6D399FA914CD7FFA07;
IL2CPP_EXTERN_C String_t* _stringLiteral16FE9853737D7CAA6435E1E304E10F86DA0A69A8;
IL2CPP_EXTERN_C String_t* _stringLiteral177EF6630C280E2D399F4A07876CCA3E291665EF;
IL2CPP_EXTERN_C String_t* _stringLiteral17D1984F75057BDAB8AE53116D30C9297DC68F70;
IL2CPP_EXTERN_C String_t* _stringLiteral181F61CF334EA363AF987CD97EEE2B27059145B5;
IL2CPP_EXTERN_C String_t* _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25;
IL2CPP_EXTERN_C String_t* _stringLiteral1FE05B7161F582F6DE27EA0F26FAD26E2788C6A9;
IL2CPP_EXTERN_C String_t* _stringLiteral217346B1DBCFBEDEC92BAA285899FC26D752E4D3;
IL2CPP_EXTERN_C String_t* _stringLiteral27B949011731D94DD7569CC91FB03E8FC187B674;
IL2CPP_EXTERN_C String_t* _stringLiteral297F9C2A9EE712814A210B9EE4AF05B996B5B889;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4F430C3C6B6AFD290E446F57199FFD4CB1915F;
IL2CPP_EXTERN_C String_t* _stringLiteral2DDF56C0415D2BF7A224E8D9BD51AE31CD09EF1C;
IL2CPP_EXTERN_C String_t* _stringLiteral2E6881F8CFB21B3201491A4D2C8EFF99274FEECF;
IL2CPP_EXTERN_C String_t* _stringLiteral3055B81B4DA3960E6A2975A30E6F6CE2EE7BD467;
IL2CPP_EXTERN_C String_t* _stringLiteral32EAF9220C696B2C222E361F16ACA8FB08EC6083;
IL2CPP_EXTERN_C String_t* _stringLiteral34EB4C4EF005207E8B8F916B9F1FFFACCCD6945E;
IL2CPP_EXTERN_C String_t* _stringLiteral35340911C63908832F152D99294F514E87A7FD4D;
IL2CPP_EXTERN_C String_t* _stringLiteral36C3EAA0E1E290F41E2810BAE8D9502C785E92D9;
IL2CPP_EXTERN_C String_t* _stringLiteral375C4DA6924C0AD8FA53A816CC8AF64E91D38DEB;
IL2CPP_EXTERN_C String_t* _stringLiteral394E68F963EACC7FF630DAEC06B6F196322850F0;
IL2CPP_EXTERN_C String_t* _stringLiteral3960521E98C452616116D2A0947BE53328EF45ED;
IL2CPP_EXTERN_C String_t* _stringLiteral39A1D38061AA77B4A79B46886DFD569D9C2D1281;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB1EF463CB5D9BD4A696C1529FCFFB305C38966;
IL2CPP_EXTERN_C String_t* _stringLiteral3ADA7648DB295286F5124D61D80497243A2194FB;
IL2CPP_EXTERN_C String_t* _stringLiteral3BA7EBC905D85FF442F4566C52B52E1764061085;
IL2CPP_EXTERN_C String_t* _stringLiteral3D54973F528B01019A58A52D34D518405A01B891;
IL2CPP_EXTERN_C String_t* _stringLiteral3F5CD2173D37438CD7FE6535A3D66FA87C551DAB;
IL2CPP_EXTERN_C String_t* _stringLiteral3F67E8F4EECF241B91F4CC8C976A487ADE34D09D;
IL2CPP_EXTERN_C String_t* _stringLiteral41632E2246F9BB344C5E92EB048F11D0B1650817;
IL2CPP_EXTERN_C String_t* _stringLiteral41CF4D42E6DBF7C4CDEF8EDFDACF196B6F5E031E;
IL2CPP_EXTERN_C String_t* _stringLiteral4CD2DBDB7EBE53146F7CC17CDB0F7E0F3E0727F6;
IL2CPP_EXTERN_C String_t* _stringLiteral4F6EFCDA7C9B006C9C3205C1C2A919389BCA11E9;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
IL2CPP_EXTERN_C String_t* _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651;
IL2CPP_EXTERN_C String_t* _stringLiteral5516ABA466973D912C780D5E82A5E63401205FDF;
IL2CPP_EXTERN_C String_t* _stringLiteral560C26FE6FCF8DBF7B06B408FBEF2EF44165994B;
IL2CPP_EXTERN_C String_t* _stringLiteral58FAF6730CD731832DEB85A8C0E16ACC72A8A179;
IL2CPP_EXTERN_C String_t* _stringLiteral5E7170E34788D5C93D7E3386ED49EDF50D28ED19;
IL2CPP_EXTERN_C String_t* _stringLiteral5F18679FA8CA34768041ED86FD03631E3A49DAFB;
IL2CPP_EXTERN_C String_t* _stringLiteral628E9871281BBC32324D8D647AD72BD471941929;
IL2CPP_EXTERN_C String_t* _stringLiteral65BDC70CCB096A529726496670219653F2264A1D;
IL2CPP_EXTERN_C String_t* _stringLiteral66C9B33FB8129445DDF9DF6F933577A90B962365;
IL2CPP_EXTERN_C String_t* _stringLiteral67490BCAD0BC8B4F9F4CF153F5ABB42F13DFD1C2;
IL2CPP_EXTERN_C String_t* _stringLiteral689B3D123355CBA2415D4FE457847D53ED8ADB52;
IL2CPP_EXTERN_C String_t* _stringLiteral6E7004C0B81A22B677A68A197C9C35C3BA572E65;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5D24F359E67216FB79B388E3B27D3F03C0ED2F;
IL2CPP_EXTERN_C String_t* _stringLiteral744787436342EA5080EB4C7B6395134319B3F827;
IL2CPP_EXTERN_C String_t* _stringLiteral750A16582AAF833F1109CB1D1CF5C918619D5063;
IL2CPP_EXTERN_C String_t* _stringLiteral76704619F530DAC50897492D598C3662761E83E2;
IL2CPP_EXTERN_C String_t* _stringLiteral77B5F8E343A90F6F597751021FB8B7A08FE83083;
IL2CPP_EXTERN_C String_t* _stringLiteral78FF66B4EA4AFF1E03AA63189AFFE864D85744C6;
IL2CPP_EXTERN_C String_t* _stringLiteral7C7FD620D8674C1B40B50CE7B85A3B9C0C0B6F92;
IL2CPP_EXTERN_C String_t* _stringLiteral7D7AA9863DC8F7600BC3BCB20DAD9BEBEB7F27ED;
IL2CPP_EXTERN_C String_t* _stringLiteral7E6A906EBD182A75C4DF32385EF4566B6A013875;
IL2CPP_EXTERN_C String_t* _stringLiteral7F71B16CAD61ACB2D3DC8328FE9C376BD3F60CCE;
IL2CPP_EXTERN_C String_t* _stringLiteral7F76DD2BA1ACC72F5352DB7C2A2823DD47013380;
IL2CPP_EXTERN_C String_t* _stringLiteral851CCF432FDDA32757C16391AEFAA7F77A683408;
IL2CPP_EXTERN_C String_t* _stringLiteral85F8C8035C35EEE36352A22DB8BBE79972F40952;
IL2CPP_EXTERN_C String_t* _stringLiteral86E916C57C2E38EC27BED8DDB17905BD7B1A2CF1;
IL2CPP_EXTERN_C String_t* _stringLiteral893CBBAB3B50F56FC2DBEED18DB7D99F853DD7D9;
IL2CPP_EXTERN_C String_t* _stringLiteral8BEAF8B48CD239C5B9FD4F82FBBD3B06F143113D;
IL2CPP_EXTERN_C String_t* _stringLiteral8C99B9C573AD7C9C4A310C82B386F1D3D9B8F207;
IL2CPP_EXTERN_C String_t* _stringLiteral8D952606CD5B7E920E77B1FE8A3F9C04E5BC8618;
IL2CPP_EXTERN_C String_t* _stringLiteral92466044BE8828F7CBF871886193300039875716;
IL2CPP_EXTERN_C String_t* _stringLiteral96FC4D05CD5E47A970557F037311F56A50637343;
IL2CPP_EXTERN_C String_t* _stringLiteral97E740F72935177ADD85733C7336B3AE025676D4;
IL2CPP_EXTERN_C String_t* _stringLiteral98B5A4CDFD4A49AC7EFACE991A1C48E0B308CF50;
IL2CPP_EXTERN_C String_t* _stringLiteral9A7B006D203B362C8CEF6DA001685678FC1D463A;
IL2CPP_EXTERN_C String_t* _stringLiteral9B2306E796CA147F9BEE8FED70843DB53130E896;
IL2CPP_EXTERN_C String_t* _stringLiteral9CC265F441C1CF034972ABF52E3FE12A09E0F680;
IL2CPP_EXTERN_C String_t* _stringLiteralA004F7A71A664C60394CBEBEC2BC71B669D9F986;
IL2CPP_EXTERN_C String_t* _stringLiteralA0771FF05FA2EE7EDE720194BA65E8A290205368;
IL2CPP_EXTERN_C String_t* _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3;
IL2CPP_EXTERN_C String_t* _stringLiteralA1B024190473A15BBF80FBD244257996F3D8B436;
IL2CPP_EXTERN_C String_t* _stringLiteralA5BE846AC2B5DB87CE53510F035C3BFB2CA453CD;
IL2CPP_EXTERN_C String_t* _stringLiteralA8ACC887501AAE667B7DD99B8035876606121208;
IL2CPP_EXTERN_C String_t* _stringLiteralA9826401EFB307A0797864795278DB4203AA3B88;
IL2CPP_EXTERN_C String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB2788B13C33E280DC8BF691370DD2C46C5F633FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB5098B2B7786DB342133FA5DE602DE04C085E226;
IL2CPP_EXTERN_C String_t* _stringLiteralB5557B51CFEFAF4ACCD1634BB722FBA88227044B;
IL2CPP_EXTERN_C String_t* _stringLiteralB63A8A15ADCC8827E229FE1465EF525130DAF918;
IL2CPP_EXTERN_C String_t* _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
IL2CPP_EXTERN_C String_t* _stringLiteralB692C108018DFA4D7440FEF397D0CCA8C678E070;
IL2CPP_EXTERN_C String_t* _stringLiteralB98FC06D60BCCD382F55412D7E5477D72ED15908;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DFE2C48617A85367073E870DC56CA18251B32E;
IL2CPP_EXTERN_C String_t* _stringLiteralBD21BAE25ECEE55713FC74C7AF65884F65DAFE9F;
IL2CPP_EXTERN_C String_t* _stringLiteralC3437DBC7C1255D3A21D444D86EBF2E9234C22BD;
IL2CPP_EXTERN_C String_t* _stringLiteralC5024F3031E029718EA095EE1A8D30D214C2E012;
IL2CPP_EXTERN_C String_t* _stringLiteralC6519750364F9649EC0BC717218442BD19DE632E;
IL2CPP_EXTERN_C String_t* _stringLiteralC837A43528CC5B0BE6EC554F2990669ECDF370F6;
IL2CPP_EXTERN_C String_t* _stringLiteralC984FB96CDB50639F32D5227E2DFD6EB99658BC2;
IL2CPP_EXTERN_C String_t* _stringLiteralCE63EEF66409FA420CA8DF5747A156B7F2FF66B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB8315BB749A1E274E7B8FC80CE01659A30BAC6;
IL2CPP_EXTERN_C String_t* _stringLiteralD33DB628F9F4127DDF2F2512064B6F487380F03E;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A8FCF4BCC20197329A2899647A4B266D38E559;
IL2CPP_EXTERN_C String_t* _stringLiteralD5C6A5F48C3935F1D696BB81558492909CB4F13C;
IL2CPP_EXTERN_C String_t* _stringLiteralD7147AB91B5F9B335C8C8E9BFB9ADAE4B2CACEBA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE07B915FC8AA3BFF558846E6D7E1018D477E6BC7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2993E3BA8E949129120C8B951DD861D638A86B5;
IL2CPP_EXTERN_C String_t* _stringLiteralEC9E127F45A584269E1627DF898C8C2E1B71B123;
IL2CPP_EXTERN_C String_t* _stringLiteralECF6120DE188550139F123682DCBA1D92BB018E6;
IL2CPP_EXTERN_C String_t* _stringLiteralEDD743AB526ABF48A421AB5F27778A6DBD99C337;
IL2CPP_EXTERN_C String_t* _stringLiteralF15A5F5A14BE0C363740F238781679E59BBAEF36;
IL2CPP_EXTERN_C String_t* _stringLiteralF1FD50BD0259EFAE175FC11B5E31CEF99661F68A;
IL2CPP_EXTERN_C String_t* _stringLiteralF335D59D3B20739338DD89065EC1B9EA1461C385;
IL2CPP_EXTERN_C String_t* _stringLiteralF4A92AC84F30C81EB79C2AEEB212731261979F2F;
IL2CPP_EXTERN_C String_t* _stringLiteralF57A069B9FD60E935C000C00ACD24E1F91EF51EC;
IL2CPP_EXTERN_C String_t* _stringLiteralF7252BD0B211563B190BC1834BD12A35CAD60FDE;
IL2CPP_EXTERN_C String_t* _stringLiteralFB25C34E51EA6237B2716B7B6014FA048F40DA9B;
IL2CPP_EXTERN_C String_t* _stringLiteralFD3EDC641024A335A508FDACEFB5F51DED5905CC;
IL2CPP_EXTERN_C String_t* _stringLiteralFDE49AA00F4966A6ABC348B5B3B985032EABF411;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m117E7A24D3CB81AA0FFD23F43321DA06B61CC99C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m1BC8BFD18CE5592C184C867DCC1D1D5E59B3DD8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m2C82F1BCB5C7B15AF13397B2CDDF286AEE03E7F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m5C7A22095E708452C272C2BBC5CE4F6E72236861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6D94201F6F60C71FD959534E58DC5F2E0534C16D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m81E12D38E21332B07DD65B0DEB0D1AEE6A14C2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD7F582B9C45B6F457EE205418422C0791286E02E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD9031C0AFA2DF30894EB631895C4AF2239CDBE9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFE16CD4BDEDFE680B174E7380FA78E7EB5200780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5E3C38C3D4727D73BEE4575399298637A0CF1091_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m619DDD86B8ED03F15EC49D06AE7922AD2CBB7230_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m6EED033785616C99B64874ACE9B2A1D909F57561_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC089FB1B1C5EDA3FDB725865A78F4DDB6FEE7631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m28751EB3D7737B18DA9A82B61E6E5203124E81D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m8C7BC4165AC871BDB6C592BF090898015B39A8AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mF840087283657EEF43BFF001BCB75C682A5E67BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m775AB90594C5F27D6099ED61119EF3608FD1001D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m944E5987B38F1229EB3E8122E030D0439D4513B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_WithUpdatedPlayedTime_m8BC1639B83FF60BC95A316148241A44224641CBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB435547693A70859882AFAE6E17EE84A4DEE89DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F7AA651E81830E11A33BA5B2CACFFBE25F610A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m08F3FE51A64369D57EC067889997CBA5F81DCC73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEDF66107B1E3BECA631A37771397FAC62B4BB21B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_mD9C39447D72A84DA1D42536B6A1532931A61D971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_mC64E1AE4A290D0AF6D4EB5065CC63FCAFC8C846B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mCC8121E1CB0C758B6A446F8C279355529ED476E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA233869E054A624DBAD583F741E6E1E0FFB1F8A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA374038CC7A718F88F0BA10BA4AB0FBB8DCEE158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBF59C2344C951987CF2A02BFE8F7F1BF795434FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB415AA0254640EBF623221C95BD23C804ACB1AE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m1087577496C9953C2B9FE83421C010D93E1E39DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_m8C7E4C07E2B297321460EE9E3CEA6B1BFC5DC921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1A6BEB03A9E4B76F009EACE9E2DC8202C1B00B0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m201C000881D6CDC3645867A7B25986ADF9614086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2806B6CAA6E2D1E105FDA5CCB083EFDD8591339E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7D9269BF2C5B47E2881D8362447AE5F784B88823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA99E3E5D84C3ED79771C17F8FCF9B5795EB0C25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3986FAACE5FCFF72B7601E768375D65E038FDEDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9DFABDAB8AEC470E2D4BB6B9829172D7DF8E5FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m900B85866FD2558E6CE2725E07AF693C29C19731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisAction_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_mDFDACCDFDE8BE115968581063F2F6E9ECF7C1872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisAction_1_tDE6242754045E413334AD30795D5F15C91E26560_m757427E0860DFA4D6FA210321FE76CCFA96572AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisIPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_m09BC1C13C97243ED28A0A63755E16826EC888F5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisString_t_mBF7D95230A17BD67598E68FF9EB8B16D51285F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_GetSubsetBytes_mA26DDB3F12CB9D2D05B66A5D7293E5C2FBC44002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m99DC0DFF0CCF30E4DFFED5F8F7ABE8721B73B56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m619F23350E60DA452BA9F320E9EA38E1D933663D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mBFFFA1BA161F58A43F8D53FFD139F699DDC9D3DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayGamesHelperObject_RunOnGameThread_m47E2A7C8D760E4C0C27A0A5505F0E9AB0B7818A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayGamesPlatform_InvokeCallbackOnGameThread_TisFriendsListVisibilityStatus_t5C8FEFC70B838D8C9EDF134574A9FC09146BF615_mDCCA1E2B1D0328D8D042F4358B123786C3BB3C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayGamesPlatform_InvokeCallbackOnGameThread_TisLoadFriendsStatus_t0B02CC60E54A4D8A8F541BF39AFB10CEFD17CEBB_m4C91C8DA95E9963D7F5DC091E38B6751F6FE968B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayGamesPlatform_InvokeCallbackOnGameThread_TisString_t_mB0AE350F815B5B8B9BF2E976A161A7C7CE86E9E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayGamesPlatform_InvokeCallbackOnGameThread_TisUIStatus_t3BE93053424F559A5B3E1D4C290FA5E091A14CB7_m633F6D049876AE590C17DF5D823D120071BBBA93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayGamesPlatform_ToOnGameThread_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mBF8371C6A17EFD3ACAE7EDE99306F66A1A1B38E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageU3Ed__23_System_Collections_IEnumerator_Reset_mB0E76047A0F503536AB73EEDB5B4BAADEC065B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToLogMessageU3Eb__12_0_m2DBA88364338E9EC750385E3BC73CD70A75DE33A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_m5F96DF12F191D7EE1A8C4DDE0BB128EAC398E7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m11605B66C0CEDA55DCB7FED4F5EFB63226F94562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CGetStatsU3Eb__0_m90E6C2C853D29896C35410B7C90B450A127E0BAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CInitializeNearbyU3Eb__0_m73F95D33AB29717C0FC24D96A0A8B617E881F4DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass26_0_U3CAuthenticateU3Eb__0_mFCA715935B7B3D1E1C9328C1DCBAC47B514AF209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass27_0_U3CAuthenticateU3Eb__0_m3722C6C1D5ED583E817898CF22CBC9B3EE1EC65F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass36_0_U3CReportProgressU3Eb__0_m731D6F238BC22A07215EB2B739119EE66085CC09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CAuthenticateU3Eb__0_m1D70D96D9F17BF39A51AD6F9883A9724BEC9F154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass42_0_U3CLoadAchievementDescriptionsU3Eb__0_m41A939A764110AE8B26325F1733D8A85B892FFD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass43_0_U3CLoadAchievementsU3Eb__0_m2176D616596893ABF709A619AEC0EB4EA3FD2EA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass47_0_U3CLoadScoresU3Eb__0_mF69CCDB9CAA2F27AFC172D6C2527D8D930DD1911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CAuthenticateU3Eb__0_mED13DD59E8078C4E4B3745D2EC6E4190C9E6CC7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass59_0_U3CLoadScoresU3Eb__0_mB709F505C749ABF47D05167E36F0DAF645E868DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass67_0_U3CHandleLoadingScoresU3Eb__0_m5F6D4B107E1C2CA795E51DFA3D1B9085F3055F7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m3BC1FE5A085027D6B4850FD293B63669EF6B3D1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m4476E21137306FE675046B7585BE64132ECC023B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t Builder_WithUpdatedDescription_m72B2D15D49A273E16DE3D344D462AE44125317AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Builder_WithUpdatedPlayedTime_m8BC1639B83FF60BC95A316148241A44224641CBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_AcceptConnectionRequest_m1CE1ADE7A5DAD4C66503A99E1E24F799BD164315_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_DisconnectFromEndpoint_m108D463D270BFB5A9F213D54A37818E025B52F8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_GetAppBundleId_m6CC4E9ADE2466D3DF2250079907D0AD9E33EC707_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_GetServiceId_m52294523D389C4A1F06BAB5F7D910AC830A06855_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_LocalDeviceId_mF47DB1E38D43FEE31DC95F84AAC858C412A0429D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_LocalEndpointId_mFB074A4411C1C555C44FC1333212DC893CCDFD7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_RejectConnectionRequest_mD855CE16F3C00F3B6E78EA15AA72FC76B7DCCEAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_SendConnectionRequest_m62F9A5A14AC00DEB150FCA5228A3F3DF6D344932_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_SendReliable_m53D3C385C5782D906ECF724857938CE1DA6C12A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_SendUnreliable_m0D8980DD6ABB4C7DB8589EFAFC89ED36233C8981_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_StartAdvertising_mF875B394D62659B775700836B874B53522439F67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_StartDiscovery_mD5EC8AC556710DB862C67E6431D61101BB4B3F1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_StopAdvertising_m3F5A2E4BE809E83233ED38C728103DA8FC38FF48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_StopAllConnections_mE1E7FF1B53EBEEBE796DDE6B11B89B53BB6857BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DummyNearbyConnectionClient_StopDiscovery_mDA7D6C5AFB02203005974A645D4C1BE19E6D9003_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EndpointDetails__ctor_m17F577E0210FBCCE6A1CDA6F91CBCE636274B1C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameInfo_ApplicationIdInitialized_m757153A0CC983D0372E845491E455030028FA0AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameInfo_IosClientIdInitialized_m07AAD9A756FBC802E1F336135D87C63283A4B392_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameInfo_NearbyConnectionsInitialized_mB264D508F6FC472857FD16296B6E4BE82CF494E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameInfo_ToEscapedToken_mAB346F25B433299A9CF0AE2596A0236CDA3DA364_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameInfo_WebClientIdInitialized_mCB172D29155845DCD5CDA376CC4B726AD8CE9095_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger_ToLogMessage_m78ABC91BF809D11B0AFBBF8C6C1DCB08A98384C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger__cctor_m1D3F3757361CECC1AD2B47F651DBFADB1937656C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger_describe_mA58EBB7FD1AA87E5DC7873CBCCD77C1889E68886_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger_get_DebugLogEnabled_m0ABE85CD8B71AE08981813CE350768B0232D2851Google_Play_Games1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger_get_DebugLogEnabled_m0ABE85CD8B71AE08981813CE350768B0232D2851_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger_get_WarningLogEnabled_m37DC34DFE14FAD095F259057C8B11671F72CF17D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger_set_DebugLogEnabled_m0EF48153D1CEDBCE2F26799B8421D26C2A5B5D17Google_Play_Games1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger_set_DebugLogEnabled_m0EF48153D1CEDBCE2F26799B8421D26C2A5B5D17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger_set_WarningLogEnabled_mE9C7853139E6231CE2C45F0CAFE2ED022C0523F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger_w_mB0D118831979B2FFAA5E725B1B5CADCEA0474BDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Misc_GetSubsetBytes_mA26DDB3F12CB9D2D05B66A5D7293E5C2FBC44002_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearbyConnectionClientFactory_Create_m5A519A39795A398D0D535D70990334B85051AF4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearbyConnectionConfiguration__ctor_mFDA90374757A91E337CC7777672AE02A19B09CC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearbyHelperObject_Awake_m5724161305417634B3A66F649F119050E684AB0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearbyHelperObject_CreateObject_m6F42DD6235F40465EEA30D918D521CBEA0E3CE2F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearbyHelperObject_OnDisable_m08621A5ABD8344944B84989BF2B9E5A4D09DFCF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearbyHelperObject_StartAdvertisingTimer_m513C8FA51E9019B6CCE3FFEA2C663BD43D09D521_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearbyHelperObject_StartDiscoveryTimer_m2E8FA1C42C4BC66763F54BFA297D5E9E21213221_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearbyHelperObject_ToSeconds_m2844A4905B2AEDFBE33EE884DA50B7037BAC68EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NearbyHelperObject_Update_m038826954DF6804A146973ED8C685EF26FAE52E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlatformUtils_get_Supported_m0050E2B05E730076B3B5AE2F1A6F06F587DFD8D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesAchievement_LoadImage_m16328F6EADDB77939074BBCC3E1D20AC32B2BFE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesAchievement__ctor_m7F0E4604564CCAFF410D6A5D555408C43BA7C624_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesAchievement__ctor_mDF11A5AC8963968E802FDCF0B2E5C4D4E6019860_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesClientFactory_GetPlatformPlayGamesClient_m61FA1D5117C523303D3BFFA844EB603E8A5A43B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject_AddFocusCallback_mDFE6AE585703E9471699A61FE564A386068F8FDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject_AddPauseCallback_m379FF1D24DD2FD6CF2C84AE766A6F8CCF215E9D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject_Awake_m4DACD062DCE9B3DE304056052248C43D87FCCF1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject_CreateObject_m6BDF8C70B008B2FC32D832E5C212DEC7BCEF6777_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject_OnApplicationFocus_m18DDA37DAAF80D47971904F9CCCAB74D6E26E52A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject_OnApplicationPause_mF574E966DB17462D2ABF890EBD70C289313E3DEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject_OnDisable_m70CBD1B2BDAC705712C3CDDCA078D2959501E9D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject_RemoveFocusCallback_m18D0D18D0D6C0EA67BBBFF3F77110B24FF9DAE8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject_RemovePauseCallback_m1FB2B6436D4EB0290D58569DC8B66E179D8D800C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject_RunCoroutine_mB4690921986C23904A1C3E6566773DBC191D7BDE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject_RunOnGameThread_m47E2A7C8D760E4C0C27A0A5505F0E9AB0B7818A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject_Update_m41673D887F759D2EE377DD042F28E42BA99C0CD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject__cctor_mE04951534B5720ABA978F6E65838293D2DA0B6E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesHelperObject__ctor_mF95C6E4A698C4988EB8520F2D1675D642B742CDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLeaderboard_AddScore_m5EEA94096A68FCA29901B8EF1A108DB92272722D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLeaderboard_HasAllScores_mAF9AD91A54B10B22AEF7BB4FB55A8015B94F90B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLeaderboard_LoadScores_mD9FBB54B5DE578BE34979B6F2DB6D28029D91137_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLeaderboard_SetFromData_m87EC00C60134CA4B975219B38EC6425164143E3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLeaderboard__ctor_m63AE4DDCEFFA086C59C9FCAA3F751DCDB182EF45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLeaderboard_get_ScoreCount_mBA9C204C96E5931201EF8414E34B17EFE1F9F6C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLeaderboard_get_scores_m6173D24F39157A39E51103F9E783436EC1260A4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLocalUser_Authenticate_m69E470F66BCEE6CED467E1791B4AE948A61C9E5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLocalUser_Authenticate_mD937C6F6D7EDDA1DEF91D6A39D12D7AFDED54ACD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLocalUser_GetStats_mF1CB6E5DC2171907D7E3BF89394ABCB3861D9DA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLocalUser__ctor_mFCF8EB49C54EA782B41565421DA5CAB125EB21E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLocalUser_get_AvatarURL_m98736861EA57B799AACBC0995206C278108E691D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLocalUser_get_id_mD4F1A627C232FE5B39E72C05393419CCA92A1E90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesLocalUser_get_userName_m9ACB57AC10905A86F461D9D8224F57B5A17155F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_Activate_m2BCDE497E80518F1A64C135A0503A002B2AE80E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_AddIdMapping_m836AAFB3073558D3968D4340CA978A7CB3D0631D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_AskForLoadFriendsResolution_mE45505E363EDF2B0DB92E83321C2D5F137E46BEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_Authenticate_m1EEFB9A0A2D4EBFC011E2EAA1C8D5AB04F5AB41A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_Authenticate_m5B691D43AC9F0CBCECA6820F6598AD2B860312FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_Authenticate_m7A1A8BAD6AED8CC9A74CB028D881F6EE95B59C3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_CreateAchievement_m0DAAE6903291B78A9E62117FFAAFD5D41FF349CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_CreateLeaderboard_m3678BAADD46BE6E693C69D8D714AA74577E917A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_GetFriendsListVisibility_mDA50D408BCDF7EE98F0F51AFCAAD263C79F5CBB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_GetFriends_m59E551A04939AFC81D4E9A5BB28BF44B3B193C32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_GetLastLoadFriendsStatus_mC01BF740C75CA0F4D232E568CE8CFB09A2147B86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_GetLoading_m1D519BFDE7380990CC0C41FDE0DDD3147323438A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_GetPlayerStats_mFCCF3AD5EE36E79D2469238E1D07EC74113973A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_GetUserDisplayName_m2F00040F42D5B6EE252487934737C8D62F75AC88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_GetUserId_m75B3086A6ECDAFC69A3C6C39A32F8231571DB0A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_GetUserImageUrl_mACC269480BAE942B582347AE758AE3E446521CA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_HandleLoadingScores_mC8CF67CE69D79D4EB93626CDE86A1D2CB1EA3D9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_IncrementAchievement_m74E56B92A21CA4AF406D7E148DF789E8A1FEE5F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_InitializeNearby_mE1C5B3D8FE0154DC12F0B981D1E75F8D34A2C262_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_LoadAchievementDescriptions_mA9D294F459B6A498440C0326955CEBFFEB967FAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_LoadAchievements_mD586E205226945B7499DF45A2025A748D21EFF9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_LoadFriends_m0673C668609974ABE9A421F9423DDE6B50476879_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_LoadFriends_m5807FD9488C44A26C4730F634C5D16EF003E369D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_LoadMoreFriends_m33F4F242B66FDE00A608F0BADB19F0D8D179658F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_LoadMoreScores_mCBD1031547E96C66ABFA2D8E0F445A990B826C4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_LoadScores_m020B96D1F39AA1087D464574568F198D1C71A7B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_LoadScores_m5BA0D027659C87FFF762FA364010B971FCC8D2B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_LoadScores_m929BC14DDEBB89A481B0FE8E498303312523B133_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_LoadUsers_mE4A0299AE50B142846762BDF15908782DDD9E789_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_ManuallyAuthenticate_m6C45845424AEC3E943CF0FC7674B7DCD2A81D0BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_ReportProgress_mEC3154A0F8CF2F6ACABB2886B352D846F19A813E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_ReportScore_m2B31A875BF47AFE14828BCAE0FFB340C2F944AD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_ReportScore_m469E4F1B6754566B1C7E770343FA34EE1C32E522_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_RequestServerSideAccess_m539E6167FF29601C638136438294786954598017_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_RevealAchievement_m7835613CF1B69190340B2624A3C440CEB4ABC99C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_SetDefaultLeaderboardForUI_m52F027A1A92D395E42D5E5D29CEA45ECE3BC1C0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_SetStepsAtLeast_mC56F548E409BC878949CEB315D7E6573223FCE7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_ShowAchievementsUI_m1E3E03E993DDA4A88EA3DAC0832F7803B6863694_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_ShowCompareProfileWithAlternativeNameHintsUI_mAE3AF6BA3C6E1B6F5972D27F1D38F435EABA6EED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_ShowLeaderboardUI_mC72F6FB339E9C52913BB7A23C4DDC4F966F2496E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_ShowLeaderboardUI_mD2163A5834EE20BA60602D88D4EC99CF9C074529_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_UnlockAchievement_m5F9DB3C352271ECC146E01C2A882C736AC32A3A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform__ctor_mA50E77E0B5DD8071FAC4B55FC9E6F6373455F57C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform__ctor_mD3760AB17DF96FDF8E96A1DB4FC18E3B22F485B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_get_DebugLogEnabled_mF87373B60659AF00FB4AA0BA1864034F04C56152_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_get_Events_m838814A6F57F350DF52F1B79B84EEFAD96B41E38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_get_Instance_m14016685F7C32BEF2E0779F03F8887E5C25B416B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_get_Nearby_m89C44FD7C1F1DD8A0BC59D1D69734FF3551EDE78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_get_SavedGame_m0EF54D6FE228F048B429F66ACB2911680385D375_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesPlatform_set_DebugLogEnabled_m763C0C31CD17DC09E61D0E4E9D324D742D48BB68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesScore_ReportScore_m25F6D9F71118365C18D73DB85616F9221775197B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesScore__ctor_mEE360D1DB613DA0AD8FFEAAA069778D11246906A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesUserProfile_Equals_mDDFD7ABAEBCF1421619408F48538C00038B240D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesUserProfile_GetHashCode_m4F03607F71AEB5C2C692D3AB1C8849C6255FE44B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesUserProfile_LoadImage_mF7D735C57025902384574CE680E4292DEB0BDE00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesUserProfile_ToString_mEE7CB8579D2B03F0DFCE6D6D8AE629ACBAF81581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesUserProfile_get_image_m15F928F564783ECF6B926A728B4754B3E9129933_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesUserProfile_setAvatarUrl_m877CF3727BA4AD115F19085A9D764A22079096ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerStats_HasAvgSessionLength_mC7AA15B2945D16E1C6CDECE9852FBE61084A30AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerStats_HasChurnProbability_mC3AAB77A62710A3F43E7FE7EE65DD41D065B8518_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerStats_HasDaysSinceLastPlayed_m0631083EDF39403B0BD5AD5B20F1FC9492D2FE41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerStats_HasHighSpenderProbability_m842738D0AAB366BB1E2A92A7F8BEFA65D1AA2128_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerStats_HasNumberOfPurchases_m2E5A3F213DD84854C338AFB08CBFB25309BA2445_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerStats_HasNumberOfSessions_m6017170E2B835EFBD864173EAAFC71EEDAD27A28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerStats_HasSessPercentile_mF20D09EF69C9B2F3EDD3FA7D33CD11526412C402_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerStats_HasSpendPercentile_m0B3C7E7F9DE16DF44D53FBEBBA1166EBA7E8619F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerStats_HasTotalSpendNext28Days_m44A4D9C5FAF5F2B7A1B01BA04C757807ED7D322D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerStats__cctor_m99703F0739E3F8DB826BECAF5D4A9CED2508FECB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReportProgress_BeginInvoke_mD9A978E253C787FB6ABCB2E2A1E1AB9F5F321D29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m64C30F7658FADC6997383E92C290D93209118006_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringComparer_get_Ordinal_m1F38FBAB170DF80D33FE2A849D30FF2E314D9FDBGoogle_Play_Games1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadImageU3Ed__23_MoveNext_mDD6A29FB9C0861ED02140A99C60B8643B3B7108C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadImageU3Ed__23_System_Collections_IEnumerator_Reset_mB0E76047A0F503536AB73EEDB5B4BAADEC065B1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CToLogMessageU3Eb__12_0_m2DBA88364338E9EC750385E3BC73CD70A75DE33A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_m5F96DF12F191D7EE1A8C4DDE0BB128EAC398E7E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m11605B66C0CEDA55DCB7FED4F5EFB63226F94562_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass22_0_U3CGetStatsU3Eb__0_m90E6C2C853D29896C35410B7C90B450A127E0BAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass22_0_U3CInitializeNearbyU3Eb__0_m73F95D33AB29717C0FC24D96A0A8B617E881F4DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass26_0_U3CAuthenticateU3Eb__0_mFCA715935B7B3D1E1C9328C1DCBAC47B514AF209_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass27_0_U3CAuthenticateU3Eb__0_m3722C6C1D5ED583E817898CF22CBC9B3EE1EC65F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass36_0_U3CReportProgressU3Eb__0_m731D6F238BC22A07215EB2B739119EE66085CC09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass3_0_U3CAuthenticateU3Eb__0_m1D70D96D9F17BF39A51AD6F9883A9724BEC9F154_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass42_0_U3CLoadAchievementDescriptionsU3Eb__0_m41A939A764110AE8B26325F1733D8A85B892FFD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass43_0_U3CLoadAchievementsU3Eb__0_m2176D616596893ABF709A619AEC0EB4EA3FD2EA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass47_0_U3CLoadScoresU3Eb__0_mF69CCDB9CAA2F27AFC172D6C2527D8D930DD1911_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass4_0_U3CAuthenticateU3Eb__0_mED13DD59E8078C4E4B3745D2EC6E4190C9E6CC7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass59_0_U3CLoadScoresU3Eb__0_mB709F505C749ABF47D05167E36F0DAF645E868DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m3BC1FE5A085027D6B4850FD293B63669EF6B3D1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m4476E21137306FE675046B7585BE64132ECC023B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m365A1F9087A10D047E6F7ACD5CB972286993BA82_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;

struct AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249;
struct PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C;
struct IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002;
struct IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C;
struct IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// GooglePlayGames.Android.AndroidNearbyConnectionClient
struct  AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Android.AndroidNearbyConnectionClient::mClient
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___mClient_0;
	// GooglePlayGames.BasicApi.Nearby.IMessageListener GooglePlayGames.Android.AndroidNearbyConnectionClient::mAdvertisingMessageListener
	RuntimeObject* ___mAdvertisingMessageListener_4;

public:
	inline static int32_t get_offset_of_mClient_0() { return static_cast<int32_t>(offsetof(AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967, ___mClient_0)); }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * get_mClient_0() const { return ___mClient_0; }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D ** get_address_of_mClient_0() { return &___mClient_0; }
	inline void set_mClient_0(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * value)
	{
		___mClient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClient_0), (void*)value);
	}

	inline static int32_t get_offset_of_mAdvertisingMessageListener_4() { return static_cast<int32_t>(offsetof(AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967, ___mAdvertisingMessageListener_4)); }
	inline RuntimeObject* get_mAdvertisingMessageListener_4() const { return ___mAdvertisingMessageListener_4; }
	inline RuntimeObject** get_address_of_mAdvertisingMessageListener_4() { return &___mAdvertisingMessageListener_4; }
	inline void set_mAdvertisingMessageListener_4(RuntimeObject* value)
	{
		___mAdvertisingMessageListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAdvertisingMessageListener_4), (void*)value);
	}
};

struct AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967_StaticFields
{
public:
	// System.Int64 GooglePlayGames.Android.AndroidNearbyConnectionClient::NearbyClientId
	int64_t ___NearbyClientId_1;
	// System.Int32 GooglePlayGames.Android.AndroidNearbyConnectionClient::ApplicationInfoFlags
	int32_t ___ApplicationInfoFlags_2;
	// System.String GooglePlayGames.Android.AndroidNearbyConnectionClient::ServiceId
	String_t* ___ServiceId_3;

public:
	inline static int32_t get_offset_of_NearbyClientId_1() { return static_cast<int32_t>(offsetof(AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967_StaticFields, ___NearbyClientId_1)); }
	inline int64_t get_NearbyClientId_1() const { return ___NearbyClientId_1; }
	inline int64_t* get_address_of_NearbyClientId_1() { return &___NearbyClientId_1; }
	inline void set_NearbyClientId_1(int64_t value)
	{
		___NearbyClientId_1 = value;
	}

	inline static int32_t get_offset_of_ApplicationInfoFlags_2() { return static_cast<int32_t>(offsetof(AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967_StaticFields, ___ApplicationInfoFlags_2)); }
	inline int32_t get_ApplicationInfoFlags_2() const { return ___ApplicationInfoFlags_2; }
	inline int32_t* get_address_of_ApplicationInfoFlags_2() { return &___ApplicationInfoFlags_2; }
	inline void set_ApplicationInfoFlags_2(int32_t value)
	{
		___ApplicationInfoFlags_2 = value;
	}

	inline static int32_t get_offset_of_ServiceId_3() { return static_cast<int32_t>(offsetof(AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967_StaticFields, ___ServiceId_3)); }
	inline String_t* get_ServiceId_3() const { return ___ServiceId_3; }
	inline String_t** get_address_of_ServiceId_3() { return &___ServiceId_3; }
	inline void set_ServiceId_3(String_t* value)
	{
		___ServiceId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServiceId_3), (void*)value);
	}
};


// GooglePlayGames.BasicApi.DummyClient
struct  DummyClient_tE38F53999E10D9E4AB27B18622CC9D4B1FA08D79  : public RuntimeObject
{
public:

public:
};


// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct  DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116  : public RuntimeObject
{
public:

public:
};


// GooglePlayGames.BasicApi.PlayerStats
struct  PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA  : public RuntimeObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayerStats::mValid
	bool ___mValid_1;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfPurchases
	int32_t ___mNumberOfPurchases_2;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mAvgSessionLength
	float ___mAvgSessionLength_3;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mDaysSinceLastPlayed
	int32_t ___mDaysSinceLastPlayed_4;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfSessions
	int32_t ___mNumberOfSessions_5;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSessPercentile
	float ___mSessPercentile_6;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendPercentile
	float ___mSpendPercentile_7;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendProbability
	float ___mSpendProbability_8;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mChurnProbability
	float ___mChurnProbability_9;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mHighSpenderProbability
	float ___mHighSpenderProbability_10;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mTotalSpendNext28Days
	float ___mTotalSpendNext28Days_11;

public:
	inline static int32_t get_offset_of_mValid_1() { return static_cast<int32_t>(offsetof(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA, ___mValid_1)); }
	inline bool get_mValid_1() const { return ___mValid_1; }
	inline bool* get_address_of_mValid_1() { return &___mValid_1; }
	inline void set_mValid_1(bool value)
	{
		___mValid_1 = value;
	}

	inline static int32_t get_offset_of_mNumberOfPurchases_2() { return static_cast<int32_t>(offsetof(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA, ___mNumberOfPurchases_2)); }
	inline int32_t get_mNumberOfPurchases_2() const { return ___mNumberOfPurchases_2; }
	inline int32_t* get_address_of_mNumberOfPurchases_2() { return &___mNumberOfPurchases_2; }
	inline void set_mNumberOfPurchases_2(int32_t value)
	{
		___mNumberOfPurchases_2 = value;
	}

	inline static int32_t get_offset_of_mAvgSessionLength_3() { return static_cast<int32_t>(offsetof(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA, ___mAvgSessionLength_3)); }
	inline float get_mAvgSessionLength_3() const { return ___mAvgSessionLength_3; }
	inline float* get_address_of_mAvgSessionLength_3() { return &___mAvgSessionLength_3; }
	inline void set_mAvgSessionLength_3(float value)
	{
		___mAvgSessionLength_3 = value;
	}

	inline static int32_t get_offset_of_mDaysSinceLastPlayed_4() { return static_cast<int32_t>(offsetof(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA, ___mDaysSinceLastPlayed_4)); }
	inline int32_t get_mDaysSinceLastPlayed_4() const { return ___mDaysSinceLastPlayed_4; }
	inline int32_t* get_address_of_mDaysSinceLastPlayed_4() { return &___mDaysSinceLastPlayed_4; }
	inline void set_mDaysSinceLastPlayed_4(int32_t value)
	{
		___mDaysSinceLastPlayed_4 = value;
	}

	inline static int32_t get_offset_of_mNumberOfSessions_5() { return static_cast<int32_t>(offsetof(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA, ___mNumberOfSessions_5)); }
	inline int32_t get_mNumberOfSessions_5() const { return ___mNumberOfSessions_5; }
	inline int32_t* get_address_of_mNumberOfSessions_5() { return &___mNumberOfSessions_5; }
	inline void set_mNumberOfSessions_5(int32_t value)
	{
		___mNumberOfSessions_5 = value;
	}

	inline static int32_t get_offset_of_mSessPercentile_6() { return static_cast<int32_t>(offsetof(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA, ___mSessPercentile_6)); }
	inline float get_mSessPercentile_6() const { return ___mSessPercentile_6; }
	inline float* get_address_of_mSessPercentile_6() { return &___mSessPercentile_6; }
	inline void set_mSessPercentile_6(float value)
	{
		___mSessPercentile_6 = value;
	}

	inline static int32_t get_offset_of_mSpendPercentile_7() { return static_cast<int32_t>(offsetof(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA, ___mSpendPercentile_7)); }
	inline float get_mSpendPercentile_7() const { return ___mSpendPercentile_7; }
	inline float* get_address_of_mSpendPercentile_7() { return &___mSpendPercentile_7; }
	inline void set_mSpendPercentile_7(float value)
	{
		___mSpendPercentile_7 = value;
	}

	inline static int32_t get_offset_of_mSpendProbability_8() { return static_cast<int32_t>(offsetof(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA, ___mSpendProbability_8)); }
	inline float get_mSpendProbability_8() const { return ___mSpendProbability_8; }
	inline float* get_address_of_mSpendProbability_8() { return &___mSpendProbability_8; }
	inline void set_mSpendProbability_8(float value)
	{
		___mSpendProbability_8 = value;
	}

	inline static int32_t get_offset_of_mChurnProbability_9() { return static_cast<int32_t>(offsetof(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA, ___mChurnProbability_9)); }
	inline float get_mChurnProbability_9() const { return ___mChurnProbability_9; }
	inline float* get_address_of_mChurnProbability_9() { return &___mChurnProbability_9; }
	inline void set_mChurnProbability_9(float value)
	{
		___mChurnProbability_9 = value;
	}

	inline static int32_t get_offset_of_mHighSpenderProbability_10() { return static_cast<int32_t>(offsetof(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA, ___mHighSpenderProbability_10)); }
	inline float get_mHighSpenderProbability_10() const { return ___mHighSpenderProbability_10; }
	inline float* get_address_of_mHighSpenderProbability_10() { return &___mHighSpenderProbability_10; }
	inline void set_mHighSpenderProbability_10(float value)
	{
		___mHighSpenderProbability_10 = value;
	}

	inline static int32_t get_offset_of_mTotalSpendNext28Days_11() { return static_cast<int32_t>(offsetof(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA, ___mTotalSpendNext28Days_11)); }
	inline float get_mTotalSpendNext28Days_11() const { return ___mTotalSpendNext28Days_11; }
	inline float* get_address_of_mTotalSpendNext28Days_11() { return &___mTotalSpendNext28Days_11; }
	inline void set_mTotalSpendNext28Days_11(float value)
	{
		___mTotalSpendNext28Days_11 = value;
	}
};

struct PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_StaticFields
{
public:
	// System.Single GooglePlayGames.BasicApi.PlayerStats::UNSET_VALUE
	float ___UNSET_VALUE_0;

public:
	inline static int32_t get_offset_of_UNSET_VALUE_0() { return static_cast<int32_t>(offsetof(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_StaticFields, ___UNSET_VALUE_0)); }
	inline float get_UNSET_VALUE_0() const { return ___UNSET_VALUE_0; }
	inline float* get_address_of_UNSET_VALUE_0() { return &___UNSET_VALUE_0; }
	inline void set_UNSET_VALUE_0(float value)
	{
		___UNSET_VALUE_0 = value;
	}
};


// GooglePlayGames.GameInfo
struct  GameInfo_t78F1114C5BBD60C01594D73EEDE7A125C4D7D532  : public RuntimeObject
{
public:

public:
};


// GooglePlayGames.NearbyConnectionClientFactory
struct  NearbyConnectionClientFactory_t7786AB919AE69D7677DB54A2A52AA96A7B318C70  : public RuntimeObject
{
public:

public:
};


// GooglePlayGames.OurUtils.Logger
struct  Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA  : public RuntimeObject
{
public:

public:
};

struct Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields
{
public:
	// System.Boolean GooglePlayGames.OurUtils.Logger::debugLogEnabled
	bool ___debugLogEnabled_0;
	// System.Boolean GooglePlayGames.OurUtils.Logger::warningLogEnabled
	bool ___warningLogEnabled_1;

public:
	inline static int32_t get_offset_of_debugLogEnabled_0() { return static_cast<int32_t>(offsetof(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields, ___debugLogEnabled_0)); }
	inline bool get_debugLogEnabled_0() const { return ___debugLogEnabled_0; }
	inline bool* get_address_of_debugLogEnabled_0() { return &___debugLogEnabled_0; }
	inline void set_debugLogEnabled_0(bool value)
	{
		___debugLogEnabled_0 = value;
	}

	inline static int32_t get_offset_of_warningLogEnabled_1() { return static_cast<int32_t>(offsetof(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields, ___warningLogEnabled_1)); }
	inline bool get_warningLogEnabled_1() const { return ___warningLogEnabled_1; }
	inline bool* get_address_of_warningLogEnabled_1() { return &___warningLogEnabled_1; }
	inline void set_warningLogEnabled_1(bool value)
	{
		___warningLogEnabled_1 = value;
	}
};


// GooglePlayGames.OurUtils.Logger/<>c
struct  U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_StaticFields
{
public:
	// GooglePlayGames.OurUtils.Logger/<>c GooglePlayGames.OurUtils.Logger/<>c::<>9
	U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99 * ___U3CU3E9_0;
	// System.Action GooglePlayGames.OurUtils.Logger/<>c::<>9__12_0
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_0), (void*)value);
	}
};


// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_0), (void*)value);
	}
};


// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::msg
	String_t* ___msg_0;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_0), (void*)value);
	}
};


// GooglePlayGames.OurUtils.Misc
struct  Misc_t791EC7E763F7B85C68216C4CAD3337C0AD24FF4A  : public RuntimeObject
{
public:

public:
};


// GooglePlayGames.OurUtils.PlatformUtils
struct  PlatformUtils_tD6765185A35D0C5B8F3D735378191DF79DA18D9E  : public RuntimeObject
{
public:

public:
};


// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::action
	RuntimeObject* ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8, ___action_0)); }
	inline RuntimeObject* get_action_0() const { return ___action_0; }
	inline RuntimeObject** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(RuntimeObject* value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesClientFactory
struct  PlayGamesClientFactory_t5BDBE0E4765B5483496C7FFEF07979EE62A173D2  : public RuntimeObject
{
public:

public:
};


// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0
struct  U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0::<>4__this
	PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * ___U3CU3E4__this_0;
	// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats> GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0::callback
	Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * ___callback_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE, ___U3CU3E4__this_0)); }
	inline PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE, ___callback_1)); }
	inline Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * get_callback_1() const { return ___callback_1; }
	inline Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};


// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass3_0::callback
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F, ___callback_0)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_callback_0() const { return ___callback_0; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201  : public RuntimeObject
{
public:
	// System.Action`2<System.Boolean,System.String> GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass4_0::callback
	Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201, ___callback_0)); }
	inline Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass22_0
struct  U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6  : public RuntimeObject
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass22_0::callback
	Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6, ___callback_0)); }
	inline Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * get_callback_0() const { return ___callback_0; }
	inline Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0
struct  U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0::callback
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730, ___callback_0)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_callback_0() const { return ___callback_0; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass27_0
struct  U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910  : public RuntimeObject
{
public:
	// System.Action`2<System.Boolean,System.String> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass27_0::callback
	Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910, ___callback_0)); }
	inline Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0
struct  U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::achievementID
	String_t* ___achievementID_0;
	// System.Double GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::progress
	double ___progress_1;
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::<>4__this
	PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * ___U3CU3E4__this_2;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::callback
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback_3;

public:
	inline static int32_t get_offset_of_achievementID_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22, ___achievementID_0)); }
	inline String_t* get_achievementID_0() const { return ___achievementID_0; }
	inline String_t** get_address_of_achievementID_0() { return &___achievementID_0; }
	inline void set_achievementID_0(String_t* value)
	{
		___achievementID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___achievementID_0), (void*)value);
	}

	inline static int32_t get_offset_of_progress_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22, ___progress_1)); }
	inline double get_progress_1() const { return ___progress_1; }
	inline double* get_address_of_progress_1() { return &___progress_1; }
	inline void set_progress_1(double value)
	{
		___progress_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22, ___U3CU3E4__this_2)); }
	inline PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22, ___callback_3)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_callback_3() const { return ___callback_3; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_3), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass42_0
struct  U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass42_0::callback
	Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB, ___callback_0)); }
	inline Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0
struct  U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0::callback
	Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C, ___callback_0)); }
	inline Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass47_0
struct  U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IScore[]> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass47_0::callback
	Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764, ___callback_0)); }
	inline Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C * get_callback_0() const { return ___callback_0; }
	inline Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0
struct  U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::<>4__this
	PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * ___U3CU3E4__this_0;
	// UnityEngine.SocialPlatforms.ILeaderboard GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::board
	RuntimeObject* ___board_1;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::callback
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578, ___U3CU3E4__this_0)); }
	inline PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_board_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578, ___board_1)); }
	inline RuntimeObject* get_board_1() const { return ___board_1; }
	inline RuntimeObject** get_address_of_board_1() { return &___board_1; }
	inline void set_board_1(RuntimeObject* value)
	{
		___board_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___board_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578, ___callback_2)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_callback_2() const { return ___callback_2; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0
struct  U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0::<>4__this
	PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * ___U3CU3E4__this_0;
	// GooglePlayGames.PlayGamesLeaderboard GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0::board
	PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * ___board_1;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0::callback
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174, ___U3CU3E4__this_0)); }
	inline PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_board_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174, ___board_1)); }
	inline PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * get_board_1() const { return ___board_1; }
	inline PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A ** get_address_of_board_1() { return &___board_1; }
	inline void set_board_1(PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * value)
	{
		___board_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___board_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174, ___callback_2)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_callback_2() const { return ___callback_2; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23
struct  U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE  : public RuntimeObject
{
public:
	// System.Int32 GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GooglePlayGames.PlayGamesUserProfile GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::<>4__this
	PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::<www>5__2
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE, ___U3CU3E4__this_2)); }
	inline PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE, ___U3CwwwU3E5__2_3)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// GooglePlayGames.PluginVersion
struct  PluginVersion_tBBB57C356E91EC4B74040A933E1AF276BE52A3D2  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct  List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939, ____items_1)); }
	inline PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B* get__items_1() const { return ____items_1; }
	inline PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939_StaticFields, ____emptyArray_5)); }
	inline PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action>
struct  List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE, ____items_1)); }
	inline ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE_StaticFields, ____emptyArray_5)); }
	inline ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ActionU5BU5D_tBFE34E95F8D5EAA828CD01E01994E4574F55958B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct  List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_t3034A3AD7E26360C4625A301DB6299EF6B61C0BC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89, ____items_1)); }
	inline Action_1U5BU5D_t3034A3AD7E26360C4625A301DB6299EF6B61C0BC* get__items_1() const { return ____items_1; }
	inline Action_1U5BU5D_t3034A3AD7E26360C4625A301DB6299EF6B61C0BC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Action_1U5BU5D_t3034A3AD7E26360C4625A301DB6299EF6B61C0BC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Action_1U5BU5D_t3034A3AD7E26360C4625A301DB6299EF6B61C0BC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89_StaticFields, ____emptyArray_5)); }
	inline Action_1U5BU5D_t3034A3AD7E26360C4625A301DB6299EF6B61C0BC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Action_1U5BU5D_t3034A3AD7E26360C4625A301DB6299EF6B61C0BC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Action_1U5BU5D_t3034A3AD7E26360C4625A301DB6299EF6B61C0BC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
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


// System.StringComparer
struct  StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_StaticFields, ____ordinal_2)); }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
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

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct  EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 
{
public:
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_2;

public:
	inline static int32_t get_offset_of_mEndpointId_0() { return static_cast<int32_t>(offsetof(EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4, ___mEndpointId_0)); }
	inline String_t* get_mEndpointId_0() const { return ___mEndpointId_0; }
	inline String_t** get_address_of_mEndpointId_0() { return &___mEndpointId_0; }
	inline void set_mEndpointId_0(String_t* value)
	{
		___mEndpointId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEndpointId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_1), (void*)value);
	}

	inline static int32_t get_offset_of_mServiceId_2() { return static_cast<int32_t>(offsetof(EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4, ___mServiceId_2)); }
	inline String_t* get_mServiceId_2() const { return ___mServiceId_2; }
	inline String_t** get_address_of_mServiceId_2() { return &___mServiceId_2; }
	inline void set_mServiceId_2(String_t* value)
	{
		___mServiceId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mServiceId_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mName_1;
	char* ___mServiceId_2;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mName_1;
	Il2CppChar* ___mServiceId_2;
};

// GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct  NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mInitializationCallback
	Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * ___mInitializationCallback_2;
	// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mLocalClientId
	int64_t ___mLocalClientId_3;

public:
	inline static int32_t get_offset_of_mInitializationCallback_2() { return static_cast<int32_t>(offsetof(NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0, ___mInitializationCallback_2)); }
	inline Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * get_mInitializationCallback_2() const { return ___mInitializationCallback_2; }
	inline Action_1_tDE6242754045E413334AD30795D5F15C91E26560 ** get_address_of_mInitializationCallback_2() { return &___mInitializationCallback_2; }
	inline void set_mInitializationCallback_2(Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * value)
	{
		___mInitializationCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInitializationCallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_mLocalClientId_3() { return static_cast<int32_t>(offsetof(NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0, ___mLocalClientId_3)); }
	inline int64_t get_mLocalClientId_3() const { return ___mLocalClientId_3; }
	inline int64_t* get_address_of_mLocalClientId_3() { return &___mLocalClientId_3; }
	inline void set_mLocalClientId_3(int64_t value)
	{
		___mLocalClientId_3 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshaled_pinvoke
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshaled_com
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>
struct  Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE, ___list_0)); }
	inline List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * get_list_0() const { return ___list_0; }
	inline List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE, ___current_3)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_current_3() const { return ___current_3; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
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


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE  : public AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D
{
public:

public:
};


// UnityEngine.SocialPlatforms.Range
struct  Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// GooglePlayGames.Android.AndroidClient/AuthState
struct  AuthState_t39AD49CD80003A49C20E476180AC5B586DCF8710 
{
public:
	// System.Int32 GooglePlayGames.Android.AndroidClient/AuthState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthState_t39AD49CD80003A49C20E476180AC5B586DCF8710, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Achievement
struct  Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.Achievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsRevealed
	bool ___mIsRevealed_3;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsUnlocked
	bool ___mIsUnlocked_4;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mCurrentSteps
	int32_t ___mCurrentSteps_5;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mTotalSteps
	int32_t ___mTotalSteps_6;
	// System.String GooglePlayGames.BasicApi.Achievement::mDescription
	String_t* ___mDescription_7;
	// System.String GooglePlayGames.BasicApi.Achievement::mName
	String_t* ___mName_8;
	// System.Int64 GooglePlayGames.BasicApi.Achievement::mLastModifiedTime
	int64_t ___mLastModifiedTime_9;
	// System.UInt64 GooglePlayGames.BasicApi.Achievement::mPoints
	uint64_t ___mPoints_10;
	// System.String GooglePlayGames.BasicApi.Achievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_11;
	// System.String GooglePlayGames.BasicApi.Achievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_12;

public:
	inline static int32_t get_offset_of_mId_1() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355, ___mId_1)); }
	inline String_t* get_mId_1() const { return ___mId_1; }
	inline String_t** get_address_of_mId_1() { return &___mId_1; }
	inline void set_mId_1(String_t* value)
	{
		___mId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mIsIncremental_2() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355, ___mIsIncremental_2)); }
	inline bool get_mIsIncremental_2() const { return ___mIsIncremental_2; }
	inline bool* get_address_of_mIsIncremental_2() { return &___mIsIncremental_2; }
	inline void set_mIsIncremental_2(bool value)
	{
		___mIsIncremental_2 = value;
	}

	inline static int32_t get_offset_of_mIsRevealed_3() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355, ___mIsRevealed_3)); }
	inline bool get_mIsRevealed_3() const { return ___mIsRevealed_3; }
	inline bool* get_address_of_mIsRevealed_3() { return &___mIsRevealed_3; }
	inline void set_mIsRevealed_3(bool value)
	{
		___mIsRevealed_3 = value;
	}

	inline static int32_t get_offset_of_mIsUnlocked_4() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355, ___mIsUnlocked_4)); }
	inline bool get_mIsUnlocked_4() const { return ___mIsUnlocked_4; }
	inline bool* get_address_of_mIsUnlocked_4() { return &___mIsUnlocked_4; }
	inline void set_mIsUnlocked_4(bool value)
	{
		___mIsUnlocked_4 = value;
	}

	inline static int32_t get_offset_of_mCurrentSteps_5() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355, ___mCurrentSteps_5)); }
	inline int32_t get_mCurrentSteps_5() const { return ___mCurrentSteps_5; }
	inline int32_t* get_address_of_mCurrentSteps_5() { return &___mCurrentSteps_5; }
	inline void set_mCurrentSteps_5(int32_t value)
	{
		___mCurrentSteps_5 = value;
	}

	inline static int32_t get_offset_of_mTotalSteps_6() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355, ___mTotalSteps_6)); }
	inline int32_t get_mTotalSteps_6() const { return ___mTotalSteps_6; }
	inline int32_t* get_address_of_mTotalSteps_6() { return &___mTotalSteps_6; }
	inline void set_mTotalSteps_6(int32_t value)
	{
		___mTotalSteps_6 = value;
	}

	inline static int32_t get_offset_of_mDescription_7() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355, ___mDescription_7)); }
	inline String_t* get_mDescription_7() const { return ___mDescription_7; }
	inline String_t** get_address_of_mDescription_7() { return &___mDescription_7; }
	inline void set_mDescription_7(String_t* value)
	{
		___mDescription_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDescription_7), (void*)value);
	}

	inline static int32_t get_offset_of_mName_8() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355, ___mName_8)); }
	inline String_t* get_mName_8() const { return ___mName_8; }
	inline String_t** get_address_of_mName_8() { return &___mName_8; }
	inline void set_mName_8(String_t* value)
	{
		___mName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_8), (void*)value);
	}

	inline static int32_t get_offset_of_mLastModifiedTime_9() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355, ___mLastModifiedTime_9)); }
	inline int64_t get_mLastModifiedTime_9() const { return ___mLastModifiedTime_9; }
	inline int64_t* get_address_of_mLastModifiedTime_9() { return &___mLastModifiedTime_9; }
	inline void set_mLastModifiedTime_9(int64_t value)
	{
		___mLastModifiedTime_9 = value;
	}

	inline static int32_t get_offset_of_mPoints_10() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355, ___mPoints_10)); }
	inline uint64_t get_mPoints_10() const { return ___mPoints_10; }
	inline uint64_t* get_address_of_mPoints_10() { return &___mPoints_10; }
	inline void set_mPoints_10(uint64_t value)
	{
		___mPoints_10 = value;
	}

	inline static int32_t get_offset_of_mRevealedImageUrl_11() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355, ___mRevealedImageUrl_11)); }
	inline String_t* get_mRevealedImageUrl_11() const { return ___mRevealedImageUrl_11; }
	inline String_t** get_address_of_mRevealedImageUrl_11() { return &___mRevealedImageUrl_11; }
	inline void set_mRevealedImageUrl_11(String_t* value)
	{
		___mRevealedImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRevealedImageUrl_11), (void*)value);
	}

	inline static int32_t get_offset_of_mUnlockedImageUrl_12() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355, ___mUnlockedImageUrl_12)); }
	inline String_t* get_mUnlockedImageUrl_12() const { return ___mUnlockedImageUrl_12; }
	inline String_t** get_address_of_mUnlockedImageUrl_12() { return &___mUnlockedImageUrl_12; }
	inline void set_mUnlockedImageUrl_12(String_t* value)
	{
		___mUnlockedImageUrl_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnlockedImageUrl_12), (void*)value);
	}
};

struct Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355_StaticFields
{
public:
	// System.DateTime GooglePlayGames.BasicApi.Achievement::UnixEpoch
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___UnixEpoch_0;

public:
	inline static int32_t get_offset_of_UnixEpoch_0() { return static_cast<int32_t>(offsetof(Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355_StaticFields, ___UnixEpoch_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_UnixEpoch_0() const { return ___UnixEpoch_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_UnixEpoch_0() { return &___UnixEpoch_0; }
	inline void set_UnixEpoch_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___UnixEpoch_0 = value;
	}
};


// GooglePlayGames.BasicApi.CommonStatusCodes
struct  CommonStatusCodes_tCCD96D3622BFB41F7DA13C9A5F0E6337A4DF0B91 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.CommonStatusCodes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CommonStatusCodes_tCCD96D3622BFB41F7DA13C9A5F0E6337A4DF0B91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.FriendsListVisibilityStatus
struct  FriendsListVisibilityStatus_t5C8FEFC70B838D8C9EDF134574A9FC09146BF615 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.FriendsListVisibilityStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FriendsListVisibilityStatus_t5C8FEFC70B838D8C9EDF134574A9FC09146BF615, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.LeaderboardCollection
struct  LeaderboardCollection_t11CF179E61D5FB90130BA74D9E10E54A04EDEC0D 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LeaderboardCollection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaderboardCollection_t11CF179E61D5FB90130BA74D9E10E54A04EDEC0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.LeaderboardStart
struct  LeaderboardStart_t309FD4B1776F5FF48399D62D5F8025A025D2B2B0 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LeaderboardStart::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaderboardStart_t309FD4B1776F5FF48399D62D5F8025A025D2B2B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.LeaderboardTimeSpan
struct  LeaderboardTimeSpan_t22CBD8EDA85F129B795D67DCBFF18DFB02BEDCCD 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LeaderboardTimeSpan::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeaderboardTimeSpan_t22CBD8EDA85F129B795D67DCBFF18DFB02BEDCCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.LoadFriendsStatus
struct  LoadFriendsStatus_t0B02CC60E54A4D8A8F541BF39AFB10CEFD17CEBB 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.LoadFriendsStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadFriendsStatus_t0B02CC60E54A4D8A8F541BF39AFB10CEFD17CEBB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct  ConnectionRequest_t51AC36E37C1DF05785A96F5356B27479F5E6149E 
{
public:
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mRemoteEndpoint
	EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4  ___mRemoteEndpoint_0;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mPayload
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___mPayload_1;

public:
	inline static int32_t get_offset_of_mRemoteEndpoint_0() { return static_cast<int32_t>(offsetof(ConnectionRequest_t51AC36E37C1DF05785A96F5356B27479F5E6149E, ___mRemoteEndpoint_0)); }
	inline EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4  get_mRemoteEndpoint_0() const { return ___mRemoteEndpoint_0; }
	inline EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * get_address_of_mRemoteEndpoint_0() { return &___mRemoteEndpoint_0; }
	inline void set_mRemoteEndpoint_0(EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4  value)
	{
		___mRemoteEndpoint_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_mPayload_1() { return static_cast<int32_t>(offsetof(ConnectionRequest_t51AC36E37C1DF05785A96F5356B27479F5E6149E, ___mPayload_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_mPayload_1() const { return ___mPayload_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_mPayload_1() { return &___mPayload_1; }
	inline void set_mPayload_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___mPayload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPayload_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t51AC36E37C1DF05785A96F5356B27479F5E6149E_marshaled_pinvoke
{
	EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshaled_pinvoke ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t51AC36E37C1DF05785A96F5356B27479F5E6149E_marshaled_com
{
	EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshaled_com ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
};

// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status
struct  Status_tD31B92084DB7DA86588D4687A45493EC773E116E 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_tD31B92084DB7DA86588D4687A45493EC773E116E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.Nearby.InitializationStatus
struct  InitializationStatus_t101D791A8C14D4424EF84DF36203C2FC607B53DE 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.Nearby.InitializationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationStatus_t101D791A8C14D4424EF84DF36203C2FC607B53DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.ResponseStatus
struct  ResponseStatus_t3B41EF5598FB9C4F8FFFA968BF290B8AE852E0B9 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.ResponseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResponseStatus_t3B41EF5598FB9C4F8FFFA968BF290B8AE852E0B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy
struct  ConflictResolutionStrategy_t5FCA069A0D33262F9298A78E01DE50B560BBCD68 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConflictResolutionStrategy_t5FCA069A0D33262F9298A78E01DE50B560BBCD68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus
struct  SavedGameRequestStatus_t985D93F156A87B2D8A73752CE704519662926084 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SavedGameRequestStatus_t985D93F156A87B2D8A73752CE704519662926084, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SavedGame.SelectUIStatus
struct  SelectUIStatus_tBFFBA9AA94D4D7721092C14820F76A2CD9034EFD 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SavedGame.SelectUIStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectUIStatus_tBFFBA9AA94D4D7721092C14820F76A2CD9034EFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.ScorePageDirection
struct  ScorePageDirection_t980330DB7F6BDFF92D02C4782A574497037A1921 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.ScorePageDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScorePageDirection_t980330DB7F6BDFF92D02C4782A574497037A1921, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SignInInteractivity
struct  SignInInteractivity_t1C1CA447090A773FC63B73D649FAE594CA9DF736 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SignInInteractivity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SignInInteractivity_t1C1CA447090A773FC63B73D649FAE594CA9DF736, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.SignInStatus
struct  SignInStatus_tDB7CC62A7FBD2F0C04DF3D8991D4328BE181E0DC 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.SignInStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SignInStatus_tDB7CC62A7FBD2F0C04DF3D8991D4328BE181E0DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.UIStatus
struct  UIStatus_t3BE93053424F559A5B3E1D4C290FA5E091A14CB7 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.UIStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UIStatus_t3BE93053424F559A5B3E1D4C290FA5E091A14CB7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.PlayGamesAchievement
struct  PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262  : public RuntimeObject
{
public:
	// GooglePlayGames.ReportProgress GooglePlayGames.PlayGamesAchievement::mProgressCallback
	ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * ___mProgressCallback_0;
	// System.String GooglePlayGames.PlayGamesAchievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Int32 GooglePlayGames.PlayGamesAchievement::mCurrentSteps
	int32_t ___mCurrentSteps_3;
	// System.Int32 GooglePlayGames.PlayGamesAchievement::mTotalSteps
	int32_t ___mTotalSteps_4;
	// System.Double GooglePlayGames.PlayGamesAchievement::mPercentComplete
	double ___mPercentComplete_5;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mCompleted
	bool ___mCompleted_6;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mHidden
	bool ___mHidden_7;
	// System.DateTime GooglePlayGames.PlayGamesAchievement::mLastModifiedTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___mLastModifiedTime_8;
	// System.String GooglePlayGames.PlayGamesAchievement::mTitle
	String_t* ___mTitle_9;
	// System.String GooglePlayGames.PlayGamesAchievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_10;
	// System.String GooglePlayGames.PlayGamesAchievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_11;
	// UnityEngine.Networking.UnityWebRequest GooglePlayGames.PlayGamesAchievement::mImageFetcher
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___mImageFetcher_12;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesAchievement::mImage
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mImage_13;
	// System.String GooglePlayGames.PlayGamesAchievement::mDescription
	String_t* ___mDescription_14;
	// System.UInt64 GooglePlayGames.PlayGamesAchievement::mPoints
	uint64_t ___mPoints_15;

public:
	inline static int32_t get_offset_of_mProgressCallback_0() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mProgressCallback_0)); }
	inline ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * get_mProgressCallback_0() const { return ___mProgressCallback_0; }
	inline ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 ** get_address_of_mProgressCallback_0() { return &___mProgressCallback_0; }
	inline void set_mProgressCallback_0(ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * value)
	{
		___mProgressCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mProgressCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_mId_1() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mId_1)); }
	inline String_t* get_mId_1() const { return ___mId_1; }
	inline String_t** get_address_of_mId_1() { return &___mId_1; }
	inline void set_mId_1(String_t* value)
	{
		___mId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mIsIncremental_2() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mIsIncremental_2)); }
	inline bool get_mIsIncremental_2() const { return ___mIsIncremental_2; }
	inline bool* get_address_of_mIsIncremental_2() { return &___mIsIncremental_2; }
	inline void set_mIsIncremental_2(bool value)
	{
		___mIsIncremental_2 = value;
	}

	inline static int32_t get_offset_of_mCurrentSteps_3() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mCurrentSteps_3)); }
	inline int32_t get_mCurrentSteps_3() const { return ___mCurrentSteps_3; }
	inline int32_t* get_address_of_mCurrentSteps_3() { return &___mCurrentSteps_3; }
	inline void set_mCurrentSteps_3(int32_t value)
	{
		___mCurrentSteps_3 = value;
	}

	inline static int32_t get_offset_of_mTotalSteps_4() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mTotalSteps_4)); }
	inline int32_t get_mTotalSteps_4() const { return ___mTotalSteps_4; }
	inline int32_t* get_address_of_mTotalSteps_4() { return &___mTotalSteps_4; }
	inline void set_mTotalSteps_4(int32_t value)
	{
		___mTotalSteps_4 = value;
	}

	inline static int32_t get_offset_of_mPercentComplete_5() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mPercentComplete_5)); }
	inline double get_mPercentComplete_5() const { return ___mPercentComplete_5; }
	inline double* get_address_of_mPercentComplete_5() { return &___mPercentComplete_5; }
	inline void set_mPercentComplete_5(double value)
	{
		___mPercentComplete_5 = value;
	}

	inline static int32_t get_offset_of_mCompleted_6() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mCompleted_6)); }
	inline bool get_mCompleted_6() const { return ___mCompleted_6; }
	inline bool* get_address_of_mCompleted_6() { return &___mCompleted_6; }
	inline void set_mCompleted_6(bool value)
	{
		___mCompleted_6 = value;
	}

	inline static int32_t get_offset_of_mHidden_7() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mHidden_7)); }
	inline bool get_mHidden_7() const { return ___mHidden_7; }
	inline bool* get_address_of_mHidden_7() { return &___mHidden_7; }
	inline void set_mHidden_7(bool value)
	{
		___mHidden_7 = value;
	}

	inline static int32_t get_offset_of_mLastModifiedTime_8() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mLastModifiedTime_8)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_mLastModifiedTime_8() const { return ___mLastModifiedTime_8; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_mLastModifiedTime_8() { return &___mLastModifiedTime_8; }
	inline void set_mLastModifiedTime_8(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___mLastModifiedTime_8 = value;
	}

	inline static int32_t get_offset_of_mTitle_9() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mTitle_9)); }
	inline String_t* get_mTitle_9() const { return ___mTitle_9; }
	inline String_t** get_address_of_mTitle_9() { return &___mTitle_9; }
	inline void set_mTitle_9(String_t* value)
	{
		___mTitle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_9), (void*)value);
	}

	inline static int32_t get_offset_of_mRevealedImageUrl_10() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mRevealedImageUrl_10)); }
	inline String_t* get_mRevealedImageUrl_10() const { return ___mRevealedImageUrl_10; }
	inline String_t** get_address_of_mRevealedImageUrl_10() { return &___mRevealedImageUrl_10; }
	inline void set_mRevealedImageUrl_10(String_t* value)
	{
		___mRevealedImageUrl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRevealedImageUrl_10), (void*)value);
	}

	inline static int32_t get_offset_of_mUnlockedImageUrl_11() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mUnlockedImageUrl_11)); }
	inline String_t* get_mUnlockedImageUrl_11() const { return ___mUnlockedImageUrl_11; }
	inline String_t** get_address_of_mUnlockedImageUrl_11() { return &___mUnlockedImageUrl_11; }
	inline void set_mUnlockedImageUrl_11(String_t* value)
	{
		___mUnlockedImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnlockedImageUrl_11), (void*)value);
	}

	inline static int32_t get_offset_of_mImageFetcher_12() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mImageFetcher_12)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_mImageFetcher_12() const { return ___mImageFetcher_12; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_mImageFetcher_12() { return &___mImageFetcher_12; }
	inline void set_mImageFetcher_12(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___mImageFetcher_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageFetcher_12), (void*)value);
	}

	inline static int32_t get_offset_of_mImage_13() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mImage_13)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_mImage_13() const { return ___mImage_13; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_mImage_13() { return &___mImage_13; }
	inline void set_mImage_13(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___mImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_mDescription_14() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mDescription_14)); }
	inline String_t* get_mDescription_14() const { return ___mDescription_14; }
	inline String_t** get_address_of_mDescription_14() { return &___mDescription_14; }
	inline void set_mDescription_14(String_t* value)
	{
		___mDescription_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDescription_14), (void*)value);
	}

	inline static int32_t get_offset_of_mPoints_15() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262, ___mPoints_15)); }
	inline uint64_t get_mPoints_15() const { return ___mPoints_15; }
	inline uint64_t* get_address_of_mPoints_15() { return &___mPoints_15; }
	inline void set_mPoints_15(uint64_t value)
	{
		___mPoints_15 = value;
	}
};


// GooglePlayGames.PlayGamesPlatform
struct  PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesPlatform::mLocalUser
	PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * ___mLocalUser_3;
	// GooglePlayGames.BasicApi.IPlayGamesClient GooglePlayGames.PlayGamesPlatform::mClient
	RuntimeObject* ___mClient_4;
	// System.String GooglePlayGames.PlayGamesPlatform::mDefaultLbUi
	String_t* ___mDefaultLbUi_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GooglePlayGames.PlayGamesPlatform::mIdMap
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___mIdMap_6;

public:
	inline static int32_t get_offset_of_mLocalUser_3() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D, ___mLocalUser_3)); }
	inline PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * get_mLocalUser_3() const { return ___mLocalUser_3; }
	inline PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 ** get_address_of_mLocalUser_3() { return &___mLocalUser_3; }
	inline void set_mLocalUser_3(PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * value)
	{
		___mLocalUser_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalUser_3), (void*)value);
	}

	inline static int32_t get_offset_of_mClient_4() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D, ___mClient_4)); }
	inline RuntimeObject* get_mClient_4() const { return ___mClient_4; }
	inline RuntimeObject** get_address_of_mClient_4() { return &___mClient_4; }
	inline void set_mClient_4(RuntimeObject* value)
	{
		___mClient_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClient_4), (void*)value);
	}

	inline static int32_t get_offset_of_mDefaultLbUi_5() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D, ___mDefaultLbUi_5)); }
	inline String_t* get_mDefaultLbUi_5() const { return ___mDefaultLbUi_5; }
	inline String_t** get_address_of_mDefaultLbUi_5() { return &___mDefaultLbUi_5; }
	inline void set_mDefaultLbUi_5(String_t* value)
	{
		___mDefaultLbUi_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDefaultLbUi_5), (void*)value);
	}

	inline static int32_t get_offset_of_mIdMap_6() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D, ___mIdMap_6)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_mIdMap_6() const { return ___mIdMap_6; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_mIdMap_6() { return &___mIdMap_6; }
	inline void set_mIdMap_6(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___mIdMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIdMap_6), (void*)value);
	}
};

struct PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields
{
public:
	// GooglePlayGames.PlayGamesPlatform modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sInstance
	PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * ___sInstance_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyInitializePending
	bool ___sNearbyInitializePending_1;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyConnectionClient
	RuntimeObject* ___sNearbyConnectionClient_2;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields, ___sInstance_0)); }
	inline PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * get_sInstance_0() const { return ___sInstance_0; }
	inline PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of_sNearbyInitializePending_1() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields, ___sNearbyInitializePending_1)); }
	inline bool get_sNearbyInitializePending_1() const { return ___sNearbyInitializePending_1; }
	inline bool* get_address_of_sNearbyInitializePending_1() { return &___sNearbyInitializePending_1; }
	inline void set_sNearbyInitializePending_1(bool value)
	{
		___sNearbyInitializePending_1 = value;
	}

	inline static int32_t get_offset_of_sNearbyConnectionClient_2() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields, ___sNearbyConnectionClient_2)); }
	inline RuntimeObject* get_sNearbyConnectionClient_2() const { return ___sNearbyConnectionClient_2; }
	inline RuntimeObject** get_address_of_sNearbyConnectionClient_2() { return &___sNearbyConnectionClient_2; }
	inline void set_sNearbyConnectionClient_2(RuntimeObject* value)
	{
		___sNearbyConnectionClient_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sNearbyConnectionClient_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesScore
struct  PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesScore::mLbId
	String_t* ___mLbId_0;
	// System.Int64 GooglePlayGames.PlayGamesScore::mValue
	int64_t ___mValue_1;
	// System.UInt64 GooglePlayGames.PlayGamesScore::mRank
	uint64_t ___mRank_2;
	// System.String GooglePlayGames.PlayGamesScore::mPlayerId
	String_t* ___mPlayerId_3;
	// System.String GooglePlayGames.PlayGamesScore::mMetadata
	String_t* ___mMetadata_4;
	// System.DateTime GooglePlayGames.PlayGamesScore::mDate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___mDate_5;

public:
	inline static int32_t get_offset_of_mLbId_0() { return static_cast<int32_t>(offsetof(PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F, ___mLbId_0)); }
	inline String_t* get_mLbId_0() const { return ___mLbId_0; }
	inline String_t** get_address_of_mLbId_0() { return &___mLbId_0; }
	inline void set_mLbId_0(String_t* value)
	{
		___mLbId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLbId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mValue_1() { return static_cast<int32_t>(offsetof(PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F, ___mValue_1)); }
	inline int64_t get_mValue_1() const { return ___mValue_1; }
	inline int64_t* get_address_of_mValue_1() { return &___mValue_1; }
	inline void set_mValue_1(int64_t value)
	{
		___mValue_1 = value;
	}

	inline static int32_t get_offset_of_mRank_2() { return static_cast<int32_t>(offsetof(PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F, ___mRank_2)); }
	inline uint64_t get_mRank_2() const { return ___mRank_2; }
	inline uint64_t* get_address_of_mRank_2() { return &___mRank_2; }
	inline void set_mRank_2(uint64_t value)
	{
		___mRank_2 = value;
	}

	inline static int32_t get_offset_of_mPlayerId_3() { return static_cast<int32_t>(offsetof(PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F, ___mPlayerId_3)); }
	inline String_t* get_mPlayerId_3() const { return ___mPlayerId_3; }
	inline String_t** get_address_of_mPlayerId_3() { return &___mPlayerId_3; }
	inline void set_mPlayerId_3(String_t* value)
	{
		___mPlayerId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerId_3), (void*)value);
	}

	inline static int32_t get_offset_of_mMetadata_4() { return static_cast<int32_t>(offsetof(PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F, ___mMetadata_4)); }
	inline String_t* get_mMetadata_4() const { return ___mMetadata_4; }
	inline String_t** get_address_of_mMetadata_4() { return &___mMetadata_4; }
	inline void set_mMetadata_4(String_t* value)
	{
		___mMetadata_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMetadata_4), (void*)value);
	}

	inline static int32_t get_offset_of_mDate_5() { return static_cast<int32_t>(offsetof(PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F, ___mDate_5)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_mDate_5() const { return ___mDate_5; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_mDate_5() { return &___mDate_5; }
	inline void set_mDate_5(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___mDate_5 = value;
	}
};


// GooglePlayGames.PlayGamesUserProfile
struct  PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesUserProfile::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.PlayGamesUserProfile::mPlayerId
	String_t* ___mPlayerId_1;
	// System.String GooglePlayGames.PlayGamesUserProfile::mAvatarUrl
	String_t* ___mAvatarUrl_2;
	// System.Boolean GooglePlayGames.PlayGamesUserProfile::mIsFriend
	bool ___mIsFriend_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesUserProfile::mImageLoading
	bool ___mImageLoading_4;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::mImage
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mImage_5;

public:
	inline static int32_t get_offset_of_mDisplayName_0() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F, ___mDisplayName_0)); }
	inline String_t* get_mDisplayName_0() const { return ___mDisplayName_0; }
	inline String_t** get_address_of_mDisplayName_0() { return &___mDisplayName_0; }
	inline void set_mDisplayName_0(String_t* value)
	{
		___mDisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDisplayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerId_1() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F, ___mPlayerId_1)); }
	inline String_t* get_mPlayerId_1() const { return ___mPlayerId_1; }
	inline String_t** get_address_of_mPlayerId_1() { return &___mPlayerId_1; }
	inline void set_mPlayerId_1(String_t* value)
	{
		___mPlayerId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mAvatarUrl_2() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F, ___mAvatarUrl_2)); }
	inline String_t* get_mAvatarUrl_2() const { return ___mAvatarUrl_2; }
	inline String_t** get_address_of_mAvatarUrl_2() { return &___mAvatarUrl_2; }
	inline void set_mAvatarUrl_2(String_t* value)
	{
		___mAvatarUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAvatarUrl_2), (void*)value);
	}

	inline static int32_t get_offset_of_mIsFriend_3() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F, ___mIsFriend_3)); }
	inline bool get_mIsFriend_3() const { return ___mIsFriend_3; }
	inline bool* get_address_of_mIsFriend_3() { return &___mIsFriend_3; }
	inline void set_mIsFriend_3(bool value)
	{
		___mIsFriend_3 = value;
	}

	inline static int32_t get_offset_of_mImageLoading_4() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F, ___mImageLoading_4)); }
	inline bool get_mImageLoading_4() const { return ___mImageLoading_4; }
	inline bool* get_address_of_mImageLoading_4() { return &___mImageLoading_4; }
	inline void set_mImageLoading_4(bool value)
	{
		___mImageLoading_4 = value;
	}

	inline static int32_t get_offset_of_mImage_5() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F, ___mImage_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_mImage_5() const { return ___mImage_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_mImage_5() { return &___mImage_5; }
	inline void set_mImage_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___mImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImage_5), (void*)value);
	}
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
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

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

// UnityEngine.SocialPlatforms.TimeScope
struct  TimeScope_t33ED9CE3541B951879D86F5AE6A8D9389E7A2369 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeScope_t33ED9CE3541B951879D86F5AE6A8D9389E7A2369, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.UserScope
struct  UserScope_t85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserScope_t85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.UserState
struct  UserState_t84B00958348DD8A2B8778416E393E229DACA5871 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserState_t84B00958348DD8A2B8778416E393E229DACA5871, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Android.AndroidClient
struct  AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5  : public RuntimeObject
{
public:
	// System.Object GooglePlayGames.Android.AndroidClient::GameServicesLock
	RuntimeObject * ___GameServicesLock_0;
	// System.Object GooglePlayGames.Android.AndroidClient::AuthStateLock
	RuntimeObject * ___AuthStateLock_1;
	// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Android.AndroidClient::mSavedGameClient
	RuntimeObject* ___mSavedGameClient_3;
	// GooglePlayGames.BasicApi.Events.IEventsClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Android.AndroidClient::mEventsClient
	RuntimeObject* ___mEventsClient_4;
	// GooglePlayGames.BasicApi.Player modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Android.AndroidClient::mUser
	Player_tEC085BE46190556937E5B56A0C781F2EA63AD330 * ___mUser_5;
	// GooglePlayGames.Android.AndroidClient/AuthState modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Android.AndroidClient::mAuthState
	int32_t ___mAuthState_6;
	// UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.Android.AndroidClient::mFriends
	IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* ___mFriends_7;
	// GooglePlayGames.BasicApi.LoadFriendsStatus GooglePlayGames.Android.AndroidClient::mLastLoadFriendsStatus
	int32_t ___mLastLoadFriendsStatus_8;
	// UnityEngine.AndroidJavaClass GooglePlayGames.Android.AndroidClient::mGamesClass
	AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * ___mGamesClass_9;
	// UnityEngine.AndroidJavaObject GooglePlayGames.Android.AndroidClient::mFriendsResolutionException
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___mFriendsResolutionException_11;
	// System.Int32 GooglePlayGames.Android.AndroidClient::mLeaderboardMaxResults
	int32_t ___mLeaderboardMaxResults_12;
	// System.Int32 GooglePlayGames.Android.AndroidClient::mFriendsMaxResults
	int32_t ___mFriendsMaxResults_13;

public:
	inline static int32_t get_offset_of_GameServicesLock_0() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5, ___GameServicesLock_0)); }
	inline RuntimeObject * get_GameServicesLock_0() const { return ___GameServicesLock_0; }
	inline RuntimeObject ** get_address_of_GameServicesLock_0() { return &___GameServicesLock_0; }
	inline void set_GameServicesLock_0(RuntimeObject * value)
	{
		___GameServicesLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameServicesLock_0), (void*)value);
	}

	inline static int32_t get_offset_of_AuthStateLock_1() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5, ___AuthStateLock_1)); }
	inline RuntimeObject * get_AuthStateLock_1() const { return ___AuthStateLock_1; }
	inline RuntimeObject ** get_address_of_AuthStateLock_1() { return &___AuthStateLock_1; }
	inline void set_AuthStateLock_1(RuntimeObject * value)
	{
		___AuthStateLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AuthStateLock_1), (void*)value);
	}

	inline static int32_t get_offset_of_mSavedGameClient_3() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5, ___mSavedGameClient_3)); }
	inline RuntimeObject* get_mSavedGameClient_3() const { return ___mSavedGameClient_3; }
	inline RuntimeObject** get_address_of_mSavedGameClient_3() { return &___mSavedGameClient_3; }
	inline void set_mSavedGameClient_3(RuntimeObject* value)
	{
		___mSavedGameClient_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSavedGameClient_3), (void*)value);
	}

	inline static int32_t get_offset_of_mEventsClient_4() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5, ___mEventsClient_4)); }
	inline RuntimeObject* get_mEventsClient_4() const { return ___mEventsClient_4; }
	inline RuntimeObject** get_address_of_mEventsClient_4() { return &___mEventsClient_4; }
	inline void set_mEventsClient_4(RuntimeObject* value)
	{
		___mEventsClient_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEventsClient_4), (void*)value);
	}

	inline static int32_t get_offset_of_mUser_5() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5, ___mUser_5)); }
	inline Player_tEC085BE46190556937E5B56A0C781F2EA63AD330 * get_mUser_5() const { return ___mUser_5; }
	inline Player_tEC085BE46190556937E5B56A0C781F2EA63AD330 ** get_address_of_mUser_5() { return &___mUser_5; }
	inline void set_mUser_5(Player_tEC085BE46190556937E5B56A0C781F2EA63AD330 * value)
	{
		___mUser_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUser_5), (void*)value);
	}

	inline static int32_t get_offset_of_mAuthState_6() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5, ___mAuthState_6)); }
	inline int32_t get_mAuthState_6() const { return ___mAuthState_6; }
	inline int32_t* get_address_of_mAuthState_6() { return &___mAuthState_6; }
	inline void set_mAuthState_6(int32_t value)
	{
		___mAuthState_6 = value;
	}

	inline static int32_t get_offset_of_mFriends_7() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5, ___mFriends_7)); }
	inline IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* get_mFriends_7() const { return ___mFriends_7; }
	inline IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0** get_address_of_mFriends_7() { return &___mFriends_7; }
	inline void set_mFriends_7(IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* value)
	{
		___mFriends_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFriends_7), (void*)value);
	}

	inline static int32_t get_offset_of_mLastLoadFriendsStatus_8() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5, ___mLastLoadFriendsStatus_8)); }
	inline int32_t get_mLastLoadFriendsStatus_8() const { return ___mLastLoadFriendsStatus_8; }
	inline int32_t* get_address_of_mLastLoadFriendsStatus_8() { return &___mLastLoadFriendsStatus_8; }
	inline void set_mLastLoadFriendsStatus_8(int32_t value)
	{
		___mLastLoadFriendsStatus_8 = value;
	}

	inline static int32_t get_offset_of_mGamesClass_9() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5, ___mGamesClass_9)); }
	inline AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * get_mGamesClass_9() const { return ___mGamesClass_9; }
	inline AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE ** get_address_of_mGamesClass_9() { return &___mGamesClass_9; }
	inline void set_mGamesClass_9(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * value)
	{
		___mGamesClass_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGamesClass_9), (void*)value);
	}

	inline static int32_t get_offset_of_mFriendsResolutionException_11() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5, ___mFriendsResolutionException_11)); }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * get_mFriendsResolutionException_11() const { return ___mFriendsResolutionException_11; }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D ** get_address_of_mFriendsResolutionException_11() { return &___mFriendsResolutionException_11; }
	inline void set_mFriendsResolutionException_11(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * value)
	{
		___mFriendsResolutionException_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFriendsResolutionException_11), (void*)value);
	}

	inline static int32_t get_offset_of_mLeaderboardMaxResults_12() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5, ___mLeaderboardMaxResults_12)); }
	inline int32_t get_mLeaderboardMaxResults_12() const { return ___mLeaderboardMaxResults_12; }
	inline int32_t* get_address_of_mLeaderboardMaxResults_12() { return &___mLeaderboardMaxResults_12; }
	inline void set_mLeaderboardMaxResults_12(int32_t value)
	{
		___mLeaderboardMaxResults_12 = value;
	}

	inline static int32_t get_offset_of_mFriendsMaxResults_13() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5, ___mFriendsMaxResults_13)); }
	inline int32_t get_mFriendsMaxResults_13() const { return ___mFriendsMaxResults_13; }
	inline int32_t* get_address_of_mFriendsMaxResults_13() { return &___mFriendsMaxResults_13; }
	inline void set_mFriendsMaxResults_13(int32_t value)
	{
		___mFriendsMaxResults_13 = value;
	}
};

struct AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5_StaticFields
{
public:
	// System.String GooglePlayGames.Android.AndroidClient::PlayGamesSdkClassName
	String_t* ___PlayGamesSdkClassName_2;
	// System.String GooglePlayGames.Android.AndroidClient::TasksClassName
	String_t* ___TasksClassName_10;

public:
	inline static int32_t get_offset_of_PlayGamesSdkClassName_2() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5_StaticFields, ___PlayGamesSdkClassName_2)); }
	inline String_t* get_PlayGamesSdkClassName_2() const { return ___PlayGamesSdkClassName_2; }
	inline String_t** get_address_of_PlayGamesSdkClassName_2() { return &___PlayGamesSdkClassName_2; }
	inline void set_PlayGamesSdkClassName_2(String_t* value)
	{
		___PlayGamesSdkClassName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayGamesSdkClassName_2), (void*)value);
	}

	inline static int32_t get_offset_of_TasksClassName_10() { return static_cast<int32_t>(offsetof(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5_StaticFields, ___TasksClassName_10)); }
	inline String_t* get_TasksClassName_10() const { return ___TasksClassName_10; }
	inline String_t** get_address_of_TasksClassName_10() { return &___TasksClassName_10; }
	inline void set_TasksClassName_10(String_t* value)
	{
		___TasksClassName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TasksClassName_10), (void*)value);
	}
};


// GooglePlayGames.BasicApi.LeaderboardScoreData
struct  LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mId
	String_t* ___mId_0;
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::mStatus
	int32_t ___mStatus_1;
	// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::mApproxCount
	uint64_t ___mApproxCount_2;
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mTitle
	String_t* ___mTitle_3;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::mPlayerScore
	RuntimeObject* ___mPlayerScore_4;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mPrevPage
	ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * ___mPrevPage_5;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mNextPage
	ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * ___mNextPage_6;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.BasicApi.LeaderboardScoreData::mScores
	List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * ___mScores_7;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mStatus_1() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B, ___mStatus_1)); }
	inline int32_t get_mStatus_1() const { return ___mStatus_1; }
	inline int32_t* get_address_of_mStatus_1() { return &___mStatus_1; }
	inline void set_mStatus_1(int32_t value)
	{
		___mStatus_1 = value;
	}

	inline static int32_t get_offset_of_mApproxCount_2() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B, ___mApproxCount_2)); }
	inline uint64_t get_mApproxCount_2() const { return ___mApproxCount_2; }
	inline uint64_t* get_address_of_mApproxCount_2() { return &___mApproxCount_2; }
	inline void set_mApproxCount_2(uint64_t value)
	{
		___mApproxCount_2 = value;
	}

	inline static int32_t get_offset_of_mTitle_3() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B, ___mTitle_3)); }
	inline String_t* get_mTitle_3() const { return ___mTitle_3; }
	inline String_t** get_address_of_mTitle_3() { return &___mTitle_3; }
	inline void set_mTitle_3(String_t* value)
	{
		___mTitle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_3), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerScore_4() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B, ___mPlayerScore_4)); }
	inline RuntimeObject* get_mPlayerScore_4() const { return ___mPlayerScore_4; }
	inline RuntimeObject** get_address_of_mPlayerScore_4() { return &___mPlayerScore_4; }
	inline void set_mPlayerScore_4(RuntimeObject* value)
	{
		___mPlayerScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_mPrevPage_5() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B, ___mPrevPage_5)); }
	inline ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * get_mPrevPage_5() const { return ___mPrevPage_5; }
	inline ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF ** get_address_of_mPrevPage_5() { return &___mPrevPage_5; }
	inline void set_mPrevPage_5(ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * value)
	{
		___mPrevPage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPrevPage_5), (void*)value);
	}

	inline static int32_t get_offset_of_mNextPage_6() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B, ___mNextPage_6)); }
	inline ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * get_mNextPage_6() const { return ___mNextPage_6; }
	inline ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF ** get_address_of_mNextPage_6() { return &___mNextPage_6; }
	inline void set_mNextPage_6(ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * value)
	{
		___mNextPage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNextPage_6), (void*)value);
	}

	inline static int32_t get_offset_of_mScores_7() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B, ___mScores_7)); }
	inline List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * get_mScores_7() const { return ___mScores_7; }
	inline List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 ** get_address_of_mScores_7() { return &___mScores_7; }
	inline void set_mScores_7(List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * value)
	{
		___mScores_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScores_7), (void*)value);
	}
};


// GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct  AdvertisingResult_tFD1C3FF4AC74973DCE013C98B203A74112446CF8 
{
public:
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mStatus
	int32_t ___mStatus_0;
	// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mLocalEndpointName
	String_t* ___mLocalEndpointName_1;

public:
	inline static int32_t get_offset_of_mStatus_0() { return static_cast<int32_t>(offsetof(AdvertisingResult_tFD1C3FF4AC74973DCE013C98B203A74112446CF8, ___mStatus_0)); }
	inline int32_t get_mStatus_0() const { return ___mStatus_0; }
	inline int32_t* get_address_of_mStatus_0() { return &___mStatus_0; }
	inline void set_mStatus_0(int32_t value)
	{
		___mStatus_0 = value;
	}

	inline static int32_t get_offset_of_mLocalEndpointName_1() { return static_cast<int32_t>(offsetof(AdvertisingResult_tFD1C3FF4AC74973DCE013C98B203A74112446CF8, ___mLocalEndpointName_1)); }
	inline String_t* get_mLocalEndpointName_1() const { return ___mLocalEndpointName_1; }
	inline String_t** get_address_of_mLocalEndpointName_1() { return &___mLocalEndpointName_1; }
	inline void set_mLocalEndpointName_1(String_t* value)
	{
		___mLocalEndpointName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalEndpointName_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_tFD1C3FF4AC74973DCE013C98B203A74112446CF8_marshaled_pinvoke
{
	int32_t ___mStatus_0;
	char* ___mLocalEndpointName_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_tFD1C3FF4AC74973DCE013C98B203A74112446CF8_marshaled_com
{
	int32_t ___mStatus_0;
	Il2CppChar* ___mLocalEndpointName_1;
};

// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct  ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A 
{
public:
	// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mLocalClientId
	int64_t ___mLocalClientId_1;
	// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mRemoteEndpointId
	String_t* ___mRemoteEndpointId_2;
	// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mResponseStatus
	int32_t ___mResponseStatus_3;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mPayload
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___mPayload_4;

public:
	inline static int32_t get_offset_of_mLocalClientId_1() { return static_cast<int32_t>(offsetof(ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A, ___mLocalClientId_1)); }
	inline int64_t get_mLocalClientId_1() const { return ___mLocalClientId_1; }
	inline int64_t* get_address_of_mLocalClientId_1() { return &___mLocalClientId_1; }
	inline void set_mLocalClientId_1(int64_t value)
	{
		___mLocalClientId_1 = value;
	}

	inline static int32_t get_offset_of_mRemoteEndpointId_2() { return static_cast<int32_t>(offsetof(ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A, ___mRemoteEndpointId_2)); }
	inline String_t* get_mRemoteEndpointId_2() const { return ___mRemoteEndpointId_2; }
	inline String_t** get_address_of_mRemoteEndpointId_2() { return &___mRemoteEndpointId_2; }
	inline void set_mRemoteEndpointId_2(String_t* value)
	{
		___mRemoteEndpointId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRemoteEndpointId_2), (void*)value);
	}

	inline static int32_t get_offset_of_mResponseStatus_3() { return static_cast<int32_t>(offsetof(ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A, ___mResponseStatus_3)); }
	inline int32_t get_mResponseStatus_3() const { return ___mResponseStatus_3; }
	inline int32_t* get_address_of_mResponseStatus_3() { return &___mResponseStatus_3; }
	inline void set_mResponseStatus_3(int32_t value)
	{
		___mResponseStatus_3 = value;
	}

	inline static int32_t get_offset_of_mPayload_4() { return static_cast<int32_t>(offsetof(ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A, ___mPayload_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_mPayload_4() const { return ___mPayload_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_mPayload_4() { return &___mPayload_4; }
	inline void set_mPayload_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___mPayload_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPayload_4), (void*)value);
	}
};

struct ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A_StaticFields
{
public:
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EmptyPayload
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___EmptyPayload_0;

public:
	inline static int32_t get_offset_of_EmptyPayload_0() { return static_cast<int32_t>(offsetof(ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A_StaticFields, ___EmptyPayload_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_EmptyPayload_0() const { return ___EmptyPayload_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_EmptyPayload_0() { return &___EmptyPayload_0; }
	inline void set_EmptyPayload_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___EmptyPayload_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyPayload_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A_marshaled_pinvoke
{
	int64_t ___mLocalClientId_1;
	char* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A_marshaled_com
{
	int64_t ___mLocalClientId_1;
	Il2CppChar* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};

// GooglePlayGames.BasicApi.Player
struct  Player_tEC085BE46190556937E5B56A0C781F2EA63AD330  : public PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F
{
public:

public:
};


// GooglePlayGames.BasicApi.PlayerProfile
struct  PlayerProfile_tA0DF9F1A43E6DD0142622D5A3CEE428386B1D356  : public PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F
{
public:

public:
};


// GooglePlayGames.BasicApi.ScorePageToken
struct  ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.ScorePageToken::mId
	String_t* ___mId_0;
	// System.Object GooglePlayGames.BasicApi.ScorePageToken::mInternalObject
	RuntimeObject * ___mInternalObject_1;
	// GooglePlayGames.BasicApi.LeaderboardCollection GooglePlayGames.BasicApi.ScorePageToken::mCollection
	int32_t ___mCollection_2;
	// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::mTimespan
	int32_t ___mTimespan_3;
	// GooglePlayGames.BasicApi.ScorePageDirection GooglePlayGames.BasicApi.ScorePageToken::mDirection
	int32_t ___mDirection_4;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mInternalObject_1() { return static_cast<int32_t>(offsetof(ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF, ___mInternalObject_1)); }
	inline RuntimeObject * get_mInternalObject_1() const { return ___mInternalObject_1; }
	inline RuntimeObject ** get_address_of_mInternalObject_1() { return &___mInternalObject_1; }
	inline void set_mInternalObject_1(RuntimeObject * value)
	{
		___mInternalObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInternalObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCollection_2() { return static_cast<int32_t>(offsetof(ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF, ___mCollection_2)); }
	inline int32_t get_mCollection_2() const { return ___mCollection_2; }
	inline int32_t* get_address_of_mCollection_2() { return &___mCollection_2; }
	inline void set_mCollection_2(int32_t value)
	{
		___mCollection_2 = value;
	}

	inline static int32_t get_offset_of_mTimespan_3() { return static_cast<int32_t>(offsetof(ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF, ___mTimespan_3)); }
	inline int32_t get_mTimespan_3() const { return ___mTimespan_3; }
	inline int32_t* get_address_of_mTimespan_3() { return &___mTimespan_3; }
	inline void set_mTimespan_3(int32_t value)
	{
		___mTimespan_3 = value;
	}

	inline static int32_t get_offset_of_mDirection_4() { return static_cast<int32_t>(offsetof(ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF, ___mDirection_4)); }
	inline int32_t get_mDirection_4() const { return ___mDirection_4; }
	inline int32_t* get_address_of_mDirection_4() { return &___mDirection_4; }
	inline void set_mDirection_4(int32_t value)
	{
		___mDirection_4 = value;
	}
};


// GooglePlayGames.PlayGamesLeaderboard
struct  PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesLeaderboard::mId
	String_t* ___mId_0;
	// UnityEngine.SocialPlatforms.UserScope GooglePlayGames.PlayGamesLeaderboard::mUserScope
	int32_t ___mUserScope_1;
	// UnityEngine.SocialPlatforms.Range GooglePlayGames.PlayGamesLeaderboard::mRange
	Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  ___mRange_2;
	// UnityEngine.SocialPlatforms.TimeScope GooglePlayGames.PlayGamesLeaderboard::mTimeScope
	int32_t ___mTimeScope_3;
	// System.String[] GooglePlayGames.PlayGamesLeaderboard::mFilteredUserIds
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___mFilteredUserIds_4;
	// System.Boolean GooglePlayGames.PlayGamesLeaderboard::mLoading
	bool ___mLoading_5;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.PlayGamesLeaderboard::mLocalUserScore
	RuntimeObject* ___mLocalUserScore_6;
	// System.UInt32 GooglePlayGames.PlayGamesLeaderboard::mMaxRange
	uint32_t ___mMaxRange_7;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.PlayGamesLeaderboard::mScoreList
	List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * ___mScoreList_8;
	// System.String GooglePlayGames.PlayGamesLeaderboard::mTitle
	String_t* ___mTitle_9;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mUserScope_1() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A, ___mUserScope_1)); }
	inline int32_t get_mUserScope_1() const { return ___mUserScope_1; }
	inline int32_t* get_address_of_mUserScope_1() { return &___mUserScope_1; }
	inline void set_mUserScope_1(int32_t value)
	{
		___mUserScope_1 = value;
	}

	inline static int32_t get_offset_of_mRange_2() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A, ___mRange_2)); }
	inline Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  get_mRange_2() const { return ___mRange_2; }
	inline Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC * get_address_of_mRange_2() { return &___mRange_2; }
	inline void set_mRange_2(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  value)
	{
		___mRange_2 = value;
	}

	inline static int32_t get_offset_of_mTimeScope_3() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A, ___mTimeScope_3)); }
	inline int32_t get_mTimeScope_3() const { return ___mTimeScope_3; }
	inline int32_t* get_address_of_mTimeScope_3() { return &___mTimeScope_3; }
	inline void set_mTimeScope_3(int32_t value)
	{
		___mTimeScope_3 = value;
	}

	inline static int32_t get_offset_of_mFilteredUserIds_4() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A, ___mFilteredUserIds_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_mFilteredUserIds_4() const { return ___mFilteredUserIds_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_mFilteredUserIds_4() { return &___mFilteredUserIds_4; }
	inline void set_mFilteredUserIds_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___mFilteredUserIds_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFilteredUserIds_4), (void*)value);
	}

	inline static int32_t get_offset_of_mLoading_5() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A, ___mLoading_5)); }
	inline bool get_mLoading_5() const { return ___mLoading_5; }
	inline bool* get_address_of_mLoading_5() { return &___mLoading_5; }
	inline void set_mLoading_5(bool value)
	{
		___mLoading_5 = value;
	}

	inline static int32_t get_offset_of_mLocalUserScore_6() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A, ___mLocalUserScore_6)); }
	inline RuntimeObject* get_mLocalUserScore_6() const { return ___mLocalUserScore_6; }
	inline RuntimeObject** get_address_of_mLocalUserScore_6() { return &___mLocalUserScore_6; }
	inline void set_mLocalUserScore_6(RuntimeObject* value)
	{
		___mLocalUserScore_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalUserScore_6), (void*)value);
	}

	inline static int32_t get_offset_of_mMaxRange_7() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A, ___mMaxRange_7)); }
	inline uint32_t get_mMaxRange_7() const { return ___mMaxRange_7; }
	inline uint32_t* get_address_of_mMaxRange_7() { return &___mMaxRange_7; }
	inline void set_mMaxRange_7(uint32_t value)
	{
		___mMaxRange_7 = value;
	}

	inline static int32_t get_offset_of_mScoreList_8() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A, ___mScoreList_8)); }
	inline List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * get_mScoreList_8() const { return ___mScoreList_8; }
	inline List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 ** get_address_of_mScoreList_8() { return &___mScoreList_8; }
	inline void set_mScoreList_8(List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * value)
	{
		___mScoreList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScoreList_8), (void*)value);
	}

	inline static int32_t get_offset_of_mTitle_9() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A, ___mTitle_9)); }
	inline String_t* get_mTitle_9() const { return ___mTitle_9; }
	inline String_t** get_address_of_mTitle_9() { return &___mTitle_9; }
	inline void set_mTitle_9(String_t* value)
	{
		___mTitle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_9), (void*)value);
	}
};


// GooglePlayGames.PlayGamesLocalUser
struct  PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005  : public PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesLocalUser::mPlatform
	PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * ___mPlatform_6;
	// GooglePlayGames.BasicApi.PlayerStats GooglePlayGames.PlayGamesLocalUser::mStats
	PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * ___mStats_7;

public:
	inline static int32_t get_offset_of_mPlatform_6() { return static_cast<int32_t>(offsetof(PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005, ___mPlatform_6)); }
	inline PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * get_mPlatform_6() const { return ___mPlatform_6; }
	inline PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D ** get_address_of_mPlatform_6() { return &___mPlatform_6; }
	inline void set_mPlatform_6(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * value)
	{
		___mPlatform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlatform_6), (void*)value);
	}

	inline static int32_t get_offset_of_mStats_7() { return static_cast<int32_t>(offsetof(PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005, ___mStats_7)); }
	inline PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * get_mStats_7() const { return ___mStats_7; }
	inline PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA ** get_address_of_mStats_7() { return &___mStats_7; }
	inline void set_mStats_7(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * value)
	{
		___mStats_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mStats_7), (void*)value);
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

// System.Nullable`1<System.TimeSpan>
struct  Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 
{
public:
	// T System.Nullable`1::value
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80, ___value_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_value_0() const { return ___value_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
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


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct  ConflictCallback_tA93142401005301ACAEAD0A56454A0CA9AAD7A5C  : public MulticastDelegate_t
{
public:

public:
};


// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct  SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPngCoverImage
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPlayedTime
	Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewPngCoverImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88, ___mNewPlayedTime_4)); }
	inline Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  ___mNewPlayedTime_4;
};

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct  Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPngCoverImage
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPlayedTime
	Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewPngCoverImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349, ___mNewPlayedTime_4)); }
	inline Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  ___mNewPlayedTime_4;
};

// GooglePlayGames.ReportProgress
struct  ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>
struct  Action_1_t40C6281DD9B38B590C5280473351A8E16A632837  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>
struct  Action_1_t8EE1F0EF0F6740B5EB111E67F42584240D45AC60  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct  Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>
struct  Action_1_tCF450FEFD3D9E1C5274C1C003E30D3F9ADC214E3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct  Action_1_t64A694A91CF48AF6DAA61B8200255AB7B9CCD0F9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct  Action_1_t8C34D5D44EE2A3197926F3A14FC0991FC91E76B2  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct  Action_1_tB2CE7529CCFA223AAD9AEA138F9B78EDA6CD10FE  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>
struct  Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct  Action_1_tDE6242754045E413334AD30795D5F15C91E26560  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct  Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct  Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct  Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct  Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct  Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct  Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct  Action_1_tE5C7AC57BC589DA8234AF9ECC8F8B62ACEA5F826  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct  Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.String>
struct  Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// GooglePlayGames.OurUtils.NearbyHelperObject
struct  NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields
{
public:
	// GooglePlayGames.OurUtils.NearbyHelperObject GooglePlayGames.OurUtils.NearbyHelperObject::instance
	NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * ___instance_4;
	// System.Double GooglePlayGames.OurUtils.NearbyHelperObject::mAdvertisingRemaining
	double ___mAdvertisingRemaining_5;
	// System.Double GooglePlayGames.OurUtils.NearbyHelperObject::mDiscoveryRemaining
	double ___mDiscoveryRemaining_6;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient GooglePlayGames.OurUtils.NearbyHelperObject::mClient
	RuntimeObject* ___mClient_7;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields, ___instance_4)); }
	inline NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * get_instance_4() const { return ___instance_4; }
	inline NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_mAdvertisingRemaining_5() { return static_cast<int32_t>(offsetof(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields, ___mAdvertisingRemaining_5)); }
	inline double get_mAdvertisingRemaining_5() const { return ___mAdvertisingRemaining_5; }
	inline double* get_address_of_mAdvertisingRemaining_5() { return &___mAdvertisingRemaining_5; }
	inline void set_mAdvertisingRemaining_5(double value)
	{
		___mAdvertisingRemaining_5 = value;
	}

	inline static int32_t get_offset_of_mDiscoveryRemaining_6() { return static_cast<int32_t>(offsetof(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields, ___mDiscoveryRemaining_6)); }
	inline double get_mDiscoveryRemaining_6() const { return ___mDiscoveryRemaining_6; }
	inline double* get_address_of_mDiscoveryRemaining_6() { return &___mDiscoveryRemaining_6; }
	inline void set_mDiscoveryRemaining_6(double value)
	{
		___mDiscoveryRemaining_6 = value;
	}

	inline static int32_t get_offset_of_mClient_7() { return static_cast<int32_t>(offsetof(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields, ___mClient_7)); }
	inline RuntimeObject* get_mClient_7() const { return ___mClient_7; }
	inline RuntimeObject** get_address_of_mClient_7() { return &___mClient_7; }
	inline void set_mClient_7(RuntimeObject* value)
	{
		___mClient_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClient_7), (void*)value);
	}
};


// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct  PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::localQueue
	List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * ___localQueue_7;

public:
	inline static int32_t get_offset_of_localQueue_7() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403, ___localQueue_7)); }
	inline List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * get_localQueue_7() const { return ___localQueue_7; }
	inline List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE ** get_address_of_localQueue_7() { return &___localQueue_7; }
	inline void set_localQueue_7(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * value)
	{
		___localQueue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localQueue_7), (void*)value);
	}
};

struct PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields
{
public:
	// GooglePlayGames.OurUtils.PlayGamesHelperObject GooglePlayGames.OurUtils.PlayGamesHelperObject::instance
	PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * ___instance_4;
	// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::sIsDummy
	bool ___sIsDummy_5;
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueue
	List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * ___sQueue_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueueEmpty
	bool ___sQueueEmpty_8;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sPauseCallbackList
	List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * ___sPauseCallbackList_9;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sFocusCallbackList
	List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * ___sFocusCallbackList_10;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields, ___instance_4)); }
	inline PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * get_instance_4() const { return ___instance_4; }
	inline PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_sIsDummy_5() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields, ___sIsDummy_5)); }
	inline bool get_sIsDummy_5() const { return ___sIsDummy_5; }
	inline bool* get_address_of_sIsDummy_5() { return &___sIsDummy_5; }
	inline void set_sIsDummy_5(bool value)
	{
		___sIsDummy_5 = value;
	}

	inline static int32_t get_offset_of_sQueue_6() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields, ___sQueue_6)); }
	inline List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * get_sQueue_6() const { return ___sQueue_6; }
	inline List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE ** get_address_of_sQueue_6() { return &___sQueue_6; }
	inline void set_sQueue_6(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * value)
	{
		___sQueue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sQueue_6), (void*)value);
	}

	inline static int32_t get_offset_of_sQueueEmpty_8() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields, ___sQueueEmpty_8)); }
	inline bool get_sQueueEmpty_8() const { return ___sQueueEmpty_8; }
	inline bool* get_address_of_sQueueEmpty_8() { return &___sQueueEmpty_8; }
	inline void set_sQueueEmpty_8(bool value)
	{
		___sQueueEmpty_8 = value;
	}

	inline static int32_t get_offset_of_sPauseCallbackList_9() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields, ___sPauseCallbackList_9)); }
	inline List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * get_sPauseCallbackList_9() const { return ___sPauseCallbackList_9; }
	inline List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 ** get_address_of_sPauseCallbackList_9() { return &___sPauseCallbackList_9; }
	inline void set_sPauseCallbackList_9(List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * value)
	{
		___sPauseCallbackList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sPauseCallbackList_9), (void*)value);
	}

	inline static int32_t get_offset_of_sFocusCallbackList_10() { return static_cast<int32_t>(offsetof(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields, ___sFocusCallbackList_10)); }
	inline List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * get_sFocusCallbackList_10() const { return ___sFocusCallbackList_10; }
	inline List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 ** get_address_of_sFocusCallbackList_10() { return &___sFocusCallbackList_10; }
	inline void set_sFocusCallbackList_10(List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * value)
	{
		___sFocusCallbackList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sFocusCallbackList_10), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GooglePlayGames.PlayGamesScore[]
struct PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * m_Items[1];

public:
	inline PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * m_Items[1];

public:
	inline Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2C82F1BCB5C7B15AF13397B2CDDF286AEE03E7F1_gshared (Action_1_t64A694A91CF48AF6DAA61B8200255AB7B9CCD0F9 * __this, AdvertisingResult_tFD1C3FF4AC74973DCE013C98B203A74112446CF8  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mD7F582B9C45B6F457EE205418422C0791286E02E_gshared (Action_1_tB2CE7529CCFA223AAD9AEA138F9B78EDA6CD10FE * __this, ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A  ___obj0, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Misc_CheckNotNull_TisRuntimeObject_m0E4FB83743BC405BFAFC9923D7572730D14CC6E0_gshared (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m619F23350E60DA452BA9F320E9EA38E1D933663D_gshared_inline (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m99DC0DFF0CCF30E4DFFED5F8F7ABE8721B73B56D_gshared (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.TimeSpan>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  Nullable_1_get_Value_mBFFFA1BA161F58A43F8D53FFD139F699DDC9D3DB_gshared (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mDA42018F7419EC3301EBC8FDB8EB6B3016D88209_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_m38064E69DD787BA971B0757788FD11E7239A03B7_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m54E18E9C1ECE23383EF0EA1E98330235DEAD7B39_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mD0D31654D450BEB7CFFA7B079FD2EB5946C2B8E8_gshared (Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m30B0896D4218D5D0270AA0DCF631CA92689CB290_gshared (Action_2_t09C1E11292657FC36043DAE90BD5849628F3D9FC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m96BB69F8BF7AB1DE6EFF67A2A80BA2B0FA311F78_gshared (Action_2_t09C1E11292657FC36043DAE90BD5849628F3D9FC * __this, int32_t ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m09D8ADADD1EA5CCDE1F95447CAFD680DFE93695B_gshared (Action_2_t4E18081213FC1908A4742B1D7ADF71081B45A2BF * __this, bool ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::InvokeCallbackOnGameThread<System.Object>(System.Action`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_InvokeCallbackOnGameThread_TisRuntimeObject_m13217205E7B39BFB98C0219EDA8DE14B703A1742_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___callback0, RuntimeObject * ___data1, const RuntimeMethod* method);
// System.Action`1<T> GooglePlayGames.PlayGamesPlatform::ToOnGameThread<System.Boolean>(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * PlayGamesPlatform_ToOnGameThread_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mBF8371C6A17EFD3ACAE7EDE99306F66A1A1B38E7_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___toConvert0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m8672DDC58300CA227FC37981067B766C9879344B_gshared (Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983 * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::InvokeCallbackOnGameThread<System.Int32Enum>(System.Action`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_InvokeCallbackOnGameThread_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m9D4942357FD027896DBBF6F2572392088B03D875_gshared (Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983 * ___callback0, int32_t ___data1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);

// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB (String_t* ___msg0, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_m2A0F93BA83E0FFFC9C11E692ABC7072133363BE7 (AdvertisingResult_tFD1C3FF4AC74973DCE013C98B203A74112446CF8 * __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::Invoke(!0)
inline void Action_1_Invoke_m2C82F1BCB5C7B15AF13397B2CDDF286AEE03E7F1 (Action_1_t64A694A91CF48AF6DAA61B8200255AB7B9CCD0F9 * __this, AdvertisingResult_tFD1C3FF4AC74973DCE013C98B203A74112446CF8  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t64A694A91CF48AF6DAA61B8200255AB7B9CCD0F9 *, AdvertisingResult_tFD1C3FF4AC74973DCE013C98B203A74112446CF8 , const RuntimeMethod*))Action_1_Invoke_m2C82F1BCB5C7B15AF13397B2CDDF286AEE03E7F1_gshared)(__this, ___obj0, method);
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A  ConnectionResponse_Rejected_mD809530B778FB9D22C203CEBCA1BEE13E5913E20 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>::Invoke(!0)
inline void Action_1_Invoke_mD7F582B9C45B6F457EE205418422C0791286E02E (Action_1_tB2CE7529CCFA223AAD9AEA138F9B78EDA6CD10FE * __this, ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB2CE7529CCFA223AAD9AEA138F9B78EDA6CD10FE *, ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A , const RuntimeMethod*))Action_1_Invoke_mD7F582B9C45B6F457EE205418422C0791286E02E_gshared)(__this, ___obj0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.String>(T)
inline String_t* Misc_CheckNotNull_TisString_t_mBF7D95230A17BD67598E68FF9EB8B16D51285F6E (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m0E4FB83743BC405BFAFC9923D7572730D14CC6E0_gshared)(___value0, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m17F577E0210FBCCE6A1CDA6F91CBCE636274B1C3 (EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_m5A16BD15270CB5A7C30511C3B0EF32DE2A945ABE_inline (EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_mB7429E110B4A9455FD3990601EA857D52B2502AD_inline (EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_m30A26EC3190D448EE1B60032DFFD57AF646288B5_inline (EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * __this, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>>(T)
inline Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * Misc_CheckNotNull_TisAction_1_tDE6242754045E413334AD30795D5F15C91E26560_m757427E0860DFA4D6FA210321FE76CCFA96572AD (Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * ___value0, const RuntimeMethod* method)
{
	return ((  Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * (*) (Action_1_tDE6242754045E413334AD30795D5F15C91E26560 *, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m0E4FB83743BC405BFAFC9923D7572730D14CC6E0_gshared)(___value0, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_mFDA90374757A91E337CC7777672AE02A19B09CC3 (NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 * __this, Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * ___callback0, int64_t ___localClientId1, const RuntimeMethod* method);
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_mDF7DF1320B4FEF3BB68A5F184B251EDF19B9633D_inline (NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 * __this, const RuntimeMethod* method);
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * NearbyConnectionConfiguration_get_InitializationCallback_m238EE0F34561305733D7CCA6DF25C89FB6EBFDB6_inline (NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_mBC5DC79E15562EBA605FCC9872116A801391D286 (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_m58838C94FC3EECCAB247B090632CCBC8A39BA08B (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, bool ___isFriend3, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfPurchases()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfPurchases_m2786DD8D09E724CE36E5C7140AD6941F310C260B_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method);
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_AvgSessionLength()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlayerStats_get_AvgSessionLength_m3D1026BBBE289920FC63D66E25493D4E41B6493F_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_DaysSinceLastPlayed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PlayerStats_get_DaysSinceLastPlayed_mD0AD42400A02E5F9AF7663233E691E0534E81FE0_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfSessions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfSessions_mDF118213EB69370DE9F6DC3CF17D234F3D09752B_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method);
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SessPercentile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlayerStats_get_SessPercentile_m101508C74B3BD4C7A1FD9D172851AADA57D6E843_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method);
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendPercentile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlayerStats_get_SpendPercentile_m8AF85C40471ED614A74C4CD6B7AFA0884E756AEA_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method);
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_ChurnProbability()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlayerStats_get_ChurnProbability_m9694B5A208DB5C2FD12A817308638C77D5E9E507_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method);
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_HighSpenderProbability()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlayerStats_get_HighSpenderProbability_m10487ADE09B113FBB39257A7F975F8DE59028016_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method);
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_TotalSpendNext28Days()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlayerStats_get_TotalSpendNext28Days_m70368E16B96A148A2D3AE30976EE741A0F0CE5DE_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_m376BFB7E47F7CF878DEB4C7BB3F5AD01A638ECF1 (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  ___builder0, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mF77E5D0BB4D0B8AC1D267A23BD823B3F0F0539D8_inline (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_mC960B1D201FAA84C12C6BF1B420348F471B03347_inline (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m40232FA73FE3B441A77A1ECD98DAA784ADA619C2_inline (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method);
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m9581F7F39E52C1CB947A862A6004C7E5B67031E5_inline (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_m619F23350E60DA452BA9F320E9EA38E1D933663D_inline (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 *, const RuntimeMethod*))Nullable_1_get_HasValue_m619F23350E60DA452BA9F320E9EA38E1D933663D_gshared_inline)(__this, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m64C30F7658FADC6997383E92C290D93209118006 (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  SavedGameMetadataUpdate_get_UpdatedPlayedTime_m5DAE25C34FA3EB0FFEB797C9BB40E5685B5DE81C_inline (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  Builder_WithUpdatedDescription_m72B2D15D49A273E16DE3D344D462AE44125317AF (Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 * __this, String_t* ___description0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  Builder_WithUpdatedPngCoverImage_m7A34E933878860E461203C7DF390AEB1377F17ED (Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___newPngCoverImage0, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m48B00B27D485CC556C10A5119BC11E1A1E0FE363 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
inline void Nullable_1__ctor_m99DC0DFF0CCF30E4DFFED5F8F7ABE8721B73B56D (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))Nullable_1__ctor_m99DC0DFF0CCF30E4DFFED5F8F7ABE8721B73B56D_gshared)(__this, ___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  Builder_WithUpdatedPlayedTime_m8BC1639B83FF60BC95A316148241A44224641CBB (Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___newPlayedTime0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88  Builder_Build_mA2EB5CA8B3C55CB227B9C647F03A1F50A40CECF7 (Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.String GooglePlayGames.GameInfo::ToEscapedToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameInfo_ToEscapedToken_mAB346F25B433299A9CF0AE2596A0236CDA3DA364 (String_t* ___token0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient__ctor_mA556C6E4CDB61AF5D90BF9E631052928C7BDE9DF (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>::Invoke(!0)
inline void Action_1_Invoke_m81E12D38E21332B07DD65B0DEB0D1AEE6A14C2FC (Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E *, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNearbyConnectionClient__ctor_m0B8C1AAF1FAD7F15A6F62D5867DF61F131FCA211 (AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m8CDAAD60D031BCBA75BF0F1229C424E470BC4DE4 (U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunOnGameThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunOnGameThread_m47E2A7C8D760E4C0C27A0A5505F0E9AB0B7818A5 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mC60B9055270F6A5317A04FDA24325BCBBCE6CFC6 (U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m2350BB82DF808A8AF971A4B60DD9119CEE5322CC (U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m144C7A11DEEC6E86A6FCB65FA763C4FF89421A84 (U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_ToLogMessage_m78ABC91BF809D11B0AFBBF8C6C1DCB08A98384C4 (String_t* ___prefix0, String_t* ___logType1, String_t* ___msg2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<GooglePlayGames.OurUtils.NearbyHelperObject>()
inline NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * GameObject_AddComponent_TisNearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_mD9C39447D72A84DA1D42536B6A1532931A61D971 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject__ctor_mDA7CC825A1D40A665963CA211BBFE486345C0C0F (NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.TimeSpan>::get_Value()
inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  Nullable_1_get_Value_mBFFFA1BA161F58A43F8D53FFD139F699DDC9D3DB (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 * __this, const RuntimeMethod* method)
{
	return ((  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  (*) (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 *, const RuntimeMethod*))Nullable_1_get_Value_mBFFFA1BA161F58A43F8D53FFD139F699DDC9D3DB_gshared)(__this, method);
}
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Double GooglePlayGames.OurUtils.NearbyHelperObject::ToSeconds(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NearbyHelperObject_ToSeconds_m2844A4905B2AEDFBE33EE884DA50B7037BAC68EB (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  ___span0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mAE416E812DB3911279C0FE87A7760247CE1BBFA8 (AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m944E5987B38F1229EB3E8122E030D0439D4513B0 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mDA42018F7419EC3301EBC8FDB8EB6B3016D88209_gshared)(__this, ___fieldName0, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * AndroidJavaObject_Call_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m775AB90594C5F27D6099ED61119EF3608FD1001D (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_m38064E69DD787BA971B0757788FD11E7239A03B7_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.GameObject::AddComponent<GooglePlayGames.OurUtils.PlayGamesHelperObject>()
inline PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * GameObject_AddComponent_TisPlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_mC64E1AE4A290D0AF6D4EB5065CC63FCAFC8C846B (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject__ctor_mF95C6E4A698C4988EB8520F2D1675D642B742CDD (PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mFAA791F593455783B953151D8AE2EB6A24617687 (U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
inline void List_1_Add_mA374038CC7A718F88F0BA10BA4AB0FBB8DCEE158 (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_mB415AA0254640EBF623221C95BD23C804ACB1AE9 (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mCC8121E1CB0C758B6A446F8C279355529ED476E1 (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// !0 System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * List_1_get_Item_m900B85866FD2558E6CE2725E07AF693C29C19731_inline (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * (*) (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m3986FAACE5FCFF72B7601E768375D65E038FDEDB_inline (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::GetEnumerator()
inline Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE  List_1_GetEnumerator_m1A6BEB03A9E4B76F009EACE9E2DC8202C1B00B0D (List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE  (*) (List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::get_Current()
inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * Enumerator_get_Current_mEDF66107B1E3BECA631A37771397FAC62B4BB21B_inline (Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE * __this, const RuntimeMethod* method)
{
	return ((  Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * (*) (Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, bool, const RuntimeMethod*))Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared)(__this, ___obj0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105 (String_t* ___msg0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::MoveNext()
inline bool Enumerator_MoveNext_m08F3FE51A64369D57EC067889997CBA5F81DCC73 (Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::Dispose()
inline void Enumerator_Dispose_m0F7AA651E81830E11A33BA5B2CACFFBE25F610A9 (Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Contains(!0)
inline bool List_1_Contains_m1087577496C9953C2B9FE83421C010D93E1E39DE (List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 *, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Add(!0)
inline void List_1_Add_mBF59C2344C951987CF2A02BFE8F7F1BF795434FB (List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 *, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Remove(!0)
inline bool List_1_Remove_m201C000881D6CDC3645867A7B25986ADF9614086 (List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 *, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mCA99E3E5D84C3ED79771C17F8FCF9B5795EB0C25 (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::.ctor()
inline void List_1__ctor_m2806B6CAA6E2D1E105FDA5CCB083EFDD8591339E (List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * PlayGamesPlatform_get_Instance_m14016685F7C32BEF2E0779F03F8887E5C25B416B (const RuntimeMethod* method);
// System.Void GooglePlayGames.ReportProgress::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportProgress__ctor_mFCC58DA696C3603E92ABD74E495C108C5F4411F1 (ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor(GooglePlayGames.ReportProgress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement__ctor_m7F0E4604564CCAFF410D6A5D555408C43BA7C624 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * ___progressCallback0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m6567CDEB97E6541CE4AF8ADDC617CFF419D5A58E (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement__ctor_mDF11A5AC8963968E802FDCF0B2E5C4D4E6019860 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Achievement::get_Id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Achievement_get_Id_mA0A91D5880B6FA2FCA775D0E8F501612DF38EDC8_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsIncremental()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Achievement_get_IsIncremental_mC38AA6AD649FD4BD34DDF544C064B674D59DFEF0_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.BasicApi.Achievement::get_CurrentSteps()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Achievement_get_CurrentSteps_mBE2D692BB1FD94DAE37984BA65B9D5779D942A21_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.BasicApi.Achievement::get_TotalSteps()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Achievement_get_TotalSteps_mD68DCDC81918457012A9EF47310F57B0968F629E_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsUnlocked()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Achievement_get_IsUnlocked_mDC9AB73C6E169B23ABE2DBFBDEEAFD43643CC753_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsRevealed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Achievement_get_IsRevealed_m5391462A6F007F4A3EA0D3CE1D0AFAB2AD51EE96_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method);
// System.DateTime GooglePlayGames.BasicApi.Achievement::get_LastModifiedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Achievement_get_LastModifiedTime_m18FEF8F433DEE9EA3952BDE49416423DDD29682B (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Achievement::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Achievement_get_Name_m5357D43091B01618E99348C2A3808997199074D6_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Achievement::get_Description()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Achievement_get_Description_m268B3D5E56A3D87AD3286ADE95C75914735D03E7_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method);
// System.UInt64 GooglePlayGames.BasicApi.Achievement::get_Points()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t Achievement_get_Points_m34B788ECC4E0ED8B2BD13DB3A752837D4ACB56E5_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Achievement::get_RevealedImageUrl()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Achievement_get_RevealedImageUrl_mC76D528740A1010FC5812068671FF86B94E5D109_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Achievement::get_UnlockedImageUrl()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Achievement_get_UnlockedImageUrl_m7EED580696A9D4C66FC98271F7248E5FC494C0A8_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.ReportProgress::Invoke(System.String,System.Double,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportProgress_Invoke_m86F746599DA428B049C13BAF1F01A0CAC491C6CD (ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * __this, String_t* ___id0, double ___progress1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.PlayGamesAchievement::get_hidden()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool PlayGamesAchievement_get_hidden_mEAE73D4817EB52D45A3B2E2393FA70D91FBE7256_inline (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.PlayGamesAchievement::get_completed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool PlayGamesAchievement_get_completed_m528F008EBBAE0C1A089D1777B5FFF27D46519B18_inline (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_url_m030A0D89670638A2C0E86A42AA84C767314672C6 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequestTexture_GetTexture_m45626D1CEA83B5DC281934CC74D383389CD781B9 (String_t* ___uri0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_mB3CC99A8DC3DB1DD44B23008688EB2DF20906FDA (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DownloadHandlerTexture_GetContent_mF7BCA86CF9F9871A512256173025D3C895EDF744 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___www0, const RuntimeMethod* method);
// UnityEngine.Texture2D GooglePlayGames.PlayGamesAchievement::LoadImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * PlayGamesAchievement_LoadImage_m16328F6EADDB77939074BBCC3E1D20AC32B2BFE5 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.DummyClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient__ctor_m05F8D42F9F0D108306F7F737BABCD42AA8621739 (DummyClient_tE38F53999E10D9E4AB27B18622CC9D4B1FA08D79 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.Android.AndroidClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidClient__ctor_m6BE3FBD0D4DBC1E5483DDF5EBF083340430A6EBC (AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::.ctor()
inline void List_1__ctor_m7D9269BF2C5B47E2881D8362447AE5F784B88823 (List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadScores_m929BC14DDEBB89A481B0FE8E498303312523B133 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, RuntimeObject* ___board0, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::get_Count()
inline int32_t List_1_get_Count_m9DFABDAB8AEC470E2D4BB6B9829172D7DF8E5FDF_inline (List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::CopyTo(!0[])
inline void List_1_CopyTo_m8C7E4C07E2B297321460EE9E3CEA6B1BFC5DC921 (List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * __this, PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B* ___array0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 *, PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B*, const RuntimeMethod*))List_1_CopyTo_m54E18E9C1ECE23383EF0EA1E98330235DEAD7B39_gshared)(__this, ___array0, method);
}
// System.Boolean GooglePlayGames.BasicApi.LeaderboardScoreData::get_Valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeaderboardScoreData_get_Valid_m8F1CFC600BBB59DE4A3933605C9C3CB79EFD6F25 (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::get_ApproximateCount()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t LeaderboardScoreData_get_ApproximateCount_m0A898568DD8BECB082ECE7DA4A7CCD5BD30DA657_inline (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesLeaderboard::SetMaxRange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_SetMaxRange_m6CAD00571072CBD807804664B17757B23B42FBE3 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, uint64_t ___val0, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::get_Title()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LeaderboardScoreData_get_Title_mE935170FDD5871591863CA7499361301EA7D7DD8_inline (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesLeaderboard::SetTitle(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_SetTitle_mBF571A8F8B54100CC6870145A8097345A40D0C92_inline (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::get_PlayerScore()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* LeaderboardScoreData_get_PlayerScore_m1999A889AB55574DEDDB97556DF45DBFC3F1B253_inline (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesLeaderboard::SetLocalUserScore(GooglePlayGames.PlayGamesScore)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_SetLocalUserScore_mAEC2E642741686D87C92486EF5CE394A588D0330_inline (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * ___score0, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.IScore[] GooglePlayGames.BasicApi.LeaderboardScoreData::get_Scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* LeaderboardScoreData_get_Scores_mAF12EE7B188619CA9A62A3072F7AEAD5F5FEB2FD (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * __this, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.PlayGamesLeaderboard::AddScore(GooglePlayGames.PlayGamesScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesLeaderboard_AddScore_m5EEA94096A68FCA29901B8EF1A108DB92272722D (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * ___score0, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.PlayGamesLeaderboard::HasAllScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesLeaderboard_HasAllScores_mAF9AD91A54B10B22AEF7BB4FB55A8015B94F90B3 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::Add(!0)
inline void List_1_Add_mA233869E054A624DBAD583F741E6E1E0FFB1F8A7 (List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * __this, PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 *, PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.String GooglePlayGames.PlayGamesScore::get_userID()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_userID_m5679E50EB4C05F46CEEBFD822BCA1858B4FF645B_inline (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, const RuntimeMethod* method);
// System.UInt32 GooglePlayGames.PlayGamesLeaderboard::get_maxRange()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t PlayGamesLeaderboard_get_maxRange_m8C7E8C30EB79D0D1A2262A1EA19BA9BA86B3A2A2_inline (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m9AB8E2960E18E86DD24D10B9F62D8E4C798A1DAA (U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.SignInStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6EED033785616C99B64874ACE9B2A1D909F57561 (Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mD0D31654D450BEB7CFFA7B079FD2EB5946C2B8E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::Authenticate(System.Action`1<GooglePlayGames.BasicApi.SignInStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_Authenticate_m1EEFB9A0A2D4EBFC011E2EAA1C8D5AB04F5AB41A (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D * ___callback0, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m489DD2F99CCCC4E5EBAE687B5104BFF259CD3FBA (U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadFriends_m5807FD9488C44A26C4730F634C5D16EF003E369D (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, RuntimeObject* ___user0, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback1, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.PlayGamesPlatform::GetFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* PlayGamesPlatform_GetFriends_m59E551A04939AFC81D4E9A5BB28BF44B3B193C32 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.PlayGamesPlatform::IsAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.PlayGamesLocalUser::get_authenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesLocalUser_get_authenticated_mB09AF1D85A1681C30DD07A503413F4A91D6D6209 (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesPlatform::GetUserDisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesPlatform_GetUserDisplayName_m2F00040F42D5B6EE252487934737C8D62F75AC88 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesUserProfile::get_userName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_userName_m0990E94AABF9A7D25EEE987AFD886597DA26607B_inline (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesPlatform::GetUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesPlatform_GetUserId_m75B3086A6ECDAFC69A3C6C39A32F8231571DB0A5 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesPlatform::GetUserImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesPlatform_GetUserImageUrl_mACC269480BAE942B582347AE758AE3E446521CA2 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesUserProfile::ResetIdentity(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile_ResetIdentity_m4367C30B2392A7C75299A45863F895ACBD3E94EB (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesUserProfile::get_id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_id_m6E48ACB5FC7FB0343DFBAE4E5C00C2207DD5CC09_inline (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mF8FDA78A539FD3D32CF71AECFA9CEB5D7D2DB904 (U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::get_Valid()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool PlayerStats_get_Valid_mB3B4331BFF027A3032C147C54B3269DDAB950415_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method);
// System.Void System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF840087283657EEF43BFF001BCB75C682A5E67BF (Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m30B0896D4218D5D0270AA0DCF631CA92689CB290_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::GetPlayerStats(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_GetPlayerStats_mFCCF3AD5EE36E79D2469238E1D07EC74113973A5 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * ___callback0, const RuntimeMethod* method);
// System.Void System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>::Invoke(!0,!1)
inline void Action_2_Invoke_m8C7BC4165AC871BDB6C592BF090898015B39A8AD (Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * __this, int32_t ___arg10, PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF *, int32_t, PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA *, const RuntimeMethod*))Action_2_Invoke_m96BB69F8BF7AB1DE6EFF67A2A80BA2B0FA311F78_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`2<System.Boolean,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_m28751EB3D7737B18DA9A82B61E6E5203124E81D4 (Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * __this, bool ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 *, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_m09D8ADADD1EA5CCDE1F95447CAFD680DFE93695B_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<GooglePlayGames.BasicApi.IPlayGamesClient>(T)
inline RuntimeObject* Misc_CheckNotNull_TisIPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_m09BC1C13C97243ED28A0A63755E16826EC888F5D (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m0E4FB83743BC405BFAFC9923D7572730D14CC6E0_gshared)(___value0, method);
}
// System.Void GooglePlayGames.PlayGamesLocalUser::.ctor(GooglePlayGames.PlayGamesPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLocalUser__ctor_mFCF8EB49C54EA782B41565421DA5CAB125EB21E7 (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * ___plaf0, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.OurUtils.Logger::get_DebugLogEnabled()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Logger_get_DebugLogEnabled_m0ABE85CD8B71AE08981813CE350768B0232D2851_inline (const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::set_DebugLogEnabled(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Logger_set_DebugLogEnabled_m0EF48153D1CEDBCE2F26799B8421D26C2A5B5D17_inline (bool ___value0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.IPlayGamesClient GooglePlayGames.PlayGamesClientFactory::GetPlatformPlayGamesClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesClientFactory_GetPlatformPlayGamesClient_m61FA1D5117C523303D3BFFA844EB603E8A5A43B4 (const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::.ctor(GooglePlayGames.BasicApi.IPlayGamesClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform__ctor_mA50E77E0B5DD8071FAC4B55FC9E6F6373455F57C (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::InitializeNearby(System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_InitializeNearby_mE1C5B3D8FE0154DC12F0B981D1E75F8D34A2C262 (Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * ___callback0, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m7919BF3A051E2650C9A61297F70002EAFE80D463 (U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC089FB1B1C5EDA3FDB725865A78F4DDB6FEE7631 (Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GooglePlayGames.NearbyConnectionClientFactory::Create(System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionClientFactory_Create_m5A519A39795A398D0D535D70990334B85051AF4D (Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Social::set_Active(UnityEngine.SocialPlatforms.ISocialPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_set_Active_m6068C76CDEDCBB996D5F397BDF9F1038FD99E7C6 (RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Social_get_Active_m3A0805FA14B55B8A297411DDF6295127A62C83FD (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m8DD309AA13736A1FA5B74D6B77A1380C6373E998 (U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m24E30FCD7EF3B3D3335012E77876453F223A45D3 (U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910 * __this, const RuntimeMethod* method);
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Action`1<System.String>>(T)
inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * Misc_CheckNotNull_TisAction_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_mDFDACCDFDE8BE115968581063F2F6E9ECF7C1872 (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___value0, const RuntimeMethod* method)
{
	return ((  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m0E4FB83743BC405BFAFC9923D7572730D14CC6E0_gshared)(___value0, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::InvokeCallbackOnGameThread<System.String>(System.Action`1<T>,T)
inline void PlayGamesPlatform_InvokeCallbackOnGameThread_TisString_t_mB0AE350F815B5B8B9BF2E976A161A7C7CE86E9E8 (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___callback0, String_t* ___data1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, String_t*, const RuntimeMethod*))PlayGamesPlatform_InvokeCallbackOnGameThread_TisRuntimeObject_m13217205E7B39BFB98C0219EDA8DE14B703A1742_gshared)(___callback0, ___data1, method);
}
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(!0)
inline void Action_1_Invoke_mD9031C0AFA2DF30894EB631895C4AF2239CDBE9C (Action_1_tE5C7AC57BC589DA8234AF9ECC8F8B62ACEA5F826 * __this, IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE5C7AC57BC589DA8234AF9ECC8F8B62ACEA5F826 *, IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.BasicApi.PlayerStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_m4CE96B7D947FBF1805FF5359E3E6A7B5AC230AC6 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m7A4A3494814A50E17A793B8FB8E448D665E3E52F (U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * __this, const RuntimeMethod* method);
// System.Action`1<T> GooglePlayGames.PlayGamesPlatform::ToOnGameThread<System.Boolean>(System.Action`1<T>)
inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * PlayGamesPlatform_ToOnGameThread_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mBF8371C6A17EFD3ACAE7EDE99306F66A1A1B38E7 (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___toConvert0, const RuntimeMethod* method)
{
	return ((  Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*))PlayGamesPlatform_ToOnGameThread_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mBF8371C6A17EFD3ACAE7EDE99306F66A1A1B38E7_gshared)(___toConvert0, method);
}
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesPlatform::MapId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.Achievement[]>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5E3C38C3D4727D73BEE4575399298637A0CF1091 (Action_1_t40C6281DD9B38B590C5280473351A8E16A632837 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t40C6281DD9B38B590C5280473351A8E16A632837 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_mD2083EB9230C5830792D5EB5B0A5A4E5D64BA6A5 (U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(!0)
inline void Action_1_Invoke_m6D94201F6F60C71FD959534E58DC5F2E0534C16D (Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * __this, IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 *, IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0__ctor_m1C116655B52E0EA41A38AAB403C6B921DBEC4FB2 (U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(!0)
inline void Action_1_Invoke_mFE16CD4BDEDFE680B174E7380FA78E7EB5200780 (Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * __this, IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 *, IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_mFBF0F2E32B3D1D6154CB3324BC40C740EC99841D (U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m619DDD86B8ED03F15EC49D06AE7922AD2CBB7230 (Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::LoadScores(System.String,GooglePlayGames.BasicApi.LeaderboardStart,System.Int32,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadScores_m5BA0D027659C87FFF762FA364010B971FCC8D2B5 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___leaderboardId0, int32_t ___start1, int32_t ___rowCount2, int32_t ___collection3, int32_t ___timeSpan4, Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * ___callback5, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::.ctor(System.String,GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData__ctor_mC6B471928F6A73A12E836E7C53644F621CC4121A (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * __this, String_t* ___leaderboardId0, int32_t ___status1, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>::Invoke(!0)
inline void Action_1_Invoke_m1BC8BFD18CE5592C184C867DCC1D1D5E59B3DD8E (Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * __this, LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D *, LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.String GooglePlayGames.BasicApi.ScorePageToken::get_LeaderboardId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_mFBD3A842071873B293ACE081BB1E0C668CA61F8C_inline (ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesLeaderboard::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard__ctor_m63AE4DDCEFFA086C59C9FCAA3F751DCDB182EF45 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::ShowAchievementsUI(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ShowAchievementsUI_m1E3E03E993DDA4A88EA3DAC0832F7803B6863694 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * ___callback0, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI(System.String,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ShowLeaderboardUI_m9CB03FD65C11D00F9496B72E58C36E5F46408C22 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___leaderboardId0, Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * ___callback1, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI(System.String,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ShowLeaderboardUI_mD2163A5834EE20BA60602D88D4EC99CF9C074529 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___leaderboardId0, int32_t ___span1, Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * ___callback2, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.UIStatus>::Invoke(!0)
inline void Action_1_Invoke_m117E7A24D3CB81AA0FFD23F43321DA06B61CC99C (Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m8672DDC58300CA227FC37981067B766C9879344B_gshared)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0__ctor_m6E3294DE464108634863461DFBC0E52A66F36E88 (U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesLeaderboard::set_loading(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_set_loading_m6E3268F3788B01A4752C4B362EACEE9FF72696E0_inline (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::InvokeCallbackOnGameThread<GooglePlayGames.BasicApi.UIStatus>(System.Action`1<T>,T)
inline void PlayGamesPlatform_InvokeCallbackOnGameThread_TisUIStatus_t3BE93053424F559A5B3E1D4C290FA5E091A14CB7_m633F6D049876AE590C17DF5D823D120071BBBA93 (Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * ___callback0, int32_t ___data1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 *, int32_t, const RuntimeMethod*))PlayGamesPlatform_InvokeCallbackOnGameThread_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m9D4942357FD027896DBBF6F2572392088B03D875_gshared)(___callback0, ___data1, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::InvokeCallbackOnGameThread<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>(System.Action`1<T>,T)
inline void PlayGamesPlatform_InvokeCallbackOnGameThread_TisFriendsListVisibilityStatus_t5C8FEFC70B838D8C9EDF134574A9FC09146BF615_mDCCA1E2B1D0328D8D042F4358B123786C3BB3C91 (Action_1_t8EE1F0EF0F6740B5EB111E67F42584240D45AC60 * ___callback0, int32_t ___data1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8EE1F0EF0F6740B5EB111E67F42584240D45AC60 *, int32_t, const RuntimeMethod*))PlayGamesPlatform_InvokeCallbackOnGameThread_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m9D4942357FD027896DBBF6F2572392088B03D875_gshared)(___callback0, ___data1, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::InvokeCallbackOnGameThread<GooglePlayGames.BasicApi.LoadFriendsStatus>(System.Action`1<T>,T)
inline void PlayGamesPlatform_InvokeCallbackOnGameThread_TisLoadFriendsStatus_t0B02CC60E54A4D8A8F541BF39AFB10CEFD17CEBB_m4C91C8DA95E9963D7F5DC091E38B6751F6FE968B (Action_1_tCF450FEFD3D9E1C5274C1C003E30D3F9ADC214E3 * ___callback0, int32_t ___data1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCF450FEFD3D9E1C5274C1C003E30D3F9ADC214E3 *, int32_t, const RuntimeMethod*))PlayGamesPlatform_InvokeCallbackOnGameThread_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m9D4942357FD027896DBBF6F2572392088B03D875_gshared)(___callback0, ___data1, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0__ctor_mEFF82963F8C9950D2282B8763010239FF8511F11 (U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * __this, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.PlayGamesLeaderboard::SetFromData(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesLeaderboard_SetFromData_m87EC00C60134CA4B975219B38EC6425164143E3C (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * ___data0, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::get_NextPageToken()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * LeaderboardScoreData_get_NextPageToken_m2E30E01B90301E0E095500227151787FB1EA63D3_inline (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.Range GooglePlayGames.PlayGamesLeaderboard::get_range()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  PlayGamesLeaderboard_get_range_m0C77FBA37A7C49D90AA1DBF1AB22E876EE2B83A1_inline (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.PlayGamesLeaderboard::get_ScoreCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesLeaderboard_get_ScoreCount_mBA9C204C96E5931201EF8414E34B17EFE1F9F6C2 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mB435547693A70859882AFAE6E17EE84A4DEE89DC (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_w_mB0D118831979B2FFAA5E725B1B5CADCEA0474BDA (String_t* ___msg0, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.PlayGamesPlatform::progressToSteps(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesPlatform_progressToSteps_m7212C612319BEE0FC41835750E4E05CAC200F91D (double ___progress0, int32_t ___totalSteps1, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor(GooglePlayGames.BasicApi.Achievement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement__ctor_m0DE0683B58CDCC2883B4A636D1AEBFC3DDF6B82D (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * ___ach0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(!0)
inline void Action_1_Invoke_m5C7A22095E708452C272C2BBC5CE4F6E72236861 (Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C * __this, IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C *, IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::HandleLoadingScores(GooglePlayGames.PlayGamesLeaderboard,GooglePlayGames.BasicApi.LeaderboardScoreData,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_HandleLoadingScores_mC8CF67CE69D79D4EB93626CDE86A1D2CB1EA3D9E (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * ___board0, LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * ___scoreData1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m627486A7CFC2016C8A1646442155BE45A8062667 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesScore::get_leaderboardID()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_leaderboardID_m28A7B9634862C3DB528C23CA6ECAF36460FF52DF_inline (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::ReportScore(System.Int64,System.String,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ReportScore_m2B31A875BF47AFE14828BCAE0FFB340C2F944AD8 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, int64_t ___score0, String_t* ___board1, String_t* ___metadata2, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback3, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8210E39355A227AE15DD391EB810AA9B6AB8B26C (int64_t* __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesUserProfile::setAvatarUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile_setAvatarUrl_m877CF3727BA4AD115F19085A9D764A22079096ED (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, String_t* ___avatarUrl0, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesUserProfile::get_AvatarURL()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_AvatarURL_m8F65E16B49903152877B2916FB8ABB0BB277CC17_inline (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GooglePlayGames.PlayGamesUserProfile::LoadImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesUserProfile_LoadImage_mF7D735C57025902384574CE680E4292DEB0BDE00 (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunCoroutine_mB4690921986C23904A1C3E6566773DBC191D7BDE (RuntimeObject* ___action0, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__23__ctor_mD93FE8AB23AC37C9114289EA0093B80347DD4287 (U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * StringComparer_get_Ordinal_m1F38FBAB170DF80D33FE2A849D30FF2E314D9FDB_inline (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Insert_m2525FE6F79C96A359A588C8FA764419EBD811749 (String_t* __this, int32_t ___startIndex0, String_t* ___value1, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::get_blackTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Texture2D_get_blackTexture_mCF4F978DF9B6066794E7130E0C14618216ED0956 (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxUnreliableMessagePayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxUnreliableMessagePayloadLength_mD9665C512C4204506C435A45A8BE8F5860554FFA (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, const RuntimeMethod* method)
{
	{
		// return NearbyConnectionConfiguration.MaxUnreliableMessagePayloadLength;
		return ((int32_t)1168);
	}
}
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxReliableMessagePayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxReliableMessagePayloadLength_mDDAF1EA77BC50B4545D94189A881A2B71F7147B2 (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, const RuntimeMethod* method)
{
	{
		// return NearbyConnectionConfiguration.MaxReliableMessagePayloadLength;
		return ((int32_t)4096);
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendReliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendReliable_m53D3C385C5782D906ECF724857938CE1DA6C12A9 (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___recipientEndpointIds0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___payload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_SendReliable_m53D3C385C5782D906ECF724857938CE1DA6C12A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("SendReliable called from dummy implementation");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteralD33DB628F9F4127DDF2F2512064B6F487380F03E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendUnreliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendUnreliable_m0D8980DD6ABB4C7DB8589EFAFC89ED36233C8981 (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___recipientEndpointIds0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___payload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_SendUnreliable_m0D8980DD6ABB4C7DB8589EFAFC89ED36233C8981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("SendUnreliable called from dummy implementation");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteralBD21BAE25ECEE55713FC74C7AF65884F65DAFE9F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartAdvertising(System.String,System.Collections.Generic.List`1<System.String>,System.Nullable`1<System.TimeSpan>,System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>,System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StartAdvertising_mF875B394D62659B775700836B874B53522439F67 (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, String_t* ___name0, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___appIdentifiers1, Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  ___advertisingDuration2, Action_1_t64A694A91CF48AF6DAA61B8200255AB7B9CCD0F9 * ___resultCallback3, Action_1_t8C34D5D44EE2A3197926F3A14FC0991FC91E76B2 * ___connectionRequestCallback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_StartAdvertising_mF875B394D62659B775700836B874B53522439F67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdvertisingResult_tFD1C3FF4AC74973DCE013C98B203A74112446CF8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AdvertisingResult obj = new AdvertisingResult(ResponseStatus.LicenseCheckFailed, string.Empty);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		AdvertisingResult__ctor_m2A0F93BA83E0FFFC9C11E692ABC7072133363BE7((AdvertisingResult_tFD1C3FF4AC74973DCE013C98B203A74112446CF8 *)(&V_0), (-1), L_0, /*hidden argument*/NULL);
		// resultCallback.Invoke(obj);
		Action_1_t64A694A91CF48AF6DAA61B8200255AB7B9CCD0F9 * L_1 = ___resultCallback3;
		AdvertisingResult_tFD1C3FF4AC74973DCE013C98B203A74112446CF8  L_2 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_m2C82F1BCB5C7B15AF13397B2CDDF286AEE03E7F1(L_1, L_2, /*hidden argument*/Action_1_Invoke_m2C82F1BCB5C7B15AF13397B2CDDF286AEE03E7F1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAdvertising()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopAdvertising_m3F5A2E4BE809E83233ED38C728103DA8FC38FF48 (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_StopAdvertising_m3F5A2E4BE809E83233ED38C728103DA8FC38FF48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopAvertising in dummy implementation called");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral6F5D24F359E67216FB79B388E3B27D3F03C0ED2F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendConnectionRequest(System.String,System.String,System.Byte[],System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>,GooglePlayGames.BasicApi.Nearby.IMessageListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendConnectionRequest_m62F9A5A14AC00DEB150FCA5228A3F3DF6D344932 (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, String_t* ___name0, String_t* ___remoteEndpointId1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___payload2, Action_1_tB2CE7529CCFA223AAD9AEA138F9B78EDA6CD10FE * ___responseCallback3, RuntimeObject* ___listener4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_SendConnectionRequest_m62F9A5A14AC00DEB150FCA5228A3F3DF6D344932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// OurUtils.Logger.d("SendConnectionRequest called from dummy implementation");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral181F61CF334EA363AF987CD97EEE2B27059145B5, /*hidden argument*/NULL);
		// if (responseCallback != null)
		Action_1_tB2CE7529CCFA223AAD9AEA138F9B78EDA6CD10FE * L_0 = ___responseCallback3;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// ConnectionResponse obj = ConnectionResponse.Rejected(0, string.Empty);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		IL2CPP_RUNTIME_CLASS_INIT(ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A_il2cpp_TypeInfo_var);
		ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A  L_2 = ConnectionResponse_Rejected_mD809530B778FB9D22C203CEBCA1BEE13E5913E20((((int64_t)((int64_t)0))), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// responseCallback.Invoke(obj);
		Action_1_tB2CE7529CCFA223AAD9AEA138F9B78EDA6CD10FE * L_3 = ___responseCallback3;
		ConnectionResponse_t62B19F3BC985D80E34F67EDBA4ED54A5F731B38A  L_4 = V_0;
		NullCheck(L_3);
		Action_1_Invoke_mD7F582B9C45B6F457EE205418422C0791286E02E(L_3, L_4, /*hidden argument*/Action_1_Invoke_mD7F582B9C45B6F457EE205418422C0791286E02E_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::AcceptConnectionRequest(System.String,System.Byte[],GooglePlayGames.BasicApi.Nearby.IMessageListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_AcceptConnectionRequest_m1CE1ADE7A5DAD4C66503A99E1E24F799BD164315 (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, String_t* ___remoteEndpointId0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___payload1, RuntimeObject* ___listener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_AcceptConnectionRequest_m1CE1ADE7A5DAD4C66503A99E1E24F799BD164315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("AcceptConnectionRequest in dummy implementation called");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteralF1FD50BD0259EFAE175FC11B5E31CEF99661F68A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartDiscovery(System.String,System.Nullable`1<System.TimeSpan>,GooglePlayGames.BasicApi.Nearby.IDiscoveryListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StartDiscovery_mD5EC8AC556710DB862C67E6431D61101BB4B3F1C (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, String_t* ___serviceId0, Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  ___advertisingTimeout1, RuntimeObject* ___listener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_StartDiscovery_mD5EC8AC556710DB862C67E6431D61101BB4B3F1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StartDiscovery in dummy implementation called");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral3F5CD2173D37438CD7FE6535A3D66FA87C551DAB, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopDiscovery(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopDiscovery_mDA7D6C5AFB02203005974A645D4C1BE19E6D9003 (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, String_t* ___serviceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_StopDiscovery_mDA7D6C5AFB02203005974A645D4C1BE19E6D9003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopDiscovery in dummy implementation called");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral65BDC70CCB096A529726496670219653F2264A1D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::RejectConnectionRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_RejectConnectionRequest_mD855CE16F3C00F3B6E78EA15AA72FC76B7DCCEAA (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, String_t* ___requestingEndpointId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_RejectConnectionRequest_mD855CE16F3C00F3B6E78EA15AA72FC76B7DCCEAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("RejectConnectionRequest in dummy implementation called");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral85F8C8035C35EEE36352A22DB8BBE79972F40952, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::DisconnectFromEndpoint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_DisconnectFromEndpoint_m108D463D270BFB5A9F213D54A37818E025B52F8E (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, String_t* ___remoteEndpointId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_DisconnectFromEndpoint_m108D463D270BFB5A9F213D54A37818E025B52F8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("DisconnectFromEndpoint in dummy implementation called");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral5516ABA466973D912C780D5E82A5E63401205FDF, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAllConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopAllConnections_mE1E7FF1B53EBEEBE796DDE6B11B89B53BB6857BE (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_StopAllConnections_mE1E7FF1B53EBEEBE796DDE6B11B89B53BB6857BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopAllConnections in dummy implementation called");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral5F18679FA8CA34768041ED86FD03631E3A49DAFB, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_LocalEndpointId_mFB074A4411C1C555C44FC1333212DC893CCDFD7B (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_LocalEndpointId_mFB074A4411C1C555C44FC1333212DC893CCDFD7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalDeviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_LocalDeviceId_mF47DB1E38D43FEE31DC95F84AAC858C412A0429D (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_LocalDeviceId_mF47DB1E38D43FEE31DC95F84AAC858C412A0429D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "DummyDevice";
		return _stringLiteralB2788B13C33E280DC8BF691370DD2C46C5F633FC;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetAppBundleId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_GetAppBundleId_m6CC4E9ADE2466D3DF2250079907D0AD9E33EC707 (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_GetAppBundleId_m6CC4E9ADE2466D3DF2250079907D0AD9E33EC707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "dummy.bundle.id";
		return _stringLiteral177EF6630C280E2D399F4A07876CCA3E291665EF;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_GetServiceId_m52294523D389C4A1F06BAB5F7D910AC830A06855 (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DummyNearbyConnectionClient_GetServiceId_m52294523D389C4A1F06BAB5F7D910AC830A06855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "dummy.service.id";
		return _stringLiteralA0771FF05FA2EE7EDE720194BA65E8A290205368;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient__ctor_mA556C6E4CDB61AF5D90BF9E631052928C7BDE9DF (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshal_pinvoke(const EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4& unmarshaled, EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshaled_pinvoke& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_string(unmarshaled.get_mEndpointId_0());
	marshaled.___mName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_mName_1());
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_string(unmarshaled.get_mServiceId_2());
}
IL2CPP_EXTERN_C void EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshal_pinvoke_back(const EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshaled_pinvoke& marshaled, EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4& unmarshaled)
{
	unmarshaled.set_mEndpointId_0(il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId_0));
	unmarshaled.set_mName_1(il2cpp_codegen_marshal_string_result(marshaled.___mName_1));
	unmarshaled.set_mServiceId_2(il2cpp_codegen_marshal_string_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshal_pinvoke_cleanup(EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshal_com(const EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4& unmarshaled, EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshaled_com& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mEndpointId_0());
	marshaled.___mName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mName_1());
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mServiceId_2());
}
IL2CPP_EXTERN_C void EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshal_com_back(const EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshaled_com& marshaled, EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4& unmarshaled)
{
	unmarshaled.set_mEndpointId_0(il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId_0));
	unmarshaled.set_mName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___mName_1));
	unmarshaled.set_mServiceId_2(il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshal_com_cleanup(EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m17F577E0210FBCCE6A1CDA6F91CBCE636274B1C3 (EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndpointDetails__ctor_m17F577E0210FBCCE6A1CDA6F91CBCE636274B1C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mEndpointId = Misc.CheckNotNull(endpointId);
		String_t* L_0 = ___endpointId0;
		String_t* L_1 = Misc_CheckNotNull_TisString_t_mBF7D95230A17BD67598E68FF9EB8B16D51285F6E(L_0, /*hidden argument*/Misc_CheckNotNull_TisString_t_mBF7D95230A17BD67598E68FF9EB8B16D51285F6E_RuntimeMethod_var);
		__this->set_mEndpointId_0(L_1);
		// this.mName = Misc.CheckNotNull(name);
		String_t* L_2 = ___name1;
		String_t* L_3 = Misc_CheckNotNull_TisString_t_mBF7D95230A17BD67598E68FF9EB8B16D51285F6E(L_2, /*hidden argument*/Misc_CheckNotNull_TisString_t_mBF7D95230A17BD67598E68FF9EB8B16D51285F6E_RuntimeMethod_var);
		__this->set_mName_1(L_3);
		// this.mServiceId = Misc.CheckNotNull(serviceId);
		String_t* L_4 = ___serviceId2;
		String_t* L_5 = Misc_CheckNotNull_TisString_t_mBF7D95230A17BD67598E68FF9EB8B16D51285F6E(L_4, /*hidden argument*/Misc_CheckNotNull_TisString_t_mBF7D95230A17BD67598E68FF9EB8B16D51285F6E_RuntimeMethod_var);
		__this->set_mServiceId_2(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EndpointDetails__ctor_m17F577E0210FBCCE6A1CDA6F91CBCE636274B1C3_AdjustorThunk (RuntimeObject * __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * _thisAdjusted = reinterpret_cast<EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 *>(__this + _offset);
	EndpointDetails__ctor_m17F577E0210FBCCE6A1CDA6F91CBCE636274B1C3(_thisAdjusted, ___endpointId0, ___name1, ___serviceId2, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_m5A16BD15270CB5A7C30511C3B0EF32DE2A945ABE (EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * __this, const RuntimeMethod* method)
{
	{
		// get { return mEndpointId; }
		String_t* L_0 = __this->get_mEndpointId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_EndpointId_m5A16BD15270CB5A7C30511C3B0EF32DE2A945ABE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * _thisAdjusted = reinterpret_cast<EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 *>(__this + _offset);
	return EndpointDetails_get_EndpointId_m5A16BD15270CB5A7C30511C3B0EF32DE2A945ABE_inline(_thisAdjusted, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_mB7429E110B4A9455FD3990601EA857D52B2502AD (EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * __this, const RuntimeMethod* method)
{
	{
		// get { return mName; }
		String_t* L_0 = __this->get_mName_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_Name_mB7429E110B4A9455FD3990601EA857D52B2502AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * _thisAdjusted = reinterpret_cast<EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 *>(__this + _offset);
	return EndpointDetails_get_Name_mB7429E110B4A9455FD3990601EA857D52B2502AD_inline(_thisAdjusted, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_m30A26EC3190D448EE1B60032DFFD57AF646288B5 (EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * __this, const RuntimeMethod* method)
{
	{
		// get { return mServiceId; }
		String_t* L_0 = __this->get_mServiceId_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_ServiceId_m30A26EC3190D448EE1B60032DFFD57AF646288B5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * _thisAdjusted = reinterpret_cast<EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 *>(__this + _offset);
	return EndpointDetails_get_ServiceId_m30A26EC3190D448EE1B60032DFFD57AF646288B5_inline(_thisAdjusted, method);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshal_pinvoke(const NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0& unmarshaled, NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshaled_pinvoke& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_mInitializationCallback_2()));
	marshaled.___mLocalClientId_3 = unmarshaled.get_mLocalClientId_3();
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshal_pinvoke_back(const NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshaled_pinvoke& marshaled, NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_mInitializationCallback_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tDE6242754045E413334AD30795D5F15C91E26560>(marshaled.___mInitializationCallback_2, Action_1_tDE6242754045E413334AD30795D5F15C91E26560_il2cpp_TypeInfo_var));
	int64_t unmarshaled_mLocalClientId_temp_1 = 0;
	unmarshaled_mLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.set_mLocalClientId_3(unmarshaled_mLocalClientId_temp_1);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshal_pinvoke_cleanup(NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshal_com(const NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0& unmarshaled, NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshaled_com& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_mInitializationCallback_2()));
	marshaled.___mLocalClientId_3 = unmarshaled.get_mLocalClientId_3();
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshal_com_back(const NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshaled_com& marshaled, NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_mInitializationCallback_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tDE6242754045E413334AD30795D5F15C91E26560>(marshaled.___mInitializationCallback_2, Action_1_tDE6242754045E413334AD30795D5F15C91E26560_il2cpp_TypeInfo_var));
	int64_t unmarshaled_mLocalClientId_temp_1 = 0;
	unmarshaled_mLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.set_mLocalClientId_3(unmarshaled_mLocalClientId_temp_1);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshal_com_cleanup(NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_mFDA90374757A91E337CC7777672AE02A19B09CC3 (NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 * __this, Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * ___callback0, int64_t ___localClientId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyConnectionConfiguration__ctor_mFDA90374757A91E337CC7777672AE02A19B09CC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mInitializationCallback = Misc.CheckNotNull(callback);
		Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * L_0 = ___callback0;
		Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * L_1 = Misc_CheckNotNull_TisAction_1_tDE6242754045E413334AD30795D5F15C91E26560_m757427E0860DFA4D6FA210321FE76CCFA96572AD(L_0, /*hidden argument*/Misc_CheckNotNull_TisAction_1_tDE6242754045E413334AD30795D5F15C91E26560_m757427E0860DFA4D6FA210321FE76CCFA96572AD_RuntimeMethod_var);
		__this->set_mInitializationCallback_2(L_1);
		// this.mLocalClientId = localClientId;
		int64_t L_2 = ___localClientId1;
		__this->set_mLocalClientId_3(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NearbyConnectionConfiguration__ctor_mFDA90374757A91E337CC7777672AE02A19B09CC3_AdjustorThunk (RuntimeObject * __this, Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * ___callback0, int64_t ___localClientId1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 * _thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 *>(__this + _offset);
	NearbyConnectionConfiguration__ctor_mFDA90374757A91E337CC7777672AE02A19B09CC3(_thisAdjusted, ___callback0, ___localClientId1, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_mDF7DF1320B4FEF3BB68A5F184B251EDF19B9633D (NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 * __this, const RuntimeMethod* method)
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->get_mLocalClientId_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t NearbyConnectionConfiguration_get_LocalClientId_mDF7DF1320B4FEF3BB68A5F184B251EDF19B9633D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 * _thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 *>(__this + _offset);
	return NearbyConnectionConfiguration_get_LocalClientId_mDF7DF1320B4FEF3BB68A5F184B251EDF19B9633D_inline(_thisAdjusted, method);
}
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * NearbyConnectionConfiguration_get_InitializationCallback_m238EE0F34561305733D7CCA6DF25C89FB6EBFDB6 (NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 * __this, const RuntimeMethod* method)
{
	{
		// get { return mInitializationCallback; }
		Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * L_0 = __this->get_mInitializationCallback_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * NearbyConnectionConfiguration_get_InitializationCallback_m238EE0F34561305733D7CCA6DF25C89FB6EBFDB6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 * _thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 *>(__this + _offset);
	return NearbyConnectionConfiguration_get_InitializationCallback_m238EE0F34561305733D7CCA6DF25C89FB6EBFDB6_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.BasicApi.Player::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m2124CC56A8B3B0248473AFE600F764A752D663B9 (Player_tEC085BE46190556937E5B56A0C781F2EA63AD330 * __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const RuntimeMethod* method)
{
	{
		// : base(displayName, playerId, avatarUrl)
		String_t* L_0 = ___displayName0;
		String_t* L_1 = ___playerId1;
		String_t* L_2 = ___avatarUrl2;
		PlayGamesUserProfile__ctor_mBC5DC79E15562EBA605FCC9872116A801391D286(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
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
// System.Void GooglePlayGames.BasicApi.PlayerProfile::.ctor(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProfile__ctor_m07F575EBDFA38B347B39FB1072E6A361FB24FA81 (PlayerProfile_tA0DF9F1A43E6DD0142622D5A3CEE428386B1D356 * __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, bool ___isFriend3, const RuntimeMethod* method)
{
	{
		// internal PlayerProfile(string displayName, string playerId, string avatarUrl, bool isFriend) : base(displayName,
		//     playerId, avatarUrl, isFriend)
		String_t* L_0 = ___displayName0;
		String_t* L_1 = ___playerId1;
		String_t* L_2 = ___avatarUrl2;
		bool L_3 = ___isFriend3;
		PlayGamesUserProfile__ctor_m58838C94FC3EECCAB247B090632CCBC8A39BA08B(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
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
// System.Void GooglePlayGames.BasicApi.PlayerStats::.ctor(System.Int32,System.Single,System.Int32,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_m83A3F6F6A28FE9ABADDF24504A1407C4D9726195 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, int32_t ___numberOfPurchases0, float ___avgSessionLength1, int32_t ___daysSinceLastPlayed2, int32_t ___numberOfSessions3, float ___sessPercentile4, float ___spendPercentile5, float ___spendProbability6, float ___churnProbability7, float ___highSpenderProbability8, float ___totalSpendNext28Days9, const RuntimeMethod* method)
{
	{
		// public PlayerStats(
		//     int numberOfPurchases,
		//     float avgSessionLength,
		//     int daysSinceLastPlayed,
		//     int numberOfSessions,
		//     float sessPercentile,
		//     float spendPercentile,
		//     float spendProbability,
		//     float churnProbability,
		//     float highSpenderProbability,
		//     float totalSpendNext28Days)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// mValid = true;
		__this->set_mValid_1((bool)1);
		// mNumberOfPurchases = numberOfPurchases;
		int32_t L_0 = ___numberOfPurchases0;
		__this->set_mNumberOfPurchases_2(L_0);
		// mAvgSessionLength = avgSessionLength;
		float L_1 = ___avgSessionLength1;
		__this->set_mAvgSessionLength_3(L_1);
		// mDaysSinceLastPlayed = daysSinceLastPlayed;
		int32_t L_2 = ___daysSinceLastPlayed2;
		__this->set_mDaysSinceLastPlayed_4(L_2);
		// mNumberOfSessions = numberOfSessions;
		int32_t L_3 = ___numberOfSessions3;
		__this->set_mNumberOfSessions_5(L_3);
		// mSessPercentile = sessPercentile;
		float L_4 = ___sessPercentile4;
		__this->set_mSessPercentile_6(L_4);
		// mSpendPercentile = spendPercentile;
		float L_5 = ___spendPercentile5;
		__this->set_mSpendPercentile_7(L_5);
		// mSpendProbability = spendProbability;
		float L_6 = ___spendProbability6;
		__this->set_mSpendProbability_8(L_6);
		// mChurnProbability = churnProbability;
		float L_7 = ___churnProbability7;
		__this->set_mChurnProbability_9(L_7);
		// mHighSpenderProbability = highSpenderProbability;
		float L_8 = ___highSpenderProbability8;
		__this->set_mHighSpenderProbability_10(L_8);
		// mTotalSpendNext28Days = totalSpendNext28Days;
		float L_9 = ___totalSpendNext28Days9;
		__this->set_mTotalSpendNext28Days_11(L_9);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayerStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_m4CE96B7D947FBF1805FF5359E3E6A7B5AC230AC6 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// public PlayerStats()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// mValid = false;
		__this->set_mValid_1((bool)0);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::get_Valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_get_Valid_mB3B4331BFF027A3032C147C54B3269DDAB950415 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mValid; }
		bool L_0 = __this->get_mValid_1();
		return L_0;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfPurchases_m2786DD8D09E724CE36E5C7140AD6941F310C260B (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mNumberOfPurchases; }
		int32_t L_0 = __this->get_mNumberOfPurchases_2();
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_AvgSessionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_AvgSessionLength_m3D1026BBBE289920FC63D66E25493D4E41B6493F (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mAvgSessionLength; }
		float L_0 = __this->get_mAvgSessionLength_3();
		return L_0;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_DaysSinceLastPlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_DaysSinceLastPlayed_mD0AD42400A02E5F9AF7663233E691E0534E81FE0 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mDaysSinceLastPlayed; }
		int32_t L_0 = __this->get_mDaysSinceLastPlayed_4();
		return L_0;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfSessions_mDF118213EB69370DE9F6DC3CF17D234F3D09752B (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mNumberOfSessions; }
		int32_t L_0 = __this->get_mNumberOfSessions_5();
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SessPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SessPercentile_m101508C74B3BD4C7A1FD9D172851AADA57D6E843 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mSessPercentile; }
		float L_0 = __this->get_mSessPercentile_6();
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendPercentile_m8AF85C40471ED614A74C4CD6B7AFA0884E756AEA (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mSpendPercentile; }
		float L_0 = __this->get_mSpendPercentile_7();
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendProbability_m507D4D32D4F593E6948FF1FCB9861C2BA0921779 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mSpendProbability; }
		float L_0 = __this->get_mSpendProbability_8();
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_ChurnProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_ChurnProbability_m9694B5A208DB5C2FD12A817308638C77D5E9E507 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mChurnProbability; }
		float L_0 = __this->get_mChurnProbability_9();
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_HighSpenderProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_HighSpenderProbability_m10487ADE09B113FBB39257A7F975F8DE59028016 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mHighSpenderProbability; }
		float L_0 = __this->get_mHighSpenderProbability_10();
		return L_0;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_TotalSpendNext28Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_TotalSpendNext28Days_m70368E16B96A148A2D3AE30976EE741A0F0CE5DE (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mTotalSpendNext28Days; }
		float L_0 = __this->get_mTotalSpendNext28Days_11();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasNumberOfPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasNumberOfPurchases_m2E5A3F213DD84854C338AFB08CBFB25309BA2445 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerStats_HasNumberOfPurchases_m2E5A3F213DD84854C338AFB08CBFB25309BA2445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NumberOfPurchases != (int) UNSET_VALUE;
		int32_t L_0 = PlayerStats_get_NumberOfPurchases_m2786DD8D09E724CE36E5C7140AD6941F310C260B_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var))->get_UNSET_VALUE_0();
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(((int32_t)((int32_t)L_1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasAvgSessionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasAvgSessionLength_mC7AA15B2945D16E1C6CDECE9852FBE61084A30AE (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerStats_HasAvgSessionLength_mC7AA15B2945D16E1C6CDECE9852FBE61084A30AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AvgSessionLength != UNSET_VALUE;
		float L_0 = PlayerStats_get_AvgSessionLength_m3D1026BBBE289920FC63D66E25493D4E41B6493F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var))->get_UNSET_VALUE_0();
		return (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasDaysSinceLastPlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasDaysSinceLastPlayed_m0631083EDF39403B0BD5AD5B20F1FC9492D2FE41 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerStats_HasDaysSinceLastPlayed_m0631083EDF39403B0BD5AD5B20F1FC9492D2FE41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DaysSinceLastPlayed != (int) UNSET_VALUE;
		int32_t L_0 = PlayerStats_get_DaysSinceLastPlayed_mD0AD42400A02E5F9AF7663233E691E0534E81FE0_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var))->get_UNSET_VALUE_0();
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(((int32_t)((int32_t)L_1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasNumberOfSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasNumberOfSessions_m6017170E2B835EFBD864173EAAFC71EEDAD27A28 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerStats_HasNumberOfSessions_m6017170E2B835EFBD864173EAAFC71EEDAD27A28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NumberOfSessions != (int) UNSET_VALUE;
		int32_t L_0 = PlayerStats_get_NumberOfSessions_mDF118213EB69370DE9F6DC3CF17D234F3D09752B_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var))->get_UNSET_VALUE_0();
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(((int32_t)((int32_t)L_1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasSessPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasSessPercentile_mF20D09EF69C9B2F3EDD3FA7D33CD11526412C402 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerStats_HasSessPercentile_mF20D09EF69C9B2F3EDD3FA7D33CD11526412C402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SessPercentile != UNSET_VALUE;
		float L_0 = PlayerStats_get_SessPercentile_m101508C74B3BD4C7A1FD9D172851AADA57D6E843_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var))->get_UNSET_VALUE_0();
		return (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasSpendPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasSpendPercentile_m0B3C7E7F9DE16DF44D53FBEBBA1166EBA7E8619F (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerStats_HasSpendPercentile_m0B3C7E7F9DE16DF44D53FBEBBA1166EBA7E8619F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SpendPercentile != UNSET_VALUE;
		float L_0 = PlayerStats_get_SpendPercentile_m8AF85C40471ED614A74C4CD6B7AFA0884E756AEA_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var))->get_UNSET_VALUE_0();
		return (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasChurnProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasChurnProbability_mC3AAB77A62710A3F43E7FE7EE65DD41D065B8518 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerStats_HasChurnProbability_mC3AAB77A62710A3F43E7FE7EE65DD41D065B8518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ChurnProbability != UNSET_VALUE;
		float L_0 = PlayerStats_get_ChurnProbability_m9694B5A208DB5C2FD12A817308638C77D5E9E507_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var))->get_UNSET_VALUE_0();
		return (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasHighSpenderProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasHighSpenderProbability_m842738D0AAB366BB1E2A92A7F8BEFA65D1AA2128 (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerStats_HasHighSpenderProbability_m842738D0AAB366BB1E2A92A7F8BEFA65D1AA2128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return HighSpenderProbability != UNSET_VALUE;
		float L_0 = PlayerStats_get_HighSpenderProbability_m10487ADE09B113FBB39257A7F975F8DE59028016_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var))->get_UNSET_VALUE_0();
		return (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasTotalSpendNext28Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasTotalSpendNext28Days_m44A4D9C5FAF5F2B7A1B01BA04C757807ED7D322D (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerStats_HasTotalSpendNext28Days_m44A4D9C5FAF5F2B7A1B01BA04C757807ED7D322D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TotalSpendNext28Days != UNSET_VALUE;
		float L_0 = PlayerStats_get_TotalSpendNext28Days_m70368E16B96A148A2D3AE30976EE741A0F0CE5DE_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var))->get_UNSET_VALUE_0();
		return (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void GooglePlayGames.BasicApi.PlayerStats::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__cctor_m99703F0739E3F8DB826BECAF5D4A9CED2508FECB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerStats__cctor_m99703F0739E3F8DB826BECAF5D4A9CED2508FECB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static float UNSET_VALUE = -1.0f;
		((PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var))->set_UNSET_VALUE_0((-1.0f));
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
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback__ctor_m68766ED9BC6EF67B82579FCE5B9BD2CBAED0A3EB (ConflictCallback_tA93142401005301ACAEAD0A56454A0CA9AAD7A5C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::Invoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_Invoke_m7A99CA983793616C9ABA8EA5BD471731BD9B2B77 (ConflictCallback_tA93142401005301ACAEAD0A56454A0CA9AAD7A5C * __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___unmergedData4, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
			}
		}
		else if (___parameterCount != 5)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(targetMethod, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
					else
						GenericVirtActionInvoker4< RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(targetMethod, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
					else
						VirtActionInvoker4< RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___original1) - 1), ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(targetMethod, targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
					else
						GenericVirtActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(targetMethod, targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
					else
						VirtActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___resolver0) - 1), ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, RuntimeObject*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.BasicApi.SavedGame.ConflictCallback::BeginInvoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConflictCallback_BeginInvoke_m607B57CA3205C95800700F8C2D909368DB47E2D5 (ConflictCallback_tA93142401005301ACAEAD0A56454A0CA9AAD7A5C * __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___unmergedData4, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	void *__d_args[6] = {0};
	__d_args[0] = ___resolver0;
	__d_args[1] = ___original1;
	__d_args[2] = ___originalData2;
	__d_args[3] = ___unmerged3;
	__d_args[4] = ___unmergedData4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_EndInvoke_mFBA14FB0445A56F56F1AEE0023DDE895AF153C14 (ConflictCallback_tA93142401005301ACAEAD0A56454A0CA9AAD7A5C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshal_pinvoke(const SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88& unmarshaled, SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshal_pinvoke_back(const SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshaled_pinvoke& marshaled, SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshal_pinvoke_cleanup(SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshal_com(const SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88& unmarshaled, SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshal_com_back(const SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshaled_com& marshaled, SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshal_com_cleanup(SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_m376BFB7E47F7CF878DEB4C7BB3F5AD01A638ECF1 (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  ___builder0, const RuntimeMethod* method)
{
	{
		// mDescriptionUpdated = builder.mDescriptionUpdated;
		Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  L_0 = ___builder0;
		bool L_1 = L_0.get_mDescriptionUpdated_0();
		__this->set_mDescriptionUpdated_0(L_1);
		// mNewDescription = builder.mNewDescription;
		Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  L_2 = ___builder0;
		String_t* L_3 = L_2.get_mNewDescription_1();
		__this->set_mNewDescription_1(L_3);
		// mCoverImageUpdated = builder.mCoverImageUpdated;
		Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  L_4 = ___builder0;
		bool L_5 = L_4.get_mCoverImageUpdated_2();
		__this->set_mCoverImageUpdated_2(L_5);
		// mNewPngCoverImage = builder.mNewPngCoverImage;
		Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  L_6 = ___builder0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_6.get_mNewPngCoverImage_3();
		__this->set_mNewPngCoverImage_3(L_7);
		// mNewPlayedTime = builder.mNewPlayedTime;
		Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  L_8 = ___builder0;
		Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  L_9 = L_8.get_mNewPlayedTime_4();
		__this->set_mNewPlayedTime_4(L_9);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SavedGameMetadataUpdate__ctor_m376BFB7E47F7CF878DEB4C7BB3F5AD01A638ECF1_AdjustorThunk (RuntimeObject * __this, Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  ___builder0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 *>(__this + _offset);
	SavedGameMetadataUpdate__ctor_m376BFB7E47F7CF878DEB4C7BB3F5AD01A638ECF1(_thisAdjusted, ___builder0, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mF77E5D0BB4D0B8AC1D267A23BD823B3F0F0539D8 (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method)
{
	{
		// get { return mDescriptionUpdated; }
		bool L_0 = __this->get_mDescriptionUpdated_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mF77E5D0BB4D0B8AC1D267A23BD823B3F0F0539D8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 *>(__this + _offset);
	return SavedGameMetadataUpdate_get_IsDescriptionUpdated_mF77E5D0BB4D0B8AC1D267A23BD823B3F0F0539D8_inline(_thisAdjusted, method);
}
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_mC960B1D201FAA84C12C6BF1B420348F471B03347 (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method)
{
	{
		// get { return mNewDescription; }
		String_t* L_0 = __this->get_mNewDescription_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* SavedGameMetadataUpdate_get_UpdatedDescription_mC960B1D201FAA84C12C6BF1B420348F471B03347_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 *>(__this + _offset);
	return SavedGameMetadataUpdate_get_UpdatedDescription_mC960B1D201FAA84C12C6BF1B420348F471B03347_inline(_thisAdjusted, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m40232FA73FE3B441A77A1ECD98DAA784ADA619C2 (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method)
{
	{
		// get { return mCoverImageUpdated; }
		bool L_0 = __this->get_mCoverImageUpdated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m40232FA73FE3B441A77A1ECD98DAA784ADA619C2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 *>(__this + _offset);
	return SavedGameMetadataUpdate_get_IsCoverImageUpdated_m40232FA73FE3B441A77A1ECD98DAA784ADA619C2_inline(_thisAdjusted, method);
}
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m9581F7F39E52C1CB947A862A6004C7E5B67031E5 (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method)
{
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_mNewPngCoverImage_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m9581F7F39E52C1CB947A862A6004C7E5B67031E5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 *>(__this + _offset);
	return SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m9581F7F39E52C1CB947A862A6004C7E5B67031E5_inline(_thisAdjusted, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m64C30F7658FADC6997383E92C290D93209118006 (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m64C30F7658FADC6997383E92C290D93209118006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return mNewPlayedTime.HasValue; }
		Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 * L_0 = __this->get_address_of_mNewPlayedTime_4();
		bool L_1 = Nullable_1_get_HasValue_m619F23350E60DA452BA9F320E9EA38E1D933663D_inline((Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m619F23350E60DA452BA9F320E9EA38E1D933663D_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m64C30F7658FADC6997383E92C290D93209118006_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 *>(__this + _offset);
	return SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m64C30F7658FADC6997383E92C290D93209118006(_thisAdjusted, method);
}
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  SavedGameMetadataUpdate_get_UpdatedPlayedTime_m5DAE25C34FA3EB0FFEB797C9BB40E5685B5DE81C (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method)
{
	{
		// get { return mNewPlayedTime; }
		Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  L_0 = __this->get_mNewPlayedTime_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  SavedGameMetadataUpdate_get_UpdatedPlayedTime_m5DAE25C34FA3EB0FFEB797C9BB40E5685B5DE81C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * _thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 *>(__this + _offset);
	return SavedGameMetadataUpdate_get_UpdatedPlayedTime_m5DAE25C34FA3EB0FFEB797C9BB40E5685B5DE81C_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshal_pinvoke(const Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349& unmarshaled, Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshal_pinvoke_back(const Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshaled_pinvoke& marshaled, Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshal_pinvoke_cleanup(Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshal_com(const Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349& unmarshaled, Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshal_com_back(const Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshaled_com& marshaled, Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshal_com_cleanup(Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349_marshaled_com& marshaled)
{
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  Builder_WithUpdatedDescription_m72B2D15D49A273E16DE3D344D462AE44125317AF (Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 * __this, String_t* ___description0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_WithUpdatedDescription_m72B2D15D49A273E16DE3D344D462AE44125317AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mNewDescription = Misc.CheckNotNull(description);
		String_t* L_0 = ___description0;
		String_t* L_1 = Misc_CheckNotNull_TisString_t_mBF7D95230A17BD67598E68FF9EB8B16D51285F6E(L_0, /*hidden argument*/Misc_CheckNotNull_TisString_t_mBF7D95230A17BD67598E68FF9EB8B16D51285F6E_RuntimeMethod_var);
		__this->set_mNewDescription_1(L_1);
		// mDescriptionUpdated = true;
		__this->set_mDescriptionUpdated_0((bool)1);
		// return this;
		Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  L_2 = (*(Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 *)__this);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  Builder_WithUpdatedDescription_m72B2D15D49A273E16DE3D344D462AE44125317AF_AdjustorThunk (RuntimeObject * __this, String_t* ___description0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 * _thisAdjusted = reinterpret_cast<Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 *>(__this + _offset);
	return Builder_WithUpdatedDescription_m72B2D15D49A273E16DE3D344D462AE44125317AF(_thisAdjusted, ___description0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  Builder_WithUpdatedPngCoverImage_m7A34E933878860E461203C7DF390AEB1377F17ED (Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___newPngCoverImage0, const RuntimeMethod* method)
{
	{
		// mCoverImageUpdated = true;
		__this->set_mCoverImageUpdated_2((bool)1);
		// mNewPngCoverImage = newPngCoverImage;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___newPngCoverImage0;
		__this->set_mNewPngCoverImage_3(L_0);
		// return this;
		Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  L_1 = (*(Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 *)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  Builder_WithUpdatedPngCoverImage_m7A34E933878860E461203C7DF390AEB1377F17ED_AdjustorThunk (RuntimeObject * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___newPngCoverImage0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 * _thisAdjusted = reinterpret_cast<Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 *>(__this + _offset);
	return Builder_WithUpdatedPngCoverImage_m7A34E933878860E461203C7DF390AEB1377F17ED(_thisAdjusted, ___newPngCoverImage0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  Builder_WithUpdatedPlayedTime_m8BC1639B83FF60BC95A316148241A44224641CBB (Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___newPlayedTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_WithUpdatedPlayedTime_m8BC1639B83FF60BC95A316148241A44224641CBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (newPlayedTime.TotalMilliseconds > ulong.MaxValue)
		double L_0 = TimeSpan_get_TotalMilliseconds_m48B00B27D485CC556C10A5119BC11E1A1E0FE363((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&___newPlayedTime0), /*hidden argument*/NULL);
		if ((!(((double)L_0) > ((double)(1.8446744073709552E+19)))))
		{
			goto IL_001d;
		}
	}
	{
		// throw new InvalidOperationException("Timespans longer than ulong.MaxValue " +
		//                                     "milliseconds are not allowed");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteral394E68F963EACC7FF630DAEC06B6F196322850F0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Builder_WithUpdatedPlayedTime_m8BC1639B83FF60BC95A316148241A44224641CBB_RuntimeMethod_var);
	}

IL_001d:
	{
		// mNewPlayedTime = newPlayedTime;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_2 = ___newPlayedTime0;
		Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_m99DC0DFF0CCF30E4DFFED5F8F7ABE8721B73B56D((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m99DC0DFF0CCF30E4DFFED5F8F7ABE8721B73B56D_RuntimeMethod_var);
		__this->set_mNewPlayedTime_4(L_3);
		// return this;
		Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  L_4 = (*(Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 *)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  Builder_WithUpdatedPlayedTime_m8BC1639B83FF60BC95A316148241A44224641CBB_AdjustorThunk (RuntimeObject * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___newPlayedTime0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 * _thisAdjusted = reinterpret_cast<Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 *>(__this + _offset);
	return Builder_WithUpdatedPlayedTime_m8BC1639B83FF60BC95A316148241A44224641CBB(_thisAdjusted, ___newPlayedTime0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88  Builder_Build_mA2EB5CA8B3C55CB227B9C647F03A1F50A40CECF7 (Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 * __this, const RuntimeMethod* method)
{
	{
		// return new SavedGameMetadataUpdate(this);
		Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349  L_0 = (*(Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 *)__this);
		SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88  L_1;
		memset((&L_1), 0, sizeof(L_1));
		SavedGameMetadataUpdate__ctor_m376BFB7E47F7CF878DEB4C7BB3F5AD01A638ECF1((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88  Builder_Build_mA2EB5CA8B3C55CB227B9C647F03A1F50A40CECF7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 * _thisAdjusted = reinterpret_cast<Builder_t6B0A58EB4FA782F4941BE8B7A76D98037E3B2349 *>(__this + _offset);
	return Builder_Build_mA2EB5CA8B3C55CB227B9C647F03A1F50A40CECF7(_thisAdjusted, method);
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
// System.Void GooglePlayGames.BasicApi.ScorePageToken::.ctor(System.Object,System.String,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,GooglePlayGames.BasicApi.ScorePageDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorePageToken__ctor_mEEBD53B8CA59C5E6F2A8A6F761980ED671B24E41 (ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * __this, RuntimeObject * ___internalObject0, String_t* ___id1, int32_t ___collection2, int32_t ___timespan3, int32_t ___direction4, const RuntimeMethod* method)
{
	{
		// internal ScorePageToken(object internalObject, string id,
		//     LeaderboardCollection collection, LeaderboardTimeSpan timespan,
		//     ScorePageDirection direction)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// mInternalObject = internalObject;
		RuntimeObject * L_0 = ___internalObject0;
		__this->set_mInternalObject_1(L_0);
		// mId = id;
		String_t* L_1 = ___id1;
		__this->set_mId_0(L_1);
		// mCollection = collection;
		int32_t L_2 = ___collection2;
		__this->set_mCollection_2(L_2);
		// mTimespan = timespan;
		int32_t L_3 = ___timespan3;
		__this->set_mTimespan_3(L_3);
		// mDirection = direction;
		int32_t L_4 = ___direction4;
		__this->set_mDirection_4(L_4);
		// }
		return;
	}
}
// GooglePlayGames.BasicApi.LeaderboardCollection GooglePlayGames.BasicApi.ScorePageToken::get_Collection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Collection_mBB1A92F3064F9CE3EA5A3D4F8310ED3663FFAA84 (ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * __this, const RuntimeMethod* method)
{
	{
		// get { return mCollection; }
		int32_t L_0 = __this->get_mCollection_2();
		return L_0;
	}
}
// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::get_TimeSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_TimeSpan_m5C557FFF9006967083884CCE5017401AE1025AC7 (ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * __this, const RuntimeMethod* method)
{
	{
		// get { return mTimespan; }
		int32_t L_0 = __this->get_mTimespan_3();
		return L_0;
	}
}
// GooglePlayGames.BasicApi.ScorePageDirection GooglePlayGames.BasicApi.ScorePageToken::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Direction_m3D9256BC3EF9F86200F77D59F944644A7B52B351 (ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * __this, const RuntimeMethod* method)
{
	{
		// get { return mDirection; }
		int32_t L_0 = __this->get_mDirection_4();
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.ScorePageToken::get_LeaderboardId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_mFBD3A842071873B293ACE081BB1E0C668CA61F8C (ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * __this, const RuntimeMethod* method)
{
	{
		// get { return mId; }
		String_t* L_0 = __this->get_mId_0();
		return L_0;
	}
}
// System.Object GooglePlayGames.BasicApi.ScorePageToken::get_InternalObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScorePageToken_get_InternalObject_mF0E253AEBE419928A93187811F15C99E5E37D2C7 (ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * __this, const RuntimeMethod* method)
{
	{
		// get { return mInternalObject; }
		RuntimeObject * L_0 = __this->get_mInternalObject_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean GooglePlayGames.GameInfo::ApplicationIdInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameInfo_ApplicationIdInitialized_m757153A0CC983D0372E845491E455030028FA0AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameInfo_ApplicationIdInitialized_m757153A0CC983D0372E845491E455030028FA0AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !string.IsNullOrEmpty(ApplicationId) && !ApplicationId.Equals(ToEscapedToken(UnescapedApplicationId));
		bool L_0 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(_stringLiteralEDD743AB526ABF48A421AB5F27778A6DBD99C337, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_1 = GameInfo_ToEscapedToken_mAB346F25B433299A9CF0AE2596A0236CDA3DA364(_stringLiteral4F6EFCDA7C9B006C9C3205C1C2A919389BCA11E9, /*hidden argument*/NULL);
		NullCheck(_stringLiteralEDD743AB526ABF48A421AB5F27778A6DBD99C337);
		bool L_2 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(_stringLiteralEDD743AB526ABF48A421AB5F27778A6DBD99C337, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean GooglePlayGames.GameInfo::IosClientIdInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameInfo_IosClientIdInitialized_m07AAD9A756FBC802E1F336135D87C63283A4B392 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameInfo_IosClientIdInitialized_m07AAD9A756FBC802E1F336135D87C63283A4B392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !string.IsNullOrEmpty(IosClientId) && !IosClientId.Equals(ToEscapedToken(UnescapedIosClientId));
		bool L_0 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(_stringLiteral7E6A906EBD182A75C4DF32385EF4566B6A013875, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_1 = GameInfo_ToEscapedToken_mAB346F25B433299A9CF0AE2596A0236CDA3DA364(_stringLiteral560C26FE6FCF8DBF7B06B408FBEF2EF44165994B, /*hidden argument*/NULL);
		NullCheck(_stringLiteral7E6A906EBD182A75C4DF32385EF4566B6A013875);
		bool L_2 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(_stringLiteral7E6A906EBD182A75C4DF32385EF4566B6A013875, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean GooglePlayGames.GameInfo::WebClientIdInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameInfo_WebClientIdInitialized_mCB172D29155845DCD5CDA376CC4B726AD8CE9095 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameInfo_WebClientIdInitialized_mCB172D29155845DCD5CDA376CC4B726AD8CE9095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !string.IsNullOrEmpty(WebClientId) && !WebClientId.Equals(ToEscapedToken(UnescapedWebClientId));
		bool L_0 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(_stringLiteral0F4909A702426B8182ABC533C057778C970ED140, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_1 = GameInfo_ToEscapedToken_mAB346F25B433299A9CF0AE2596A0236CDA3DA364(_stringLiteral92466044BE8828F7CBF871886193300039875716, /*hidden argument*/NULL);
		NullCheck(_stringLiteral0F4909A702426B8182ABC533C057778C970ED140);
		bool L_2 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(_stringLiteral0F4909A702426B8182ABC533C057778C970ED140, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean GooglePlayGames.GameInfo::NearbyConnectionsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameInfo_NearbyConnectionsInitialized_mB264D508F6FC472857FD16296B6E4BE82CF494E4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameInfo_NearbyConnectionsInitialized_mB264D508F6FC472857FD16296B6E4BE82CF494E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !string.IsNullOrEmpty(NearbyConnectionServiceId) &&
		//  !NearbyConnectionServiceId.Equals(ToEscapedToken(UnescapedNearbyServiceId));
		bool L_0 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_1 = GameInfo_ToEscapedToken_mAB346F25B433299A9CF0AE2596A0236CDA3DA364(_stringLiteral3AB1EF463CB5D9BD4A696C1529FCFFB305C38966, /*hidden argument*/NULL);
		NullCheck(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		bool L_2 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.String GooglePlayGames.GameInfo::ToEscapedToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameInfo_ToEscapedToken_mAB346F25B433299A9CF0AE2596A0236CDA3DA364 (String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameInfo_ToEscapedToken_mAB346F25B433299A9CF0AE2596A0236CDA3DA364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("__{0}__", token);
		String_t* L_0 = ___token0;
		String_t* L_1 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral14CF01B28794DD054986DF6D399FA914CD7FFA07, L_0, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.NearbyConnectionClientFactory::Create(System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionClientFactory_Create_m5A519A39795A398D0D535D70990334B85051AF4D (Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyConnectionClientFactory_Create_m5A519A39795A398D0D535D70990334B85051AF4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isEditor)
		bool L_0 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.d("Creating INearbyConnection in editor, using DummyClient.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteralF335D59D3B20739338DD89065EC1B9EA1461C385, /*hidden argument*/NULL);
		// callback.Invoke(new GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient());
		Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * L_1 = ___callback0;
		DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 * L_2 = (DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116 *)il2cpp_codegen_object_new(DummyNearbyConnectionClient_tD8C126366D4DC564E6893AFC4FEFF0830154C116_il2cpp_TypeInfo_var);
		DummyNearbyConnectionClient__ctor_mA556C6E4CDB61AF5D90BF9E631052928C7BDE9DF(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_m81E12D38E21332B07DD65B0DEB0D1AEE6A14C2FC(L_1, L_2, /*hidden argument*/Action_1_Invoke_m81E12D38E21332B07DD65B0DEB0D1AEE6A14C2FC_RuntimeMethod_var);
	}

IL_001c:
	{
		// callback.Invoke(new GooglePlayGames.Android.AndroidNearbyConnectionClient());
		Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * L_3 = ___callback0;
		AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967 * L_4 = (AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967 *)il2cpp_codegen_object_new(AndroidNearbyConnectionClient_tEF50E17E34913D96C18DC6F762FF01A3A3C64967_il2cpp_TypeInfo_var);
		AndroidNearbyConnectionClient__ctor_m0B8C1AAF1FAD7F15A6F62D5867DF61F131FCA211(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Action_1_Invoke_m81E12D38E21332B07DD65B0DEB0D1AEE6A14C2FC(L_3, L_4, /*hidden argument*/Action_1_Invoke_m81E12D38E21332B07DD65B0DEB0D1AEE6A14C2FC_RuntimeMethod_var);
		// }
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
// System.Boolean GooglePlayGames.OurUtils.Logger::get_DebugLogEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Logger_get_DebugLogEnabled_m0ABE85CD8B71AE08981813CE350768B0232D2851 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_get_DebugLogEnabled_m0ABE85CD8B71AE08981813CE350768B0232D2851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return debugLogEnabled; }
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		bool L_0 = ((Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields*)il2cpp_codegen_static_fields_for(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var))->get_debugLogEnabled_0();
		return L_0;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::set_DebugLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_set_DebugLogEnabled_m0EF48153D1CEDBCE2F26799B8421D26C2A5B5D17 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_set_DebugLogEnabled_m0EF48153D1CEDBCE2F26799B8421D26C2A5B5D17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { debugLogEnabled = value; }
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		((Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields*)il2cpp_codegen_static_fields_for(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var))->set_debugLogEnabled_0(L_0);
		// set { debugLogEnabled = value; }
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.Logger::get_WarningLogEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Logger_get_WarningLogEnabled_m37DC34DFE14FAD095F259057C8B11671F72CF17D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_get_WarningLogEnabled_m37DC34DFE14FAD095F259057C8B11671F72CF17D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return warningLogEnabled; }
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		bool L_0 = ((Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields*)il2cpp_codegen_static_fields_for(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var))->get_warningLogEnabled_1();
		return L_0;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::set_WarningLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_set_WarningLogEnabled_mE9C7853139E6231CE2C45F0CAFE2ED022C0523F8 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_set_WarningLogEnabled_mE9C7853139E6231CE2C45F0CAFE2ED022C0523F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { warningLogEnabled = value; }
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		((Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields*)il2cpp_codegen_static_fields_for(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var))->set_warningLogEnabled_1(L_0);
		// set { warningLogEnabled = value; }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB (String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4 * L_0 = (U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_m8CDAAD60D031BCBA75BF0F1229C424E470BC4DE4(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4 * L_1 = V_0;
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		L_1->set_msg_0(L_2);
		// if (debugLogEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields*)il2cpp_codegen_static_fields_for(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var))->get_debugLogEnabled_0();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     Debug.Log(ToLogMessage(string.Empty, "DEBUG", msg)));
		U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4 * L_4 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_5 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m3BC1FE5A085027D6B4850FD293B63669EF6B3D1F_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m47E2A7C8D760E4C0C27A0A5505F0E9AB0B7818A5(L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_w_mB0D118831979B2FFAA5E725B1B5CADCEA0474BDA (String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_w_mB0D118831979B2FFAA5E725B1B5CADCEA0474BDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384 * L_0 = (U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_mC60B9055270F6A5317A04FDA24325BCBBCE6CFC6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384 * L_1 = V_0;
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		L_1->set_msg_0(L_2);
		// if (warningLogEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields*)il2cpp_codegen_static_fields_for(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var))->get_warningLogEnabled_1();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     Debug.LogWarning(ToLogMessage("!!!", "WARNING", msg)));
		U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384 * L_4 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_5 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m4476E21137306FE675046B7585BE64132ECC023B_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m47E2A7C8D760E4C0C27A0A5505F0E9AB0B7818A5(L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105 (String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6 * L_0 = (U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10_0__ctor_m2350BB82DF808A8AF971A4B60DD9119CEE5322CC(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6 * L_1 = V_0;
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		L_1->set_msg_0(L_2);
		// if (warningLogEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields*)il2cpp_codegen_static_fields_for(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var))->get_warningLogEnabled_1();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     Debug.LogWarning(ToLogMessage("***", "ERROR", msg)));
		U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6 * L_4 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_5 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m11605B66C0CEDA55DCB7FED4F5EFB63226F94562_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m47E2A7C8D760E4C0C27A0A5505F0E9AB0B7818A5(L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.String GooglePlayGames.OurUtils.Logger::describe(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_describe_mA58EBB7FD1AA87E5DC7873CBCCD77C1889E68886 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_describe_mA58EBB7FD1AA87E5DC7873CBCCD77C1889E68886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return b == null ? "(null)" : "byte[" + b.Length + "]";
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___b0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___b0;
		NullCheck(L_1);
		int32_t L_2 = (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteralD5C6A5F48C3935F1D696BB81558492909CB4F13C, L_3, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1, /*hidden argument*/NULL);
		return L_4;
	}

IL_001b:
	{
		return _stringLiteralFDE49AA00F4966A6ABC348B5B3B985032EABF411;
	}
}
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_ToLogMessage_m78ABC91BF809D11B0AFBBF8C6C1DCB08A98384C4 (String_t* ___prefix0, String_t* ___logType1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_ToLogMessage_m78ABC91BF809D11B0AFBBF8C6C1DCB08A98384C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B4_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B3_0 = NULL;
	{
		// string timeString = null;
		V_0 = (String_t*)NULL;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		// timeString = DateTime.Now.ToString("MM/dd/yy H:mm:ss zzz");
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), _stringLiteral689B3D123355CBA2415D4FE457847D53ED8ADB52, /*hidden argument*/NULL);
		V_0 = L_1;
		// }
		goto IL_0044;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0017;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.Exception)
		{
			// catch (Exception)
			// PlayGamesHelperObject.RunOnGameThread(() =>
			//     Debug.LogWarning("*** [Play Games Plugin " + PluginVersion.VersionString + "] ERROR: Failed to format DateTime.Now"));
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_il2cpp_TypeInfo_var);
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = ((U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_il2cpp_TypeInfo_var))->get_U3CU3E9__12_0_1();
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = L_2;
			G_B3_0 = L_3;
			if (L_3)
			{
				G_B4_0 = L_3;
				goto IL_0037;
			}
		}

IL_0020:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_il2cpp_TypeInfo_var);
			U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99 * L_4 = ((U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_5 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
			Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CToLogMessageU3Eb__12_0_m2DBA88364338E9EC750385E3BC73CD70A75DE33A_RuntimeMethod_var), /*hidden argument*/NULL);
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = L_5;
			((U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_il2cpp_TypeInfo_var))->set_U3CU3E9__12_0_1(L_6);
			G_B4_0 = L_6;
		}

IL_0037:
		{
			IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
			PlayGamesHelperObject_RunOnGameThread_m47E2A7C8D760E4C0C27A0A5505F0E9AB0B7818A5(G_B4_0, /*hidden argument*/NULL);
			// timeString = string.Empty;
			String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			V_0 = L_7;
			// }
			goto IL_0044;
		}
	} // end catch (depth: 1)

IL_0044:
	{
		// return string.Format("{0} [Play Games Plugin " + PluginVersion.VersionString+ "] {1} {2}: {3}",
		//     prefix, timeString, logType, msg);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		String_t* L_10 = ___prefix0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
		String_t* L_12 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_11;
		String_t* L_14 = ___logType1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_13;
		String_t* L_16 = ___msg2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteralD7147AB91B5F9B335C8C8E9BFB9ADAE4B2CACEBA, L_15, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_mE3AB6FD1D8EBBD2ADD09FAD1C2DD623960890B5C (Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__cctor_m1D3F3757361CECC1AD2B47F651DBFADB1937656C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger__cctor_m1D3F3757361CECC1AD2B47F651DBFADB1937656C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool debugLogEnabled = false;
		((Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields*)il2cpp_codegen_static_fields_for(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var))->set_debugLogEnabled_0((bool)0);
		// private static bool warningLogEnabled = true;
		((Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields*)il2cpp_codegen_static_fields_for(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var))->set_warningLogEnabled_1((bool)1);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m365A1F9087A10D047E6F7ACD5CB972286993BA82 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m365A1F9087A10D047E6F7ACD5CB972286993BA82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99 * L_0 = (U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99 *)il2cpp_codegen_object_new(U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m144C7A11DEEC6E86A6FCB65FA763C4FF89421A84(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m144C7A11DEEC6E86A6FCB65FA763C4FF89421A84 (U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c::<ToLogMessage>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CToLogMessageU3Eb__12_0_m2DBA88364338E9EC750385E3BC73CD70A75DE33A (U3CU3Ec_t98A2F3462746E0FF2C6327C14FA9E979AB5C8C99 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CToLogMessageU3Eb__12_0_m2DBA88364338E9EC750385E3BC73CD70A75DE33A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("*** [Play Games Plugin " + PluginVersion.VersionString + "] ERROR: Failed to format DateTime.Now"));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral375C4DA6924C0AD8FA53A816CC8AF64E91D38DEB, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m2350BB82DF808A8AF971A4B60DD9119CEE5322CC (U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::<e>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m11605B66C0CEDA55DCB7FED4F5EFB63226F94562 (U3CU3Ec__DisplayClass10_0_t2F55F09A04BE72ADBE5F431C4C2FFB7544ABDCE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m11605B66C0CEDA55DCB7FED4F5EFB63226F94562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(ToLogMessage("***", "ERROR", msg)));
		String_t* L_0 = __this->get_msg_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		String_t* L_1 = Logger_ToLogMessage_m78ABC91BF809D11B0AFBBF8C6C1DCB08A98384C4(_stringLiteral36C3EAA0E1E290F41E2810BAE8D9502C785E92D9, _stringLiteral0B99CEBE565822C64AC5D84AECB00FE40E59CBD3, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_1, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m8CDAAD60D031BCBA75BF0F1229C424E470BC4DE4 (U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::<d>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m3BC1FE5A085027D6B4850FD293B63669EF6B3D1F (U3CU3Ec__DisplayClass8_0_tD45DCF114CDD78AACF4DE532F66180E4C9FB3AA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m3BC1FE5A085027D6B4850FD293B63669EF6B3D1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(ToLogMessage(string.Empty, "DEBUG", msg)));
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		String_t* L_1 = __this->get_msg_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		String_t* L_2 = Logger_ToLogMessage_m78ABC91BF809D11B0AFBBF8C6C1DCB08A98384C4(L_0, _stringLiteral3F67E8F4EECF241B91F4CC8C976A487ADE34D09D, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mC60B9055270F6A5317A04FDA24325BCBBCE6CFC6 (U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::<w>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m4476E21137306FE675046B7585BE64132ECC023B (U3CU3Ec__DisplayClass9_0_t190FAEB52563392A712A54027FE0318E96604384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m4476E21137306FE675046B7585BE64132ECC023B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(ToLogMessage("!!!", "WARNING", msg)));
		String_t* L_0 = __this->get_msg_0();
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		String_t* L_1 = Logger_ToLogMessage_m78ABC91BF809D11B0AFBBF8C6C1DCB08A98384C4(_stringLiteral9A7B006D203B362C8CEF6DA001685678FC1D463A, _stringLiteralFD3EDC641024A335A508FDACEFB5F51DED5905CC, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_1, /*hidden argument*/NULL);
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
// System.Boolean GooglePlayGames.OurUtils.Misc::BuffersAreIdentical(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Misc_BuffersAreIdentical_m38AB5E208DA2B9BA93FE393B4509BDB6A1A55804 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___a0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (a == b)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___a0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___b1;
		if ((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_0) == ((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0006:
	{
		// if (a == null || b == null)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___a0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___b1;
		if (L_3)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		// return false;
		return (bool)0;
	}

IL_000e:
	{
		// if (a.Length != b.Length)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___a0;
		NullCheck(L_4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___b1;
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0018:
	{
		// for (int i = 0; i < a.Length; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_001c:
	{
		// if (a[i] != b[i])
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___a0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___b1;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_9) == ((int32_t)L_13)))
		{
			goto IL_0026;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0026:
	{
		// for (int i = 0; i < a.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_002a:
	{
		// for (int i = 0; i < a.Length; i++)
		int32_t L_15 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = ___a0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Byte[] GooglePlayGames.OurUtils.Misc::GetSubsetBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Misc_GetSubsetBytes_mA26DDB3F12CB9D2D05B66A5D7293E5C2FBC44002 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Misc_GetSubsetBytes_mA26DDB3F12CB9D2D05B66A5D7293E5C2FBC44002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// if (array == null)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("array");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Misc_GetSubsetBytes_mA26DDB3F12CB9D2D05B66A5D7293E5C2FBC44002_RuntimeMethod_var);
	}

IL_000e:
	{
		// if (offset < 0 || offset >= array.Length)
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___offset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___array0;
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		// throw new ArgumentOutOfRangeException("offset");
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_5, _stringLiteral53A610E925BBC0A175E365D31241AE75AEEAD651, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, Misc_GetSubsetBytes_mA26DDB3F12CB9D2D05B66A5D7293E5C2FBC44002_RuntimeMethod_var);
	}

IL_0023:
	{
		// if (length < 0 || (array.Length - offset) < length)
		int32_t L_6 = ___length2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = ___array0;
		NullCheck(L_7);
		int32_t L_8 = ___offset1;
		int32_t L_9 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))), (int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		// throw new ArgumentOutOfRangeException("length");
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_10 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_10, _stringLiteral3D54973F528B01019A58A52D34D518405A01B891, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, Misc_GetSubsetBytes_mA26DDB3F12CB9D2D05B66A5D7293E5C2FBC44002_RuntimeMethod_var);
	}

IL_003a:
	{
		// if (offset == 0 && length == array.Length)
		int32_t L_11 = ___offset1;
		if (L_11)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_12 = ___length2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = ___array0;
		NullCheck(L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))))
		{
			goto IL_0045;
		}
	}
	{
		// return array;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = ___array0;
		return L_14;
	}

IL_0045:
	{
		// byte[] piece = new byte[length];
		int32_t L_15 = ___length2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_0 = L_16;
		// Array.Copy(array, offset, piece, 0, length);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = ___array0;
		int32_t L_18 = ___offset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = V_0;
		int32_t L_20 = ___length2;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_17, L_18, (RuntimeArray *)(RuntimeArray *)L_19, 0, L_20, /*hidden argument*/NULL);
		// return piece;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_0;
		return L_21;
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
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::CreateObject(GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_CreateObject_m6F42DD6235F40465EEA30D918D521CBEA0E3CE2F (RuntimeObject* ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyHelperObject_CreateObject_m6F42DD6235F40465EEA30D918D521CBEA0E3CE2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * L_0 = ((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// mClient = client;
		RuntimeObject* L_2 = ___client0;
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->set_mClient_7(L_2);
		// if (Application.isPlaying)
		bool L_3 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// GameObject obj = new GameObject("PlayGames_NearbyHelper");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_4, _stringLiteral1FE05B7161F582F6DE27EA0F26FAD26E2788C6A9, /*hidden argument*/NULL);
		// DontDestroyOnLoad(obj);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_5, /*hidden argument*/NULL);
		// instance = obj.AddComponent<NearbyHelperObject>();
		NullCheck(L_5);
		NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * L_6 = GameObject_AddComponent_TisNearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_mD9C39447D72A84DA1D42536B6A1532931A61D971(L_5, /*hidden argument*/GameObject_AddComponent_TisNearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_mD9C39447D72A84DA1D42536B6A1532931A61D971_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->set_instance_4(L_6);
		// }
		return;
	}

IL_0036:
	{
		// instance = new NearbyHelperObject();
		NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * L_7 = (NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 *)il2cpp_codegen_object_new(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		NearbyHelperObject__ctor_mDA7CC825A1D40A665963CA211BBFE486345C0C0F(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->set_instance_4(L_7);
		// }
		return;
	}
}
// System.Double GooglePlayGames.OurUtils.NearbyHelperObject::ToSeconds(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NearbyHelperObject_ToSeconds_m2844A4905B2AEDFBE33EE884DA50B7037BAC68EB (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  ___span0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyHelperObject_ToSeconds_m2844A4905B2AEDFBE33EE884DA50B7037BAC68EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!span.HasValue)
		bool L_0 = Nullable_1_get_HasValue_m619F23350E60DA452BA9F320E9EA38E1D933663D_inline((Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 *)(&___span0), /*hidden argument*/Nullable_1_get_HasValue_m619F23350E60DA452BA9F320E9EA38E1D933663D_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return 0;
		return (0.0);
	}

IL_0013:
	{
		// if (span.Value.TotalSeconds < 0)
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_1 = Nullable_1_get_Value_mBFFFA1BA161F58A43F8D53FFD139F699DDC9D3DB((Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 *)(&___span0), /*hidden argument*/Nullable_1_get_Value_mBFFFA1BA161F58A43F8D53FFD139F699DDC9D3DB_RuntimeMethod_var);
		V_0 = L_1;
		double L_2 = TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((double)L_2) < ((double)(0.0)))))
		{
			goto IL_0037;
		}
	}
	{
		// return 0;
		return (0.0);
	}

IL_0037:
	{
		// return span.Value.TotalSeconds;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_3 = Nullable_1_get_Value_mBFFFA1BA161F58A43F8D53FFD139F699DDC9D3DB((Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 *)(&___span0), /*hidden argument*/Nullable_1_get_Value_mBFFFA1BA161F58A43F8D53FFD139F699DDC9D3DB_RuntimeMethod_var);
		V_0 = L_3;
		double L_4 = TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::StartAdvertisingTimer(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_StartAdvertisingTimer_m513C8FA51E9019B6CCE3FFEA2C663BD43D09D521 (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  ___span0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyHelperObject_StartAdvertisingTimer_m513C8FA51E9019B6CCE3FFEA2C663BD43D09D521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mAdvertisingRemaining = ToSeconds(span);
		Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  L_0 = ___span0;
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		double L_1 = NearbyHelperObject_ToSeconds_m2844A4905B2AEDFBE33EE884DA50B7037BAC68EB(L_0, /*hidden argument*/NULL);
		((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->set_mAdvertisingRemaining_5(L_1);
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::StartDiscoveryTimer(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_StartDiscoveryTimer_m2E8FA1C42C4BC66763F54BFA297D5E9E21213221 (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  ___span0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyHelperObject_StartDiscoveryTimer_m2E8FA1C42C4BC66763F54BFA297D5E9E21213221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mDiscoveryRemaining = ToSeconds(span);
		Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  L_0 = ___span0;
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		double L_1 = NearbyHelperObject_ToSeconds_m2844A4905B2AEDFBE33EE884DA50B7037BAC68EB(L_0, /*hidden argument*/NULL);
		((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->set_mDiscoveryRemaining_6(L_1);
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_Awake_m5724161305417634B3A66F649F119050E684AB0C (NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyHelperObject_Awake_m5724161305417634B3A66F649F119050E684AB0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_OnDisable_m08621A5ABD8344944B84989BF2B9E5A4D09DFCF1 (NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyHelperObject_OnDisable_m08621A5ABD8344944B84989BF2B9E5A4D09DFCF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == this)
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * L_0 = ((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, __this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = null;
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->set_instance_4((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 *)NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_Update_m038826954DF6804A146973ED8C685EF26FAE52E4 (NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NearbyHelperObject_Update_m038826954DF6804A146973ED8C685EF26FAE52E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mAdvertisingRemaining > 0)
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		double L_0 = ((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->get_mAdvertisingRemaining_5();
		if ((!(((double)L_0) > ((double)(0.0)))))
		{
			goto IL_003b;
		}
	}
	{
		// mAdvertisingRemaining -= Time.deltaTime;
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		double L_1 = ((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->get_mAdvertisingRemaining_5();
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->set_mAdvertisingRemaining_5(((double)il2cpp_codegen_subtract((double)L_1, (double)(((double)((double)L_2))))));
		// if (mAdvertisingRemaining < 0)
		double L_3 = ((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->get_mAdvertisingRemaining_5();
		if ((!(((double)L_3) < ((double)(0.0)))))
		{
			goto IL_003b;
		}
	}
	{
		// mClient.StopAdvertising();
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->get_mClient_7();
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(5 /* System.Void GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient::StopAdvertising() */, INearbyConnectionClient_t61EAF447B23ADD646B228E6C8A304C7D32249891_il2cpp_TypeInfo_var, L_4);
	}

IL_003b:
	{
		// if (mDiscoveryRemaining > 0)
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		double L_5 = ((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->get_mDiscoveryRemaining_6();
		if ((!(((double)L_5) > ((double)(0.0)))))
		{
			goto IL_0080;
		}
	}
	{
		// mDiscoveryRemaining -= Time.deltaTime;
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		double L_6 = ((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->get_mDiscoveryRemaining_6();
		float L_7 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->set_mDiscoveryRemaining_6(((double)il2cpp_codegen_subtract((double)L_6, (double)(((double)((double)L_7))))));
		// if (mDiscoveryRemaining < 0)
		double L_8 = ((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->get_mDiscoveryRemaining_6();
		if ((!(((double)L_8) < ((double)(0.0)))))
		{
			goto IL_0080;
		}
	}
	{
		// mClient.StopDiscovery(mClient.GetServiceId());
		IL2CPP_RUNTIME_CLASS_INIT(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->get_mClient_7();
		RuntimeObject* L_10 = ((NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831_il2cpp_TypeInfo_var))->get_mClient_7();
		NullCheck(L_10);
		String_t* L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(14 /* System.String GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient::GetServiceId() */, INearbyConnectionClient_t61EAF447B23ADD646B228E6C8A304C7D32249891_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_9);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient::StopDiscovery(System.String) */, INearbyConnectionClient_t61EAF447B23ADD646B228E6C8A304C7D32249891_il2cpp_TypeInfo_var, L_9, L_11);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject__ctor_mDA7CC825A1D40A665963CA211BBFE486345C0C0F (NearbyHelperObject_tAF0A0B729F5E867CC6C43E1DCF0B2F070D000831 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject__cctor_m6CD9E73F0196683262340CF1B654F846C93609F3 (const RuntimeMethod* method)
{
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
// System.Boolean GooglePlayGames.OurUtils.PlatformUtils::get_Supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformUtils_get_Supported_m0050E2B05E730076B3B5AE2F1A6F06F587DFD8D2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformUtils_get_Supported_m0050E2B05E730076B3B5AE2F1A6F06F587DFD8D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * V_0 = NULL;
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var up = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = (AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE *)il2cpp_codegen_object_new(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mAE416E812DB3911279C0FE87A7760247CE1BBFA8(L_0, _stringLiteralA004F7A71A664C60394CBEBEC2BC71B669D9F986, /*hidden argument*/NULL);
		// var ca = up.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_0);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m944E5987B38F1229EB3E8122E030D0439D4513B0(L_0, _stringLiteral32EAF9220C696B2C222E361F16ACA8FB08EC6083, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m944E5987B38F1229EB3E8122E030D0439D4513B0_RuntimeMethod_var);
		// var packageManager = ca.Call<AndroidJavaObject>("getPackageManager");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m775AB90594C5F27D6099ED61119EF3608FD1001D(L_1, _stringLiteral41CF4D42E6DBF7C4CDEF8EDFDACF196B6F5E031E, L_2, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m775AB90594C5F27D6099ED61119EF3608FD1001D_RuntimeMethod_var);
		V_0 = L_3;
		// AndroidJavaObject launchIntent = null;
		V_1 = (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *)NULL;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		//                    launchIntent =
		// packageManager.Call<AndroidJavaObject>("getLaunchIntentForPackage", "com.google.android.play.games");
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_4 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral100E2A29CB501AB296EB7434C4F0D6860E976B9A);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral100E2A29CB501AB296EB7434C4F0D6860E976B9A);
		NullCheck(L_4);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m775AB90594C5F27D6099ED61119EF3608FD1001D(L_4, _stringLiteral7F76DD2BA1ACC72F5352DB7C2A2823DD47013380, L_6, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m775AB90594C5F27D6099ED61119EF3608FD1001D_RuntimeMethod_var);
		V_1 = L_7;
		// }
		goto IL_0047;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0042;
		throw e;
	}

CATCH_0042:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// return false;
		V_2 = (bool)0;
		goto IL_004c;
	} // end catch (depth: 1)

IL_0047:
	{
		// return launchIntent != null;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_8 = V_1;
		return (bool)((!(((RuntimeObject*)(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_004c:
	{
		// }
		bool L_9 = V_2;
		return L_9;
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
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::CreateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_CreateObject_m6BDF8C70B008B2FC32D832E5C212DEC7BCEF6777 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_CreateObject_m6BDF8C70B008B2FC32D832E5C212DEC7BCEF6777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * L_0 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (Application.isPlaying)
		bool L_2 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// GameObject obj = new GameObject("PlayGames_QueueRunner");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_3, _stringLiteral8BEAF8B48CD239C5B9FD4F82FBBD3B06F143113D, /*hidden argument*/NULL);
		// DontDestroyOnLoad(obj);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_4, /*hidden argument*/NULL);
		// instance = obj.AddComponent<PlayGamesHelperObject>();
		NullCheck(L_4);
		PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * L_5 = GameObject_AddComponent_TisPlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_mC64E1AE4A290D0AF6D4EB5065CC63FCAFC8C846B(L_4, /*hidden argument*/GameObject_AddComponent_TisPlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_mC64E1AE4A290D0AF6D4EB5065CC63FCAFC8C846B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->set_instance_4(L_5);
		// }
		return;
	}

IL_0030:
	{
		// instance = new PlayGamesHelperObject();
		PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * L_6 = (PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 *)il2cpp_codegen_object_new(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		PlayGamesHelperObject__ctor_mF95C6E4A698C4988EB8520F2D1675D642B742CDD(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->set_instance_4(L_6);
		// sIsDummy = true;
		((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->set_sIsDummy_5((bool)1);
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_Awake_m4DACD062DCE9B3DE304056052248C43D87FCCF1B (PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_Awake_m4DACD062DCE9B3DE304056052248C43D87FCCF1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_OnDisable_m70CBD1B2BDAC705712C3CDDCA078D2959501E9D8 (PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_OnDisable_m70CBD1B2BDAC705712C3CDDCA078D2959501E9D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == this)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * L_0 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, __this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = null;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->set_instance_4((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 *)NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunCoroutine_mB4690921986C23904A1C3E6566773DBC191D7BDE (RuntimeObject* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_RunCoroutine_mB4690921986C23904A1C3E6566773DBC191D7BDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8 * L_0 = (U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10_0__ctor_mFAA791F593455783B953151D8AE2EB6A24617687(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8 * L_1 = V_0;
		RuntimeObject* L_2 = ___action0;
		NullCheck(L_1);
		L_1->set_action_0(L_2);
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * L_3 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// RunOnGameThread(() => instance.StartCoroutine(action));
		U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8 * L_5 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_m5F96DF12F191D7EE1A8C4DDE0BB128EAC398E7E4_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_m47E2A7C8D760E4C0C27A0A5505F0E9AB0B7818A5(L_6, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunOnGameThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunOnGameThread_m47E2A7C8D760E4C0C27A0A5505F0E9AB0B7818A5 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_RunOnGameThread_m47E2A7C8D760E4C0C27A0A5505F0E9AB0B7818A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (action == null)
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ___action0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("action");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral34EB4C4EF005207E8B8F916B9F1FFFACCCD6945E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, PlayGamesHelperObject_RunOnGameThread_m47E2A7C8D760E4C0C27A0A5505F0E9AB0B7818A5_RuntimeMethod_var);
	}

IL_000e:
	{
		// if (sIsDummy)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		bool L_2 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sIsDummy_5();
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// lock (sQueue)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_3 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sQueue_6();
		V_0 = L_3;
		V_1 = (bool)0;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_4 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
		// sQueue.Add(action);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_5 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sQueue_6();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = ___action0;
		NullCheck(L_5);
		List_1_Add_mA374038CC7A718F88F0BA10BA4AB0FBB8DCEE158(L_5, L_6, /*hidden argument*/List_1_Add_mA374038CC7A718F88F0BA10BA4AB0FBB8DCEE158_RuntimeMethod_var);
		// sQueueEmpty = false;
		il2cpp_codegen_memory_barrier();
		((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->set_sQueueEmpty_8(0);
		// }
		IL2CPP_LEAVE(0x45, FINALLY_003b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0044;
			}
		}

IL_003e:
		{
			List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_8 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
		}

IL_0044:
		{
			IL2CPP_END_FINALLY(59)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_Update_m41673D887F759D2EE377DD042F28E42BA99C0CD4 (PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_Update_m41673D887F759D2EE377DD042F28E42BA99C0CD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (sIsDummy || sQueueEmpty)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		bool L_0 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sIsDummy_5();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		bool L_1 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sQueueEmpty_8();
		il2cpp_codegen_memory_barrier();
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// localQueue.Clear();
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_2 = __this->get_localQueue_7();
		NullCheck(L_2);
		List_1_Clear_mB415AA0254640EBF623221C95BD23C804ACB1AE9(L_2, /*hidden argument*/List_1_Clear_mB415AA0254640EBF623221C95BD23C804ACB1AE9_RuntimeMethod_var);
		// lock (sQueue)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_3 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sQueue_6();
		V_0 = L_3;
		V_1 = (bool)0;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_4 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
		// localQueue.AddRange(sQueue);
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_5 = __this->get_localQueue_7();
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_6 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sQueue_6();
		NullCheck(L_5);
		List_1_AddRange_mCC8121E1CB0C758B6A446F8C279355529ED476E1(L_5, L_6, /*hidden argument*/List_1_AddRange_mCC8121E1CB0C758B6A446F8C279355529ED476E1_RuntimeMethod_var);
		// sQueue.Clear();
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_7 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sQueue_6();
		NullCheck(L_7);
		List_1_Clear_mB415AA0254640EBF623221C95BD23C804ACB1AE9(L_7, /*hidden argument*/List_1_Clear_mB415AA0254640EBF623221C95BD23C804ACB1AE9_RuntimeMethod_var);
		// sQueueEmpty = true;
		il2cpp_codegen_memory_barrier();
		((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->set_sQueueEmpty_8(1);
		// }
		IL2CPP_LEAVE(0x5A, FINALLY_0050);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_1;
			if (!L_8)
			{
				goto IL_0059;
			}
		}

IL_0053:
		{
			List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_9 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_9, /*hidden argument*/NULL);
		}

IL_0059:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// for (int i = 0; i < localQueue.Count; i++)
		V_2 = 0;
		goto IL_0073;
	}

IL_005e:
	{
		// localQueue[i].Invoke();
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_10 = __this->get_localQueue_7();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_12 = List_1_get_Item_m900B85866FD2558E6CE2725E07AF693C29C19731_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m900B85866FD2558E6CE2725E07AF693C29C19731_RuntimeMethod_var);
		NullCheck(L_12);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_12, /*hidden argument*/NULL);
		// for (int i = 0; i < localQueue.Count; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0073:
	{
		// for (int i = 0; i < localQueue.Count; i++)
		int32_t L_14 = V_2;
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_15 = __this->get_localQueue_7();
		NullCheck(L_15);
		int32_t L_16 = List_1_get_Count_m3986FAACE5FCFF72B7601E768375D65E038FDEDB_inline(L_15, /*hidden argument*/List_1_get_Count_m3986FAACE5FCFF72B7601E768375D65E038FDEDB_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_OnApplicationFocus_m18DDA37DAAF80D47971904F9CCCAB74D6E26E52A (PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * __this, bool ___focused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_OnApplicationFocus_m18DDA37DAAF80D47971904F9CCCAB74D6E26E52A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (Action<bool> cb in sFocusCallbackList)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * L_0 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sFocusCallbackList_10();
		NullCheck(L_0);
		Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE  L_1 = List_1_GetEnumerator_m1A6BEB03A9E4B76F009EACE9E2DC8202C1B00B0D(L_0, /*hidden argument*/List_1_GetEnumerator_m1A6BEB03A9E4B76F009EACE9E2DC8202C1B00B0D_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_000d:
		{
			// foreach (Action<bool> cb in sFocusCallbackList)
			Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = Enumerator_get_Current_mEDF66107B1E3BECA631A37771397FAC62B4BB21B_inline((Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE *)(&V_0), /*hidden argument*/Enumerator_get_Current_mEDF66107B1E3BECA631A37771397FAC62B4BB21B_RuntimeMethod_var);
			V_1 = L_2;
		}

IL_0015:
		try
		{ // begin try (depth: 2)
			// cb(focused);
			Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_3 = V_1;
			bool L_4 = ___focused0;
			NullCheck(L_3);
			Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_3, L_4, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
			// }
			goto IL_0041;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_001e;
			throw e;
		}

CATCH_001e:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_2 = ((Exception_t *)__exception_local);
			// Logger.e("Exception in OnApplicationFocus:" +
			//                e.Message + "\n" + e.StackTrace);
			Exception_t * L_5 = V_2;
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
			Exception_t * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
			String_t* L_9 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral025A63FFA169F26B605C16CA69D0B1E95EC4FB19, L_6, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
			Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(L_9, /*hidden argument*/NULL);
			// }
			goto IL_0041;
		} // end catch (depth: 2)

IL_0041:
		{
			// foreach (Action<bool> cb in sFocusCallbackList)
			bool L_10 = Enumerator_MoveNext_m08F3FE51A64369D57EC067889997CBA5F81DCC73((Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m08F3FE51A64369D57EC067889997CBA5F81DCC73_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_000d;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F7AA651E81830E11A33BA5B2CACFFBE25F610A9((Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0F7AA651E81830E11A33BA5B2CACFFBE25F610A9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_OnApplicationPause_mF574E966DB17462D2ABF890EBD70C289313E3DEC (PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_OnApplicationPause_mF574E966DB17462D2ABF890EBD70C289313E3DEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (Action<bool> cb in sPauseCallbackList)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * L_0 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sPauseCallbackList_9();
		NullCheck(L_0);
		Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE  L_1 = List_1_GetEnumerator_m1A6BEB03A9E4B76F009EACE9E2DC8202C1B00B0D(L_0, /*hidden argument*/List_1_GetEnumerator_m1A6BEB03A9E4B76F009EACE9E2DC8202C1B00B0D_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_000d:
		{
			// foreach (Action<bool> cb in sPauseCallbackList)
			Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = Enumerator_get_Current_mEDF66107B1E3BECA631A37771397FAC62B4BB21B_inline((Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE *)(&V_0), /*hidden argument*/Enumerator_get_Current_mEDF66107B1E3BECA631A37771397FAC62B4BB21B_RuntimeMethod_var);
			V_1 = L_2;
		}

IL_0015:
		try
		{ // begin try (depth: 2)
			// cb(paused);
			Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_3 = V_1;
			bool L_4 = ___paused0;
			NullCheck(L_3);
			Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_3, L_4, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
			// }
			goto IL_0041;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_001e;
			throw e;
		}

CATCH_001e:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_2 = ((Exception_t *)__exception_local);
			// Logger.e("Exception in OnApplicationPause:" +
			//                e.Message + "\n" + e.StackTrace);
			Exception_t * L_5 = V_2;
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
			Exception_t * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
			String_t* L_9 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral58FAF6730CD731832DEB85A8C0E16ACC72A8A179, L_6, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
			Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(L_9, /*hidden argument*/NULL);
			// }
			goto IL_0041;
		} // end catch (depth: 2)

IL_0041:
		{
			// foreach (Action<bool> cb in sPauseCallbackList)
			bool L_10 = Enumerator_MoveNext_m08F3FE51A64369D57EC067889997CBA5F81DCC73((Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m08F3FE51A64369D57EC067889997CBA5F81DCC73_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_000d;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F7AA651E81830E11A33BA5B2CACFFBE25F610A9((Enumerator_t27459B5A39D3647660C4CF7FEC3DECAF818C69DE *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0F7AA651E81830E11A33BA5B2CACFFBE25F610A9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::AddFocusCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_AddFocusCallback_mDFE6AE585703E9471699A61FE564A386068F8FDF (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_AddFocusCallback_mDFE6AE585703E9471699A61FE564A386068F8FDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!sFocusCallbackList.Contains(callback))
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * L_0 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sFocusCallbackList_10();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m1087577496C9953C2B9FE83421C010D93E1E39DE(L_0, L_1, /*hidden argument*/List_1_Contains_m1087577496C9953C2B9FE83421C010D93E1E39DE_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// sFocusCallbackList.Add(callback);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * L_3 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sFocusCallbackList_10();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_4 = ___callback0;
		NullCheck(L_3);
		List_1_Add_mBF59C2344C951987CF2A02BFE8F7F1BF795434FB(L_3, L_4, /*hidden argument*/List_1_Add_mBF59C2344C951987CF2A02BFE8F7F1BF795434FB_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::RemoveFocusCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesHelperObject_RemoveFocusCallback_m18D0D18D0D6C0EA67BBBFF3F77110B24FF9DAE8D (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_RemoveFocusCallback_m18D0D18D0D6C0EA67BBBFF3F77110B24FF9DAE8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return sFocusCallbackList.Remove(callback);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * L_0 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sFocusCallbackList_10();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2 = List_1_Remove_m201C000881D6CDC3645867A7B25986ADF9614086(L_0, L_1, /*hidden argument*/List_1_Remove_m201C000881D6CDC3645867A7B25986ADF9614086_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::AddPauseCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_AddPauseCallback_m379FF1D24DD2FD6CF2C84AE766A6F8CCF215E9D5 (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_AddPauseCallback_m379FF1D24DD2FD6CF2C84AE766A6F8CCF215E9D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!sPauseCallbackList.Contains(callback))
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * L_0 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sPauseCallbackList_9();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m1087577496C9953C2B9FE83421C010D93E1E39DE(L_0, L_1, /*hidden argument*/List_1_Contains_m1087577496C9953C2B9FE83421C010D93E1E39DE_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// sPauseCallbackList.Add(callback);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * L_3 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sPauseCallbackList_9();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_4 = ___callback0;
		NullCheck(L_3);
		List_1_Add_mBF59C2344C951987CF2A02BFE8F7F1BF795434FB(L_3, L_4, /*hidden argument*/List_1_Add_mBF59C2344C951987CF2A02BFE8F7F1BF795434FB_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::RemovePauseCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesHelperObject_RemovePauseCallback_m1FB2B6436D4EB0290D58569DC8B66E179D8D800C (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject_RemovePauseCallback_m1FB2B6436D4EB0290D58569DC8B66E179D8D800C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return sPauseCallbackList.Remove(callback);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * L_0 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_sPauseCallbackList_9();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2 = List_1_Remove_m201C000881D6CDC3645867A7B25986ADF9614086(L_0, L_1, /*hidden argument*/List_1_Remove_m201C000881D6CDC3645867A7B25986ADF9614086_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject__ctor_mF95C6E4A698C4988EB8520F2D1675D642B742CDD (PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject__ctor_mF95C6E4A698C4988EB8520F2D1675D642B742CDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<System.Action> localQueue = new List<System.Action>();
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_0 = (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *)il2cpp_codegen_object_new(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE_il2cpp_TypeInfo_var);
		List_1__ctor_mCA99E3E5D84C3ED79771C17F8FCF9B5795EB0C25(L_0, /*hidden argument*/List_1__ctor_mCA99E3E5D84C3ED79771C17F8FCF9B5795EB0C25_RuntimeMethod_var);
		__this->set_localQueue_7(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject__cctor_mE04951534B5720ABA978F6E65838293D2DA0B6E7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesHelperObject__cctor_mE04951534B5720ABA978F6E65838293D2DA0B6E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static PlayGamesHelperObject instance = null;
		((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->set_instance_4((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 *)NULL);
		// private static bool sIsDummy = false;
		((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->set_sIsDummy_5((bool)0);
		// private static List<System.Action> sQueue = new List<Action>();
		List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE * L_0 = (List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE *)il2cpp_codegen_object_new(List_1_tF4B622C1ABA386932660D23A459A2974FB56E2EE_il2cpp_TypeInfo_var);
		List_1__ctor_mCA99E3E5D84C3ED79771C17F8FCF9B5795EB0C25(L_0, /*hidden argument*/List_1__ctor_mCA99E3E5D84C3ED79771C17F8FCF9B5795EB0C25_RuntimeMethod_var);
		((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->set_sQueue_6(L_0);
		// private volatile static bool sQueueEmpty = true;
		il2cpp_codegen_memory_barrier();
		((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->set_sQueueEmpty_8(1);
		// private static List<Action<bool>> sPauseCallbackList =
		//     new List<Action<bool>>();
		List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * L_1 = (List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 *)il2cpp_codegen_object_new(List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89_il2cpp_TypeInfo_var);
		List_1__ctor_m2806B6CAA6E2D1E105FDA5CCB083EFDD8591339E(L_1, /*hidden argument*/List_1__ctor_m2806B6CAA6E2D1E105FDA5CCB083EFDD8591339E_RuntimeMethod_var);
		((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->set_sPauseCallbackList_9(L_1);
		// private static List<Action<bool>> sFocusCallbackList =
		//     new List<Action<bool>>();
		List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 * L_2 = (List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89 *)il2cpp_codegen_object_new(List_1_tF6FD4CFFD312BA9104E0B9CB1A6620233FEF9E89_il2cpp_TypeInfo_var);
		List_1__ctor_m2806B6CAA6E2D1E105FDA5CCB083EFDD8591339E(L_2, /*hidden argument*/List_1__ctor_m2806B6CAA6E2D1E105FDA5CCB083EFDD8591339E_RuntimeMethod_var);
		((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->set_sFocusCallbackList_10(L_2);
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
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mFAA791F593455783B953151D8AE2EB6A24617687 (U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::<RunCoroutine>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_m5F96DF12F191D7EE1A8C4DDE0BB128EAC398E7E4 (U3CU3Ec__DisplayClass10_0_tB3031BCD920292ABF69464A05292E90F217DB0E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_m5F96DF12F191D7EE1A8C4DDE0BB128EAC398E7E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnGameThread(() => instance.StartCoroutine(action));
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403 * L_0 = ((PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_1 = __this->get_action_0();
		NullCheck(L_0);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement__ctor_mDF11A5AC8963968E802FDCF0B2E5C4D4E6019860 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesAchievement__ctor_mDF11A5AC8963968E802FDCF0B2E5C4D4E6019860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(PlayGamesPlatform.Instance.ReportProgress)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_0 = PlayGamesPlatform_get_Instance_m14016685F7C32BEF2E0779F03F8887E5C25B416B(/*hidden argument*/NULL);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_1 = L_0;
		ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * L_2 = (ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 *)il2cpp_codegen_object_new(ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068_il2cpp_TypeInfo_var);
		ReportProgress__ctor_mFCC58DA696C3603E92ABD74E495C108C5F4411F1(L_2, L_1, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_1, 11)), /*hidden argument*/NULL);
		PlayGamesAchievement__ctor_m7F0E4604564CCAFF410D6A5D555408C43BA7C624(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor(GooglePlayGames.ReportProgress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement__ctor_m7F0E4604564CCAFF410D6A5D555408C43BA7C624 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * ___progressCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesAchievement__ctor_m7F0E4604564CCAFF410D6A5D555408C43BA7C624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string mId = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_mId_1(L_0);
		// private DateTime mLastModifiedTime = new DateTime(1970, 1, 1, 0, 0, 0, 0);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1;
		memset((&L_1), 0, sizeof(L_1));
		DateTime__ctor_m6567CDEB97E6541CE4AF8ADDC617CFF419D5A58E((&L_1), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		__this->set_mLastModifiedTime_8(L_1);
		// private string mTitle = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_mTitle_9(L_2);
		// private string mRevealedImageUrl = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_mRevealedImageUrl_10(L_3);
		// private string mUnlockedImageUrl = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_mUnlockedImageUrl_11(L_4);
		// private string mDescription = string.Empty;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_mDescription_14(L_5);
		// internal PlayGamesAchievement(ReportProgress progressCallback)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// mProgressCallback = progressCallback;
		ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * L_6 = ___progressCallback0;
		__this->set_mProgressCallback_0(L_6);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor(GooglePlayGames.BasicApi.Achievement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement__ctor_m0DE0683B58CDCC2883B4A636D1AEBFC3DDF6B82D (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * ___ach0, const RuntimeMethod* method)
{
	PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * G_B6_0 = NULL;
	PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * G_B5_0 = NULL;
	double G_B7_0 = 0.0;
	PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * G_B7_1 = NULL;
	{
		// internal PlayGamesAchievement(Achievement ach) : this()
		PlayGamesAchievement__ctor_mDF11A5AC8963968E802FDCF0B2E5C4D4E6019860(__this, /*hidden argument*/NULL);
		// this.mId = ach.Id;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_0 = ___ach0;
		NullCheck(L_0);
		String_t* L_1 = Achievement_get_Id_mA0A91D5880B6FA2FCA775D0E8F501612DF38EDC8_inline(L_0, /*hidden argument*/NULL);
		__this->set_mId_1(L_1);
		// this.mIsIncremental = ach.IsIncremental;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_2 = ___ach0;
		NullCheck(L_2);
		bool L_3 = Achievement_get_IsIncremental_mC38AA6AD649FD4BD34DDF544C064B674D59DFEF0_inline(L_2, /*hidden argument*/NULL);
		__this->set_mIsIncremental_2(L_3);
		// this.mCurrentSteps = ach.CurrentSteps;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_4 = ___ach0;
		NullCheck(L_4);
		int32_t L_5 = Achievement_get_CurrentSteps_mBE2D692BB1FD94DAE37984BA65B9D5779D942A21_inline(L_4, /*hidden argument*/NULL);
		__this->set_mCurrentSteps_3(L_5);
		// this.mTotalSteps = ach.TotalSteps;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_6 = ___ach0;
		NullCheck(L_6);
		int32_t L_7 = Achievement_get_TotalSteps_mD68DCDC81918457012A9EF47310F57B0968F629E_inline(L_6, /*hidden argument*/NULL);
		__this->set_mTotalSteps_4(L_7);
		// if (ach.IsIncremental)
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_8 = ___ach0;
		NullCheck(L_8);
		bool L_9 = Achievement_get_IsIncremental_mC38AA6AD649FD4BD34DDF544C064B674D59DFEF0_inline(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		// if (ach.TotalSteps > 0)
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_10 = ___ach0;
		NullCheck(L_10);
		int32_t L_11 = Achievement_get_TotalSteps_mD68DCDC81918457012A9EF47310F57B0968F629E_inline(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// this.mPercentComplete =
		//     ((double) ach.CurrentSteps / (double) ach.TotalSteps) * 100.0;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_12 = ___ach0;
		NullCheck(L_12);
		int32_t L_13 = Achievement_get_CurrentSteps_mBE2D692BB1FD94DAE37984BA65B9D5779D942A21_inline(L_12, /*hidden argument*/NULL);
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_14 = ___ach0;
		NullCheck(L_14);
		int32_t L_15 = Achievement_get_TotalSteps_mD68DCDC81918457012A9EF47310F57B0968F629E_inline(L_14, /*hidden argument*/NULL);
		__this->set_mPercentComplete_5(((double)il2cpp_codegen_multiply((double)((double)((double)(((double)((double)L_13)))/(double)(((double)((double)L_15))))), (double)(100.0))));
		// }
		goto IL_009b;
	}

IL_0068:
	{
		// this.mPercentComplete = 0.0;
		__this->set_mPercentComplete_5((0.0));
		// }
		goto IL_009b;
	}

IL_0079:
	{
		// this.mPercentComplete = ach.IsUnlocked ? 100.0 : 0.0;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_16 = ___ach0;
		NullCheck(L_16);
		bool L_17 = Achievement_get_IsUnlocked_mDC9AB73C6E169B23ABE2DBFBDEEAFD43643CC753_inline(L_16, /*hidden argument*/NULL);
		G_B5_0 = __this;
		if (L_17)
		{
			G_B6_0 = __this;
			goto IL_008d;
		}
	}
	{
		G_B7_0 = (0.0);
		G_B7_1 = G_B5_0;
		goto IL_0096;
	}

IL_008d:
	{
		G_B7_0 = (100.0);
		G_B7_1 = G_B6_0;
	}

IL_0096:
	{
		NullCheck(G_B7_1);
		G_B7_1->set_mPercentComplete_5(G_B7_0);
	}

IL_009b:
	{
		// this.mCompleted = ach.IsUnlocked;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_18 = ___ach0;
		NullCheck(L_18);
		bool L_19 = Achievement_get_IsUnlocked_mDC9AB73C6E169B23ABE2DBFBDEEAFD43643CC753_inline(L_18, /*hidden argument*/NULL);
		__this->set_mCompleted_6(L_19);
		// this.mHidden = !ach.IsRevealed;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_20 = ___ach0;
		NullCheck(L_20);
		bool L_21 = Achievement_get_IsRevealed_m5391462A6F007F4A3EA0D3CE1D0AFAB2AD51EE96_inline(L_20, /*hidden argument*/NULL);
		__this->set_mHidden_7((bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0));
		// this.mLastModifiedTime = ach.LastModifiedTime;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_22 = ___ach0;
		NullCheck(L_22);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_23 = Achievement_get_LastModifiedTime_m18FEF8F433DEE9EA3952BDE49416423DDD29682B(L_22, /*hidden argument*/NULL);
		__this->set_mLastModifiedTime_8(L_23);
		// this.mTitle = ach.Name;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_24 = ___ach0;
		NullCheck(L_24);
		String_t* L_25 = Achievement_get_Name_m5357D43091B01618E99348C2A3808997199074D6_inline(L_24, /*hidden argument*/NULL);
		__this->set_mTitle_9(L_25);
		// this.mDescription = ach.Description;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_26 = ___ach0;
		NullCheck(L_26);
		String_t* L_27 = Achievement_get_Description_m268B3D5E56A3D87AD3286ADE95C75914735D03E7_inline(L_26, /*hidden argument*/NULL);
		__this->set_mDescription_14(L_27);
		// this.mPoints = ach.Points;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_28 = ___ach0;
		NullCheck(L_28);
		uint64_t L_29 = Achievement_get_Points_m34B788ECC4E0ED8B2BD13DB3A752837D4ACB56E5_inline(L_28, /*hidden argument*/NULL);
		__this->set_mPoints_15(L_29);
		// this.mRevealedImageUrl = ach.RevealedImageUrl;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_30 = ___ach0;
		NullCheck(L_30);
		String_t* L_31 = Achievement_get_RevealedImageUrl_mC76D528740A1010FC5812068671FF86B94E5D109_inline(L_30, /*hidden argument*/NULL);
		__this->set_mRevealedImageUrl_10(L_31);
		// this.mUnlockedImageUrl = ach.UnlockedImageUrl;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_32 = ___ach0;
		NullCheck(L_32);
		String_t* L_33 = Achievement_get_UnlockedImageUrl_m7EED580696A9D4C66FC98271F7248E5FC494C0A8_inline(L_32, /*hidden argument*/NULL);
		__this->set_mUnlockedImageUrl_11(L_33);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesAchievement::ReportProgress(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement_ReportProgress_mA8642CC2C9D02C86A8C8126573EB0F99EAEA84AD (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	{
		// mProgressCallback.Invoke(mId, mPercentComplete, callback);
		ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * L_0 = __this->get_mProgressCallback_0();
		String_t* L_1 = __this->get_mId_1();
		double L_2 = __this->get_mPercentComplete_5();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_3 = ___callback0;
		NullCheck(L_0);
		ReportProgress_Invoke_m86F746599DA428B049C13BAF1F01A0CAC491C6CD(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Texture2D GooglePlayGames.PlayGamesAchievement::LoadImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * PlayGamesAchievement_LoadImage_m16328F6EADDB77939074BBCC3E1D20AC32B2BFE5 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesAchievement_LoadImage_m16328F6EADDB77939074BBCC3E1D20AC32B2BFE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// if (hidden)
		bool L_0 = PlayGamesAchievement_get_hidden_mEAE73D4817EB52D45A3B2E2393FA70D91FBE7256_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL;
	}

IL_000a:
	{
		// string url = completed ? mUnlockedImageUrl : mRevealedImageUrl;
		bool L_1 = PlayGamesAchievement_get_completed_m528F008EBBAE0C1A089D1777B5FFF27D46519B18_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2 = __this->get_mRevealedImageUrl_10();
		G_B5_0 = L_2;
		goto IL_0020;
	}

IL_001a:
	{
		String_t* L_3 = __this->get_mUnlockedImageUrl_11();
		G_B5_0 = L_3;
	}

IL_0020:
	{
		V_0 = G_B5_0;
		// if (!string.IsNullOrEmpty(url))
		String_t* L_4 = V_0;
		bool L_5 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0091;
		}
	}
	{
		// if (mImageFetcher == null || mImageFetcher.url != url)
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_6 = __this->get_mImageFetcher_12();
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_7 = __this->get_mImageFetcher_12();
		NullCheck(L_7);
		String_t* L_8 = UnityWebRequest_get_url_m030A0D89670638A2C0E86A42AA84C767314672C6(L_7, /*hidden argument*/NULL);
		String_t* L_9 = V_0;
		bool L_10 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0057;
		}
	}

IL_0044:
	{
		// mImageFetcher = UnityWebRequestTexture.GetTexture(url);
		String_t* L_11 = V_0;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_12 = UnityWebRequestTexture_GetTexture_m45626D1CEA83B5DC281934CC74D383389CD781B9(L_11, /*hidden argument*/NULL);
		__this->set_mImageFetcher_12(L_12);
		// mImage = null;
		__this->set_mImage_13((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL);
	}

IL_0057:
	{
		// if (mImage != null)
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_13 = __this->get_mImage_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_13, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// return mImage;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_15 = __this->get_mImage_13();
		return L_15;
	}

IL_006c:
	{
		// if (mImageFetcher.isDone)
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_16 = __this->get_mImageFetcher_12();
		NullCheck(L_16);
		bool L_17 = UnityWebRequest_get_isDone_mB3CC99A8DC3DB1DD44B23008688EB2DF20906FDA(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		// mImage = DownloadHandlerTexture.GetContent(mImageFetcher);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_18 = __this->get_mImageFetcher_12();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_19 = DownloadHandlerTexture_GetContent_mF7BCA86CF9F9871A512256173025D3C895EDF744(L_18, /*hidden argument*/NULL);
		__this->set_mImage_13(L_19);
		// return mImage;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_20 = __this->get_mImage_13();
		return L_20;
	}

IL_0091:
	{
		// return null;
		return (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL;
	}
}
// System.String GooglePlayGames.PlayGamesAchievement::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesAchievement_get_id_m667C345EB3839A2D12A8474031A93E2ECED018EB (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return mId; }
		String_t* L_0 = __this->get_mId_1();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesAchievement::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement_set_id_m447D942B0A93995808E29E50C0392CA38EEEA812 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { mId = value; }
		String_t* L_0 = ___value0;
		__this->set_mId_1(L_0);
		// set { mId = value; }
		return;
	}
}
// System.Boolean GooglePlayGames.PlayGamesAchievement::get_isIncremental()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesAchievement_get_isIncremental_mF6A8BBE4A55AD12359D4956AABA5645C4F859A06 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsIncremental; }
		bool L_0 = __this->get_mIsIncremental_2();
		return L_0;
	}
}
// System.Int32 GooglePlayGames.PlayGamesAchievement::get_currentSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesAchievement_get_currentSteps_mAB6338D10C23283B339B09A5F0F1F4C2670781DE (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return mCurrentSteps; }
		int32_t L_0 = __this->get_mCurrentSteps_3();
		return L_0;
	}
}
// System.Int32 GooglePlayGames.PlayGamesAchievement::get_totalSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesAchievement_get_totalSteps_m3CEDC8CB65E28118B34FC3D6599D2B6706295B0E (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return mTotalSteps; }
		int32_t L_0 = __this->get_mTotalSteps_4();
		return L_0;
	}
}
// System.Double GooglePlayGames.PlayGamesAchievement::get_percentCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayGamesAchievement_get_percentCompleted_m4643272F54066E4325B4F7F30EC65881FC95D067 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return mPercentComplete; }
		double L_0 = __this->get_mPercentComplete_5();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesAchievement::set_percentCompleted(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement_set_percentCompleted_mD7B8F477C90D01D011EB626CADDBF687B0729DD7 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { mPercentComplete = value; }
		double L_0 = ___value0;
		__this->set_mPercentComplete_5(L_0);
		// set { mPercentComplete = value; }
		return;
	}
}
// System.Boolean GooglePlayGames.PlayGamesAchievement::get_completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesAchievement_get_completed_m528F008EBBAE0C1A089D1777B5FFF27D46519B18 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.mCompleted; }
		bool L_0 = __this->get_mCompleted_6();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.PlayGamesAchievement::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesAchievement_get_hidden_mEAE73D4817EB52D45A3B2E2393FA70D91FBE7256 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.mHidden; }
		bool L_0 = __this->get_mHidden_7();
		return L_0;
	}
}
// System.DateTime GooglePlayGames.PlayGamesAchievement::get_lastReportedDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  PlayGamesAchievement_get_lastReportedDate_m52CC1E6E555DB363762C3C57B9338E4017A273D4 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return mLastModifiedTime; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_mLastModifiedTime_8();
		return L_0;
	}
}
// System.String GooglePlayGames.PlayGamesAchievement::get_title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesAchievement_get_title_mC3258742A82F770006C79C50DA029869970857DF (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return mTitle; }
		String_t* L_0 = __this->get_mTitle_9();
		return L_0;
	}
}
// UnityEngine.Texture2D GooglePlayGames.PlayGamesAchievement::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * PlayGamesAchievement_get_image_m8EECC8E96CF22ED74FC8F1A0E6BFAD62A09F8E08 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return LoadImage(); }
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = PlayGamesAchievement_LoadImage_m16328F6EADDB77939074BBCC3E1D20AC32B2BFE5(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String GooglePlayGames.PlayGamesAchievement::get_achievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesAchievement_get_achievedDescription_m0A22576EB34B130B664071531E047B737AE3ACDF (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return mDescription; }
		String_t* L_0 = __this->get_mDescription_14();
		return L_0;
	}
}
// System.String GooglePlayGames.PlayGamesAchievement::get_unachievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesAchievement_get_unachievedDescription_m63AD3A21421727D8A5BDF0389041717AC01EF50D (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return mDescription; }
		String_t* L_0 = __this->get_mDescription_14();
		return L_0;
	}
}
// System.Int32 GooglePlayGames.PlayGamesAchievement::get_points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesAchievement_get_points_mF98F9B8029481E24F1EF0BBA726F038D3F817092 (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return (int) mPoints; }
		uint64_t L_0 = __this->get_mPoints_15();
		return (((int32_t)((int32_t)L_0)));
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
// GooglePlayGames.BasicApi.IPlayGamesClient GooglePlayGames.PlayGamesClientFactory::GetPlatformPlayGamesClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesClientFactory_GetPlatformPlayGamesClient_m61FA1D5117C523303D3BFFA844EB603E8A5A43B4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesClientFactory_GetPlatformPlayGamesClient_m61FA1D5117C523303D3BFFA844EB603E8A5A43B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isEditor)
		bool L_0 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.d("Creating IPlayGamesClient in editor, using DummyClient.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral67490BCAD0BC8B4F9F4CF153F5ABB42F13DFD1C2, /*hidden argument*/NULL);
		// return new GooglePlayGames.BasicApi.DummyClient();
		DummyClient_tE38F53999E10D9E4AB27B18622CC9D4B1FA08D79 * L_1 = (DummyClient_tE38F53999E10D9E4AB27B18622CC9D4B1FA08D79 *)il2cpp_codegen_object_new(DummyClient_tE38F53999E10D9E4AB27B18622CC9D4B1FA08D79_il2cpp_TypeInfo_var);
		DummyClient__ctor_m05F8D42F9F0D108306F7F737BABCD42AA8621739(L_1, /*hidden argument*/NULL);
		return L_1;
	}

IL_0017:
	{
		// GooglePlayGames.OurUtils.Logger.d("Creating Android IPlayGamesClient Client");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteralA5BE846AC2B5DB87CE53510F035C3BFB2CA453CD, /*hidden argument*/NULL);
		// return new GooglePlayGames.Android.AndroidClient();
		AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5 * L_2 = (AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5 *)il2cpp_codegen_object_new(AndroidClient_t3F9301B6709CB265EA91C323824D35DDD56463C5_il2cpp_TypeInfo_var);
		AndroidClient__ctor_m6BE3FBD0D4DBC1E5483DDF5EBF083340430A6EBC(L_2, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void GooglePlayGames.PlayGamesClientFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesClientFactory__ctor_m7E1237CD9EF6CE3115430815A21ADE526887EA3A (PlayGamesClientFactory_t5BDBE0E4765B5483496C7FFEF07979EE62A173D2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.PlayGamesLeaderboard::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard__ctor_m63AE4DDCEFFA086C59C9FCAA3F751DCDB182EF45 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLeaderboard__ctor_m63AE4DDCEFFA086C59C9FCAA3F751DCDB182EF45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<PlayGamesScore> mScoreList = new List<PlayGamesScore>();
		List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * L_0 = (List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 *)il2cpp_codegen_object_new(List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939_il2cpp_TypeInfo_var);
		List_1__ctor_m7D9269BF2C5B47E2881D8362447AE5F784B88823(L_0, /*hidden argument*/List_1__ctor_m7D9269BF2C5B47E2881D8362447AE5F784B88823_RuntimeMethod_var);
		__this->set_mScoreList_8(L_0);
		// public PlayGamesLeaderboard(string id)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// mId = id;
		String_t* L_1 = ___id0;
		__this->set_mId_0(L_1);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLeaderboard::SetUserFilter(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_SetUserFilter_m3748E208A33D5A1916D24500D78BF1BF20DFEB99 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___userIDs0, const RuntimeMethod* method)
{
	{
		// mFilteredUserIds = userIDs;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___userIDs0;
		__this->set_mFilteredUserIds_4(L_0);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLeaderboard::LoadScores(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_LoadScores_mD9FBB54B5DE578BE34979B6F2DB6D28029D91137 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLeaderboard_LoadScores_mD9FBB54B5DE578BE34979B6F2DB6D28029D91137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesPlatform.Instance.LoadScores(this, callback);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_0 = PlayGamesPlatform_get_Instance_m14016685F7C32BEF2E0779F03F8887E5C25B416B(/*hidden argument*/NULL);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback0;
		NullCheck(L_0);
		PlayGamesPlatform_LoadScores_m929BC14DDEBB89A481B0FE8E498303312523B133(L_0, __this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.PlayGamesLeaderboard::get_loading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesLeaderboard_get_loading_mB4A9427CA199FEB60955DC43D9A751D74E55B234 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	{
		// get { return mLoading; }
		bool L_0 = __this->get_mLoading_5();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesLeaderboard::set_loading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_set_loading_m6E3268F3788B01A4752C4B362EACEE9FF72696E0 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal set { mLoading = value; }
		bool L_0 = ___value0;
		__this->set_mLoading_5(L_0);
		// internal set { mLoading = value; }
		return;
	}
}
// System.String GooglePlayGames.PlayGamesLeaderboard::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesLeaderboard_get_id_mD4F2D647952566B4AF5350EBC56CD174E1BD5E2D (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	{
		// get { return mId; }
		String_t* L_0 = __this->get_mId_0();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesLeaderboard::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_set_id_mB54FCFB4B8FC34B2FC9ABC4EF36D32065854894A (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { mId = value; }
		String_t* L_0 = ___value0;
		__this->set_mId_0(L_0);
		// set { mId = value; }
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope GooglePlayGames.PlayGamesLeaderboard::get_userScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesLeaderboard_get_userScope_mE42E1B91690ED650AE404A3F92D0F68EBA9CBA50 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	{
		// get { return mUserScope; }
		int32_t L_0 = __this->get_mUserScope_1();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesLeaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_set_userScope_m3F55CB15F13CC540EE71F632E99423DB5CD39D56 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { mUserScope = value; }
		int32_t L_0 = ___value0;
		__this->set_mUserScope_1(L_0);
		// set { mUserScope = value; }
		return;
	}
}
// UnityEngine.SocialPlatforms.Range GooglePlayGames.PlayGamesLeaderboard::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  PlayGamesLeaderboard_get_range_m0C77FBA37A7C49D90AA1DBF1AB22E876EE2B83A1 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	{
		// get { return mRange; }
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_0 = __this->get_mRange_2();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesLeaderboard::set_range(UnityEngine.SocialPlatforms.Range)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_set_range_mBCAFA1B63B91040231250158FBFC825A157B22E0 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  ___value0, const RuntimeMethod* method)
{
	{
		// set { mRange = value; }
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_0 = ___value0;
		__this->set_mRange_2(L_0);
		// set { mRange = value; }
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope GooglePlayGames.PlayGamesLeaderboard::get_timeScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesLeaderboard_get_timeScope_mB7627D216EB72479A1CCFE4878094CF1824A953F (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	{
		// get { return mTimeScope; }
		int32_t L_0 = __this->get_mTimeScope_3();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesLeaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_set_timeScope_m350FA13D336563C4F71E81C9DEB891A233354FAE (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { mTimeScope = value; }
		int32_t L_0 = ___value0;
		__this->set_mTimeScope_3(L_0);
		// set { mTimeScope = value; }
		return;
	}
}
// UnityEngine.SocialPlatforms.IScore GooglePlayGames.PlayGamesLeaderboard::get_localUserScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesLeaderboard_get_localUserScore_mD6AF1597BBD7FC66A09B14B327ABFD1B9FDB81C5 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	{
		// get { return mLocalUserScore; }
		RuntimeObject* L_0 = __this->get_mLocalUserScore_6();
		return L_0;
	}
}
// System.UInt32 GooglePlayGames.PlayGamesLeaderboard::get_maxRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PlayGamesLeaderboard_get_maxRange_m8C7E8C30EB79D0D1A2262A1EA19BA9BA86B3A2A2 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	{
		// get { return mMaxRange; }
		uint32_t L_0 = __this->get_mMaxRange_7();
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.IScore[] GooglePlayGames.PlayGamesLeaderboard::get_scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* PlayGamesLeaderboard_get_scores_m6173D24F39157A39E51103F9E783436EC1260A4D (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLeaderboard_get_scores_m6173D24F39157A39E51103F9E783436EC1260A4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B* V_0 = NULL;
	IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* V_1 = NULL;
	{
		// PlayGamesScore[] arr = new PlayGamesScore[mScoreList.Count];
		List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * L_0 = __this->get_mScoreList_8();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m9DFABDAB8AEC470E2D4BB6B9829172D7DF8E5FDF_inline(L_0, /*hidden argument*/List_1_get_Count_m9DFABDAB8AEC470E2D4BB6B9829172D7DF8E5FDF_RuntimeMethod_var);
		PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B* L_2 = (PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B*)(PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B*)SZArrayNew(PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// mScoreList.CopyTo(arr);
		List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * L_3 = __this->get_mScoreList_8();
		PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B* L_4 = V_0;
		NullCheck(L_3);
		List_1_CopyTo_m8C7E4C07E2B297321460EE9E3CEA6B1BFC5DC921(L_3, L_4, /*hidden argument*/List_1_CopyTo_m8C7E4C07E2B297321460EE9E3CEA6B1BFC5DC921_RuntimeMethod_var);
		// return arr;
		PlayGamesScoreU5BU5D_t4D10520A2271785A9DDFED4C041BAA1964D06F3B* L_5 = V_0;
		V_1 = (IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C*)L_5;
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_6 = V_1;
		return L_6;
	}
}
// System.String GooglePlayGames.PlayGamesLeaderboard::get_title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesLeaderboard_get_title_m37419637A1E1C0F637971CC3B42368BFF4555462 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	{
		// get { return mTitle; }
		String_t* L_0 = __this->get_mTitle_9();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.PlayGamesLeaderboard::SetFromData(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesLeaderboard_SetFromData_m87EC00C60134CA4B975219B38EC6425164143E3C (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLeaderboard_SetFromData_m87EC00C60134CA4B975219B38EC6425164143E3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * G_B6_0 = NULL;
	PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * G_B7_1 = NULL;
	{
		// if (data.Valid)
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_0 = ___data0;
		NullCheck(L_0);
		bool L_1 = LeaderboardScoreData_get_Valid_m8F1CFC600BBB59DE4A3933605C9C3CB79EFD6F25(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007f;
		}
	}
	{
		// OurUtils.Logger.d("Setting leaderboard from: " + data);
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_2 = ___data0;
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral98B5A4CDFD4A49AC7EFACE991A1C48E0B308CF50, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_3, /*hidden argument*/NULL);
		// SetMaxRange(data.ApproximateCount);
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_4 = ___data0;
		NullCheck(L_4);
		uint64_t L_5 = LeaderboardScoreData_get_ApproximateCount_m0A898568DD8BECB082ECE7DA4A7CCD5BD30DA657_inline(L_4, /*hidden argument*/NULL);
		PlayGamesLeaderboard_SetMaxRange_m6CAD00571072CBD807804664B17757B23B42FBE3(__this, L_5, /*hidden argument*/NULL);
		// SetTitle(data.Title);
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_6 = ___data0;
		NullCheck(L_6);
		String_t* L_7 = LeaderboardScoreData_get_Title_mE935170FDD5871591863CA7499361301EA7D7DD8_inline(L_6, /*hidden argument*/NULL);
		PlayGamesLeaderboard_SetTitle_mBF571A8F8B54100CC6870145A8097345A40D0C92_inline(__this, L_7, /*hidden argument*/NULL);
		// SetLocalUserScore((PlayGamesScore) data.PlayerScore);
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_8 = ___data0;
		NullCheck(L_8);
		RuntimeObject* L_9 = LeaderboardScoreData_get_PlayerScore_m1999A889AB55574DEDDB97556DF45DBFC3F1B253_inline(L_8, /*hidden argument*/NULL);
		PlayGamesLeaderboard_SetLocalUserScore_mAEC2E642741686D87C92486EF5CE394A588D0330_inline(__this, ((PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F *)CastclassClass((RuntimeObject*)L_9, PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// foreach (IScore score in data.Scores)
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_10 = ___data0;
		NullCheck(L_10);
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_11 = LeaderboardScoreData_get_Scores_mAF12EE7B188619CA9A62A3072F7AEAD5F5FEB2FD(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		V_1 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		// foreach (IScore score in data.Scores)
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		// AddScore((PlayGamesScore) score);
		RuntimeObject* L_16 = V_2;
		PlayGamesLeaderboard_AddScore_m5EEA94096A68FCA29901B8EF1A108DB92272722D(__this, ((PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F *)CastclassClass((RuntimeObject*)L_16, PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0061:
	{
		// foreach (IScore score in data.Scores)
		int32_t L_18 = V_1;
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		// mLoading = data.Scores.Length == 0 || HasAllScores();
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_20 = ___data0;
		NullCheck(L_20);
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_21 = LeaderboardScoreData_get_Scores_mAF12EE7B188619CA9A62A3072F7AEAD5F5FEB2FD(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		G_B5_0 = __this;
		if (!(((RuntimeArray*)L_21)->max_length))
		{
			G_B6_0 = __this;
			goto IL_0079;
		}
	}
	{
		bool L_22 = PlayGamesLeaderboard_HasAllScores_mAF9AD91A54B10B22AEF7BB4FB55A8015B94F90B3(__this, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_22));
		G_B7_1 = G_B5_0;
		goto IL_007a;
	}

IL_0079:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_007a:
	{
		NullCheck(G_B7_1);
		G_B7_1->set_mLoading_5((bool)G_B7_0);
	}

IL_007f:
	{
		// return data.Valid;
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_23 = ___data0;
		NullCheck(L_23);
		bool L_24 = LeaderboardScoreData_get_Valid_m8F1CFC600BBB59DE4A3933605C9C3CB79EFD6F25(L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Void GooglePlayGames.PlayGamesLeaderboard::SetMaxRange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_SetMaxRange_m6CAD00571072CBD807804664B17757B23B42FBE3 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, uint64_t ___val0, const RuntimeMethod* method)
{
	{
		// mMaxRange = (uint) val;
		uint64_t L_0 = ___val0;
		__this->set_mMaxRange_7((((int32_t)((uint32_t)L_0))));
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLeaderboard::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_SetTitle_mBF571A8F8B54100CC6870145A8097345A40D0C92 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// mTitle = value;
		String_t* L_0 = ___value0;
		__this->set_mTitle_9(L_0);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLeaderboard::SetLocalUserScore(GooglePlayGames.PlayGamesScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_SetLocalUserScore_mAEC2E642741686D87C92486EF5CE394A588D0330 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * ___score0, const RuntimeMethod* method)
{
	{
		// mLocalUserScore = score;
		PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * L_0 = ___score0;
		__this->set_mLocalUserScore_6(L_0);
		// }
		return;
	}
}
// System.Int32 GooglePlayGames.PlayGamesLeaderboard::AddScore(GooglePlayGames.PlayGamesScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesLeaderboard_AddScore_m5EEA94096A68FCA29901B8EF1A108DB92272722D (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * ___score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLeaderboard_AddScore_m5EEA94096A68FCA29901B8EF1A108DB92272722D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (mFilteredUserIds == null || mFilteredUserIds.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = __this->get_mFilteredUserIds_4();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = __this->get_mFilteredUserIds_4();
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001f;
		}
	}

IL_0011:
	{
		// mScoreList.Add(score);
		List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * L_2 = __this->get_mScoreList_8();
		PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * L_3 = ___score0;
		NullCheck(L_2);
		List_1_Add_mA233869E054A624DBAD583F741E6E1E0FFB1F8A7(L_2, L_3, /*hidden argument*/List_1_Add_mA233869E054A624DBAD583F741E6E1E0FFB1F8A7_RuntimeMethod_var);
		// }
		goto IL_0052;
	}

IL_001f:
	{
		// foreach (string fid in mFilteredUserIds)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = __this->get_mFilteredUserIds_4();
		V_0 = L_4;
		V_1 = 0;
		goto IL_004c;
	}

IL_002a:
	{
		// foreach (string fid in mFilteredUserIds)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// if (fid.Equals(score.userID))
		PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * L_9 = ___score0;
		NullCheck(L_9);
		String_t* L_10 = PlayGamesScore_get_userID_m5679E50EB4C05F46CEEBFD822BCA1858B4FF645B_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_11 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		// mScoreList.Add(score);
		List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * L_12 = __this->get_mScoreList_8();
		PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * L_13 = ___score0;
		NullCheck(L_12);
		List_1_Add_mA233869E054A624DBAD583F741E6E1E0FFB1F8A7(L_12, L_13, /*hidden argument*/List_1_Add_mA233869E054A624DBAD583F741E6E1E0FFB1F8A7_RuntimeMethod_var);
		// break;
		goto IL_0052;
	}

IL_0048:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004c:
	{
		// foreach (string fid in mFilteredUserIds)
		int32_t L_15 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_002a;
		}
	}

IL_0052:
	{
		// return mScoreList.Count;
		List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * L_17 = __this->get_mScoreList_8();
		NullCheck(L_17);
		int32_t L_18 = List_1_get_Count_m9DFABDAB8AEC470E2D4BB6B9829172D7DF8E5FDF_inline(L_17, /*hidden argument*/List_1_get_Count_m9DFABDAB8AEC470E2D4BB6B9829172D7DF8E5FDF_RuntimeMethod_var);
		return L_18;
	}
}
// System.Int32 GooglePlayGames.PlayGamesLeaderboard::get_ScoreCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesLeaderboard_get_ScoreCount_mBA9C204C96E5931201EF8414E34B17EFE1F9F6C2 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLeaderboard_get_ScoreCount_mBA9C204C96E5931201EF8414E34B17EFE1F9F6C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return mScoreList.Count; }
		List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * L_0 = __this->get_mScoreList_8();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m9DFABDAB8AEC470E2D4BB6B9829172D7DF8E5FDF_inline(L_0, /*hidden argument*/List_1_get_Count_m9DFABDAB8AEC470E2D4BB6B9829172D7DF8E5FDF_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean GooglePlayGames.PlayGamesLeaderboard::HasAllScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesLeaderboard_HasAllScores_mAF9AD91A54B10B22AEF7BB4FB55A8015B94F90B3 (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLeaderboard_HasAllScores_mAF9AD91A54B10B22AEF7BB4FB55A8015B94F90B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mScoreList.Count >= mRange.count || mScoreList.Count >= maxRange;
		List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * L_0 = __this->get_mScoreList_8();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m9DFABDAB8AEC470E2D4BB6B9829172D7DF8E5FDF_inline(L_0, /*hidden argument*/List_1_get_Count_m9DFABDAB8AEC470E2D4BB6B9829172D7DF8E5FDF_RuntimeMethod_var);
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC * L_2 = __this->get_address_of_mRange_2();
		int32_t L_3 = L_2->get_count_1();
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0031;
		}
	}
	{
		List_1_t5109EDC3FC514EE3415A5054F0245AA255C6D939 * L_4 = __this->get_mScoreList_8();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m9DFABDAB8AEC470E2D4BB6B9829172D7DF8E5FDF_inline(L_4, /*hidden argument*/List_1_get_Count_m9DFABDAB8AEC470E2D4BB6B9829172D7DF8E5FDF_RuntimeMethod_var);
		uint32_t L_6 = PlayGamesLeaderboard_get_maxRange_m8C7E8C30EB79D0D1A2262A1EA19BA9BA86B3A2A2_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int64_t)(((int64_t)((int64_t)L_5)))) < ((int64_t)(((int64_t)((uint64_t)L_6)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0031:
	{
		return (bool)1;
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
// System.Void GooglePlayGames.PlayGamesLocalUser::.ctor(GooglePlayGames.PlayGamesPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLocalUser__ctor_mFCF8EB49C54EA782B41565421DA5CAB125EB21E7 (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * ___plaf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLocalUser__ctor_mFCF8EB49C54EA782B41565421DA5CAB125EB21E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("localUser", string.Empty, string.Empty)
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		PlayGamesUserProfile__ctor_mBC5DC79E15562EBA605FCC9872116A801391D286(__this, _stringLiteralF7252BD0B211563B190BC1834BD12A35CAD60FDE, L_0, L_1, /*hidden argument*/NULL);
		// mPlatform = plaf;
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_2 = ___plaf0;
		__this->set_mPlatform_6(L_2);
		// mStats = null;
		__this->set_mStats_7((PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA *)NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLocalUser::Authenticate(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLocalUser_Authenticate_m69E470F66BCEE6CED467E1791B4AE948A61C9E5A (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLocalUser_Authenticate_m69E470F66BCEE6CED467E1791B4AE948A61C9E5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F * L_0 = (U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_m9AB8E2960E18E86DD24D10B9F62D8E4C798A1DAA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F * L_1 = V_0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = ___callback0;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		// mPlatform.Authenticate(status => callback(status == SignInStatus.Success));
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_3 = __this->get_mPlatform_6();
		U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F * L_4 = V_0;
		Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D * L_5 = (Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D *)il2cpp_codegen_object_new(Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D_il2cpp_TypeInfo_var);
		Action_1__ctor_m6EED033785616C99B64874ACE9B2A1D909F57561(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3CAuthenticateU3Eb__0_m1D70D96D9F17BF39A51AD6F9883A9724BEC9F154_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6EED033785616C99B64874ACE9B2A1D909F57561_RuntimeMethod_var);
		NullCheck(L_3);
		PlayGamesPlatform_Authenticate_m1EEFB9A0A2D4EBFC011E2EAA1C8D5AB04F5AB41A(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLocalUser::Authenticate(System.Action`2<System.Boolean,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLocalUser_Authenticate_mD937C6F6D7EDDA1DEF91D6A39D12D7AFDED54ACD (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLocalUser_Authenticate_mD937C6F6D7EDDA1DEF91D6A39D12D7AFDED54ACD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201 * L_0 = (U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m489DD2F99CCCC4E5EBAE687B5104BFF259CD3FBA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201 * L_1 = V_0;
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_2 = ___callback0;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		// mPlatform.Authenticate(status => callback(status == SignInStatus.Success, status.ToString()));
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_3 = __this->get_mPlatform_6();
		U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201 * L_4 = V_0;
		Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D * L_5 = (Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D *)il2cpp_codegen_object_new(Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D_il2cpp_TypeInfo_var);
		Action_1__ctor_m6EED033785616C99B64874ACE9B2A1D909F57561(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CAuthenticateU3Eb__0_mED13DD59E8078C4E4B3745D2EC6E4190C9E6CC7C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6EED033785616C99B64874ACE9B2A1D909F57561_RuntimeMethod_var);
		NullCheck(L_3);
		PlayGamesPlatform_Authenticate_m1EEFB9A0A2D4EBFC011E2EAA1C8D5AB04F5AB41A(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLocalUser::LoadFriends(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLocalUser_LoadFriends_m5A41856E635D465AEE9E3C29157228597EFF79A3 (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	{
		// mPlatform.LoadFriends(this, callback);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_0 = __this->get_mPlatform_6();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback0;
		NullCheck(L_0);
		PlayGamesPlatform_LoadFriends_m5807FD9488C44A26C4730F634C5D16EF003E369D(L_0, __this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.PlayGamesLocalUser::get_friends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* PlayGamesLocalUser_get_friends_m4BD8D8D5A15D8B99A57EAAF93D1D8BB77343D1C0 (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, const RuntimeMethod* method)
{
	{
		// get { return mPlatform.GetFriends(); }
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_0 = __this->get_mPlatform_6();
		NullCheck(L_0);
		IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* L_1 = PlayGamesPlatform_GetFriends_m59E551A04939AFC81D4E9A5BB28BF44B3B193C32(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean GooglePlayGames.PlayGamesLocalUser::get_authenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesLocalUser_get_authenticated_mB09AF1D85A1681C30DD07A503413F4A91D6D6209 (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, const RuntimeMethod* method)
{
	{
		// get { return mPlatform.IsAuthenticated(); }
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_0 = __this->get_mPlatform_6();
		NullCheck(L_0);
		bool L_1 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean GooglePlayGames.PlayGamesLocalUser::get_underage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesLocalUser_get_underage_mD9C94ADC933FF44BF843A784259C98B781EAFCD2 (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, const RuntimeMethod* method)
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.String GooglePlayGames.PlayGamesLocalUser::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesLocalUser_get_userName_m9ACB57AC10905A86F461D9D8224F57B5A17155F3 (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLocalUser_get_userName_m9ACB57AC10905A86F461D9D8224F57B5A17155F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string retval = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		// if (authenticated)
		bool L_1 = PlayGamesLocalUser_get_authenticated_mB09AF1D85A1681C30DD07A503413F4A91D6D6209(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// retval = mPlatform.GetUserDisplayName();
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_2 = __this->get_mPlatform_6();
		NullCheck(L_2);
		String_t* L_3 = PlayGamesPlatform_GetUserDisplayName_m2F00040F42D5B6EE252487934737C8D62F75AC88(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (!base.userName.Equals(retval))
		String_t* L_4 = PlayGamesUserProfile_get_userName_m0990E94AABF9A7D25EEE987AFD886597DA26607B_inline(__this, /*hidden argument*/NULL);
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		// ResetIdentity(retval, mPlatform.GetUserId(), mPlatform.GetUserImageUrl());
		String_t* L_7 = V_0;
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_8 = __this->get_mPlatform_6();
		NullCheck(L_8);
		String_t* L_9 = PlayGamesPlatform_GetUserId_m75B3086A6ECDAFC69A3C6C39A32F8231571DB0A5(L_8, /*hidden argument*/NULL);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_10 = __this->get_mPlatform_6();
		NullCheck(L_10);
		String_t* L_11 = PlayGamesPlatform_GetUserImageUrl_mACC269480BAE942B582347AE758AE3E446521CA2(L_10, /*hidden argument*/NULL);
		PlayGamesUserProfile_ResetIdentity_m4367C30B2392A7C75299A45863F895ACBD3E94EB(__this, L_7, L_9, L_11, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// return retval;
		String_t* L_12 = V_0;
		return L_12;
	}
}
// System.String GooglePlayGames.PlayGamesLocalUser::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesLocalUser_get_id_mD4F1A627C232FE5B39E72C05393419CCA92A1E90 (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLocalUser_get_id_mD4F1A627C232FE5B39E72C05393419CCA92A1E90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string retval = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		// if (authenticated)
		bool L_1 = PlayGamesLocalUser_get_authenticated_mB09AF1D85A1681C30DD07A503413F4A91D6D6209(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// retval = mPlatform.GetUserId();
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_2 = __this->get_mPlatform_6();
		NullCheck(L_2);
		String_t* L_3 = PlayGamesPlatform_GetUserId_m75B3086A6ECDAFC69A3C6C39A32F8231571DB0A5(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (!base.id.Equals(retval))
		String_t* L_4 = PlayGamesUserProfile_get_id_m6E48ACB5FC7FB0343DFBAE4E5C00C2207DD5CC09_inline(__this, /*hidden argument*/NULL);
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		// ResetIdentity(mPlatform.GetUserDisplayName(), retval, mPlatform.GetUserImageUrl());
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_7 = __this->get_mPlatform_6();
		NullCheck(L_7);
		String_t* L_8 = PlayGamesPlatform_GetUserDisplayName_m2F00040F42D5B6EE252487934737C8D62F75AC88(L_7, /*hidden argument*/NULL);
		String_t* L_9 = V_0;
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_10 = __this->get_mPlatform_6();
		NullCheck(L_10);
		String_t* L_11 = PlayGamesPlatform_GetUserImageUrl_mACC269480BAE942B582347AE758AE3E446521CA2(L_10, /*hidden argument*/NULL);
		PlayGamesUserProfile_ResetIdentity_m4367C30B2392A7C75299A45863F895ACBD3E94EB(__this, L_8, L_9, L_11, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// return retval;
		String_t* L_12 = V_0;
		return L_12;
	}
}
// System.Boolean GooglePlayGames.PlayGamesLocalUser::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesLocalUser_get_isFriend_mBF0A18F1ABB67249959BFBFDB577D146A9E4FF1B (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, const RuntimeMethod* method)
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// UnityEngine.SocialPlatforms.UserState GooglePlayGames.PlayGamesLocalUser::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesLocalUser_get_state_m45FA701EA5EDE96DFED24FDDA28DDEA23D335B36 (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, const RuntimeMethod* method)
{
	{
		// get { return UserState.Online; }
		return (int32_t)(0);
	}
}
// System.String GooglePlayGames.PlayGamesLocalUser::get_AvatarURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesLocalUser_get_AvatarURL_m98736861EA57B799AACBC0995206C278108E691D (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLocalUser_get_AvatarURL_m98736861EA57B799AACBC0995206C278108E691D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string retval = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		// if (authenticated)
		bool L_1 = PlayGamesLocalUser_get_authenticated_mB09AF1D85A1681C30DD07A503413F4A91D6D6209(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// retval = mPlatform.GetUserImageUrl();
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_2 = __this->get_mPlatform_6();
		NullCheck(L_2);
		String_t* L_3 = PlayGamesPlatform_GetUserImageUrl_mACC269480BAE942B582347AE758AE3E446521CA2(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (!base.id.Equals(retval))
		String_t* L_4 = PlayGamesUserProfile_get_id_m6E48ACB5FC7FB0343DFBAE4E5C00C2207DD5CC09_inline(__this, /*hidden argument*/NULL);
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		// ResetIdentity(mPlatform.GetUserDisplayName(),
		//     mPlatform.GetUserId(), retval);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_7 = __this->get_mPlatform_6();
		NullCheck(L_7);
		String_t* L_8 = PlayGamesPlatform_GetUserDisplayName_m2F00040F42D5B6EE252487934737C8D62F75AC88(L_7, /*hidden argument*/NULL);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_9 = __this->get_mPlatform_6();
		NullCheck(L_9);
		String_t* L_10 = PlayGamesPlatform_GetUserId_m75B3086A6ECDAFC69A3C6C39A32F8231571DB0A5(L_9, /*hidden argument*/NULL);
		String_t* L_11 = V_0;
		PlayGamesUserProfile_ResetIdentity_m4367C30B2392A7C75299A45863F895ACBD3E94EB(__this, L_8, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// return retval;
		String_t* L_12 = V_0;
		return L_12;
	}
}
// System.Void GooglePlayGames.PlayGamesLocalUser::GetStats(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesLocalUser_GetStats_mF1CB6E5DC2171907D7E3BF89394ABCB3861D9DA4 (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * __this, Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesLocalUser_GetStats_mF1CB6E5DC2171907D7E3BF89394ABCB3861D9DA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE * L_0 = (U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass22_0__ctor_mF8FDA78A539FD3D32CF71AECFA9CEB5D7D2DB904(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE * L_2 = V_0;
		Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * L_3 = ___callback0;
		NullCheck(L_2);
		L_2->set_callback_1(L_3);
		// if (mStats == null || !mStats.Valid)
		PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * L_4 = __this->get_mStats_7();
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * L_5 = __this->get_mStats_7();
		NullCheck(L_5);
		bool L_6 = PlayerStats_get_Valid_mB3B4331BFF027A3032C147C54B3269DDAB950415_inline(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0041;
		}
	}

IL_0029:
	{
		// mPlatform.GetPlayerStats((rc, stats) =>
		// {
		//     mStats = stats;
		//     callback(rc, stats);
		// });
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_7 = __this->get_mPlatform_6();
		U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE * L_8 = V_0;
		Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * L_9 = (Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF *)il2cpp_codegen_object_new(Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF_il2cpp_TypeInfo_var);
		Action_2__ctor_mF840087283657EEF43BFF001BCB75C682A5E67BF(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass22_0_U3CGetStatsU3Eb__0_m90E6C2C853D29896C35410B7C90B450A127E0BAA_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mF840087283657EEF43BFF001BCB75C682A5E67BF_RuntimeMethod_var);
		NullCheck(L_7);
		PlayGamesPlatform_GetPlayerStats_mFCCF3AD5EE36E79D2469238E1D07EC74113973A5(L_7, L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0041:
	{
		// callback(CommonStatusCodes.Success, mStats);
		U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE * L_10 = V_0;
		NullCheck(L_10);
		Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * L_11 = L_10->get_callback_1();
		PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * L_12 = __this->get_mStats_7();
		NullCheck(L_11);
		Action_2_Invoke_m8C7BC4165AC871BDB6C592BF090898015B39A8AD(L_11, 0, L_12, /*hidden argument*/Action_2_Invoke_m8C7BC4165AC871BDB6C592BF090898015B39A8AD_RuntimeMethod_var);
		// }
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
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mF8FDA78A539FD3D32CF71AECFA9CEB5D7D2DB904 (U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass22_0::<GetStats>b__0(GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CGetStatsU3Eb__0_m90E6C2C853D29896C35410B7C90B450A127E0BAA (U3CU3Ec__DisplayClass22_0_t1449AB6A5C13D70BB2512FDCD097C7A4F5CD4CBE * __this, int32_t ___rc0, PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * ___stats1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass22_0_U3CGetStatsU3Eb__0_m90E6C2C853D29896C35410B7C90B450A127E0BAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mStats = stats;
		PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * L_0 = __this->get_U3CU3E4__this_0();
		PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * L_1 = ___stats1;
		NullCheck(L_0);
		L_0->set_mStats_7(L_1);
		// callback(rc, stats);
		Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * L_2 = __this->get_callback_1();
		int32_t L_3 = ___rc0;
		PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * L_4 = ___stats1;
		NullCheck(L_2);
		Action_2_Invoke_m8C7BC4165AC871BDB6C592BF090898015B39A8AD(L_2, L_3, L_4, /*hidden argument*/Action_2_Invoke_m8C7BC4165AC871BDB6C592BF090898015B39A8AD_RuntimeMethod_var);
		// });
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
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m9AB8E2960E18E86DD24D10B9F62D8E4C798A1DAA (U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass3_0::<Authenticate>b__0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CAuthenticateU3Eb__0_m1D70D96D9F17BF39A51AD6F9883A9724BEC9F154 (U3CU3Ec__DisplayClass3_0_tC1A4851D0FADA61549E665F0542A75021756DC2F * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass3_0_U3CAuthenticateU3Eb__0_m1D70D96D9F17BF39A51AD6F9883A9724BEC9F154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mPlatform.Authenticate(status => callback(status == SignInStatus.Success));
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_0 = __this->get_callback_0();
		int32_t L_1 = ___status0;
		NullCheck(L_0);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
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
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m489DD2F99CCCC4E5EBAE687B5104BFF259CD3FBA (U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesLocalUser/<>c__DisplayClass4_0::<Authenticate>b__0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CAuthenticateU3Eb__0_mED13DD59E8078C4E4B3745D2EC6E4190C9E6CC7C (U3CU3Ec__DisplayClass4_0_t62B8E628500888F5049111B97490B2C079139201 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass4_0_U3CAuthenticateU3Eb__0_mED13DD59E8078C4E4B3745D2EC6E4190C9E6CC7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mPlatform.Authenticate(status => callback(status == SignInStatus.Success, status.ToString()));
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_0 = __this->get_callback_0();
		int32_t L_1 = ___status0;
		RuntimeObject * L_2 = Box(SignInStatus_tDB7CC62A7FBD2F0C04DF3D8991D4328BE181E0DC_il2cpp_TypeInfo_var, (&___status0));
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		___status0 = *(int32_t*)UnBox(L_2);
		NullCheck(L_0);
		Action_2_Invoke_m28751EB3D7737B18DA9A82B61E6E5203124E81D4(L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), L_3, /*hidden argument*/Action_2_Invoke_m28751EB3D7737B18DA9A82B61E6E5203124E81D4_RuntimeMethod_var);
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
// System.Void GooglePlayGames.PlayGamesPlatform::.ctor(GooglePlayGames.BasicApi.IPlayGamesClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform__ctor_mA50E77E0B5DD8071FAC4B55FC9E6F6373455F57C (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform__ctor_mA50E77E0B5DD8071FAC4B55FC9E6F6373455F57C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, string> mIdMap = new Dictionary<string, string>();
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_0, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		__this->set_mIdMap_6(L_0);
		// internal PlayGamesPlatform(IPlayGamesClient client)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.mClient = Misc.CheckNotNull(client);
		RuntimeObject* L_1 = ___client0;
		RuntimeObject* L_2 = Misc_CheckNotNull_TisIPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_m09BC1C13C97243ED28A0A63755E16826EC888F5D(L_1, /*hidden argument*/Misc_CheckNotNull_TisIPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_m09BC1C13C97243ED28A0A63755E16826EC888F5D_RuntimeMethod_var);
		__this->set_mClient_4(L_2);
		// this.mLocalUser = new PlayGamesLocalUser(this);
		PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * L_3 = (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 *)il2cpp_codegen_object_new(PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005_il2cpp_TypeInfo_var);
		PlayGamesLocalUser__ctor_mFCF8EB49C54EA782B41565421DA5CAB125EB21E7(L_3, __this, /*hidden argument*/NULL);
		__this->set_mLocalUser_3(L_3);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform__ctor_mD3760AB17DF96FDF8E96A1DB4FC18E3B22F485B5 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform__ctor_mD3760AB17DF96FDF8E96A1DB4FC18E3B22F485B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, string> mIdMap = new Dictionary<string, string>();
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_0, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		__this->set_mIdMap_6(L_0);
		// private PlayGamesPlatform()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// GooglePlayGames.OurUtils.Logger.d("Creating new PlayGamesPlatform");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral76704619F530DAC50897492D598C3662761E83E2, /*hidden argument*/NULL);
		// this.mLocalUser = new PlayGamesLocalUser(this);
		PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * L_1 = (PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 *)il2cpp_codegen_object_new(PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005_il2cpp_TypeInfo_var);
		PlayGamesLocalUser__ctor_mFCF8EB49C54EA782B41565421DA5CAB125EB21E7(L_1, __this, /*hidden argument*/NULL);
		__this->set_mLocalUser_3(L_1);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.PlayGamesPlatform::get_DebugLogEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesPlatform_get_DebugLogEnabled_mF87373B60659AF00FB4AA0BA1864034F04C56152 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_get_DebugLogEnabled_mF87373B60659AF00FB4AA0BA1864034F04C56152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return GooglePlayGames.OurUtils.Logger.DebugLogEnabled; }
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		bool L_0 = Logger_get_DebugLogEnabled_m0ABE85CD8B71AE08981813CE350768B0232D2851_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::set_DebugLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_set_DebugLogEnabled_m763C0C31CD17DC09E61D0E4E9D324D742D48BB68 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_set_DebugLogEnabled_m763C0C31CD17DC09E61D0E4E9D324D742D48BB68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { GooglePlayGames.OurUtils.Logger.DebugLogEnabled = value; }
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_set_DebugLogEnabled_m0EF48153D1CEDBCE2F26799B8421D26C2A5B5D17_inline(L_0, /*hidden argument*/NULL);
		// set { GooglePlayGames.OurUtils.Logger.DebugLogEnabled = value; }
		return;
	}
}
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * PlayGamesPlatform_get_Instance_m14016685F7C32BEF2E0779F03F8887E5C25B416B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_get_Instance_m14016685F7C32BEF2E0779F03F8887E5C25B416B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sInstance == null)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_0 = ((PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var))->get_sInstance_0();
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// OurUtils.Logger.d("Initializing the PlayGamesPlatform instance.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral2DDF56C0415D2BF7A224E8D9BD51AE31CD09EF1C, /*hidden argument*/NULL);
		// sInstance =
		//     new PlayGamesPlatform(PlayGamesClientFactory.GetPlatformPlayGamesClient());
		RuntimeObject* L_1 = PlayGamesClientFactory_GetPlatformPlayGamesClient_m61FA1D5117C523303D3BFFA844EB603E8A5A43B4(/*hidden argument*/NULL);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_2 = (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D *)il2cpp_codegen_object_new(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform__ctor_mA50E77E0B5DD8071FAC4B55FC9E6F6373455F57C(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		il2cpp_codegen_memory_barrier();
		((PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var))->set_sInstance_0(L_2);
	}

IL_0024:
	{
		// return sInstance;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_3 = ((PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var))->get_sInstance_0();
		il2cpp_codegen_memory_barrier();
		return L_3;
	}
}
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient GooglePlayGames.PlayGamesPlatform::get_Nearby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesPlatform_get_Nearby_m89C44FD7C1F1DD8A0BC59D1D69734FF3551EDE78 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_get_Nearby_m89C44FD7C1F1DD8A0BC59D1D69734FF3551EDE78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sNearbyConnectionClient == null && !sNearbyInitializePending)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var))->get_sNearbyConnectionClient_2();
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		bool L_1 = ((PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var))->get_sNearbyInitializePending_1();
		il2cpp_codegen_memory_barrier();
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// sNearbyInitializePending = true;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		il2cpp_codegen_memory_barrier();
		((PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var))->set_sNearbyInitializePending_1(1);
		// InitializeNearby(null);
		PlayGamesPlatform_InitializeNearby_mE1C5B3D8FE0154DC12F0B981D1E75F8D34A2C262((Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E *)NULL, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// return sNearbyConnectionClient;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var))->get_sNearbyConnectionClient_2();
		il2cpp_codegen_memory_barrier();
		return L_2;
	}
}
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient GooglePlayGames.PlayGamesPlatform::get_SavedGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesPlatform_get_SavedGame_m0EF54D6FE228F048B429F66ACB2911680385D375 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_get_SavedGame_m0EF54D6FE228F048B429F66ACB2911680385D375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return mClient.GetSavedGameClient(); }
		RuntimeObject* L_0 = __this->get_mClient_4();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(28 /* GooglePlayGames.BasicApi.SavedGame.ISavedGameClient GooglePlayGames.BasicApi.IPlayGamesClient::GetSavedGameClient() */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// GooglePlayGames.BasicApi.Events.IEventsClient GooglePlayGames.PlayGamesPlatform::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesPlatform_get_Events_m838814A6F57F350DF52F1B79B84EEFAD96B41E38 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_get_Events_m838814A6F57F350DF52F1B79B84EEFAD96B41E38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return mClient.GetEventsClient(); }
		RuntimeObject* L_0 = __this->get_mClient_4();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(29 /* GooglePlayGames.BasicApi.Events.IEventsClient GooglePlayGames.BasicApi.IPlayGamesClient::GetEventsClient() */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser GooglePlayGames.PlayGamesPlatform::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesPlatform_get_localUser_mF11D29EEEB3D927CB200E4267ED8608CB32ABA0A (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	{
		// get { return mLocalUser; }
		PlayGamesLocalUser_t3A3B402F82D1D1EE0716B93260A8DC05515B4005 * L_0 = __this->get_mLocalUser_3();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::InitializeNearby(System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_InitializeNearby_mE1C5B3D8FE0154DC12F0B981D1E75F8D34A2C262 (Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_InitializeNearby_mE1C5B3D8FE0154DC12F0B981D1E75F8D34A2C262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6 * L_0 = (U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass22_0__ctor_m7919BF3A051E2650C9A61297F70002EAFE80D463(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6 * L_1 = V_0;
		Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * L_2 = ___callback0;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		// OurUtils.Logger.d("Calling InitializeNearby!");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteralCEB8315BB749A1E274E7B8FC80CE01659A30BAC6, /*hidden argument*/NULL);
		// if (sNearbyConnectionClient == null)
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var))->get_sNearbyConnectionClient_2();
		il2cpp_codegen_memory_barrier();
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// NearbyConnectionClientFactory.Create(client => {
		//     OurUtils.Logger.d("Nearby Client Created!!");
		//     sNearbyConnectionClient = client;
		//     if (callback != null) {
		//         callback.Invoke(client);
		//     }
		//     else {
		//         OurUtils.Logger.d("Initialize Nearby callback is null");
		//     }
		// });
		U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6 * L_4 = V_0;
		Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * L_5 = (Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E *)il2cpp_codegen_object_new(Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E_il2cpp_TypeInfo_var);
		Action_1__ctor_mC089FB1B1C5EDA3FDB725865A78F4DDB6FEE7631(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass22_0_U3CInitializeNearbyU3Eb__0_m73F95D33AB29717C0FC24D96A0A8B617E881F4DB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC089FB1B1C5EDA3FDB725865A78F4DDB6FEE7631_RuntimeMethod_var);
		NearbyConnectionClientFactory_Create_m5A519A39795A398D0D535D70990334B85051AF4D(L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0032:
	{
		// else if (callback != null)
		U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6 * L_6 = V_0;
		NullCheck(L_6);
		Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * L_7 = L_6->get_callback_0();
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		// OurUtils.Logger.d("Nearby Already initialized: calling callback directly");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral0DF2FD657310BCC8D2402FF26AB87F791C8FD4BF, /*hidden argument*/NULL);
		// callback.Invoke(sNearbyConnectionClient);
		U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6 * L_8 = V_0;
		NullCheck(L_8);
		Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * L_9 = L_8->get_callback_0();
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		RuntimeObject* L_10 = ((PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var))->get_sNearbyConnectionClient_2();
		il2cpp_codegen_memory_barrier();
		NullCheck(L_9);
		Action_1_Invoke_m81E12D38E21332B07DD65B0DEB0D1AEE6A14C2FC(L_9, L_10, /*hidden argument*/Action_1_Invoke_m81E12D38E21332B07DD65B0DEB0D1AEE6A14C2FC_RuntimeMethod_var);
		// }
		return;
	}

IL_0057:
	{
		// OurUtils.Logger.d("Nearby Already initialized");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral628E9871281BBC32324D8D647AD72BD471941929, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * PlayGamesPlatform_Activate_m2BCDE497E80518F1A64C135A0503A002B2AE80E6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_Activate_m2BCDE497E80518F1A64C135A0503A002B2AE80E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GooglePlayGames.OurUtils.Logger.d("Activating PlayGamesPlatform.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral744787436342EA5080EB4C7B6395134319B3F827, /*hidden argument*/NULL);
		// Social.Active = PlayGamesPlatform.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_0 = PlayGamesPlatform_get_Instance_m14016685F7C32BEF2E0779F03F8887E5C25B416B(/*hidden argument*/NULL);
		Social_set_Active_m6068C76CDEDCBB996D5F397BDF9F1038FD99E7C6(L_0, /*hidden argument*/NULL);
		// GooglePlayGames.OurUtils.Logger.d(
		//     "PlayGamesPlatform activated: " + Social.Active);
		RuntimeObject* L_1 = Social_get_Active_m3A0805FA14B55B8A297411DDF6295127A62C83FD(/*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral2A4F430C3C6B6AFD290E446F57199FFD4CB1915F, L_1, /*hidden argument*/NULL);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_2, /*hidden argument*/NULL);
		// return PlayGamesPlatform.Instance;
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_3 = PlayGamesPlatform_get_Instance_m14016685F7C32BEF2E0779F03F8887E5C25B416B(/*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::AddIdMapping(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_AddIdMapping_m836AAFB3073558D3968D4340CA978A7CB3D0631D (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___fromId0, String_t* ___toId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_AddIdMapping_m836AAFB3073558D3968D4340CA978A7CB3D0631D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mIdMap[fromId] = toId;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = __this->get_mIdMap_6();
		String_t* L_1 = ___fromId0;
		String_t* L_2 = ___toId1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::Authenticate(System.Action`1<GooglePlayGames.BasicApi.SignInStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_Authenticate_m1EEFB9A0A2D4EBFC011E2EAA1C8D5AB04F5AB41A (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_Authenticate_m1EEFB9A0A2D4EBFC011E2EAA1C8D5AB04F5AB41A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mClient.Authenticate(callback);
		RuntimeObject* L_0 = __this->get_mClient_4();
		Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D * L_1 = ___callback0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D * >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::Authenticate(System.Action`1<GooglePlayGames.BasicApi.SignInStatus>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_Authenticate_m5B691D43AC9F0CBCECA6820F6598AD2B860312FA (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, RuntimeObject* ___unused0, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_Authenticate_m5B691D43AC9F0CBCECA6820F6598AD2B860312FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730 * L_0 = (U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass26_0__ctor_m8DD309AA13736A1FA5B74D6B77A1380C6373E998(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730 * L_1 = V_0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = ___callback1;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		// Authenticate(status => callback(status == SignInStatus.Success));
		U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730 * L_3 = V_0;
		Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D * L_4 = (Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D *)il2cpp_codegen_object_new(Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D_il2cpp_TypeInfo_var);
		Action_1__ctor_m6EED033785616C99B64874ACE9B2A1D909F57561(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass26_0_U3CAuthenticateU3Eb__0_mFCA715935B7B3D1E1C9328C1DCBAC47B514AF209_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6EED033785616C99B64874ACE9B2A1D909F57561_RuntimeMethod_var);
		PlayGamesPlatform_Authenticate_m1EEFB9A0A2D4EBFC011E2EAA1C8D5AB04F5AB41A(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`2<System.Boolean,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_Authenticate_m7A1A8BAD6AED8CC9A74CB028D881F6EE95B59C3A (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, RuntimeObject* ___unused0, Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_Authenticate_m7A1A8BAD6AED8CC9A74CB028D881F6EE95B59C3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910 * L_0 = (U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass27_0__ctor_m24E30FCD7EF3B3D3335012E77876453F223A45D3(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910 * L_1 = V_0;
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_2 = ___callback1;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		// Authenticate(status => callback(status == SignInStatus.Success, status.ToString()));
		U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910 * L_3 = V_0;
		Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D * L_4 = (Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D *)il2cpp_codegen_object_new(Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D_il2cpp_TypeInfo_var);
		Action_1__ctor_m6EED033785616C99B64874ACE9B2A1D909F57561(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass27_0_U3CAuthenticateU3Eb__0_m3722C6C1D5ED583E817898CF22CBC9B3EE1EC65F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m6EED033785616C99B64874ACE9B2A1D909F57561_RuntimeMethod_var);
		PlayGamesPlatform_Authenticate_m1EEFB9A0A2D4EBFC011E2EAA1C8D5AB04F5AB41A(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::ManuallyAuthenticate(System.Action`1<GooglePlayGames.BasicApi.SignInStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ManuallyAuthenticate_m6C45845424AEC3E943CF0FC7674B7DCD2A81D0BB (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_ManuallyAuthenticate_m6C45845424AEC3E943CF0FC7674B7DCD2A81D0BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mClient.ManuallyAuthenticate(callback);
		RuntimeObject* L_0 = __this->get_mClient_4();
		Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D * L_1 = ___callback0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t0B8EB4EB1C34C041A7478E12AE6F6778BD0DF03D * >::Invoke(1 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::ManuallyAuthenticate(System.Action`1<GooglePlayGames.BasicApi.SignInStatus>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.PlayGamesPlatform::IsAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mClient != null && mClient.IsAuthenticated();
		RuntimeObject* L_0 = __this->get_mClient_4();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_mClient_4();
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean GooglePlayGames.BasicApi.IPlayGamesClient::IsAuthenticated() */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::RequestServerSideAccess(System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_RequestServerSideAccess_m539E6167FF29601C638136438294786954598017 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, bool ___forceRefreshToken0, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_RequestServerSideAccess_m539E6167FF29601C638136438294786954598017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Misc.CheckNotNull(callback);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = ___callback1;
		Misc_CheckNotNull_TisAction_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_mDFDACCDFDE8BE115968581063F2F6E9ECF7C1872(L_0, /*hidden argument*/Misc_CheckNotNull_TisAction_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_mDFDACCDFDE8BE115968581063F2F6E9ECF7C1872_RuntimeMethod_var);
		// if (!IsAuthenticated())
		bool L_1 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		// OurUtils.Logger.e("RequestServerSideAccess() can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteralEC9E127F45A584269E1627DF898C8C2E1B71B123, /*hidden argument*/NULL);
		// InvokeCallbackOnGameThread(callback, null);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_2 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform_InvokeCallbackOnGameThread_TisString_t_mB0AE350F815B5B8B9BF2E976A161A7C7CE86E9E8(L_2, (String_t*)NULL, /*hidden argument*/PlayGamesPlatform_InvokeCallbackOnGameThread_TisString_t_mB0AE350F815B5B8B9BF2E976A161A7C7CE86E9E8_RuntimeMethod_var);
		// return;
		return;
	}

IL_0021:
	{
		// mClient.RequestServerSideAccess(forceRefreshToken, callback);
		RuntimeObject* L_3 = __this->get_mClient_4();
		bool L_4 = ___forceRefreshToken0;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_5 = ___callback1;
		NullCheck(L_3);
		InterfaceActionInvoker2< bool, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * >::Invoke(3 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::RequestServerSideAccess(System.Boolean,System.Action`1<System.String>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadUsers_mE4A0299AE50B142846762BDF15908782DDD9E789 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___userIds0, Action_1_tE5C7AC57BC589DA8234AF9ECC8F8B62ACEA5F826 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_LoadUsers_mE4A0299AE50B142846762BDF15908782DDD9E789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "GetUserId() can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteralA9826401EFB307A0797864795278DB4203AA3B88, /*hidden argument*/NULL);
		// callback(new IUserProfile[0]);
		Action_1_tE5C7AC57BC589DA8234AF9ECC8F8B62ACEA5F826 * L_1 = ___callback1;
		IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* L_2 = (IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0*)(IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0*)SZArrayNew(IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_1);
		Action_1_Invoke_mD9031C0AFA2DF30894EB631895C4AF2239CDBE9C(L_1, L_2, /*hidden argument*/Action_1_Invoke_mD9031C0AFA2DF30894EB631895C4AF2239CDBE9C_RuntimeMethod_var);
		// return;
		return;
	}

IL_001f:
	{
		// mClient.LoadUsers(userIds, callback);
		RuntimeObject* L_3 = __this->get_mClient_4();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = ___userIds0;
		Action_1_tE5C7AC57BC589DA8234AF9ECC8F8B62ACEA5F826 * L_5 = ___callback1;
		NullCheck(L_3);
		InterfaceActionInvoker2< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, Action_1_tE5C7AC57BC589DA8234AF9ECC8F8B62ACEA5F826 * >::Invoke(9 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.String GooglePlayGames.PlayGamesPlatform::GetUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesPlatform_GetUserId_m75B3086A6ECDAFC69A3C6C39A32F8231571DB0A5 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_GetUserId_m75B3086A6ECDAFC69A3C6C39A32F8231571DB0A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "GetUserId() can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteralA9826401EFB307A0797864795278DB4203AA3B88, /*hidden argument*/NULL);
		// return "0";
		return _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
	}

IL_0018:
	{
		// return mClient.GetUserId();
		RuntimeObject* L_1 = __this->get_mClient_4();
		NullCheck(L_1);
		String_t* L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String GooglePlayGames.BasicApi.IPlayGamesClient::GetUserId() */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::GetPlayerStats(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_GetPlayerStats_mFCCF3AD5EE36E79D2469238E1D07EC74113973A5 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_GetPlayerStats_mFCCF3AD5EE36E79D2469238E1D07EC74113973A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mClient != null && mClient.IsAuthenticated())
		RuntimeObject* L_0 = __this->get_mClient_4();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_mClient_4();
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean GooglePlayGames.BasicApi.IPlayGamesClient::IsAuthenticated() */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// mClient.GetPlayerStats(callback);
		RuntimeObject* L_3 = __this->get_mClient_4();
		Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * L_4 = ___callback0;
		NullCheck(L_3);
		InterfaceActionInvoker1< Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * >::Invoke(8 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::GetPlayerStats(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_3, L_4);
		// }
		return;
	}

IL_0022:
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "GetPlayerStats can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteralB9DFE2C48617A85367073E870DC56CA18251B32E, /*hidden argument*/NULL);
		// callback(CommonStatusCodes.SignInRequired, new PlayerStats());
		Action_2_t4A2C03E5F08683114661B7C940BA139B5534F7AF * L_5 = ___callback0;
		PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * L_6 = (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA *)il2cpp_codegen_object_new(PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA_il2cpp_TypeInfo_var);
		PlayerStats__ctor_m4CE96B7D947FBF1805FF5359E3E6A7B5AC230AC6(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Action_2_Invoke_m8C7BC4165AC871BDB6C592BF090898015B39A8AD(L_5, 4, L_6, /*hidden argument*/Action_2_Invoke_m8C7BC4165AC871BDB6C592BF090898015B39A8AD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String GooglePlayGames.PlayGamesPlatform::GetUserDisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesPlatform_GetUserDisplayName_m2F00040F42D5B6EE252487934737C8D62F75AC88 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_GetUserDisplayName_m2F00040F42D5B6EE252487934737C8D62F75AC88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "GetUserDisplayName can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral7F71B16CAD61ACB2D3DC8328FE9C376BD3F60CCE, /*hidden argument*/NULL);
		// return string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_0018:
	{
		// return mClient.GetUserDisplayName();
		RuntimeObject* L_2 = __this->get_mClient_4();
		NullCheck(L_2);
		String_t* L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String GooglePlayGames.BasicApi.IPlayGamesClient::GetUserDisplayName() */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
// System.String GooglePlayGames.PlayGamesPlatform::GetUserImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesPlatform_GetUserImageUrl_mACC269480BAE942B582347AE758AE3E446521CA2 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_GetUserImageUrl_mACC269480BAE942B582347AE758AE3E446521CA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "GetUserImageUrl can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral6E7004C0B81A22B677A68A197C9C35C3BA572E65, /*hidden argument*/NULL);
		// return null;
		return (String_t*)NULL;
	}

IL_0014:
	{
		// return mClient.GetUserImageUrl();
		RuntimeObject* L_1 = __this->get_mClient_4();
		NullCheck(L_1);
		String_t* L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String GooglePlayGames.BasicApi.IPlayGamesClient::GetUserImageUrl() */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ReportProgress_mEC3154A0F8CF2F6ACABB2886B352D846F19A813E (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___achievementID0, double ___progress1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_ReportProgress_mEC3154A0F8CF2F6ACABB2886B352D846F19A813E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_0 = (U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass36_0__ctor_m7A4A3494814A50E17A793B8FB8E448D665E3E52F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_1 = V_0;
		String_t* L_2 = ___achievementID0;
		NullCheck(L_1);
		L_1->set_achievementID_0(L_2);
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_3 = V_0;
		double L_4 = ___progress1;
		NullCheck(L_3);
		L_3->set_progress_1(L_4);
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U3CU3E4__this_2(__this);
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_6 = V_0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_7 = ___callback2;
		NullCheck(L_6);
		L_6->set_callback_3(L_7);
		// callback = ToOnGameThread(callback);
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_8 = V_0;
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_9 = V_0;
		NullCheck(L_9);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_10 = L_9->get_callback_3();
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_11 = PlayGamesPlatform_ToOnGameThread_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mBF8371C6A17EFD3ACAE7EDE99306F66A1A1B38E7(L_10, /*hidden argument*/PlayGamesPlatform_ToOnGameThread_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_mBF8371C6A17EFD3ACAE7EDE99306F66A1A1B38E7_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->set_callback_3(L_11);
		// if (!IsAuthenticated())
		bool L_12 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0052;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "ReportProgress can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral1351FE64ADFC9AC005B2D4BB86270BA8DAE40B39, /*hidden argument*/NULL);
		// callback.Invoke(false);
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_13 = V_0;
		NullCheck(L_13);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_14 = L_13->get_callback_3();
		NullCheck(L_14);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_14, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
		// return;
		return;
	}

IL_0052:
	{
		// GooglePlayGames.OurUtils.Logger.d("ReportProgress, " + achievementID + ", " + progress);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3055B81B4DA3960E6A2975A30E6F6CE2EE7BD467);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3055B81B4DA3960E6A2975A30E6F6CE2EE7BD467);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = L_18->get_achievementID_0();
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_20;
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_22 = V_0;
		NullCheck(L_22);
		double L_23 = L_22->get_progress_1();
		double L_24 = L_23;
		RuntimeObject * L_25 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		String_t* L_26 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_26, /*hidden argument*/NULL);
		// achievementID = MapId(achievementID);
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_27 = V_0;
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = L_28->get_achievementID_0();
		String_t* L_30 = PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA(__this, L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		L_27->set_achievementID_0(L_30);
		// if (progress < 0.000001)
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_31 = V_0;
		NullCheck(L_31);
		double L_32 = L_31->get_progress_1();
		if ((!(((double)L_32) < ((double)(1.0E-06)))))
		{
			goto IL_00ce;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.d(
		//     "Progress 0.00 interpreted as request to reveal.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral66C9B33FB8129445DDF9DF6F933577A90B962365, /*hidden argument*/NULL);
		// mClient.RevealAchievement(achievementID, callback);
		RuntimeObject* L_33 = __this->get_mClient_4();
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_34 = V_0;
		NullCheck(L_34);
		String_t* L_35 = L_34->get_achievementID_0();
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_36 = V_0;
		NullCheck(L_36);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_37 = L_36->get_callback_3();
		NullCheck(L_33);
		InterfaceActionInvoker2< String_t*, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(12 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::RevealAchievement(System.String,System.Action`1<System.Boolean>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_33, L_35, L_37);
		// return;
		return;
	}

IL_00ce:
	{
		// mClient.LoadAchievements(ach =>
		// {
		//     for (int i = 0; i < ach.Length; i++)
		//     {
		//         if (ach[i].Id == achievementID)
		//         {
		//             if (ach[i].IsIncremental)
		//             {
		//                 GooglePlayGames.OurUtils.Logger.d("Progress " + progress +
		//                                                   " interpreted as incremental target (approximate).");
		// 
		//                 if (progress >= 0.0 && progress <= 1.0)
		//                 {
		//                     // in a previous version, incremental progress was reported by using the range [0-1]
		//                     GooglePlayGames.OurUtils.Logger.w(
		//                         "Progress " + progress +
		//                         " is less than or equal to 1. You might be trying to use values in the range of [0,1], while values are expected to be within the range [0,100]. If you are using the latter, you can safely ignore this message.");
		//                 }
		// 
		//                 mClient.SetStepsAtLeast(achievementID, progressToSteps(progress, ach[i].TotalSteps), callback);
		//             }
		//             else
		//             {
		//                 if (progress >= 100)
		//                 {
		//                     // unlock it!
		//                     GooglePlayGames.OurUtils.Logger.d("Progress " + progress + " interpreted as UNLOCK.");
		//                     mClient.UnlockAchievement(achievementID, callback);
		//                 }
		//                 else
		//                 {
		//                     // not enough to unlock
		//                     GooglePlayGames.OurUtils.Logger.d(
		//                         "Progress " + progress + " not enough to unlock non-incremental achievement.");
		//                     callback.Invoke(false);
		//                 }
		//             }
		// 
		//             return;
		//         }
		//     }
		// 
		//     // Achievement not found
		//     GooglePlayGames.OurUtils.Logger.e("Unable to locate achievement " + achievementID);
		//     callback.Invoke(false);
		// });
		RuntimeObject* L_38 = __this->get_mClient_4();
		U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * L_39 = V_0;
		Action_1_t40C6281DD9B38B590C5280473351A8E16A632837 * L_40 = (Action_1_t40C6281DD9B38B590C5280473351A8E16A632837 *)il2cpp_codegen_object_new(Action_1_t40C6281DD9B38B590C5280473351A8E16A632837_il2cpp_TypeInfo_var);
		Action_1__ctor_m5E3C38C3D4727D73BEE4575399298637A0CF1091(L_40, L_39, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass36_0_U3CReportProgressU3Eb__0_m731D6F238BC22A07215EB2B739119EE66085CC09_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5E3C38C3D4727D73BEE4575399298637A0CF1091_RuntimeMethod_var);
		NullCheck(L_38);
		InterfaceActionInvoker1< Action_1_t40C6281DD9B38B590C5280473351A8E16A632837 * >::Invoke(10 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::LoadAchievements(System.Action`1<GooglePlayGames.BasicApi.Achievement[]>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_38, L_40);
		// }
		return;
	}
}
// System.Int32 GooglePlayGames.PlayGamesPlatform::progressToSteps(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesPlatform_progressToSteps_m7212C612319BEE0FC41835750E4E05CAC200F91D (double ___progress0, int32_t ___totalSteps1, const RuntimeMethod* method)
{
	{
		// return (progress >= 100.0) ? totalSteps : (int) (progress * totalSteps / 100.0);
		double L_0 = ___progress0;
		if ((((double)L_0) >= ((double)(100.0))))
		{
			goto IL_001c;
		}
	}
	{
		double L_1 = ___progress0;
		int32_t L_2 = ___totalSteps1;
		return (((int32_t)((int32_t)((double)((double)((double)il2cpp_codegen_multiply((double)L_1, (double)(((double)((double)L_2)))))/(double)(100.0))))));
	}

IL_001c:
	{
		int32_t L_3 = ___totalSteps1;
		return L_3;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::RevealAchievement(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_RevealAchievement_m7835613CF1B69190340B2624A3C440CEB4ABC99C (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___achievementID0, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_RevealAchievement_m7835613CF1B69190340B2624A3C440CEB4ABC99C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "RevealAchievement can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteralB98FC06D60BCCD382F55412D7E5477D72ED15908, /*hidden argument*/NULL);
		// if (callback != null)
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// GooglePlayGames.OurUtils.Logger.d(
		//     "RevealAchievement: " + achievementID);
		String_t* L_3 = ___achievementID0;
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral3ADA7648DB295286F5124D61D80497243A2194FB, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_4, /*hidden argument*/NULL);
		// achievementID = MapId(achievementID);
		String_t* L_5 = ___achievementID0;
		String_t* L_6 = PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA(__this, L_5, /*hidden argument*/NULL);
		___achievementID0 = L_6;
		// mClient.RevealAchievement(achievementID, callback);
		RuntimeObject* L_7 = __this->get_mClient_4();
		String_t* L_8 = ___achievementID0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_9 = ___callback1;
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(12 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::RevealAchievement(System.String,System.Action`1<System.Boolean>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::UnlockAchievement(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_UnlockAchievement_m5F9DB3C352271ECC146E01C2A882C736AC32A3A4 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___achievementID0, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_UnlockAchievement_m5F9DB3C352271ECC146E01C2A882C736AC32A3A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "UnlockAchievement can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteralB63A8A15ADCC8827E229FE1465EF525130DAF918, /*hidden argument*/NULL);
		// if (callback != null)
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// GooglePlayGames.OurUtils.Logger.d(
		//     "UnlockAchievement: " + achievementID);
		String_t* L_3 = ___achievementID0;
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral297F9C2A9EE712814A210B9EE4AF05B996B5B889, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_4, /*hidden argument*/NULL);
		// achievementID = MapId(achievementID);
		String_t* L_5 = ___achievementID0;
		String_t* L_6 = PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA(__this, L_5, /*hidden argument*/NULL);
		___achievementID0 = L_6;
		// mClient.UnlockAchievement(achievementID, callback);
		RuntimeObject* L_7 = __this->get_mClient_4();
		String_t* L_8 = ___achievementID0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_9 = ___callback1;
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(11 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::UnlockAchievement(System.String,System.Action`1<System.Boolean>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::IncrementAchievement(System.String,System.Int32,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_IncrementAchievement_m74E56B92A21CA4AF406D7E148DF789E8A1FEE5F8 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___achievementID0, int32_t ___steps1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_IncrementAchievement_m74E56B92A21CA4AF406D7E148DF789E8A1FEE5F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "IncrementAchievement can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral4CD2DBDB7EBE53146F7CC17CDB0F7E0F3E0727F6, /*hidden argument*/NULL);
		// if (callback != null)
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback2;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// GooglePlayGames.OurUtils.Logger.d(
		//     "IncrementAchievement: " + achievementID + ", steps " + steps);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral17D1984F75057BDAB8AE53116D30C9297DC68F70);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral17D1984F75057BDAB8AE53116D30C9297DC68F70);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		String_t* L_6 = ___achievementID0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral7C7FD620D8674C1B40B50CE7B85A3B9C0C0B6F92);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral7C7FD620D8674C1B40B50CE7B85A3B9C0C0B6F92);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		int32_t L_9 = ___steps1;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_12, /*hidden argument*/NULL);
		// achievementID = MapId(achievementID);
		String_t* L_13 = ___achievementID0;
		String_t* L_14 = PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA(__this, L_13, /*hidden argument*/NULL);
		___achievementID0 = L_14;
		// mClient.IncrementAchievement(achievementID, steps, callback);
		RuntimeObject* L_15 = __this->get_mClient_4();
		String_t* L_16 = ___achievementID0;
		int32_t L_17 = ___steps1;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_18 = ___callback2;
		NullCheck(L_15);
		InterfaceActionInvoker3< String_t*, int32_t, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(13 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::IncrementAchievement(System.String,System.Int32,System.Action`1<System.Boolean>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_15, L_16, L_17, L_18);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::SetStepsAtLeast(System.String,System.Int32,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_SetStepsAtLeast_mC56F548E409BC878949CEB315D7E6573223FCE7C (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___achievementID0, int32_t ___steps1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_SetStepsAtLeast_mC56F548E409BC878949CEB315D7E6573223FCE7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "SetStepsAtLeast can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral96FC4D05CD5E47A970557F037311F56A50637343, /*hidden argument*/NULL);
		// if (callback != null)
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback2;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// GooglePlayGames.OurUtils.Logger.d(
		//     "SetStepsAtLeast: " + achievementID + ", steps " + steps);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralC984FB96CDB50639F32D5227E2DFD6EB99658BC2);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC984FB96CDB50639F32D5227E2DFD6EB99658BC2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		String_t* L_6 = ___achievementID0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral7C7FD620D8674C1B40B50CE7B85A3B9C0C0B6F92);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral7C7FD620D8674C1B40B50CE7B85A3B9C0C0B6F92);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		int32_t L_9 = ___steps1;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_12, /*hidden argument*/NULL);
		// achievementID = MapId(achievementID);
		String_t* L_13 = ___achievementID0;
		String_t* L_14 = PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA(__this, L_13, /*hidden argument*/NULL);
		___achievementID0 = L_14;
		// mClient.SetStepsAtLeast(achievementID, steps, callback);
		RuntimeObject* L_15 = __this->get_mClient_4();
		String_t* L_16 = ___achievementID0;
		int32_t L_17 = ___steps1;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_18 = ___callback2;
		NullCheck(L_15);
		InterfaceActionInvoker3< String_t*, int32_t, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(14 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::SetStepsAtLeast(System.String,System.Int32,System.Action`1<System.Boolean>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_15, L_16, L_17, L_18);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadAchievementDescriptions_mA9D294F459B6A498440C0326955CEBFFEB967FAB (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_LoadAchievementDescriptions_mA9D294F459B6A498440C0326955CEBFFEB967FAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB * L_0 = (U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass42_0__ctor_mD2083EB9230C5830792D5EB5B0A5A4E5D64BA6A5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB * L_1 = V_0;
		Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * L_2 = ___callback0;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		// if (!IsAuthenticated())
		bool L_3 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "LoadAchievementDescriptions can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral893CBBAB3B50F56FC2DBEED18DB7D99F853DD7D9, /*hidden argument*/NULL);
		// if (callback != null)
		U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB * L_4 = V_0;
		NullCheck(L_4);
		Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * L_5 = L_4->get_callback_0();
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// callback.Invoke(null);
		U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB * L_6 = V_0;
		NullCheck(L_6);
		Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * L_7 = L_6->get_callback_0();
		NullCheck(L_7);
		Action_1_Invoke_m6D94201F6F60C71FD959534E58DC5F2E0534C16D(L_7, (IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C*)(IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C*)NULL, /*hidden argument*/Action_1_Invoke_m6D94201F6F60C71FD959534E58DC5F2E0534C16D_RuntimeMethod_var);
	}

IL_0033:
	{
		// return;
		return;
	}

IL_0034:
	{
		// mClient.LoadAchievements(ach =>
		// {
		//     IAchievementDescription[] data = new IAchievementDescription[ach.Length];
		//     for (int i = 0; i < data.Length; i++)
		//     {
		//         data[i] = new PlayGamesAchievement(ach[i]);
		//     }
		// 
		//     callback.Invoke(data);
		// });
		RuntimeObject* L_8 = __this->get_mClient_4();
		U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB * L_9 = V_0;
		Action_1_t40C6281DD9B38B590C5280473351A8E16A632837 * L_10 = (Action_1_t40C6281DD9B38B590C5280473351A8E16A632837 *)il2cpp_codegen_object_new(Action_1_t40C6281DD9B38B590C5280473351A8E16A632837_il2cpp_TypeInfo_var);
		Action_1__ctor_m5E3C38C3D4727D73BEE4575399298637A0CF1091(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass42_0_U3CLoadAchievementDescriptionsU3Eb__0_m41A939A764110AE8B26325F1733D8A85B892FFD1_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5E3C38C3D4727D73BEE4575399298637A0CF1091_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_1_t40C6281DD9B38B590C5280473351A8E16A632837 * >::Invoke(10 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::LoadAchievements(System.Action`1<GooglePlayGames.BasicApi.Achievement[]>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_8, L_10);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadAchievements_mD586E205226945B7499DF45A2025A748D21EFF9B (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_LoadAchievements_mD586E205226945B7499DF45A2025A748D21EFF9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C * L_0 = (U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass43_0__ctor_m1C116655B52E0EA41A38AAB403C6B921DBEC4FB2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C * L_1 = V_0;
		Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * L_2 = ___callback0;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		// if (!IsAuthenticated())
		bool L_3 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e("LoadAchievements can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteralC6519750364F9649EC0BC717218442BD19DE632E, /*hidden argument*/NULL);
		// callback.Invoke(null);
		U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C * L_4 = V_0;
		NullCheck(L_4);
		Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * L_5 = L_4->get_callback_0();
		NullCheck(L_5);
		Action_1_Invoke_mFE16CD4BDEDFE680B174E7380FA78E7EB5200780(L_5, (IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002*)(IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002*)NULL, /*hidden argument*/Action_1_Invoke_mFE16CD4BDEDFE680B174E7380FA78E7EB5200780_RuntimeMethod_var);
		// return;
		return;
	}

IL_002c:
	{
		// mClient.LoadAchievements(ach =>
		// {
		//     IAchievement[] data = new IAchievement[ach.Length];
		//     for (int i = 0; i < data.Length; i++)
		//     {
		//         data[i] = new PlayGamesAchievement(ach[i]);
		//     }
		// 
		//     callback.Invoke(data);
		// });
		RuntimeObject* L_6 = __this->get_mClient_4();
		U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C * L_7 = V_0;
		Action_1_t40C6281DD9B38B590C5280473351A8E16A632837 * L_8 = (Action_1_t40C6281DD9B38B590C5280473351A8E16A632837 *)il2cpp_codegen_object_new(Action_1_t40C6281DD9B38B590C5280473351A8E16A632837_il2cpp_TypeInfo_var);
		Action_1__ctor_m5E3C38C3D4727D73BEE4575399298637A0CF1091(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass43_0_U3CLoadAchievementsU3Eb__0_m2176D616596893ABF709A619AEC0EB4EA3FD2EA2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5E3C38C3D4727D73BEE4575399298637A0CF1091_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_1_t40C6281DD9B38B590C5280473351A8E16A632837 * >::Invoke(10 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::LoadAchievements(System.Action`1<GooglePlayGames.BasicApi.Achievement[]>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_6, L_8);
		// }
		return;
	}
}
// UnityEngine.SocialPlatforms.IAchievement GooglePlayGames.PlayGamesPlatform::CreateAchievement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesPlatform_CreateAchievement_m0DAAE6903291B78A9E62117FFAAFD5D41FF349CB (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_CreateAchievement_m0DAAE6903291B78A9E62117FFAAFD5D41FF349CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new PlayGamesAchievement();
		PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * L_0 = (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 *)il2cpp_codegen_object_new(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262_il2cpp_TypeInfo_var);
		PlayGamesAchievement__ctor_mDF11A5AC8963968E802FDCF0B2E5C4D4E6019860(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ReportScore_m469E4F1B6754566B1C7E770343FA34EE1C32E522 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, int64_t ___score0, String_t* ___board1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_ReportScore_m469E4F1B6754566B1C7E770343FA34EE1C32E522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e("ReportScore can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral3960521E98C452616116D2A0947BE53328EF45ED, /*hidden argument*/NULL);
		// if (callback != null)
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback2;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// GooglePlayGames.OurUtils.Logger.d("ReportScore: score=" + score + ", board=" + board);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralB5557B51CFEFAF4ACCD1634BB722FBA88227044B);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralB5557B51CFEFAF4ACCD1634BB722FBA88227044B);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		int64_t L_6 = ___score0;
		int64_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral8D952606CD5B7E920E77B1FE8A3F9C04E5BC8618);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral8D952606CD5B7E920E77B1FE8A3F9C04E5BC8618);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_9;
		String_t* L_11 = ___board1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_12, /*hidden argument*/NULL);
		// string leaderboardId = MapId(board);
		String_t* L_13 = ___board1;
		String_t* L_14 = PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA(__this, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// mClient.SubmitScore(leaderboardId, score, callback);
		RuntimeObject* L_15 = __this->get_mClient_4();
		String_t* L_16 = V_0;
		int64_t L_17 = ___score0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_18 = ___callback2;
		NullCheck(L_15);
		InterfaceActionInvoker3< String_t*, int64_t, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(26 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::SubmitScore(System.String,System.Int64,System.Action`1<System.Boolean>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_15, L_16, L_17, L_18);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::ReportScore(System.Int64,System.String,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ReportScore_m2B31A875BF47AFE14828BCAE0FFB340C2F944AD8 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, int64_t ___score0, String_t* ___board1, String_t* ___metadata2, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_ReportScore_m2B31A875BF47AFE14828BCAE0FFB340C2F944AD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e("ReportScore can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral3960521E98C452616116D2A0947BE53328EF45ED, /*hidden argument*/NULL);
		// if (callback != null)
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback3;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = ___callback3;
		NullCheck(L_2);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_001e:
	{
		// return;
		return;
	}

IL_001f:
	{
		// GooglePlayGames.OurUtils.Logger.d("ReportScore: score=" + score +
		//                                   ", board=" + board +
		//                                   " metadata=" + metadata);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralB5557B51CFEFAF4ACCD1634BB722FBA88227044B);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralB5557B51CFEFAF4ACCD1634BB722FBA88227044B);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		int64_t L_6 = ___score0;
		int64_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral8D952606CD5B7E920E77B1FE8A3F9C04E5BC8618);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral8D952606CD5B7E920E77B1FE8A3F9C04E5BC8618);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_9;
		String_t* L_11 = ___board1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral9B2306E796CA147F9BEE8FED70843DB53130E896);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral9B2306E796CA147F9BEE8FED70843DB53130E896);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		String_t* L_14 = ___metadata2;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_15, /*hidden argument*/NULL);
		// string leaderboardId = MapId(board);
		String_t* L_16 = ___board1;
		String_t* L_17 = PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA(__this, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// mClient.SubmitScore(leaderboardId, score, metadata, callback);
		RuntimeObject* L_18 = __this->get_mClient_4();
		String_t* L_19 = V_0;
		int64_t L_20 = ___score0;
		String_t* L_21 = ___metadata2;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_22 = ___callback3;
		NullCheck(L_18);
		InterfaceActionInvoker4< String_t*, int64_t, String_t*, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(27 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::SubmitScore(System.String,System.Int64,System.String,System.Action`1<System.Boolean>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_18, L_19, L_20, L_21, L_22);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadScores_m020B96D1F39AA1087D464574568F198D1C71A7B1 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___leaderboardId0, Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_LoadScores_m020B96D1F39AA1087D464574568F198D1C71A7B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764 * L_0 = (U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass47_0__ctor_mFBF0F2E32B3D1D6154CB3324BC40C740EC99841D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764 * L_1 = V_0;
		Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C * L_2 = ___callback1;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		// LoadScores(
		//     leaderboardId,
		//     LeaderboardStart.PlayerCentered,
		//     mClient.LeaderboardMaxResults(),
		//     LeaderboardCollection.Public,
		//     LeaderboardTimeSpan.AllTime,
		//     (scoreData) => callback(scoreData.Scores));
		String_t* L_3 = ___leaderboardId0;
		RuntimeObject* L_4 = __this->get_mClient_4();
		NullCheck(L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 GooglePlayGames.BasicApi.IPlayGamesClient::LeaderboardMaxResults() */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_4);
		U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764 * L_6 = V_0;
		Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * L_7 = (Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D *)il2cpp_codegen_object_new(Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D_il2cpp_TypeInfo_var);
		Action_1__ctor_m619DDD86B8ED03F15EC49D06AE7922AD2CBB7230(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass47_0_U3CLoadScoresU3Eb__0_mF69CCDB9CAA2F27AFC172D6C2527D8D930DD1911_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m619DDD86B8ED03F15EC49D06AE7922AD2CBB7230_RuntimeMethod_var);
		PlayGamesPlatform_LoadScores_m5BA0D027659C87FFF762FA364010B971FCC8D2B5(__this, L_3, 2, L_5, 1, 3, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::LoadScores(System.String,GooglePlayGames.BasicApi.LeaderboardStart,System.Int32,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadScores_m5BA0D027659C87FFF762FA364010B971FCC8D2B5 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___leaderboardId0, int32_t ___start1, int32_t ___rowCount2, int32_t ___collection3, int32_t ___timeSpan4, Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * ___callback5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_LoadScores_m5BA0D027659C87FFF762FA364010B971FCC8D2B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e("LoadScores can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral86E916C57C2E38EC27BED8DDB17905BD7B1A2CF1, /*hidden argument*/NULL);
		// callback(new LeaderboardScoreData(
		//     leaderboardId,
		//     ResponseStatus.NotAuthorized));
		Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * L_1 = ___callback5;
		String_t* L_2 = ___leaderboardId0;
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_3 = (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B *)il2cpp_codegen_object_new(LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B_il2cpp_TypeInfo_var);
		LeaderboardScoreData__ctor_mC6B471928F6A73A12E836E7C53644F621CC4121A(L_3, L_2, ((int32_t)-3), /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_m1BC8BFD18CE5592C184C867DCC1D1D5E59B3DD8E(L_1, L_3, /*hidden argument*/Action_1_Invoke_m1BC8BFD18CE5592C184C867DCC1D1D5E59B3DD8E_RuntimeMethod_var);
		// return;
		return;
	}

IL_0022:
	{
		// mClient.LoadScores(
		//     leaderboardId,
		//     start,
		//     rowCount,
		//     collection,
		//     timeSpan,
		//     callback);
		RuntimeObject* L_4 = __this->get_mClient_4();
		String_t* L_5 = ___leaderboardId0;
		int32_t L_6 = ___start1;
		int32_t L_7 = ___rowCount2;
		int32_t L_8 = ___collection3;
		int32_t L_9 = ___timeSpan4;
		Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * L_10 = ___callback5;
		NullCheck(L_4);
		InterfaceActionInvoker6< String_t*, int32_t, int32_t, int32_t, int32_t, Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * >::Invoke(23 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::LoadScores(System.String,GooglePlayGames.BasicApi.LeaderboardStart,System.Int32,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7, L_8, L_9, L_10);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::LoadMoreScores(GooglePlayGames.BasicApi.ScorePageToken,System.Int32,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadMoreScores_mCBD1031547E96C66ABFA2D8E0F445A990B826C4F (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * ___token0, int32_t ___rowCount1, Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_LoadMoreScores_mCBD1031547E96C66ABFA2D8E0F445A990B826C4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e("LoadMoreScores can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral27B949011731D94DD7569CC91FB03E8FC187B674, /*hidden argument*/NULL);
		// callback(
		//     new LeaderboardScoreData(
		//         token.LeaderboardId,
		//         ResponseStatus.NotAuthorized));
		Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * L_1 = ___callback2;
		ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * L_2 = ___token0;
		NullCheck(L_2);
		String_t* L_3 = ScorePageToken_get_LeaderboardId_mFBD3A842071873B293ACE081BB1E0C668CA61F8C_inline(L_2, /*hidden argument*/NULL);
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_4 = (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B *)il2cpp_codegen_object_new(LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B_il2cpp_TypeInfo_var);
		LeaderboardScoreData__ctor_mC6B471928F6A73A12E836E7C53644F621CC4121A(L_4, L_3, ((int32_t)-3), /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_m1BC8BFD18CE5592C184C867DCC1D1D5E59B3DD8E(L_1, L_4, /*hidden argument*/Action_1_Invoke_m1BC8BFD18CE5592C184C867DCC1D1D5E59B3DD8E_RuntimeMethod_var);
		// return;
		return;
	}

IL_0026:
	{
		// mClient.LoadMoreScores(token, rowCount, callback);
		RuntimeObject* L_5 = __this->get_mClient_4();
		ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * L_6 = ___token0;
		int32_t L_7 = ___rowCount1;
		Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * L_8 = ___callback2;
		NullCheck(L_5);
		InterfaceActionInvoker3< ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF *, int32_t, Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * >::Invoke(24 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::LoadMoreScores(GooglePlayGames.BasicApi.ScorePageToken,System.Int32,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		// }
		return;
	}
}
// UnityEngine.SocialPlatforms.ILeaderboard GooglePlayGames.PlayGamesPlatform::CreateLeaderboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesPlatform_CreateLeaderboard_m3678BAADD46BE6E693C69D8D714AA74577E917A7 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_CreateLeaderboard_m3678BAADD46BE6E693C69D8D714AA74577E917A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new PlayGamesLeaderboard(mDefaultLbUi);
		String_t* L_0 = __this->get_mDefaultLbUi_5();
		PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * L_1 = (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A *)il2cpp_codegen_object_new(PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A_il2cpp_TypeInfo_var);
		PlayGamesLeaderboard__ctor_m63AE4DDCEFFA086C59C9FCAA3F751DCDB182EF45(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::ShowAchievementsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ShowAchievementsUI_m0218AE374942E2400ECF208694F6592D9A2CEF35 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	{
		// ShowAchievementsUI(null);
		PlayGamesPlatform_ShowAchievementsUI_m1E3E03E993DDA4A88EA3DAC0832F7803B6863694(__this, (Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::ShowAchievementsUI(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ShowAchievementsUI_m1E3E03E993DDA4A88EA3DAC0832F7803B6863694 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_ShowAchievementsUI_m1E3E03E993DDA4A88EA3DAC0832F7803B6863694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e("ShowAchievementsUI can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral78FF66B4EA4AFF1E03AA63189AFFE864D85744C6, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// GooglePlayGames.OurUtils.Logger.d("ShowAchievementsUI callback is " + callback);
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_1 = ___callback0;
		String_t* L_2 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral2E6881F8CFB21B3201491A4D2C8EFF99274FEECF, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_2, /*hidden argument*/NULL);
		// mClient.ShowAchievementsUI(callback);
		RuntimeObject* L_3 = __this->get_mClient_4();
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_4 = ___callback0;
		NullCheck(L_3);
		InterfaceActionInvoker1< Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * >::Invoke(15 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::ShowAchievementsUI(System.Action`1<GooglePlayGames.BasicApi.UIStatus>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_3, L_4);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ShowLeaderboardUI_mC72F6FB339E9C52913BB7A23C4DDC4F966F2496E (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_ShowLeaderboardUI_mC72F6FB339E9C52913BB7A23C4DDC4F966F2496E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GooglePlayGames.OurUtils.Logger.d("ShowLeaderboardUI with default ID");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteralD5A8FCF4BCC20197329A2899647A4B266D38E559, /*hidden argument*/NULL);
		// ShowLeaderboardUI(MapId(mDefaultLbUi), null);
		String_t* L_0 = __this->get_mDefaultLbUi_5();
		String_t* L_1 = PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA(__this, L_0, /*hidden argument*/NULL);
		PlayGamesPlatform_ShowLeaderboardUI_m9CB03FD65C11D00F9496B72E58C36E5F46408C22(__this, L_1, (Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ShowLeaderboardUI_m25C7F55A01FCECE2710B4EE5EB015DDECCBF2EA2 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___leaderboardId0, const RuntimeMethod* method)
{
	{
		// if (leaderboardId != null)
		String_t* L_0 = ___leaderboardId0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// leaderboardId = MapId(leaderboardId);
		String_t* L_1 = ___leaderboardId0;
		String_t* L_2 = PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA(__this, L_1, /*hidden argument*/NULL);
		___leaderboardId0 = L_2;
	}

IL_000c:
	{
		// ShowLeaderboardUI(leaderboardId, LeaderboardTimeSpan.AllTime, null);
		String_t* L_3 = ___leaderboardId0;
		PlayGamesPlatform_ShowLeaderboardUI_mD2163A5834EE20BA60602D88D4EC99CF9C074529(__this, L_3, 3, (Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI(System.String,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ShowLeaderboardUI_m9CB03FD65C11D00F9496B72E58C36E5F46408C22 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___leaderboardId0, Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * ___callback1, const RuntimeMethod* method)
{
	{
		// ShowLeaderboardUI(leaderboardId, LeaderboardTimeSpan.AllTime, callback);
		String_t* L_0 = ___leaderboardId0;
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_1 = ___callback1;
		PlayGamesPlatform_ShowLeaderboardUI_mD2163A5834EE20BA60602D88D4EC99CF9C074529(__this, L_0, 3, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI(System.String,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ShowLeaderboardUI_mD2163A5834EE20BA60602D88D4EC99CF9C074529 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___leaderboardId0, int32_t ___span1, Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_ShowLeaderboardUI_mD2163A5834EE20BA60602D88D4EC99CF9C074529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e("ShowLeaderboardUI can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral5E7170E34788D5C93D7E3386ED49EDF50D28ED19, /*hidden argument*/NULL);
		// if (callback != null)
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_1 = ___callback2;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// callback(UIStatus.NotAuthorized);
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m117E7A24D3CB81AA0FFD23F43321DA06B61CC99C(L_2, ((int32_t)-3), /*hidden argument*/Action_1_Invoke_m117E7A24D3CB81AA0FFD23F43321DA06B61CC99C_RuntimeMethod_var);
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// GooglePlayGames.OurUtils.Logger.d("ShowLeaderboardUI, lbId=" +
		//                                   leaderboardId + " callback is " + callback);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralFB25C34E51EA6237B2716B7B6014FA048F40DA9B);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralFB25C34E51EA6237B2716B7B6014FA048F40DA9B);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		String_t* L_6 = ___leaderboardId0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralF57A069B9FD60E935C000C00ACD24E1F91EF51EC);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralF57A069B9FD60E935C000C00ACD24E1F91EF51EC);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_9 = ___callback2;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		String_t* L_10 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_10, /*hidden argument*/NULL);
		// mClient.ShowLeaderboardUI(leaderboardId, span, callback);
		RuntimeObject* L_11 = __this->get_mClient_4();
		String_t* L_12 = ___leaderboardId0;
		int32_t L_13 = ___span1;
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_14 = ___callback2;
		NullCheck(L_11);
		InterfaceActionInvoker3< String_t*, int32_t, Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * >::Invoke(22 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::ShowLeaderboardUI(System.String,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.UIStatus>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_11, L_12, L_13, L_14);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::SetDefaultLeaderboardForUI(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_SetDefaultLeaderboardForUI_m52F027A1A92D395E42D5E5D29CEA45ECE3BC1C0B (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___lbid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_SetDefaultLeaderboardForUI_m52F027A1A92D395E42D5E5D29CEA45ECE3BC1C0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GooglePlayGames.OurUtils.Logger.d("SetDefaultLeaderboardForUI: " + lbid);
		String_t* L_0 = ___lbid0;
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral35340911C63908832F152D99294F514E87A7FD4D, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_1, /*hidden argument*/NULL);
		// if (lbid != null)
		String_t* L_2 = ___lbid0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// lbid = MapId(lbid);
		String_t* L_3 = ___lbid0;
		String_t* L_4 = PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA(__this, L_3, /*hidden argument*/NULL);
		___lbid0 = L_4;
	}

IL_001c:
	{
		// mDefaultLbUi = lbid;
		String_t* L_5 = ___lbid0;
		__this->set_mDefaultLbUi_5(L_5);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadFriends_m5807FD9488C44A26C4730F634C5D16EF003E369D (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, RuntimeObject* ___user0, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_LoadFriends_m5807FD9488C44A26C4730F634C5D16EF003E369D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "LoadScores can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral86E916C57C2E38EC27BED8DDB17905BD7B1A2CF1, /*hidden argument*/NULL);
		// if (callback != null)
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = ___callback1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// callback(false);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_2, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_001c:
	{
		// return;
		return;
	}

IL_001d:
	{
		// mClient.LoadFriends(callback);
		RuntimeObject* L_3 = __this->get_mClient_4();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_4 = ___callback1;
		NullCheck(L_3);
		InterfaceActionInvoker1< Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(5 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::LoadFriends(System.Action`1<System.Boolean>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_3, L_4);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadScores_m929BC14DDEBB89A481B0FE8E498303312523B133 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, RuntimeObject* ___board0, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_LoadScores_m929BC14DDEBB89A481B0FE8E498303312523B133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B12_0 = 0;
	String_t* G_B12_1 = NULL;
	RuntimeObject* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	String_t* G_B11_1 = NULL;
	RuntimeObject* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	String_t* G_B13_2 = NULL;
	RuntimeObject* G_B13_3 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	String_t* G_B15_2 = NULL;
	RuntimeObject* G_B15_3 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	String_t* G_B14_2 = NULL;
	RuntimeObject* G_B14_3 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	String_t* G_B16_3 = NULL;
	RuntimeObject* G_B16_4 = NULL;
	{
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_0 = (U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass59_0__ctor_m6E3294DE464108634863461DFBC0E52A66F36E88(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_2 = V_0;
		RuntimeObject* L_3 = ___board0;
		NullCheck(L_2);
		L_2->set_board_1(L_3);
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_4 = V_0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_5 = ___callback1;
		NullCheck(L_4);
		L_4->set_callback_2(L_5);
		// if (!IsAuthenticated())
		bool L_6 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e("LoadScores can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral86E916C57C2E38EC27BED8DDB17905BD7B1A2CF1, /*hidden argument*/NULL);
		// if (callback != null)
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_7 = V_0;
		NullCheck(L_7);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_8 = L_7->get_callback_2();
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		// callback(false);
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_9 = V_0;
		NullCheck(L_9);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_10 = L_9->get_callback_2();
		NullCheck(L_10);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_10, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_0041:
	{
		// return;
		return;
	}

IL_0042:
	{
		// switch (board.timeScope)
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_11 = V_0;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->get_board_1();
		NullCheck(L_12);
		int32_t L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t7071592562FA847344065DBB0352B1DE4937671A_il2cpp_TypeInfo_var, L_12);
		V_2 = L_13;
		int32_t L_14 = V_2;
		switch (L_14)
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_0062;
			}
		}
	}
	{
		goto IL_006e;
	}

IL_0062:
	{
		// timeSpan = LeaderboardTimeSpan.AllTime;
		V_1 = 3;
		// break;
		goto IL_0070;
	}

IL_0066:
	{
		// timeSpan = LeaderboardTimeSpan.Weekly;
		V_1 = 2;
		// break;
		goto IL_0070;
	}

IL_006a:
	{
		// timeSpan = LeaderboardTimeSpan.Daily;
		V_1 = 1;
		// break;
		goto IL_0070;
	}

IL_006e:
	{
		// timeSpan = LeaderboardTimeSpan.AllTime;
		V_1 = 3;
	}

IL_0070:
	{
		// ((PlayGamesLeaderboard) board).loading = true;
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->get_board_1();
		NullCheck(((PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A *)CastclassClass((RuntimeObject*)L_16, PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A_il2cpp_TypeInfo_var)));
		PlayGamesLeaderboard_set_loading_m6E3268F3788B01A4752C4B362EACEE9FF72696E0_inline(((PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A *)CastclassClass((RuntimeObject*)L_16, PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A_il2cpp_TypeInfo_var)), (bool)1, /*hidden argument*/NULL);
		// GooglePlayGames.OurUtils.Logger.d("LoadScores, board=" + board +
		//                                   " callback is " + callback);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralF4A92AC84F30C81EB79C2AEEB212731261979F2F);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralF4A92AC84F30C81EB79C2AEEB212731261979F2F);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_18;
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->get_board_1();
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_19;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralF57A069B9FD60E935C000C00ACD24E1F91EF51EC);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralF57A069B9FD60E935C000C00ACD24E1F91EF51EC);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_22;
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_24 = V_0;
		NullCheck(L_24);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_25 = L_24->get_callback_2();
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		String_t* L_26 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_26, /*hidden argument*/NULL);
		// mClient.LoadScores(
		//     board.id,
		//     LeaderboardStart.PlayerCentered,
		//     board.range.count > 0 ? board.range.count : mClient.LeaderboardMaxResults(),
		//     board.userScope == UserScope.FriendsOnly ? LeaderboardCollection.Social : LeaderboardCollection.Public,
		//     timeSpan,
		//     (scoreData) => HandleLoadingScores(
		//         (PlayGamesLeaderboard) board, scoreData, callback));
		RuntimeObject* L_27 = __this->get_mClient_4();
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_28 = V_0;
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->get_board_1();
		NullCheck(L_29);
		String_t* L_30 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t7071592562FA847344065DBB0352B1DE4937671A_il2cpp_TypeInfo_var, L_29);
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_31 = V_0;
		NullCheck(L_31);
		RuntimeObject* L_32 = L_31->get_board_1();
		NullCheck(L_32);
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_33 = InterfaceFuncInvoker0< Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  >::Invoke(3 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t7071592562FA847344065DBB0352B1DE4937671A_il2cpp_TypeInfo_var, L_32);
		int32_t L_34 = L_33.get_count_1();
		G_B11_0 = 2;
		G_B11_1 = L_30;
		G_B11_2 = L_27;
		if ((((int32_t)L_34) > ((int32_t)0)))
		{
			G_B12_0 = 2;
			G_B12_1 = L_30;
			G_B12_2 = L_27;
			goto IL_00e5;
		}
	}
	{
		RuntimeObject* L_35 = __this->get_mClient_4();
		NullCheck(L_35);
		int32_t L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 GooglePlayGames.BasicApi.IPlayGamesClient::LeaderboardMaxResults() */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_35);
		G_B13_0 = L_36;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00f5;
	}

IL_00e5:
	{
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_37 = V_0;
		NullCheck(L_37);
		RuntimeObject* L_38 = L_37->get_board_1();
		NullCheck(L_38);
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_39 = InterfaceFuncInvoker0< Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  >::Invoke(3 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t7071592562FA847344065DBB0352B1DE4937671A_il2cpp_TypeInfo_var, L_38);
		int32_t L_40 = L_39.get_count_1();
		G_B13_0 = L_40;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00f5:
	{
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_41 = V_0;
		NullCheck(L_41);
		RuntimeObject* L_42 = L_41->get_board_1();
		NullCheck(L_42);
		int32_t L_43 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope() */, ILeaderboard_t7071592562FA847344065DBB0352B1DE4937671A_il2cpp_TypeInfo_var, L_42);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if ((((int32_t)L_43) == ((int32_t)1)))
		{
			G_B15_0 = G_B13_0;
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_0106;
		}
	}
	{
		G_B16_0 = 1;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		G_B16_3 = G_B14_2;
		G_B16_4 = G_B14_3;
		goto IL_0107;
	}

IL_0106:
	{
		G_B16_0 = 2;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
		G_B16_3 = G_B15_2;
		G_B16_4 = G_B15_3;
	}

IL_0107:
	{
		int32_t L_44 = V_1;
		U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * L_45 = V_0;
		Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * L_46 = (Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D *)il2cpp_codegen_object_new(Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D_il2cpp_TypeInfo_var);
		Action_1__ctor_m619DDD86B8ED03F15EC49D06AE7922AD2CBB7230(L_46, L_45, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass59_0_U3CLoadScoresU3Eb__0_mB709F505C749ABF47D05167E36F0DAF645E868DD_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m619DDD86B8ED03F15EC49D06AE7922AD2CBB7230_RuntimeMethod_var);
		NullCheck(G_B16_4);
		InterfaceActionInvoker6< String_t*, int32_t, int32_t, int32_t, int32_t, Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * >::Invoke(23 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::LoadScores(System.String,GooglePlayGames.BasicApi.LeaderboardStart,System.Int32,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, G_B16_4, G_B16_3, G_B16_2, G_B16_1, G_B16_0, L_44, L_46);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.PlayGamesPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesPlatform_GetLoading_m1D519BFDE7380990CC0C41FDE0DDD3147323438A (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, RuntimeObject* ___board0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_GetLoading_m1D519BFDE7380990CC0C41FDE0DDD3147323438A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return board != null && board.loading;
		RuntimeObject* L_0 = ___board0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject* L_1 = ___board0;
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.SocialPlatforms.ILeaderboard::get_loading() */, ILeaderboard_t7071592562FA847344065DBB0352B1DE4937671A_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_000a:
	{
		return (bool)0;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::ShowCompareProfileWithAlternativeNameHintsUI(System.String,System.String,System.String,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ShowCompareProfileWithAlternativeNameHintsUI_mAE3AF6BA3C6E1B6F5972D27F1D38F435EABA6EED (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___userId0, String_t* ___otherPlayerInGameName1, String_t* ___currentPlayerInGameName2, Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_ShowCompareProfileWithAlternativeNameHintsUI_mAE3AF6BA3C6E1B6F5972D27F1D38F435EABA6EED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "ShowCompareProfileWithAlternativeNameHintsUI can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral7D7AA9863DC8F7600BC3BCB20DAD9BEBEB7F27ED, /*hidden argument*/NULL);
		// InvokeCallbackOnGameThread(callback, UIStatus.NotAuthorized);
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_1 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform_InvokeCallbackOnGameThread_TisUIStatus_t3BE93053424F559A5B3E1D4C290FA5E091A14CB7_m633F6D049876AE590C17DF5D823D120071BBBA93(L_1, ((int32_t)-3), /*hidden argument*/PlayGamesPlatform_InvokeCallbackOnGameThread_TisUIStatus_t3BE93053424F559A5B3E1D4C290FA5E091A14CB7_m633F6D049876AE590C17DF5D823D120071BBBA93_RuntimeMethod_var);
		// return;
		return;
	}

IL_001c:
	{
		// GooglePlayGames.OurUtils.Logger.d(
		//     "ShowCompareProfileWithAlternativeNameHintsUI, userId=" + userId + " callback is " +
		//     callback);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral217346B1DBCFBEDEC92BAA285899FC26D752E4D3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral217346B1DBCFBEDEC92BAA285899FC26D752E4D3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		String_t* L_5 = ___userId0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralF57A069B9FD60E935C000C00ACD24E1F91EF51EC);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralF57A069B9FD60E935C000C00ACD24E1F91EF51EC);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_8 = ___callback3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_8);
		String_t* L_9 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_9, /*hidden argument*/NULL);
		// mClient.ShowCompareProfileWithAlternativeNameHintsUI(userId, otherPlayerInGameName,
		//     currentPlayerInGameName, callback);
		RuntimeObject* L_10 = __this->get_mClient_4();
		String_t* L_11 = ___userId0;
		String_t* L_12 = ___otherPlayerInGameName1;
		String_t* L_13 = ___currentPlayerInGameName2;
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_14 = ___callback3;
		NullCheck(L_10);
		InterfaceActionInvoker4< String_t*, String_t*, String_t*, Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * >::Invoke(18 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::ShowCompareProfileWithAlternativeNameHintsUI(System.String,System.String,System.String,System.Action`1<GooglePlayGames.BasicApi.UIStatus>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_13, L_14);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::GetFriendsListVisibility(System.Boolean,System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_GetFriendsListVisibility_mDA50D408BCDF7EE98F0F51AFCAAD263C79F5CBB1 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, bool ___forceReload0, Action_1_t8EE1F0EF0F6740B5EB111E67F42584240D45AC60 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_GetFriendsListVisibility_mDA50D408BCDF7EE98F0F51AFCAAD263C79F5CBB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "GetFriendsListVisibility can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteralB5098B2B7786DB342133FA5DE602DE04C085E226, /*hidden argument*/NULL);
		// InvokeCallbackOnGameThread(callback, FriendsListVisibilityStatus.NotAuthorized);
		Action_1_t8EE1F0EF0F6740B5EB111E67F42584240D45AC60 * L_1 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform_InvokeCallbackOnGameThread_TisFriendsListVisibilityStatus_t5C8FEFC70B838D8C9EDF134574A9FC09146BF615_mDCCA1E2B1D0328D8D042F4358B123786C3BB3C91(L_1, ((int32_t)-5), /*hidden argument*/PlayGamesPlatform_InvokeCallbackOnGameThread_TisFriendsListVisibilityStatus_t5C8FEFC70B838D8C9EDF134574A9FC09146BF615_mDCCA1E2B1D0328D8D042F4358B123786C3BB3C91_RuntimeMethod_var);
		// return;
		return;
	}

IL_001b:
	{
		// GooglePlayGames.OurUtils.Logger.d("GetFriendsListVisibility, callback is " + callback);
		Action_1_t8EE1F0EF0F6740B5EB111E67F42584240D45AC60 * L_2 = ___callback1;
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral9CC265F441C1CF034972ABF52E3FE12A09E0F680, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_3, /*hidden argument*/NULL);
		// mClient.GetFriendsListVisibility(forceReload, callback);
		RuntimeObject* L_4 = __this->get_mClient_4();
		bool L_5 = ___forceReload0;
		Action_1_t8EE1F0EF0F6740B5EB111E67F42584240D45AC60 * L_6 = ___callback1;
		NullCheck(L_4);
		InterfaceActionInvoker2< bool, Action_1_t8EE1F0EF0F6740B5EB111E67F42584240D45AC60 * >::Invoke(19 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::GetFriendsListVisibility(System.Boolean,System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::AskForLoadFriendsResolution(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_AskForLoadFriendsResolution_mE45505E363EDF2B0DB92E83321C2D5F137E46BEB (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_AskForLoadFriendsResolution_mE45505E363EDF2B0DB92E83321C2D5F137E46BEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "AskForLoadFriendsResolution can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral41632E2246F9BB344C5E92EB048F11D0B1650817, /*hidden argument*/NULL);
		// InvokeCallbackOnGameThread(callback, UIStatus.NotAuthorized);
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_1 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform_InvokeCallbackOnGameThread_TisUIStatus_t3BE93053424F559A5B3E1D4C290FA5E091A14CB7_m633F6D049876AE590C17DF5D823D120071BBBA93(L_1, ((int32_t)-3), /*hidden argument*/PlayGamesPlatform_InvokeCallbackOnGameThread_TisUIStatus_t3BE93053424F559A5B3E1D4C290FA5E091A14CB7_m633F6D049876AE590C17DF5D823D120071BBBA93_RuntimeMethod_var);
		// return;
		return;
	}

IL_001b:
	{
		// GooglePlayGames.OurUtils.Logger.d("AskForLoadFriendsResolution callback is " + callback);
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_2 = ___callback0;
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral16FE9853737D7CAA6435E1E304E10F86DA0A69A8, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_3, /*hidden argument*/NULL);
		// mClient.AskForLoadFriendsResolution(callback);
		RuntimeObject* L_4 = __this->get_mClient_4();
		Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * L_5 = ___callback0;
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t29BEA04EA9A044C60175EADFEB4096B7540CC729 * >::Invoke(16 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::AskForLoadFriendsResolution(System.Action`1<GooglePlayGames.BasicApi.UIStatus>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_4, L_5);
		// }
		return;
	}
}
// GooglePlayGames.BasicApi.LoadFriendsStatus GooglePlayGames.PlayGamesPlatform::GetLastLoadFriendsStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesPlatform_GetLastLoadFriendsStatus_mC01BF740C75CA0F4D232E568CE8CFB09A2147B86 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_GetLastLoadFriendsStatus_mC01BF740C75CA0F4D232E568CE8CFB09A2147B86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "GetLastLoadFriendsStatus can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteral3BA7EBC905D85FF442F4566C52B52E1764061085, /*hidden argument*/NULL);
		// return LoadFriendsStatus.NotAuthorized;
		return (int32_t)(((int32_t)-5));
	}

IL_0015:
	{
		// return mClient.GetLastLoadFriendsStatus();
		RuntimeObject* L_1 = __this->get_mClient_4();
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(17 /* GooglePlayGames.BasicApi.LoadFriendsStatus GooglePlayGames.BasicApi.IPlayGamesClient::GetLastLoadFriendsStatus() */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::LoadFriends(System.Int32,System.Boolean,System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadFriends_m0673C668609974ABE9A421F9423DDE6B50476879 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, int32_t ___pageSize0, bool ___forceReload1, Action_1_tCF450FEFD3D9E1C5274C1C003E30D3F9ADC214E3 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_LoadFriends_m0673C668609974ABE9A421F9423DDE6B50476879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "LoadFriends can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteralCE63EEF66409FA420CA8DF5747A156B7F2FF66B6, /*hidden argument*/NULL);
		// InvokeCallbackOnGameThread(callback, LoadFriendsStatus.NotAuthorized);
		Action_1_tCF450FEFD3D9E1C5274C1C003E30D3F9ADC214E3 * L_1 = ___callback2;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform_InvokeCallbackOnGameThread_TisLoadFriendsStatus_t0B02CC60E54A4D8A8F541BF39AFB10CEFD17CEBB_m4C91C8DA95E9963D7F5DC091E38B6751F6FE968B(L_1, ((int32_t)-5), /*hidden argument*/PlayGamesPlatform_InvokeCallbackOnGameThread_TisLoadFriendsStatus_t0B02CC60E54A4D8A8F541BF39AFB10CEFD17CEBB_m4C91C8DA95E9963D7F5DC091E38B6751F6FE968B_RuntimeMethod_var);
		// return;
		return;
	}

IL_001b:
	{
		// mClient.LoadFriends(pageSize, forceReload, callback);
		RuntimeObject* L_2 = __this->get_mClient_4();
		int32_t L_3 = ___pageSize0;
		bool L_4 = ___forceReload1;
		Action_1_tCF450FEFD3D9E1C5274C1C003E30D3F9ADC214E3 * L_5 = ___callback2;
		NullCheck(L_2);
		InterfaceActionInvoker3< int32_t, bool, Action_1_tCF450FEFD3D9E1C5274C1C003E30D3F9ADC214E3 * >::Invoke(20 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::LoadFriends(System.Int32,System.Boolean,System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::LoadMoreFriends(System.Int32,System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_LoadMoreFriends_m33F4F242B66FDE00A608F0BADB19F0D8D179658F (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, int32_t ___pageSize0, Action_1_tCF450FEFD3D9E1C5274C1C003E30D3F9ADC214E3 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_LoadMoreFriends_m33F4F242B66FDE00A608F0BADB19F0D8D179658F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e(
		//     "LoadMoreFriends can only be called after authentication.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteralF15A5F5A14BE0C363740F238781679E59BBAEF36, /*hidden argument*/NULL);
		// InvokeCallbackOnGameThread(callback, LoadFriendsStatus.NotAuthorized);
		Action_1_tCF450FEFD3D9E1C5274C1C003E30D3F9ADC214E3 * L_1 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform_InvokeCallbackOnGameThread_TisLoadFriendsStatus_t0B02CC60E54A4D8A8F541BF39AFB10CEFD17CEBB_m4C91C8DA95E9963D7F5DC091E38B6751F6FE968B(L_1, ((int32_t)-5), /*hidden argument*/PlayGamesPlatform_InvokeCallbackOnGameThread_TisLoadFriendsStatus_t0B02CC60E54A4D8A8F541BF39AFB10CEFD17CEBB_m4C91C8DA95E9963D7F5DC091E38B6751F6FE968B_RuntimeMethod_var);
		// return;
		return;
	}

IL_001b:
	{
		// mClient.LoadMoreFriends(pageSize, callback);
		RuntimeObject* L_2 = __this->get_mClient_4();
		int32_t L_3 = ___pageSize0;
		Action_1_tCF450FEFD3D9E1C5274C1C003E30D3F9ADC214E3 * L_4 = ___callback1;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, Action_1_tCF450FEFD3D9E1C5274C1C003E30D3F9ADC214E3 * >::Invoke(21 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::LoadMoreFriends(System.Int32,System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::HandleLoadingScores(GooglePlayGames.PlayGamesLeaderboard,GooglePlayGames.BasicApi.LeaderboardScoreData,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_HandleLoadingScores_mC8CF67CE69D79D4EB93626CDE86A1D2CB1EA3D9E (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * ___board0, LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * ___scoreData1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_HandleLoadingScores_mC8CF67CE69D79D4EB93626CDE86A1D2CB1EA3D9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * L_0 = (U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass67_0__ctor_mEFF82963F8C9950D2282B8763010239FF8511F11(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * L_2 = V_0;
		PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * L_3 = ___board0;
		NullCheck(L_2);
		L_2->set_board_1(L_3);
		U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * L_4 = V_0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_5 = ___callback2;
		NullCheck(L_4);
		L_4->set_callback_2(L_5);
		// bool ok = board.SetFromData(scoreData);
		U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * L_6 = V_0;
		NullCheck(L_6);
		PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * L_7 = L_6->get_board_1();
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_8 = ___scoreData1;
		NullCheck(L_7);
		bool L_9 = PlayGamesLeaderboard_SetFromData_m87EC00C60134CA4B975219B38EC6425164143E3C(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (ok && !board.HasAllScores() && scoreData.NextPageToken != null)
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * L_11 = V_0;
		NullCheck(L_11);
		PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * L_12 = L_11->get_board_1();
		NullCheck(L_12);
		bool L_13 = PlayGamesLeaderboard_HasAllScores_mAF9AD91A54B10B22AEF7BB4FB55A8015B94F90B3(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_007c;
		}
	}
	{
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_14 = ___scoreData1;
		NullCheck(L_14);
		ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * L_15 = LeaderboardScoreData_get_NextPageToken_m2E30E01B90301E0E095500227151787FB1EA63D3_inline(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		// int rowCount = board.range.count - board.ScoreCount;
		U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * L_16 = V_0;
		NullCheck(L_16);
		PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * L_17 = L_16->get_board_1();
		NullCheck(L_17);
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_18 = PlayGamesLeaderboard_get_range_m0C77FBA37A7C49D90AA1DBF1AB22E876EE2B83A1_inline(L_17, /*hidden argument*/NULL);
		int32_t L_19 = L_18.get_count_1();
		U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * L_20 = V_0;
		NullCheck(L_20);
		PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * L_21 = L_20->get_board_1();
		NullCheck(L_21);
		int32_t L_22 = PlayGamesLeaderboard_get_ScoreCount_mBA9C204C96E5931201EF8414E34B17EFE1F9F6C2(L_21, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_22));
		// mClient.LoadMoreScores(
		//     scoreData.NextPageToken,
		//     rowCount,
		//     (nextScoreData) =>
		//         HandleLoadingScores(board, nextScoreData, callback));
		RuntimeObject* L_23 = __this->get_mClient_4();
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_24 = ___scoreData1;
		NullCheck(L_24);
		ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * L_25 = LeaderboardScoreData_get_NextPageToken_m2E30E01B90301E0E095500227151787FB1EA63D3_inline(L_24, /*hidden argument*/NULL);
		int32_t L_26 = V_2;
		U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * L_27 = V_0;
		Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * L_28 = (Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D *)il2cpp_codegen_object_new(Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D_il2cpp_TypeInfo_var);
		Action_1__ctor_m619DDD86B8ED03F15EC49D06AE7922AD2CBB7230(L_28, L_27, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass67_0_U3CHandleLoadingScoresU3Eb__0_m5F6D4B107E1C2CA795E51DFA3D1B9085F3055F7D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m619DDD86B8ED03F15EC49D06AE7922AD2CBB7230_RuntimeMethod_var);
		NullCheck(L_23);
		InterfaceActionInvoker3< ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF *, int32_t, Action_1_tD81FFBD70E6D25E96A3DA6ED69569562C189BD6D * >::Invoke(24 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::LoadMoreScores(GooglePlayGames.BasicApi.ScorePageToken,System.Int32,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_23, L_25, L_26, L_28);
		// }
		return;
	}

IL_007c:
	{
		// callback(ok);
		U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * L_29 = V_0;
		NullCheck(L_29);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_30 = L_29->get_callback_2();
		bool L_31 = V_1;
		NullCheck(L_30);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_30, L_31, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.PlayGamesPlatform::GetFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* PlayGamesPlatform_GetFriends_m59E551A04939AFC81D4E9A5BB28BF44B3B193C32 (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_GetFriends_m59E551A04939AFC81D4E9A5BB28BF44B3B193C32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsAuthenticated())
		bool L_0 = PlayGamesPlatform_IsAuthenticated_m21879A89ADBA3CC2192306FFA51EC6FDBE258574(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.d("Cannot get friends when not authenticated!");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral97E740F72935177ADD85733C7336B3AE025676D4, /*hidden argument*/NULL);
		// return new IUserProfile[0];
		IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* L_1 = (IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0*)(IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0*)SZArrayNew(IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_1;
	}

IL_0019:
	{
		// return mClient.GetFriends();
		RuntimeObject* L_2 = __this->get_mClient_4();
		NullCheck(L_2);
		IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* L_3 = InterfaceFuncInvoker0< IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* >::Invoke(30 /* UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.BasicApi.IPlayGamesClient::GetFriends() */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
// System.String GooglePlayGames.PlayGamesPlatform::MapId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA (PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesPlatform_MapId_m96FBE5A325D0A31278B98BE472936445CC61DBDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (id == null)
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0005:
	{
		// if (mIdMap.ContainsKey(id))
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_1 = __this->get_mIdMap_6();
		String_t* L_2 = ___id0;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_mB435547693A70859882AFAE6E17EE84A4DEE89DC(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_mB435547693A70859882AFAE6E17EE84A4DEE89DC_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// string result = mIdMap[id];
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_4 = __this->get_mIdMap_6();
		String_t* L_5 = ___id0;
		NullCheck(L_4);
		String_t* L_6 = Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var);
		V_0 = L_6;
		// GooglePlayGames.OurUtils.Logger.d("Mapping alias " + id + " to ID " + result);
		String_t* L_7 = ___id0;
		String_t* L_8 = V_0;
		String_t* L_9 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral05355346DBCE636FA92A396107EE51714DFD80CC, L_7, _stringLiteral8C99B9C573AD7C9C4A310C82B386F1D3D9B8F207, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_9, /*hidden argument*/NULL);
		// return result;
		String_t* L_10 = V_0;
		return L_10;
	}

IL_0038:
	{
		// return id;
		String_t* L_11 = ___id0;
		return L_11;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform__cctor_mC8EA96EE0A617AD0343FE805E10988D7B47D0565 (const RuntimeMethod* method)
{
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m7919BF3A051E2650C9A61297F70002EAFE80D463 (U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass22_0::<InitializeNearby>b__0(GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CInitializeNearbyU3Eb__0_m73F95D33AB29717C0FC24D96A0A8B617E881F4DB (U3CU3Ec__DisplayClass22_0_tC96B657F37B90C71E220813B621A1876557FABD6 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass22_0_U3CInitializeNearbyU3Eb__0_m73F95D33AB29717C0FC24D96A0A8B617E881F4DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("Nearby Client Created!!");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteral39A1D38061AA77B4A79B46886DFD569D9C2D1281, /*hidden argument*/NULL);
		// sNearbyConnectionClient = client;
		RuntimeObject* L_0 = ___client0;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		il2cpp_codegen_memory_barrier();
		((PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var))->set_sNearbyConnectionClient_2(L_0);
		// if (callback != null) {
		Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * L_1 = __this->get_callback_0();
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// callback.Invoke(client);
		Action_1_tAA620DF1E0322FC56455F8BB6F1820DA4B338F4E * L_2 = __this->get_callback_0();
		RuntimeObject* L_3 = ___client0;
		NullCheck(L_2);
		Action_1_Invoke_m81E12D38E21332B07DD65B0DEB0D1AEE6A14C2FC(L_2, L_3, /*hidden argument*/Action_1_Invoke_m81E12D38E21332B07DD65B0DEB0D1AEE6A14C2FC_RuntimeMethod_var);
		// }
		return;
	}

IL_0027:
	{
		// OurUtils.Logger.d("Initialize Nearby callback is null");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(_stringLiteralC5024F3031E029718EA095EE1A8D30D214C2E012, /*hidden argument*/NULL);
		// });
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m8DD309AA13736A1FA5B74D6B77A1380C6373E998 (U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass26_0::<Authenticate>b__0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0_U3CAuthenticateU3Eb__0_mFCA715935B7B3D1E1C9328C1DCBAC47B514AF209 (U3CU3Ec__DisplayClass26_0_t7866142ADF23ECF206086796C751D3A26D0F1730 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass26_0_U3CAuthenticateU3Eb__0_mFCA715935B7B3D1E1C9328C1DCBAC47B514AF209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Authenticate(status => callback(status == SignInStatus.Success));
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_0 = __this->get_callback_0();
		int32_t L_1 = ___status0;
		NullCheck(L_0);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m24E30FCD7EF3B3D3335012E77876453F223A45D3 (U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass27_0::<Authenticate>b__0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0_U3CAuthenticateU3Eb__0_m3722C6C1D5ED583E817898CF22CBC9B3EE1EC65F (U3CU3Ec__DisplayClass27_0_tF063AB3EE601DFD9972137AA1520B0190F2B2910 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass27_0_U3CAuthenticateU3Eb__0_m3722C6C1D5ED583E817898CF22CBC9B3EE1EC65F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Authenticate(status => callback(status == SignInStatus.Success, status.ToString()));
		Action_2_t4B13BCCDECC9C4EF5C8336DF47866C170CFD9E44 * L_0 = __this->get_callback_0();
		int32_t L_1 = ___status0;
		RuntimeObject * L_2 = Box(SignInStatus_tDB7CC62A7FBD2F0C04DF3D8991D4328BE181E0DC_il2cpp_TypeInfo_var, (&___status0));
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		___status0 = *(int32_t*)UnBox(L_2);
		NullCheck(L_0);
		Action_2_Invoke_m28751EB3D7737B18DA9A82B61E6E5203124E81D4(L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), L_3, /*hidden argument*/Action_2_Invoke_m28751EB3D7737B18DA9A82B61E6E5203124E81D4_RuntimeMethod_var);
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m7A4A3494814A50E17A793B8FB8E448D665E3E52F (U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass36_0::<ReportProgress>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CReportProgressU3Eb__0_m731D6F238BC22A07215EB2B739119EE66085CC09 (U3CU3Ec__DisplayClass36_0_t4B3AAF55894A275E89E3F5AB2B18209E7A76ED22 * __this, AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass36_0_U3CReportProgressU3Eb__0_m731D6F238BC22A07215EB2B739119EE66085CC09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < ach.Length; i++)
		V_0 = 0;
		goto IL_0139;
	}

IL_0007:
	{
		// if (ach[i].Id == achievementID)
		AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249* L_0 = ___ach0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		String_t* L_4 = Achievement_get_Id_mA0A91D5880B6FA2FCA775D0E8F501612DF38EDC8_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_achievementID_0();
		bool L_6 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0135;
		}
	}
	{
		// if (ach[i].IsIncremental)
		AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249* L_7 = ___ach0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		bool L_11 = Achievement_get_IsIncremental_mC38AA6AD649FD4BD34DDF544C064B674D59DFEF0_inline(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00bc;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.d("Progress " + progress +
		//                                   " interpreted as incremental target (approximate).");
		double L_12 = __this->get_progress_1();
		double L_13 = L_12;
		RuntimeObject * L_14 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral851CCF432FDDA32757C16391AEFAA7F77A683408, L_14, _stringLiteralA1B024190473A15BBF80FBD244257996F3D8B436, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_15, /*hidden argument*/NULL);
		// if (progress >= 0.0 && progress <= 1.0)
		double L_16 = __this->get_progress_1();
		if ((!(((double)L_16) >= ((double)(0.0)))))
		{
			goto IL_008c;
		}
	}
	{
		double L_17 = __this->get_progress_1();
		if ((!(((double)L_17) <= ((double)(1.0)))))
		{
			goto IL_008c;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.w(
		//     "Progress " + progress +
		//     " is less than or equal to 1. You might be trying to use values in the range of [0,1], while values are expected to be within the range [0,100]. If you are using the latter, you can safely ignore this message.");
		double L_18 = __this->get_progress_1();
		double L_19 = L_18;
		RuntimeObject * L_20 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral851CCF432FDDA32757C16391AEFAA7F77A683408, L_20, _stringLiteral750A16582AAF833F1109CB1D1CF5C918619D5063, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_w_mB0D118831979B2FFAA5E725B1B5CADCEA0474BDA(L_21, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// mClient.SetStepsAtLeast(achievementID, progressToSteps(progress, ach[i].TotalSteps), callback);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_22 = __this->get_U3CU3E4__this_2();
		NullCheck(L_22);
		RuntimeObject* L_23 = L_22->get_mClient_4();
		String_t* L_24 = __this->get_achievementID_0();
		double L_25 = __this->get_progress_1();
		AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249* L_26 = ___ach0;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		int32_t L_30 = Achievement_get_TotalSteps_mD68DCDC81918457012A9EF47310F57B0968F629E_inline(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		int32_t L_31 = PlayGamesPlatform_progressToSteps_m7212C612319BEE0FC41835750E4E05CAC200F91D(L_25, L_30, /*hidden argument*/NULL);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_32 = __this->get_callback_3();
		NullCheck(L_23);
		InterfaceActionInvoker3< String_t*, int32_t, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(14 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::SetStepsAtLeast(System.String,System.Int32,System.Action`1<System.Boolean>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_23, L_24, L_31, L_32);
		// }
		return;
	}

IL_00bc:
	{
		// if (progress >= 100)
		double L_33 = __this->get_progress_1();
		if ((!(((double)L_33) >= ((double)(100.0)))))
		{
			goto IL_0109;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.d("Progress " + progress + " interpreted as UNLOCK.");
		double L_34 = __this->get_progress_1();
		double L_35 = L_34;
		RuntimeObject * L_36 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral851CCF432FDDA32757C16391AEFAA7F77A683408, L_36, _stringLiteralE07B915FC8AA3BFF558846E6D7E1018D477E6BC7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_37, /*hidden argument*/NULL);
		// mClient.UnlockAchievement(achievementID, callback);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_38 = __this->get_U3CU3E4__this_2();
		NullCheck(L_38);
		RuntimeObject* L_39 = L_38->get_mClient_4();
		String_t* L_40 = __this->get_achievementID_0();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_41 = __this->get_callback_3();
		NullCheck(L_39);
		InterfaceActionInvoker2< String_t*, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(11 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::UnlockAchievement(System.String,System.Action`1<System.Boolean>) */, IPlayGamesClient_t51C3D5CD672C96F23EEA951656BBDD3F533D2465_il2cpp_TypeInfo_var, L_39, L_40, L_41);
		// }
		return;
	}

IL_0109:
	{
		// GooglePlayGames.OurUtils.Logger.d(
		//     "Progress " + progress + " not enough to unlock non-incremental achievement.");
		double L_42 = __this->get_progress_1();
		double L_43 = L_42;
		RuntimeObject * L_44 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral851CCF432FDDA32757C16391AEFAA7F77A683408, L_44, _stringLiteralA8ACC887501AAE667B7DD99B8035876606121208, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_45, /*hidden argument*/NULL);
		// callback.Invoke(false);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_46 = __this->get_callback_3();
		NullCheck(L_46);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_46, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
		// return;
		return;
	}

IL_0135:
	{
		// for (int i = 0; i < ach.Length; i++)
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_0139:
	{
		// for (int i = 0; i < ach.Length; i++)
		int32_t L_48 = V_0;
		AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249* L_49 = ___ach0;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		// GooglePlayGames.OurUtils.Logger.e("Unable to locate achievement " + achievementID);
		String_t* L_50 = __this->get_achievementID_0();
		String_t* L_51 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralE2993E3BA8E949129120C8B951DD861D638A86B5, L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(L_51, /*hidden argument*/NULL);
		// callback.Invoke(false);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_52 = __this->get_callback_3();
		NullCheck(L_52);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_52, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
		// });
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_mD2083EB9230C5830792D5EB5B0A5A4E5D64BA6A5 (U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass42_0::<LoadAchievementDescriptions>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0_U3CLoadAchievementDescriptionsU3Eb__0_m41A939A764110AE8B26325F1733D8A85B892FFD1 (U3CU3Ec__DisplayClass42_0_tEE69BE21B0A784062DA500104C01BD9ADFE182BB * __this, AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass42_0_U3CLoadAchievementDescriptionsU3Eb__0_m41A939A764110AE8B26325F1733D8A85B892FFD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IAchievementDescription[] data = new IAchievementDescription[ach.Length];
		AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249* L_0 = ___ach0;
		NullCheck(L_0);
		IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C* L_1 = (IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C*)(IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C*)SZArrayNew(IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = L_1;
		// for (int i = 0; i < data.Length; i++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		// data[i] = new PlayGamesAchievement(ach[i]);
		IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C* L_2 = V_0;
		int32_t L_3 = V_1;
		AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249* L_4 = ___ach0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * L_8 = (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 *)il2cpp_codegen_object_new(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262_il2cpp_TypeInfo_var);
		PlayGamesAchievement__ctor_m0DE0683B58CDCC2883B4A636D1AEBFC3DDF6B82D(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001c:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_10 = V_1;
		IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		// callback.Invoke(data);
		Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * L_12 = __this->get_callback_0();
		IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C* L_13 = V_0;
		NullCheck(L_12);
		Action_1_Invoke_m6D94201F6F60C71FD959534E58DC5F2E0534C16D(L_12, L_13, /*hidden argument*/Action_1_Invoke_m6D94201F6F60C71FD959534E58DC5F2E0534C16D_RuntimeMethod_var);
		// });
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0__ctor_m1C116655B52E0EA41A38AAB403C6B921DBEC4FB2 (U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass43_0::<LoadAchievements>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0_U3CLoadAchievementsU3Eb__0_m2176D616596893ABF709A619AEC0EB4EA3FD2EA2 (U3CU3Ec__DisplayClass43_0_tD86D5F67319B7313D2AC068618E4915567F6224C * __this, AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass43_0_U3CLoadAchievementsU3Eb__0_m2176D616596893ABF709A619AEC0EB4EA3FD2EA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IAchievement[] data = new IAchievement[ach.Length];
		AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249* L_0 = ___ach0;
		NullCheck(L_0);
		IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002* L_1 = (IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002*)(IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002*)SZArrayNew(IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = L_1;
		// for (int i = 0; i < data.Length; i++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		// data[i] = new PlayGamesAchievement(ach[i]);
		IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002* L_2 = V_0;
		int32_t L_3 = V_1;
		AchievementU5BU5D_tCDEC68B3291998607E1B3E4F285C5E4BFC55D249* L_4 = ___ach0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * L_8 = (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 *)il2cpp_codegen_object_new(PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262_il2cpp_TypeInfo_var);
		PlayGamesAchievement__ctor_m0DE0683B58CDCC2883B4A636D1AEBFC3DDF6B82D(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001c:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_10 = V_1;
		IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		// callback.Invoke(data);
		Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * L_12 = __this->get_callback_0();
		IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002* L_13 = V_0;
		NullCheck(L_12);
		Action_1_Invoke_mFE16CD4BDEDFE680B174E7380FA78E7EB5200780(L_12, L_13, /*hidden argument*/Action_1_Invoke_mFE16CD4BDEDFE680B174E7380FA78E7EB5200780_RuntimeMethod_var);
		// });
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_mFBF0F2E32B3D1D6154CB3324BC40C740EC99841D (U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass47_0::<LoadScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0_U3CLoadScoresU3Eb__0_mF69CCDB9CAA2F27AFC172D6C2527D8D930DD1911 (U3CU3Ec__DisplayClass47_0_t530627EC4961F2A3DB6C087524CAB72B809A1764 * __this, LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * ___scoreData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass47_0_U3CLoadScoresU3Eb__0_mF69CCDB9CAA2F27AFC172D6C2527D8D930DD1911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (scoreData) => callback(scoreData.Scores));
		Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C * L_0 = __this->get_callback_0();
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_1 = ___scoreData0;
		NullCheck(L_1);
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_2 = LeaderboardScoreData_get_Scores_mAF12EE7B188619CA9A62A3072F7AEAD5F5FEB2FD(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_m5C7A22095E708452C272C2BBC5CE4F6E72236861(L_0, L_2, /*hidden argument*/Action_1_Invoke_m5C7A22095E708452C272C2BBC5CE4F6E72236861_RuntimeMethod_var);
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0__ctor_m6E3294DE464108634863461DFBC0E52A66F36E88 (U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass59_0::<LoadScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0_U3CLoadScoresU3Eb__0_mB709F505C749ABF47D05167E36F0DAF645E868DD (U3CU3Ec__DisplayClass59_0_t6DFF9CE833E16DEBF3AB831B36E87C363434F578 * __this, LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * ___scoreData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass59_0_U3CLoadScoresU3Eb__0_mB709F505C749ABF47D05167E36F0DAF645E868DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (scoreData) => HandleLoadingScores(
		//     (PlayGamesLeaderboard) board, scoreData, callback));
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = __this->get_board_1();
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_2 = ___scoreData0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_3 = __this->get_callback_2();
		NullCheck(L_0);
		PlayGamesPlatform_HandleLoadingScores_mC8CF67CE69D79D4EB93626CDE86A1D2CB1EA3D9E(L_0, ((PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A *)CastclassClass((RuntimeObject*)L_1, PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A_il2cpp_TypeInfo_var)), L_2, L_3, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0__ctor_mEFF82963F8C9950D2282B8763010239FF8511F11 (U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass67_0::<HandleLoadingScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0_U3CHandleLoadingScoresU3Eb__0_m5F6D4B107E1C2CA795E51DFA3D1B9085F3055F7D (U3CU3Ec__DisplayClass67_0_t7FA1EE083E6D475A82A9DC2E45C1F2658B91B174 * __this, LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * ___nextScoreData0, const RuntimeMethod* method)
{
	{
		// HandleLoadingScores(board, nextScoreData, callback));
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_0 = __this->get_U3CU3E4__this_0();
		PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * L_1 = __this->get_board_1();
		LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * L_2 = ___nextScoreData0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_3 = __this->get_callback_2();
		NullCheck(L_0);
		PlayGamesPlatform_HandleLoadingScores_mC8CF67CE69D79D4EB93626CDE86A1D2CB1EA3D9E(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void GooglePlayGames.PlayGamesScore::.ctor(System.DateTime,System.String,System.UInt64,System.String,System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesScore__ctor_mEE360D1DB613DA0AD8FFEAAA069778D11246906A (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___date0, String_t* ___leaderboardId1, uint64_t ___rank2, String_t* ___playerId3, uint64_t ___value4, String_t* ___metadata5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesScore__ctor_mEE360D1DB613DA0AD8FFEAAA069778D11246906A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string mPlayerId = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_mPlayerId_3(L_0);
		// private string mMetadata = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_mMetadata_4(L_1);
		// private DateTime mDate = new DateTime(1970, 1, 1, 0, 0, 0);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2;
		memset((&L_2), 0, sizeof(L_2));
		DateTime__ctor_m627486A7CFC2016C8A1646442155BE45A8062667((&L_2), ((int32_t)1970), 1, 1, 0, 0, 0, /*hidden argument*/NULL);
		__this->set_mDate_5(L_2);
		// internal PlayGamesScore(DateTime date, string leaderboardId,
		//     ulong rank, string playerId, ulong value, string metadata)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.mDate = date;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = ___date0;
		__this->set_mDate_5(L_3);
		// mLbId = leaderboardID;
		String_t* L_4 = PlayGamesScore_get_leaderboardID_m28A7B9634862C3DB528C23CA6ECAF36460FF52DF_inline(__this, /*hidden argument*/NULL);
		__this->set_mLbId_0(L_4);
		// this.mRank = rank;
		uint64_t L_5 = ___rank2;
		__this->set_mRank_2(L_5);
		// this.mPlayerId = playerId;
		String_t* L_6 = ___playerId3;
		__this->set_mPlayerId_3(L_6);
		// this.mValue = (long) value;
		uint64_t L_7 = ___value4;
		__this->set_mValue_1(L_7);
		// this.mMetadata = metadata;
		String_t* L_8 = ___metadata5;
		__this->set_mMetadata_4(L_8);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesScore::ReportScore(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesScore_ReportScore_m25F6D9F71118365C18D73DB85616F9221775197B (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesScore_ReportScore_m25F6D9F71118365C18D73DB85616F9221775197B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesPlatform.Instance.ReportScore(mValue, mLbId, mMetadata, callback);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D_il2cpp_TypeInfo_var);
		PlayGamesPlatform_tDC238EDCA4B10E54725B8FEDEF0601051E88E25D * L_0 = PlayGamesPlatform_get_Instance_m14016685F7C32BEF2E0779F03F8887E5C25B416B(/*hidden argument*/NULL);
		int64_t L_1 = __this->get_mValue_1();
		String_t* L_2 = __this->get_mLbId_0();
		String_t* L_3 = __this->get_mMetadata_4();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_4 = ___callback0;
		NullCheck(L_0);
		PlayGamesPlatform_ReportScore_m2B31A875BF47AFE14828BCAE0FFB340C2F944AD8(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.PlayGamesScore::get_leaderboardID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_leaderboardID_m28A7B9634862C3DB528C23CA6ECAF36460FF52DF (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, const RuntimeMethod* method)
{
	{
		// get { return mLbId; }
		String_t* L_0 = __this->get_mLbId_0();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesScore::set_leaderboardID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesScore_set_leaderboardID_mA02B3CA44EF4E3BF54C73210B2DAE79EFC92C9E7 (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { mLbId = value; }
		String_t* L_0 = ___value0;
		__this->set_mLbId_0(L_0);
		// set { mLbId = value; }
		return;
	}
}
// System.Int64 GooglePlayGames.PlayGamesScore::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PlayGamesScore_get_value_mE8E27853ED7AEFE585913F52B91AE7332698E78A (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, const RuntimeMethod* method)
{
	{
		// get { return mValue; }
		int64_t L_0 = __this->get_mValue_1();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesScore::set_value(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesScore_set_value_m7ED39AC36653E28AD3D5F6A44736C933CC15B2C9 (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// set { mValue = value; }
		int64_t L_0 = ___value0;
		__this->set_mValue_1(L_0);
		// set { mValue = value; }
		return;
	}
}
// System.DateTime GooglePlayGames.PlayGamesScore::get_date()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  PlayGamesScore_get_date_m75BD169B78FB4CB6AB1FC12E1D456B8EDA01EE61 (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, const RuntimeMethod* method)
{
	{
		// get { return mDate; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_mDate_5();
		return L_0;
	}
}
// System.String GooglePlayGames.PlayGamesScore::get_formattedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_formattedValue_m6961803A46B95EC1A516C2D7BC590BE57D2DB999 (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, const RuntimeMethod* method)
{
	{
		// get { return mValue.ToString(); }
		int64_t* L_0 = __this->get_address_of_mValue_1();
		String_t* L_1 = Int64_ToString_m8210E39355A227AE15DD391EB810AA9B6AB8B26C((int64_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String GooglePlayGames.PlayGamesScore::get_userID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_userID_m5679E50EB4C05F46CEEBFD822BCA1858B4FF645B (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, const RuntimeMethod* method)
{
	{
		// get { return mPlayerId; }
		String_t* L_0 = __this->get_mPlayerId_3();
		return L_0;
	}
}
// System.Int32 GooglePlayGames.PlayGamesScore::get_rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesScore_get_rank_m16AEA674E4FF46E5AD53C17B78233A46F4B472FD (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, const RuntimeMethod* method)
{
	{
		// get { return (int) mRank; }
		uint64_t L_0 = __this->get_mRank_2();
		return (((int32_t)((int32_t)L_0)));
	}
}
// System.String GooglePlayGames.PlayGamesScore::get_metaData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_metaData_mF3109705E50429FF6CA7754EE99D3CCDEC1B71EE (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, const RuntimeMethod* method)
{
	{
		// get { return mMetadata; }
		String_t* L_0 = __this->get_mMetadata_4();
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
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_mBC5DC79E15562EBA605FCC9872116A801391D286 (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const RuntimeMethod* method)
{
	{
		// internal PlayGamesUserProfile(string displayName, string playerId,
		//     string avatarUrl)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// mDisplayName = displayName;
		String_t* L_0 = ___displayName0;
		__this->set_mDisplayName_0(L_0);
		// mPlayerId = playerId;
		String_t* L_1 = ___playerId1;
		__this->set_mPlayerId_1(L_1);
		// setAvatarUrl(avatarUrl);
		String_t* L_2 = ___avatarUrl2;
		PlayGamesUserProfile_setAvatarUrl_m877CF3727BA4AD115F19085A9D764A22079096ED(__this, L_2, /*hidden argument*/NULL);
		// mImageLoading = false;
		il2cpp_codegen_memory_barrier();
		__this->set_mImageLoading_4(0);
		// mIsFriend = false;
		__this->set_mIsFriend_3((bool)0);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_m58838C94FC3EECCAB247B090632CCBC8A39BA08B (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, bool ___isFriend3, const RuntimeMethod* method)
{
	{
		// internal PlayGamesUserProfile(string displayName, string playerId, string avatarUrl,
		//     bool isFriend)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// mDisplayName = displayName;
		String_t* L_0 = ___displayName0;
		__this->set_mDisplayName_0(L_0);
		// mPlayerId = playerId;
		String_t* L_1 = ___playerId1;
		__this->set_mPlayerId_1(L_1);
		// mAvatarUrl = avatarUrl;
		String_t* L_2 = ___avatarUrl2;
		__this->set_mAvatarUrl_2(L_2);
		// mImageLoading = false;
		il2cpp_codegen_memory_barrier();
		__this->set_mImageLoading_4(0);
		// mIsFriend = isFriend;
		bool L_3 = ___isFriend3;
		__this->set_mIsFriend_3(L_3);
		// }
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile::ResetIdentity(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile_ResetIdentity_m4367C30B2392A7C75299A45863F895ACBD3E94EB (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const RuntimeMethod* method)
{
	{
		// mDisplayName = displayName;
		String_t* L_0 = ___displayName0;
		__this->set_mDisplayName_0(L_0);
		// mPlayerId = playerId;
		String_t* L_1 = ___playerId1;
		__this->set_mPlayerId_1(L_1);
		// mIsFriend = false;
		__this->set_mIsFriend_3((bool)0);
		// if (mAvatarUrl != avatarUrl)
		String_t* L_2 = __this->get_mAvatarUrl_2();
		String_t* L_3 = ___avatarUrl2;
		bool L_4 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// mImage = null;
		__this->set_mImage_5((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL);
		// setAvatarUrl(avatarUrl);
		String_t* L_5 = ___avatarUrl2;
		PlayGamesUserProfile_setAvatarUrl_m877CF3727BA4AD115F19085A9D764A22079096ED(__this, L_5, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// mImageLoading = false;
		il2cpp_codegen_memory_barrier();
		__this->set_mImageLoading_4(0);
		// }
		return;
	}
}
// System.String GooglePlayGames.PlayGamesUserProfile::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_userName_m0990E94AABF9A7D25EEE987AFD886597DA26607B (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	{
		// get { return mDisplayName; }
		String_t* L_0 = __this->get_mDisplayName_0();
		return L_0;
	}
}
// System.String GooglePlayGames.PlayGamesUserProfile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_id_m6E48ACB5FC7FB0343DFBAE4E5C00C2207DD5CC09 (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	{
		// get { return mPlayerId; }
		String_t* L_0 = __this->get_mPlayerId_1();
		return L_0;
	}
}
// System.String GooglePlayGames.PlayGamesUserProfile::get_gameId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_gameId_mB622BA1EACB0D516778E85AE20F519167600065A (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	{
		// get { return mPlayerId; }
		String_t* L_0 = __this->get_mPlayerId_1();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.PlayGamesUserProfile::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesUserProfile_get_isFriend_m146FAAD81343BC1B715341D5A581DC7CE81C1A85 (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsFriend; }
		bool L_0 = __this->get_mIsFriend_3();
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState GooglePlayGames.PlayGamesUserProfile::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesUserProfile_get_state_m505CEF376BF39DF5771BC2C11005FB3F1D12E325 (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	{
		// get { return UserState.Online; }
		return (int32_t)(0);
	}
}
// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * PlayGamesUserProfile_get_image_m15F928F564783ECF6B926A728B4754B3E9129933 (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesUserProfile_get_image_m15F928F564783ECF6B926A728B4754B3E9129933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!mImageLoading && mImage == null && !string.IsNullOrEmpty(AvatarURL))
		bool L_0 = __this->get_mImageLoading_4();
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_004e;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = __this->get_mImage_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_3 = PlayGamesUserProfile_get_AvatarURL_m8F65E16B49903152877B2916FB8ABB0BB277CC17_inline(__this, /*hidden argument*/NULL);
		bool L_4 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004e;
		}
	}
	{
		// OurUtils.Logger.d("Starting to load image: " + AvatarURL);
		String_t* L_5 = PlayGamesUserProfile_get_AvatarURL_m8F65E16B49903152877B2916FB8ABB0BB277CC17_inline(__this, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral12D7948F6A3F9300B064A719814E82CA34E4A5CA, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_d_m97E90EB1597A57D7FB05994C93807FEB7EDF3BFB(L_6, /*hidden argument*/NULL);
		// mImageLoading = true;
		il2cpp_codegen_memory_barrier();
		__this->set_mImageLoading_4(1);
		// PlayGamesHelperObject.RunCoroutine(LoadImage());
		RuntimeObject* L_7 = PlayGamesUserProfile_LoadImage_mF7D735C57025902384574CE680E4292DEB0BDE00(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_t20934AF316E4B49083871775190F3974BCD60403_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunCoroutine_mB4690921986C23904A1C3E6566773DBC191D7BDE(L_7, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// return mImage;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_8 = __this->get_mImage_5();
		return L_8;
	}
}
// System.String GooglePlayGames.PlayGamesUserProfile::get_AvatarURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_AvatarURL_m8F65E16B49903152877B2916FB8ABB0BB277CC17 (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	{
		// get { return mAvatarUrl; }
		String_t* L_0 = __this->get_mAvatarUrl_2();
		return L_0;
	}
}
// System.Collections.IEnumerator GooglePlayGames.PlayGamesUserProfile::LoadImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesUserProfile_LoadImage_mF7D735C57025902384574CE680E4292DEB0BDE00 (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesUserProfile_LoadImage_mF7D735C57025902384574CE680E4292DEB0BDE00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE * L_0 = (U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE *)il2cpp_codegen_object_new(U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE_il2cpp_TypeInfo_var);
		U3CLoadImageU3Ed__23__ctor_mD93FE8AB23AC37C9114289EA0093B80347DD4287(L_0, 0, /*hidden argument*/NULL);
		U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean GooglePlayGames.PlayGamesUserProfile::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesUserProfile_Equals_mDDFD7ABAEBCF1421619408F48538C00038B240D5 (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesUserProfile_Equals_mDDFD7ABAEBCF1421619408F48538C00038B240D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * V_0 = NULL;
	{
		// if (obj == null)
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// PlayGamesUserProfile other = obj as PlayGamesUserProfile;
		RuntimeObject * L_2 = ___obj0;
		V_0 = ((PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F *)IsInstClass((RuntimeObject*)L_2, PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F_il2cpp_TypeInfo_var));
		// if (other == null)
		PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// return StringComparer.Ordinal.Equals(mPlayerId, other.mPlayerId);
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_il2cpp_TypeInfo_var);
		StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * L_4 = StringComparer_get_Ordinal_m1F38FBAB170DF80D33FE2A849D30FF2E314D9FDB_inline(/*hidden argument*/NULL);
		String_t* L_5 = __this->get_mPlayerId_1();
		PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_mPlayerId_1();
		NullCheck(L_4);
		bool L_8 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(11 /* System.Boolean System.StringComparer::Equals(System.String,System.String) */, L_4, L_5, L_7);
		return L_8;
	}
}
// System.Int32 GooglePlayGames.PlayGamesUserProfile::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesUserProfile_GetHashCode_m4F03607F71AEB5C2C692D3AB1C8849C6255FE44B (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesUserProfile_GetHashCode_m4F03607F71AEB5C2C692D3AB1C8849C6255FE44B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(PlayGamesUserProfile).GetHashCode() ^ mPlayerId.GetHashCode();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		String_t* L_3 = __this->get_mPlayerId_1();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		return ((int32_t)((int32_t)L_2^(int32_t)L_4));
	}
}
// System.String GooglePlayGames.PlayGamesUserProfile::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_ToString_mEE7CB8579D2B03F0DFCE6D6D8AE629ACBAF81581 (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesUserProfile_ToString_mEE7CB8579D2B03F0DFCE6D6D8AE629ACBAF81581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("[Player: '{0}' (id {1})]", mDisplayName, mPlayerId);
		String_t* L_0 = __this->get_mDisplayName_0();
		String_t* L_1 = __this->get_mPlayerId_1();
		String_t* L_2 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralC837A43528CC5B0BE6EC554F2990669ECDF370F6, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile::setAvatarUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile_setAvatarUrl_m877CF3727BA4AD115F19085A9D764A22079096ED (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, String_t* ___avatarUrl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesUserProfile_setAvatarUrl_m877CF3727BA4AD115F19085A9D764A22079096ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mAvatarUrl = avatarUrl;
		String_t* L_0 = ___avatarUrl0;
		__this->set_mAvatarUrl_2(L_0);
		// if (!avatarUrl.StartsWith("https") && avatarUrl.StartsWith("http"))
		String_t* L_1 = ___avatarUrl0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_1, _stringLiteralC3437DBC7C1255D3A21D444D86EBF2E9234C22BD, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_3 = ___avatarUrl0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_3, _stringLiteral77B5F8E343A90F6F597751021FB8B7A08FE83083, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// mAvatarUrl = avatarUrl.Insert(4, "s");
		String_t* L_5 = ___avatarUrl0;
		NullCheck(L_5);
		String_t* L_6 = String_Insert_m2525FE6F79C96A359A588C8FA764419EBD811749(L_5, 4, _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3, /*hidden argument*/NULL);
		__this->set_mAvatarUrl_2(L_6);
	}

IL_0033:
	{
		// }
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
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__23__ctor_mD93FE8AB23AC37C9114289EA0093B80347DD4287 (U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__23_System_IDisposable_Dispose_m40E4236E2912CD4B7603D06063F58CE6C79D2965 (U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadImageU3Ed__23_MoveNext_mDD6A29FB9C0861ED02140A99C60B8643B3B7108C (U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadImageU3Ed__23_MoveNext_mDD6A29FB9C0861ED02140A99C60B8643B3B7108C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!string.IsNullOrEmpty(AvatarURL))
		PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = PlayGamesUserProfile_get_AvatarURL_m8F65E16B49903152877B2916FB8ABB0BB277CC17_inline(L_4, /*hidden argument*/NULL);
		bool L_6 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_00c8;
		}
	}
	{
		// UnityWebRequest www = UnityWebRequestTexture.GetTexture(AvatarURL);
		PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = PlayGamesUserProfile_get_AvatarURL_m8F65E16B49903152877B2916FB8ABB0BB277CC17_inline(L_7, /*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_9 = UnityWebRequestTexture_GetTexture_m45626D1CEA83B5DC281934CC74D383389CD781B9(L_8, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_9);
		// www.SendWebRequest();
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_10 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_10);
		UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD(L_10, /*hidden argument*/NULL);
		goto IL_0064;
	}

IL_004d:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0064:
	{
		// while (!www.isDone)
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_11 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_11);
		bool L_12 = UnityWebRequest_get_isDone_mB3CC99A8DC3DB1DD44B23008688EB2DF20906FDA(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		// if (www.error == null)
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_13 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_13);
		String_t* L_14 = UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0091;
		}
	}
	{
		// this.mImage = DownloadHandlerTexture.GetContent(www);
		PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * L_15 = V_1;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_16 = __this->get_U3CwwwU3E5__2_3();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_17 = DownloadHandlerTexture_GetContent_mF7BCA86CF9F9871A512256173025D3C895EDF744(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_mImage_5(L_17);
		// }
		goto IL_00b6;
	}

IL_0091:
	{
		// mImage = Texture2D.blackTexture;
		PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * L_18 = V_1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_19 = Texture2D_get_blackTexture_mCF4F978DF9B6066794E7130E0C14618216ED0956(/*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_mImage_5(L_19);
		// OurUtils.Logger.e("Error downloading image: " + www.error);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_20 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_20);
		String_t* L_21 = UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC(L_20, /*hidden argument*/NULL);
		String_t* L_22 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralB692C108018DFA4D7440FEF397D0CCA8C678E070, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(L_22, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		// mImageLoading = false;
		PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * L_23 = V_1;
		NullCheck(L_23);
		il2cpp_codegen_memory_barrier();
		L_23->set_mImageLoading_4(0);
		// }
		__this->set_U3CwwwU3E5__2_3((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)NULL);
		goto IL_00e6;
	}

IL_00c8:
	{
		// OurUtils.Logger.e("No URL found.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		Logger_e_mFEEAF65AFB451A25AB065B6CB5B546A26EACE105(_stringLiteralECF6120DE188550139F123682DCBA1D92BB018E6, /*hidden argument*/NULL);
		// mImage = Texture2D.blackTexture;
		PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * L_24 = V_1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_25 = Texture2D_get_blackTexture_mCF4F978DF9B6066794E7130E0C14618216ED0956(/*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->set_mImage_5(L_25);
		// mImageLoading = false;
		PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * L_26 = V_1;
		NullCheck(L_26);
		il2cpp_codegen_memory_barrier();
		L_26->set_mImageLoading_4(0);
	}

IL_00e6:
	{
		// }
		return (bool)0;
	}
}
// System.Object GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m39D039970D9D7344721C0B85D18FBE5237AA933F (U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__23_System_Collections_IEnumerator_Reset_mB0E76047A0F503536AB73EEDB5B4BAADEC065B1E (U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadImageU3Ed__23_System_Collections_IEnumerator_Reset_mB0E76047A0F503536AB73EEDB5B4BAADEC065B1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CLoadImageU3Ed__23_System_Collections_IEnumerator_Reset_mB0E76047A0F503536AB73EEDB5B4BAADEC065B1E_RuntimeMethod_var);
	}
}
// System.Object GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__23_System_Collections_IEnumerator_get_Current_mF70B74E28E6E7FA6358BA88F154743FA1AE76E70 (U3CLoadImageU3Ed__23_t40E1679F5C66EB1704FA8288FDD90662FA8514AE * __this, const RuntimeMethod* method)
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
// System.Void GooglePlayGames.PluginVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersion__ctor_m91412B38C39B8E708805A13DF085781F815AED27 (PluginVersion_tBBB57C356E91EC4B74040A933E1AF276BE52A3D2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 (ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * __this, String_t* ___id0, double ___progress1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, double, Il2CppMethodPointer);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	il2cppPInvokeFunc(____id0_marshaled, ___progress1, ____callback2_marshaled);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

}
// System.Void GooglePlayGames.ReportProgress::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportProgress__ctor_mFCC58DA696C3603E92ABD74E495C108C5F4411F1 (ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.ReportProgress::Invoke(System.String,System.Double,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportProgress_Invoke_m86F746599DA428B049C13BAF1F01A0CAC491C6CD (ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * __this, String_t* ___id0, double ___progress1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___id0, ___progress1, ___callback2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___progress1, ___callback2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(targetMethod, ___id0, ___progress1, ___callback2);
					else
						GenericVirtActionInvoker2< double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(targetMethod, ___id0, ___progress1, ___callback2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___id0, ___progress1, ___callback2);
					else
						VirtActionInvoker2< double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___id0, ___progress1, ___callback2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___progress1) - 1), ___callback2, targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___id0, ___progress1, ___callback2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(targetMethod, targetThis, ___id0, ___progress1, ___callback2);
					else
						GenericVirtActionInvoker3< String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(targetMethod, targetThis, ___id0, ___progress1, ___callback2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0, ___progress1, ___callback2);
					else
						VirtActionInvoker3< String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0, ___progress1, ___callback2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___id0) - 1), ___progress1, ___callback2, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___id0, ___progress1, ___callback2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___progress1, ___callback2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.ReportProgress::BeginInvoke(System.String,System.Double,System.Action`1<System.Boolean>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReportProgress_BeginInvoke_mD9A978E253C787FB6ABCB2E2A1E1AB9F5F321D29 (ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * __this, String_t* ___id0, double ___progress1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * _____callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReportProgress_BeginInvoke_mD9A978E253C787FB6ABCB2E2A1E1AB9F5F321D29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___id0;
	__d_args[1] = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &___progress1);
	__d_args[2] = ___callback2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)_____callback3, (RuntimeObject*)___object4);
}
// System.Void GooglePlayGames.ReportProgress::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportProgress_EndInvoke_mF59088BE38A677CAB4C6E4028742F3E2FAFC5FD7 (ReportProgress_tB945DECBE1A545D6D51D5A08B48DBE71F4B73068 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_m5A16BD15270CB5A7C30511C3B0EF32DE2A945ABE_inline (EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * __this, const RuntimeMethod* method)
{
	{
		// get { return mEndpointId; }
		String_t* L_0 = __this->get_mEndpointId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_mB7429E110B4A9455FD3990601EA857D52B2502AD_inline (EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * __this, const RuntimeMethod* method)
{
	{
		// get { return mName; }
		String_t* L_0 = __this->get_mName_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_m30A26EC3190D448EE1B60032DFFD57AF646288B5_inline (EndpointDetails_t083F27E3F831117CFD4FF8140051FE93B6BD1EB4 * __this, const RuntimeMethod* method)
{
	{
		// get { return mServiceId; }
		String_t* L_0 = __this->get_mServiceId_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_mDF7DF1320B4FEF3BB68A5F184B251EDF19B9633D_inline (NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 * __this, const RuntimeMethod* method)
{
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->get_mLocalClientId_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * NearbyConnectionConfiguration_get_InitializationCallback_m238EE0F34561305733D7CCA6DF25C89FB6EBFDB6_inline (NearbyConnectionConfiguration_tD6EAB1A1D89C58A16945AB0BFF8D5BEE7A4C3CB0 * __this, const RuntimeMethod* method)
{
	{
		// get { return mInitializationCallback; }
		Action_1_tDE6242754045E413334AD30795D5F15C91E26560 * L_0 = __this->get_mInitializationCallback_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfPurchases_m2786DD8D09E724CE36E5C7140AD6941F310C260B_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mNumberOfPurchases; }
		int32_t L_0 = __this->get_mNumberOfPurchases_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlayerStats_get_AvgSessionLength_m3D1026BBBE289920FC63D66E25493D4E41B6493F_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mAvgSessionLength; }
		float L_0 = __this->get_mAvgSessionLength_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PlayerStats_get_DaysSinceLastPlayed_mD0AD42400A02E5F9AF7663233E691E0534E81FE0_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mDaysSinceLastPlayed; }
		int32_t L_0 = __this->get_mDaysSinceLastPlayed_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfSessions_mDF118213EB69370DE9F6DC3CF17D234F3D09752B_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mNumberOfSessions; }
		int32_t L_0 = __this->get_mNumberOfSessions_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlayerStats_get_SessPercentile_m101508C74B3BD4C7A1FD9D172851AADA57D6E843_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mSessPercentile; }
		float L_0 = __this->get_mSessPercentile_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlayerStats_get_SpendPercentile_m8AF85C40471ED614A74C4CD6B7AFA0884E756AEA_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mSpendPercentile; }
		float L_0 = __this->get_mSpendPercentile_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlayerStats_get_ChurnProbability_m9694B5A208DB5C2FD12A817308638C77D5E9E507_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mChurnProbability; }
		float L_0 = __this->get_mChurnProbability_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlayerStats_get_HighSpenderProbability_m10487ADE09B113FBB39257A7F975F8DE59028016_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mHighSpenderProbability; }
		float L_0 = __this->get_mHighSpenderProbability_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float PlayerStats_get_TotalSpendNext28Days_m70368E16B96A148A2D3AE30976EE741A0F0CE5DE_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mTotalSpendNext28Days; }
		float L_0 = __this->get_mTotalSpendNext28Days_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mF77E5D0BB4D0B8AC1D267A23BD823B3F0F0539D8_inline (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method)
{
	{
		// get { return mDescriptionUpdated; }
		bool L_0 = __this->get_mDescriptionUpdated_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_mC960B1D201FAA84C12C6BF1B420348F471B03347_inline (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method)
{
	{
		// get { return mNewDescription; }
		String_t* L_0 = __this->get_mNewDescription_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m40232FA73FE3B441A77A1ECD98DAA784ADA619C2_inline (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method)
{
	{
		// get { return mCoverImageUpdated; }
		bool L_0 = __this->get_mCoverImageUpdated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_m9581F7F39E52C1CB947A862A6004C7E5B67031E5_inline (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method)
{
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_mNewPngCoverImage_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  SavedGameMetadataUpdate_get_UpdatedPlayedTime_m5DAE25C34FA3EB0FFEB797C9BB40E5685B5DE81C_inline (SavedGameMetadataUpdate_tCA6ACCBCD9AEC9F4B9962B2738D5EBC1524F9C88 * __this, const RuntimeMethod* method)
{
	{
		// get { return mNewPlayedTime; }
		Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80  L_0 = __this->get_mNewPlayedTime_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Achievement_get_Id_mA0A91D5880B6FA2FCA775D0E8F501612DF38EDC8_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method)
{
	{
		// get { return mId; }
		String_t* L_0 = __this->get_mId_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Achievement_get_IsIncremental_mC38AA6AD649FD4BD34DDF544C064B674D59DFEF0_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsIncremental; }
		bool L_0 = __this->get_mIsIncremental_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Achievement_get_CurrentSteps_mBE2D692BB1FD94DAE37984BA65B9D5779D942A21_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method)
{
	{
		// get { return mCurrentSteps; }
		int32_t L_0 = __this->get_mCurrentSteps_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Achievement_get_TotalSteps_mD68DCDC81918457012A9EF47310F57B0968F629E_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method)
{
	{
		// get { return mTotalSteps; }
		int32_t L_0 = __this->get_mTotalSteps_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Achievement_get_IsUnlocked_mDC9AB73C6E169B23ABE2DBFBDEEAFD43643CC753_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsUnlocked; }
		bool L_0 = __this->get_mIsUnlocked_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Achievement_get_IsRevealed_m5391462A6F007F4A3EA0D3CE1D0AFAB2AD51EE96_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method)
{
	{
		// get { return mIsRevealed; }
		bool L_0 = __this->get_mIsRevealed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Achievement_get_Name_m5357D43091B01618E99348C2A3808997199074D6_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.mName; }
		String_t* L_0 = __this->get_mName_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Achievement_get_Description_m268B3D5E56A3D87AD3286ADE95C75914735D03E7_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.mDescription; }
		String_t* L_0 = __this->get_mDescription_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t Achievement_get_Points_m34B788ECC4E0ED8B2BD13DB3A752837D4ACB56E5_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method)
{
	{
		// get { return mPoints; }
		uint64_t L_0 = __this->get_mPoints_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Achievement_get_RevealedImageUrl_mC76D528740A1010FC5812068671FF86B94E5D109_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method)
{
	{
		// get { return mRevealedImageUrl; }
		String_t* L_0 = __this->get_mRevealedImageUrl_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Achievement_get_UnlockedImageUrl_m7EED580696A9D4C66FC98271F7248E5FC494C0A8_inline (Achievement_tC3011B1C2B4AEFFF44EECF5EB75D7481DBDC0355 * __this, const RuntimeMethod* method)
{
	{
		// get { return mUnlockedImageUrl; }
		String_t* L_0 = __this->get_mUnlockedImageUrl_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool PlayGamesAchievement_get_hidden_mEAE73D4817EB52D45A3B2E2393FA70D91FBE7256_inline (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.mHidden; }
		bool L_0 = __this->get_mHidden_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool PlayGamesAchievement_get_completed_m528F008EBBAE0C1A089D1777B5FFF27D46519B18_inline (PlayGamesAchievement_t36F78324F3D5A527A82401DFB5895EA663353262 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.mCompleted; }
		bool L_0 = __this->get_mCompleted_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t LeaderboardScoreData_get_ApproximateCount_m0A898568DD8BECB082ECE7DA4A7CCD5BD30DA657_inline (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * __this, const RuntimeMethod* method)
{
	{
		// get { return mApproxCount; }
		uint64_t L_0 = __this->get_mApproxCount_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LeaderboardScoreData_get_Title_mE935170FDD5871591863CA7499361301EA7D7DD8_inline (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * __this, const RuntimeMethod* method)
{
	{
		// get { return mTitle; }
		String_t* L_0 = __this->get_mTitle_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_SetTitle_mBF571A8F8B54100CC6870145A8097345A40D0C92_inline (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// mTitle = value;
		String_t* L_0 = ___value0;
		__this->set_mTitle_9(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* LeaderboardScoreData_get_PlayerScore_m1999A889AB55574DEDDB97556DF45DBFC3F1B253_inline (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * __this, const RuntimeMethod* method)
{
	{
		// get { return mPlayerScore; }
		RuntimeObject* L_0 = __this->get_mPlayerScore_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_SetLocalUserScore_mAEC2E642741686D87C92486EF5CE394A588D0330_inline (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * ___score0, const RuntimeMethod* method)
{
	{
		// mLocalUserScore = score;
		PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * L_0 = ___score0;
		__this->set_mLocalUserScore_6(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_userID_m5679E50EB4C05F46CEEBFD822BCA1858B4FF645B_inline (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, const RuntimeMethod* method)
{
	{
		// get { return mPlayerId; }
		String_t* L_0 = __this->get_mPlayerId_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint32_t PlayGamesLeaderboard_get_maxRange_m8C7E8C30EB79D0D1A2262A1EA19BA9BA86B3A2A2_inline (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	{
		// get { return mMaxRange; }
		uint32_t L_0 = __this->get_mMaxRange_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_userName_m0990E94AABF9A7D25EEE987AFD886597DA26607B_inline (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	{
		// get { return mDisplayName; }
		String_t* L_0 = __this->get_mDisplayName_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_id_m6E48ACB5FC7FB0343DFBAE4E5C00C2207DD5CC09_inline (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	{
		// get { return mPlayerId; }
		String_t* L_0 = __this->get_mPlayerId_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool PlayerStats_get_Valid_mB3B4331BFF027A3032C147C54B3269DDAB950415_inline (PlayerStats_tDB9F5410E0AB60E0476EAD8D51FA23BEDA4AB1CA * __this, const RuntimeMethod* method)
{
	{
		// get { return mValid; }
		bool L_0 = __this->get_mValid_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Logger_get_DebugLogEnabled_m0ABE85CD8B71AE08981813CE350768B0232D2851_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_get_DebugLogEnabled_m0ABE85CD8B71AE08981813CE350768B0232D2851Google_Play_Games1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return debugLogEnabled; }
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		bool L_0 = ((Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields*)il2cpp_codegen_static_fields_for(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var))->get_debugLogEnabled_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Logger_set_DebugLogEnabled_m0EF48153D1CEDBCE2F26799B8421D26C2A5B5D17_inline (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger_set_DebugLogEnabled_m0EF48153D1CEDBCE2F26799B8421D26C2A5B5D17Google_Play_Games1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { debugLogEnabled = value; }
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var);
		((Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_StaticFields*)il2cpp_codegen_static_fields_for(Logger_tEA3F7A89590891EC07EC5115E5105A85718C31FA_il2cpp_TypeInfo_var))->set_debugLogEnabled_0(L_0);
		// set { debugLogEnabled = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_mFBD3A842071873B293ACE081BB1E0C668CA61F8C_inline (ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * __this, const RuntimeMethod* method)
{
	{
		// get { return mId; }
		String_t* L_0 = __this->get_mId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PlayGamesLeaderboard_set_loading_m6E3268F3788B01A4752C4B362EACEE9FF72696E0_inline (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal set { mLoading = value; }
		bool L_0 = ___value0;
		__this->set_mLoading_5(L_0);
		// internal set { mLoading = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * LeaderboardScoreData_get_NextPageToken_m2E30E01B90301E0E095500227151787FB1EA63D3_inline (LeaderboardScoreData_tB40A0655BA5F418767E69BB9E543C89FAA40685B * __this, const RuntimeMethod* method)
{
	{
		// get { return mNextPage; }
		ScorePageToken_t47CDFDF9B2383FD1A24F9C6645BE06701DB3FCFF * L_0 = __this->get_mNextPage_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  PlayGamesLeaderboard_get_range_m0C77FBA37A7C49D90AA1DBF1AB22E876EE2B83A1_inline (PlayGamesLeaderboard_t7CBE77A4EAF7A912380800A5DDBEB30D02CE795A * __this, const RuntimeMethod* method)
{
	{
		// get { return mRange; }
		Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  L_0 = __this->get_mRange_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_leaderboardID_m28A7B9634862C3DB528C23CA6ECAF36460FF52DF_inline (PlayGamesScore_tEBCF550DC42B0FEB689F40B8D45DBB7C48E2827F * __this, const RuntimeMethod* method)
{
	{
		// get { return mLbId; }
		String_t* L_0 = __this->get_mLbId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_AvatarURL_m8F65E16B49903152877B2916FB8ABB0BB277CC17_inline (PlayGamesUserProfile_t8EBBCC9388B2FCFA324F2FB1DA4D2DA550E5937F * __this, const RuntimeMethod* method)
{
	{
		// get { return mAvatarUrl; }
		String_t* L_0 = __this->get_mAvatarUrl_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * StringComparer_get_Ordinal_m1F38FBAB170DF80D33FE2A849D30FF2E314D9FDB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringComparer_get_Ordinal_m1F38FBAB170DF80D33FE2A849D30FF2E314D9FDBGoogle_Play_Games1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_il2cpp_TypeInfo_var);
		StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * L_0 = ((StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_il2cpp_TypeInfo_var))->get__ordinal_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m619F23350E60DA452BA9F320E9EA38E1D933663D_gshared_inline (Nullable_1_t357D5ACD970F7036B6540D4E511909E232856A80 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
