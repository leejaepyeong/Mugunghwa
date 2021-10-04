#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.Gradient[]
struct GradientU5BU5D_tE0CC8E0022E0F90E37D38926B8A783D69396C688;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Byte[0...,0...]
struct ByteU5BU2CU5D_tFFA7E7CA82D7396BFF316C4BDB83D307E0CBBE0D;
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17;
// System.Int64[0...,0...]
struct Int64U5BU2CU5D_tEBB2AEAB267BE0C570FC32E17716C77AF3E75E4E;
// System.Single[0...,0...]
struct SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43;
// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// CGHolder
struct CGHolder_t913F49EA107E5271AEA6F8656DDC4DF55EB8F2F8;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// EnemySpawn
struct EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6;
// Enenmy
struct Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// Mkey.GPUWorker
struct GPUWorker_t11BCBFB0C7E68B0B412E54387168C517327A54D0;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// MapBestScore
struct MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5;
// MapSpawn
struct MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OptionManager
struct OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// Mkey.PrintData
struct PrintData_t7AD9F21BEF67F2C9D361B8241DE6BA655A52754D;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// Slide
struct Slide_tC8A53AEAC5D7D63C97BE75463C17549C0D5831C8;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// Mkey.SoftEffects
struct SoftEffects_tB95A1D2DA815329FDFBBE95B3C601CE98818A6C0;
// Mkey.SoftEffectsFont
struct SoftEffectsFont_tD1792CC90A46A9103A7EFF18D43A249F3914A085;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TitleManager
struct TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// Togglescript
struct Togglescript_tBB9B87459D5BA1BEAA2570EF0EA217D574F9484C;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// csAnimationSpin
struct csAnimationSpin_tFF0562F01AA905A8AB8152911CDBCA2CFCBA01DF;
// csDestroyEffect
struct csDestroyEffect_t65274EA206144F94103192B8F5F97A5803BDF043;
// csMouseOrbit
struct csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3;
// csParticleMove
struct csParticleMove_t0C21A163B74C57DD07FCF807416149EF956EE6E8;
// csShowAllEffect
struct csShowAllEffect_tF2B53111903252263A6C8902E3BD91CCF921850C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// EnemySpawn/<Spawn>d__7
struct U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66;
// Enenmy/<TryDestroy>d__8
struct U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1;
// GameManager/<PlayerHitEffect>d__40
struct U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581;
// GameManager/<TextRead>d__37
struct U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PlayerController/<TryAttack>d__8
struct U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621;
// PlayerController/<Walking>d__10
struct U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoftEffects_tB95A1D2DA815329FDFBBE95B3C601CE98818A6C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02DBA41B6912422CAF593E014C88718D80EF9424;
IL2CPP_EXTERN_C String_t* _stringLiteral0415DE590AC74A604879C2EC8FF9CA79E01EADD2;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral0825CF40AD9EB9FC0EEB31E0B52468887C429BE5;
IL2CPP_EXTERN_C String_t* _stringLiteral0D1E1796F9CC6EF984A76B391C1E4BB695FBE8FD;
IL2CPP_EXTERN_C String_t* _stringLiteral10A57E2B7DB0DA6D181DC6DAE11178BCFA49A3EE;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0;
IL2CPP_EXTERN_C String_t* _stringLiteral32C4C6CDB63870A4CE833AEC3602027A435E7A88;
IL2CPP_EXTERN_C String_t* _stringLiteral33D3FAD2CFA48DA36CE4F8092FCD3B48AADFCCC4;
IL2CPP_EXTERN_C String_t* _stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5;
IL2CPP_EXTERN_C String_t* _stringLiteral40C501BAFE20D9493BD1963E4216FAA87C8729DB;
IL2CPP_EXTERN_C String_t* _stringLiteral4332D15029DAFB044967D2C89ED9D2F759E8FA88;
IL2CPP_EXTERN_C String_t* _stringLiteral4FCBB1E3514F96781A8FD52E27DEC2298FD6F24B;
IL2CPP_EXTERN_C String_t* _stringLiteral4FCD3668DC9A87F69E839613A65182EE97F0526B;
IL2CPP_EXTERN_C String_t* _stringLiteral54EBB2280DCE87D12F37FDE3244FAE1BD4991521;
IL2CPP_EXTERN_C String_t* _stringLiteral5969E313289BEDCF05BB2D9BC242CF426926E3C1;
IL2CPP_EXTERN_C String_t* _stringLiteral5A0D010563EAFA6C9073D35EB9EF83C988F91B75;
IL2CPP_EXTERN_C String_t* _stringLiteral5BA2D6797B6201EAE374BD6801FF593EAC0BE3A7;
IL2CPP_EXTERN_C String_t* _stringLiteral69FD316D6BDC3C05B81ECF31F061259865824C15;
IL2CPP_EXTERN_C String_t* _stringLiteral6D88EFDCD25BBF0F1FF5FBD772493E6EA046D631;
IL2CPP_EXTERN_C String_t* _stringLiteral7696DED177E15AD00E2ACE183510B9747172DAD6;
IL2CPP_EXTERN_C String_t* _stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818;
IL2CPP_EXTERN_C String_t* _stringLiteral845A697DDBCB2F80417ED6CF9819D18B379B7D32;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral90443469E4F270C83F3D18BCAF16D757D8BCD5C8;
IL2CPP_EXTERN_C String_t* _stringLiteral90A6DBE1D6D6A94E5097F1D35B1CA467B5413335;
IL2CPP_EXTERN_C String_t* _stringLiteral93E4072C415F0C4AED1CB487CE31CABC9B6D6094;
IL2CPP_EXTERN_C String_t* _stringLiteral96187DB4339B8D11BB0C0B47D11D4978EB6B44D0;
IL2CPP_EXTERN_C String_t* _stringLiteral962231085CE4E25D08F810A9F316044FF801094D;
IL2CPP_EXTERN_C String_t* _stringLiteralA44607C62C73C74F8CED38080F5D03D40322CE3B;
IL2CPP_EXTERN_C String_t* _stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3;
IL2CPP_EXTERN_C String_t* _stringLiteralB07D3449BB2C3E5DEA192A50648AD901D78FC600;
IL2CPP_EXTERN_C String_t* _stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011;
IL2CPP_EXTERN_C String_t* _stringLiteralC6DCB8664A1FA03407755A9EF27AC60BD3FA3D41;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCBFFE0A5370273ABDE689727EAEE89D9F5516AA2;
IL2CPP_EXTERN_C String_t* _stringLiteralD36E1D3F02D6F410EBD291948E8D0DA8B6002C07;
IL2CPP_EXTERN_C String_t* _stringLiteralD979A78B82E8D731B4AA68482552C03AEEF9B927;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD4CE3899CC67E9503193DFBF4C031D12EAA9FA5;
IL2CPP_EXTERN_C String_t* _stringLiteralDDAC616761226DB482108609D17DE7A5BD17A12A;
IL2CPP_EXTERN_C String_t* _stringLiteralDFF22A686258FA1F59C0804D045287A0A0F59224;
IL2CPP_EXTERN_C String_t* _stringLiteralE0BD8DD3A3D01718D78D76F0A276118177F13485;
IL2CPP_EXTERN_C String_t* _stringLiteralF2E418DD810F504616C34E68239312081E36132B;
IL2CPP_EXTERN_C String_t* _stringLiteralF2F8A73F36BC9F8340CA51E5D8320663390E37DC;
IL2CPP_EXTERN_C String_t* _stringLiteralFDC2B27CDC209EB0AF849770DF4C17D8C2DA9620;
IL2CPP_EXTERN_C String_t* _stringLiteralFF8FE5A9B03C30BC4CF4DAA59EF7FE6A80EB7C36;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m530793AE979283CE3ADF36B0036FE0467EB8D741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m544EDB55EC6C249F96B487032ECEB73B848CD844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mF1FD0FEF2EA1871E69A6CDEA2AEA35CA963D870C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m7730E1B53DC94E0152DB33692B9E8FD50DD04656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m748821B299E8B2FAC05C55F2C8137BED1DB54917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayerHitEffectU3Ed__40_System_Collections_IEnumerator_Reset_m1C1703A8AEB809AD3D23F874B417E5109C6B82D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnU3Ed__7_System_Collections_IEnumerator_Reset_m1DAFE288EB3EB1360BD1709AB7F0F1B4272F2C00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTextReadU3Ed__37_System_Collections_IEnumerator_Reset_m95A4876C12477C532CA810B7B1E95ABD28E60B69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTryAttackU3Ed__8_System_Collections_IEnumerator_Reset_m759689F4BD68AF510E0027257F8FEF889182F519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTryDestroyU3Ed__8_System_Collections_IEnumerator_Reset_m4C81010C3E52F446C3763E731D0E382BB24E7599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWalkingU3Ed__10_System_Collections_IEnumerator_Reset_m9888FD12D779DC732ADBF759854CC327A3C4517C_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct ByteU5BU2CU5D_tFFA7E7CA82D7396BFF316C4BDB83D307E0CBBE0D;
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17;
struct Int64U5BU2CU5D_tEBB2AEAB267BE0C570FC32E17716C77AF3E75E4E;
struct SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Mkey.GPUWorker
struct GPUWorker_t11BCBFB0C7E68B0B412E54387168C517327A54D0  : public RuntimeObject
{
public:

public:
};


// Mkey.PrintData
struct PrintData_t7AD9F21BEF67F2C9D361B8241DE6BA655A52754D  : public RuntimeObject
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


// Mkey.TextSize
struct TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1  : public RuntimeObject
{
public:

public:
};

struct TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields
{
public:
	// System.Int32 Mkey.TextSize::Width
	int32_t ___Width_0;
	// System.Int32 Mkey.TextSize::Height
	int32_t ___Height_1;
	// System.Int32 Mkey.TextSize::W32d
	int32_t ___W32d_2;
	// System.Int32 Mkey.TextSize::H32d
	int32_t ___H32d_3;
	// System.Int32 Mkey.TextSize::WxH
	int32_t ___WxH_4;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields, ___Width_0)); }
	inline int32_t get_Width_0() const { return ___Width_0; }
	inline int32_t* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(int32_t value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields, ___Height_1)); }
	inline int32_t get_Height_1() const { return ___Height_1; }
	inline int32_t* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(int32_t value)
	{
		___Height_1 = value;
	}

	inline static int32_t get_offset_of_W32d_2() { return static_cast<int32_t>(offsetof(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields, ___W32d_2)); }
	inline int32_t get_W32d_2() const { return ___W32d_2; }
	inline int32_t* get_address_of_W32d_2() { return &___W32d_2; }
	inline void set_W32d_2(int32_t value)
	{
		___W32d_2 = value;
	}

	inline static int32_t get_offset_of_H32d_3() { return static_cast<int32_t>(offsetof(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields, ___H32d_3)); }
	inline int32_t get_H32d_3() const { return ___H32d_3; }
	inline int32_t* get_address_of_H32d_3() { return &___H32d_3; }
	inline void set_H32d_3(int32_t value)
	{
		___H32d_3 = value;
	}

	inline static int32_t get_offset_of_WxH_4() { return static_cast<int32_t>(offsetof(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields, ___WxH_4)); }
	inline int32_t get_WxH_4() const { return ___WxH_4; }
	inline int32_t* get_address_of_WxH_4() { return &___WxH_4; }
	inline void set_WxH_4(int32_t value)
	{
		___WxH_4 = value;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// EnemySpawn/<Spawn>d__7
struct U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66  : public RuntimeObject
{
public:
	// System.Int32 EnemySpawn/<Spawn>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemySpawn/<Spawn>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// EnemySpawn EnemySpawn/<Spawn>d__7::<>4__this
	EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66, ___U3CU3E4__this_2)); }
	inline EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Enenmy/<TryDestroy>d__8
struct U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1  : public RuntimeObject
{
public:
	// System.Int32 Enenmy/<TryDestroy>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enenmy/<TryDestroy>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Enenmy Enenmy/<TryDestroy>d__8::<>4__this
	Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1, ___U3CU3E4__this_2)); }
	inline Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameManager/<PlayerHitEffect>d__40
struct U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<PlayerHitEffect>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<PlayerHitEffect>d__40::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<PlayerHitEffect>d__40::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameManager/<TextRead>d__37
struct U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<TextRead>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<TextRead>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<TextRead>d__37::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;
	// System.Single[] GameManager/<TextRead>d__37::<random>5__2
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___U3CrandomU3E5__2_3;
	// System.Int32 GameManager/<TextRead>d__37::<i>5__3
	int32_t ___U3CiU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrandomU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427, ___U3CrandomU3E5__2_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_U3CrandomU3E5__2_3() const { return ___U3CrandomU3E5__2_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_U3CrandomU3E5__2_3() { return &___U3CrandomU3E5__2_3; }
	inline void set_U3CrandomU3E5__2_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___U3CrandomU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrandomU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427, ___U3CiU3E5__3_4)); }
	inline int32_t get_U3CiU3E5__3_4() const { return ___U3CiU3E5__3_4; }
	inline int32_t* get_address_of_U3CiU3E5__3_4() { return &___U3CiU3E5__3_4; }
	inline void set_U3CiU3E5__3_4(int32_t value)
	{
		___U3CiU3E5__3_4 = value;
	}
};


// PlayerController/<TryAttack>d__8
struct U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621  : public RuntimeObject
{
public:
	// System.Int32 PlayerController/<TryAttack>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<TryAttack>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerController PlayerController/<TryAttack>d__8::<>4__this
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621, ___U3CU3E4__this_2)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// PlayerController/<Walking>d__10
struct U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F  : public RuntimeObject
{
public:
	// System.Int32 PlayerController/<Walking>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<Walking>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerController PlayerController/<Walking>d__10::<>4__this
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F, ___U3CU3E4__this_2)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Mkey.int2
struct int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 
{
public:
	// System.Int32 Mkey.int2::X
	int32_t ___X_0;
	// System.Int32 Mkey.int2::Y
	int32_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5, ___X_0)); }
	inline int32_t get_X_0() const { return ___X_0; }
	inline int32_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int32_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5, ___Y_1)); }
	inline int32_t get_Y_1() const { return ___Y_1; }
	inline int32_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int32_t value)
	{
		___Y_1 = value;
	}
};


// Mkey.BlendMode
struct BlendMode_tE85E5D3FAA099E7941350F4F099BD8C3A5B14DFA 
{
public:
	// System.Int32 Mkey.BlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendMode_tE85E5D3FAA099E7941350F4F099BD8C3A5B14DFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.ComputeBuffer
struct ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.ComputeBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Mkey.DistFieldType
struct DistFieldType_t47926886AB33C346803D3B54D964A387BF1A5F40 
{
public:
	// System.Int32 Mkey.DistFieldType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DistFieldType_t47926886AB33C346803D3B54D964A387BF1A5F40, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Mkey.FaceTarget
struct FaceTarget_t0E47F68F598CA720ABF5BB8EBC0495D09204235A 
{
public:
	// System.Int32 Mkey.FaceTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FaceTarget_t0E47F68F598CA720ABF5BB8EBC0495D09204235A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// CGHolder
struct CGHolder_t913F49EA107E5271AEA6F8656DDC4DF55EB8F2F8  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.AnimationCurve[] CGHolder::curves
	AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* ___curves_4;
	// UnityEngine.Gradient[] CGHolder::gradients
	GradientU5BU5D_tE0CC8E0022E0F90E37D38926B8A783D69396C688* ___gradients_5;

public:
	inline static int32_t get_offset_of_curves_4() { return static_cast<int32_t>(offsetof(CGHolder_t913F49EA107E5271AEA6F8656DDC4DF55EB8F2F8, ___curves_4)); }
	inline AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* get_curves_4() const { return ___curves_4; }
	inline AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A** get_address_of_curves_4() { return &___curves_4; }
	inline void set_curves_4(AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* value)
	{
		___curves_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curves_4), (void*)value);
	}

	inline static int32_t get_offset_of_gradients_5() { return static_cast<int32_t>(offsetof(CGHolder_t913F49EA107E5271AEA6F8656DDC4DF55EB8F2F8, ___gradients_5)); }
	inline GradientU5BU5D_tE0CC8E0022E0F90E37D38926B8A783D69396C688* get_gradients_5() const { return ___gradients_5; }
	inline GradientU5BU5D_tE0CC8E0022E0F90E37D38926B8A783D69396C688** get_address_of_gradients_5() { return &___gradients_5; }
	inline void set_gradients_5(GradientU5BU5D_tE0CC8E0022E0F90E37D38926B8A783D69396C688* value)
	{
		___gradients_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gradients_5), (void*)value);
	}
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// MapBestScore
struct MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 MapBestScore::CurrentMapNum
	int32_t ___CurrentMapNum_4;
	// System.Int32[] MapBestScore::BestScore
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___BestScore_5;

public:
	inline static int32_t get_offset_of_CurrentMapNum_4() { return static_cast<int32_t>(offsetof(MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5, ___CurrentMapNum_4)); }
	inline int32_t get_CurrentMapNum_4() const { return ___CurrentMapNum_4; }
	inline int32_t* get_address_of_CurrentMapNum_4() { return &___CurrentMapNum_4; }
	inline void set_CurrentMapNum_4(int32_t value)
	{
		___CurrentMapNum_4 = value;
	}

	inline static int32_t get_offset_of_BestScore_5() { return static_cast<int32_t>(offsetof(MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5, ___BestScore_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_BestScore_5() const { return ___BestScore_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_BestScore_5() { return &___BestScore_5; }
	inline void set_BestScore_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___BestScore_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BestScore_5), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// EnemySpawn
struct EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] EnemySpawn::enemyPrefabs
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___enemyPrefabs_4;
	// UnityEngine.GameObject EnemySpawn::enemySpawnPlaces
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemySpawnPlaces_5;
	// System.Single EnemySpawn::SpawnTime
	float ___SpawnTime_6;
	// System.Single EnemySpawn::currentTime
	float ___currentTime_7;
	// System.Single EnemySpawn::speed
	float ___speed_8;

public:
	inline static int32_t get_offset_of_enemyPrefabs_4() { return static_cast<int32_t>(offsetof(EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6, ___enemyPrefabs_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_enemyPrefabs_4() const { return ___enemyPrefabs_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_enemyPrefabs_4() { return &___enemyPrefabs_4; }
	inline void set_enemyPrefabs_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___enemyPrefabs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPrefabs_4), (void*)value);
	}

	inline static int32_t get_offset_of_enemySpawnPlaces_5() { return static_cast<int32_t>(offsetof(EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6, ___enemySpawnPlaces_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemySpawnPlaces_5() const { return ___enemySpawnPlaces_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemySpawnPlaces_5() { return &___enemySpawnPlaces_5; }
	inline void set_enemySpawnPlaces_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemySpawnPlaces_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemySpawnPlaces_5), (void*)value);
	}

	inline static int32_t get_offset_of_SpawnTime_6() { return static_cast<int32_t>(offsetof(EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6, ___SpawnTime_6)); }
	inline float get_SpawnTime_6() const { return ___SpawnTime_6; }
	inline float* get_address_of_SpawnTime_6() { return &___SpawnTime_6; }
	inline void set_SpawnTime_6(float value)
	{
		___SpawnTime_6 = value;
	}

	inline static int32_t get_offset_of_currentTime_7() { return static_cast<int32_t>(offsetof(EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6, ___currentTime_7)); }
	inline float get_currentTime_7() const { return ___currentTime_7; }
	inline float* get_address_of_currentTime_7() { return &___currentTime_7; }
	inline void set_currentTime_7(float value)
	{
		___currentTime_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}
};


// Enenmy
struct Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Enenmy::DestroyEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___DestroyEffect_4;
	// System.Boolean Enenmy::isDestroy
	bool ___isDestroy_5;
	// System.Boolean Enenmy::isCrush
	bool ___isCrush_6;
	// System.Single Enenmy::speed
	float ___speed_7;
	// UnityEngine.Rigidbody Enenmy::rig
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rig_8;

public:
	inline static int32_t get_offset_of_DestroyEffect_4() { return static_cast<int32_t>(offsetof(Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7, ___DestroyEffect_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_DestroyEffect_4() const { return ___DestroyEffect_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_DestroyEffect_4() { return &___DestroyEffect_4; }
	inline void set_DestroyEffect_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___DestroyEffect_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DestroyEffect_4), (void*)value);
	}

	inline static int32_t get_offset_of_isDestroy_5() { return static_cast<int32_t>(offsetof(Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7, ___isDestroy_5)); }
	inline bool get_isDestroy_5() const { return ___isDestroy_5; }
	inline bool* get_address_of_isDestroy_5() { return &___isDestroy_5; }
	inline void set_isDestroy_5(bool value)
	{
		___isDestroy_5 = value;
	}

	inline static int32_t get_offset_of_isCrush_6() { return static_cast<int32_t>(offsetof(Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7, ___isCrush_6)); }
	inline bool get_isCrush_6() const { return ___isCrush_6; }
	inline bool* get_address_of_isCrush_6() { return &___isCrush_6; }
	inline void set_isCrush_6(bool value)
	{
		___isCrush_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_rig_8() { return static_cast<int32_t>(offsetof(Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7, ___rig_8)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rig_8() const { return ___rig_8; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rig_8() { return &___rig_8; }
	inline void set_rig_8(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rig_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rig_8), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameManager::gamePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gamePanel_5;
	// UnityEngine.GameObject GameManager::GoImg
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GoImg_6;
	// UnityEngine.GameObject GameManager::StopImg
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___StopImg_7;
	// System.Int32 GameManager::score
	int32_t ___score_8;
	// System.Int32 GameManager::bestScore
	int32_t ___bestScore_9;
	// UnityEngine.UI.Text GameManager::scoreTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreTxt_10;
	// System.Int32 GameManager::Life
	int32_t ___Life_11;
	// UnityEngine.GameObject GameManager::LifeGroup
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LifeGroup_12;
	// UnityEngine.GameObject[] GameManager::Lifes
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Lifes_13;
	// System.Single GameManager::GameTime
	float ___GameTime_14;
	// System.Boolean GameManager::isRead
	bool ___isRead_15;
	// System.Boolean GameManager::isDone
	bool ___isDone_16;
	// System.Boolean GameManager::isMove
	bool ___isMove_17;
	// System.Boolean GameManager::isDead
	bool ___isDead_18;
	// System.Int32 GameManager::level
	int32_t ___level_19;
	// System.Int32 GameManager::maxLevel
	int32_t ___maxLevel_20;
	// UnityEngine.UI.Text GameManager::levelTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___levelTxt_21;
	// System.String GameManager::EnemtTxt
	String_t* ___EnemtTxt_22;
	// UnityEngine.GameObject[] GameManager::animTxt
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___animTxt_23;
	// UnityEngine.GameObject GameManager::optionPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___optionPanel_24;
	// PlayerController GameManager::player
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___player_25;
	// UnityEngine.GameObject GameManager::HitEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HitEffect_26;
	// UnityEngine.GameObject GameManager::gameOverPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverPanel_27;
	// UnityEngine.UI.Text GameManager::EndScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___EndScore_28;
	// UnityEngine.UI.Text GameManager::BestScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BestScore_29;
	// UnityEngine.UI.Text GameManager::EndTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___EndTxt_30;
	// System.String[] GameManager::endTxts
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___endTxts_31;
	// MapBestScore GameManager::mapBestScore
	MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * ___mapBestScore_32;
	// UnityEngine.Material[] GameManager::skyMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___skyMaterials_33;
	// System.Int32 GameManager::skynum
	int32_t ___skynum_34;
	// System.Single GameManager::degree
	float ___degree_35;

public:
	inline static int32_t get_offset_of_gamePanel_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gamePanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gamePanel_5() const { return ___gamePanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gamePanel_5() { return &___gamePanel_5; }
	inline void set_gamePanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gamePanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gamePanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_GoImg_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___GoImg_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GoImg_6() const { return ___GoImg_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GoImg_6() { return &___GoImg_6; }
	inline void set_GoImg_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GoImg_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GoImg_6), (void*)value);
	}

	inline static int32_t get_offset_of_StopImg_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___StopImg_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_StopImg_7() const { return ___StopImg_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_StopImg_7() { return &___StopImg_7; }
	inline void set_StopImg_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___StopImg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StopImg_7), (void*)value);
	}

	inline static int32_t get_offset_of_score_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___score_8)); }
	inline int32_t get_score_8() const { return ___score_8; }
	inline int32_t* get_address_of_score_8() { return &___score_8; }
	inline void set_score_8(int32_t value)
	{
		___score_8 = value;
	}

	inline static int32_t get_offset_of_bestScore_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___bestScore_9)); }
	inline int32_t get_bestScore_9() const { return ___bestScore_9; }
	inline int32_t* get_address_of_bestScore_9() { return &___bestScore_9; }
	inline void set_bestScore_9(int32_t value)
	{
		___bestScore_9 = value;
	}

	inline static int32_t get_offset_of_scoreTxt_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___scoreTxt_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreTxt_10() const { return ___scoreTxt_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreTxt_10() { return &___scoreTxt_10; }
	inline void set_scoreTxt_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreTxt_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreTxt_10), (void*)value);
	}

	inline static int32_t get_offset_of_Life_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___Life_11)); }
	inline int32_t get_Life_11() const { return ___Life_11; }
	inline int32_t* get_address_of_Life_11() { return &___Life_11; }
	inline void set_Life_11(int32_t value)
	{
		___Life_11 = value;
	}

	inline static int32_t get_offset_of_LifeGroup_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___LifeGroup_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LifeGroup_12() const { return ___LifeGroup_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LifeGroup_12() { return &___LifeGroup_12; }
	inline void set_LifeGroup_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LifeGroup_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LifeGroup_12), (void*)value);
	}

	inline static int32_t get_offset_of_Lifes_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___Lifes_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Lifes_13() const { return ___Lifes_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Lifes_13() { return &___Lifes_13; }
	inline void set_Lifes_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Lifes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Lifes_13), (void*)value);
	}

	inline static int32_t get_offset_of_GameTime_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___GameTime_14)); }
	inline float get_GameTime_14() const { return ___GameTime_14; }
	inline float* get_address_of_GameTime_14() { return &___GameTime_14; }
	inline void set_GameTime_14(float value)
	{
		___GameTime_14 = value;
	}

	inline static int32_t get_offset_of_isRead_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___isRead_15)); }
	inline bool get_isRead_15() const { return ___isRead_15; }
	inline bool* get_address_of_isRead_15() { return &___isRead_15; }
	inline void set_isRead_15(bool value)
	{
		___isRead_15 = value;
	}

	inline static int32_t get_offset_of_isDone_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___isDone_16)); }
	inline bool get_isDone_16() const { return ___isDone_16; }
	inline bool* get_address_of_isDone_16() { return &___isDone_16; }
	inline void set_isDone_16(bool value)
	{
		___isDone_16 = value;
	}

	inline static int32_t get_offset_of_isMove_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___isMove_17)); }
	inline bool get_isMove_17() const { return ___isMove_17; }
	inline bool* get_address_of_isMove_17() { return &___isMove_17; }
	inline void set_isMove_17(bool value)
	{
		___isMove_17 = value;
	}

	inline static int32_t get_offset_of_isDead_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___isDead_18)); }
	inline bool get_isDead_18() const { return ___isDead_18; }
	inline bool* get_address_of_isDead_18() { return &___isDead_18; }
	inline void set_isDead_18(bool value)
	{
		___isDead_18 = value;
	}

	inline static int32_t get_offset_of_level_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___level_19)); }
	inline int32_t get_level_19() const { return ___level_19; }
	inline int32_t* get_address_of_level_19() { return &___level_19; }
	inline void set_level_19(int32_t value)
	{
		___level_19 = value;
	}

	inline static int32_t get_offset_of_maxLevel_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___maxLevel_20)); }
	inline int32_t get_maxLevel_20() const { return ___maxLevel_20; }
	inline int32_t* get_address_of_maxLevel_20() { return &___maxLevel_20; }
	inline void set_maxLevel_20(int32_t value)
	{
		___maxLevel_20 = value;
	}

	inline static int32_t get_offset_of_levelTxt_21() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___levelTxt_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_levelTxt_21() const { return ___levelTxt_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_levelTxt_21() { return &___levelTxt_21; }
	inline void set_levelTxt_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___levelTxt_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelTxt_21), (void*)value);
	}

	inline static int32_t get_offset_of_EnemtTxt_22() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___EnemtTxt_22)); }
	inline String_t* get_EnemtTxt_22() const { return ___EnemtTxt_22; }
	inline String_t** get_address_of_EnemtTxt_22() { return &___EnemtTxt_22; }
	inline void set_EnemtTxt_22(String_t* value)
	{
		___EnemtTxt_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemtTxt_22), (void*)value);
	}

	inline static int32_t get_offset_of_animTxt_23() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___animTxt_23)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_animTxt_23() const { return ___animTxt_23; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_animTxt_23() { return &___animTxt_23; }
	inline void set_animTxt_23(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___animTxt_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animTxt_23), (void*)value);
	}

	inline static int32_t get_offset_of_optionPanel_24() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___optionPanel_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_optionPanel_24() const { return ___optionPanel_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_optionPanel_24() { return &___optionPanel_24; }
	inline void set_optionPanel_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___optionPanel_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optionPanel_24), (void*)value);
	}

	inline static int32_t get_offset_of_player_25() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player_25)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_player_25() const { return ___player_25; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_player_25() { return &___player_25; }
	inline void set_player_25(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___player_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_25), (void*)value);
	}

	inline static int32_t get_offset_of_HitEffect_26() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___HitEffect_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_HitEffect_26() const { return ___HitEffect_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_HitEffect_26() { return &___HitEffect_26; }
	inline void set_HitEffect_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___HitEffect_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HitEffect_26), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverPanel_27() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameOverPanel_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverPanel_27() const { return ___gameOverPanel_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverPanel_27() { return &___gameOverPanel_27; }
	inline void set_gameOverPanel_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverPanel_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverPanel_27), (void*)value);
	}

	inline static int32_t get_offset_of_EndScore_28() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___EndScore_28)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_EndScore_28() const { return ___EndScore_28; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_EndScore_28() { return &___EndScore_28; }
	inline void set_EndScore_28(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___EndScore_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndScore_28), (void*)value);
	}

	inline static int32_t get_offset_of_BestScore_29() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___BestScore_29)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BestScore_29() const { return ___BestScore_29; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BestScore_29() { return &___BestScore_29; }
	inline void set_BestScore_29(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BestScore_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BestScore_29), (void*)value);
	}

	inline static int32_t get_offset_of_EndTxt_30() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___EndTxt_30)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_EndTxt_30() const { return ___EndTxt_30; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_EndTxt_30() { return &___EndTxt_30; }
	inline void set_EndTxt_30(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___EndTxt_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndTxt_30), (void*)value);
	}

	inline static int32_t get_offset_of_endTxts_31() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___endTxts_31)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_endTxts_31() const { return ___endTxts_31; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_endTxts_31() { return &___endTxts_31; }
	inline void set_endTxts_31(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___endTxts_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endTxts_31), (void*)value);
	}

	inline static int32_t get_offset_of_mapBestScore_32() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___mapBestScore_32)); }
	inline MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * get_mapBestScore_32() const { return ___mapBestScore_32; }
	inline MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 ** get_address_of_mapBestScore_32() { return &___mapBestScore_32; }
	inline void set_mapBestScore_32(MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * value)
	{
		___mapBestScore_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapBestScore_32), (void*)value);
	}

	inline static int32_t get_offset_of_skyMaterials_33() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___skyMaterials_33)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_skyMaterials_33() const { return ___skyMaterials_33; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_skyMaterials_33() { return &___skyMaterials_33; }
	inline void set_skyMaterials_33(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___skyMaterials_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skyMaterials_33), (void*)value);
	}

	inline static int32_t get_offset_of_skynum_34() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___skynum_34)); }
	inline int32_t get_skynum_34() const { return ___skynum_34; }
	inline int32_t* get_address_of_skynum_34() { return &___skynum_34; }
	inline void set_skynum_34(int32_t value)
	{
		___skynum_34 = value;
	}

	inline static int32_t get_offset_of_degree_35() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___degree_35)); }
	inline float get_degree_35() const { return ___degree_35; }
	inline float* get_address_of_degree_35() { return &___degree_35; }
	inline void set_degree_35(float value)
	{
		___degree_35 = value;
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___instance_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_instance_4() const { return ___instance_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// MapSpawn
struct MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] MapSpawn::MapPrefabs
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___MapPrefabs_4;
	// System.Single MapSpawn::moveDistance
	float ___moveDistance_5;
	// System.Int32 MapSpawn::moveCount
	int32_t ___moveCount_6;
	// System.Int32 MapSpawn::mapNum
	int32_t ___mapNum_7;

public:
	inline static int32_t get_offset_of_MapPrefabs_4() { return static_cast<int32_t>(offsetof(MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD, ___MapPrefabs_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_MapPrefabs_4() const { return ___MapPrefabs_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_MapPrefabs_4() { return &___MapPrefabs_4; }
	inline void set_MapPrefabs_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___MapPrefabs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MapPrefabs_4), (void*)value);
	}

	inline static int32_t get_offset_of_moveDistance_5() { return static_cast<int32_t>(offsetof(MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD, ___moveDistance_5)); }
	inline float get_moveDistance_5() const { return ___moveDistance_5; }
	inline float* get_address_of_moveDistance_5() { return &___moveDistance_5; }
	inline void set_moveDistance_5(float value)
	{
		___moveDistance_5 = value;
	}

	inline static int32_t get_offset_of_moveCount_6() { return static_cast<int32_t>(offsetof(MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD, ___moveCount_6)); }
	inline int32_t get_moveCount_6() const { return ___moveCount_6; }
	inline int32_t* get_address_of_moveCount_6() { return &___moveCount_6; }
	inline void set_moveCount_6(int32_t value)
	{
		___moveCount_6 = value;
	}

	inline static int32_t get_offset_of_mapNum_7() { return static_cast<int32_t>(offsetof(MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD, ___mapNum_7)); }
	inline int32_t get_mapNum_7() const { return ___mapNum_7; }
	inline int32_t* get_address_of_mapNum_7() { return &___mapNum_7; }
	inline void set_mapNum_7(int32_t value)
	{
		___mapNum_7 = value;
	}
};


// OptionManager
struct OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material[] OptionManager::materials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___materials_4;
	// UnityEngine.GameObject[] OptionManager::TextObj
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___TextObj_5;
	// UnityEngine.UI.Text[] OptionManager::TextPage
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___TextPage_6;
	// UnityEngine.UI.Text OptionManager::pageTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___pageTxt_7;
	// UnityEngine.UI.Button OptionManager::PreBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___PreBtn_8;
	// UnityEngine.UI.Button OptionManager::NextBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___NextBtn_9;
	// System.Single OptionManager::degree
	float ___degree_10;
	// System.Int32 OptionManager::skynum
	int32_t ___skynum_11;
	// System.Int32 OptionManager::pastPage
	int32_t ___pastPage_12;
	// System.Int32 OptionManager::textPage
	int32_t ___textPage_13;
	// System.Int32 OptionManager::maxPage
	int32_t ___maxPage_14;

public:
	inline static int32_t get_offset_of_materials_4() { return static_cast<int32_t>(offsetof(OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA, ___materials_4)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_materials_4() const { return ___materials_4; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_materials_4() { return &___materials_4; }
	inline void set_materials_4(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___materials_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materials_4), (void*)value);
	}

	inline static int32_t get_offset_of_TextObj_5() { return static_cast<int32_t>(offsetof(OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA, ___TextObj_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_TextObj_5() const { return ___TextObj_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_TextObj_5() { return &___TextObj_5; }
	inline void set_TextObj_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___TextObj_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextObj_5), (void*)value);
	}

	inline static int32_t get_offset_of_TextPage_6() { return static_cast<int32_t>(offsetof(OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA, ___TextPage_6)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_TextPage_6() const { return ___TextPage_6; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_TextPage_6() { return &___TextPage_6; }
	inline void set_TextPage_6(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___TextPage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextPage_6), (void*)value);
	}

	inline static int32_t get_offset_of_pageTxt_7() { return static_cast<int32_t>(offsetof(OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA, ___pageTxt_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_pageTxt_7() const { return ___pageTxt_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_pageTxt_7() { return &___pageTxt_7; }
	inline void set_pageTxt_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___pageTxt_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pageTxt_7), (void*)value);
	}

	inline static int32_t get_offset_of_PreBtn_8() { return static_cast<int32_t>(offsetof(OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA, ___PreBtn_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_PreBtn_8() const { return ___PreBtn_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_PreBtn_8() { return &___PreBtn_8; }
	inline void set_PreBtn_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___PreBtn_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PreBtn_8), (void*)value);
	}

	inline static int32_t get_offset_of_NextBtn_9() { return static_cast<int32_t>(offsetof(OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA, ___NextBtn_9)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_NextBtn_9() const { return ___NextBtn_9; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_NextBtn_9() { return &___NextBtn_9; }
	inline void set_NextBtn_9(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___NextBtn_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NextBtn_9), (void*)value);
	}

	inline static int32_t get_offset_of_degree_10() { return static_cast<int32_t>(offsetof(OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA, ___degree_10)); }
	inline float get_degree_10() const { return ___degree_10; }
	inline float* get_address_of_degree_10() { return &___degree_10; }
	inline void set_degree_10(float value)
	{
		___degree_10 = value;
	}

	inline static int32_t get_offset_of_skynum_11() { return static_cast<int32_t>(offsetof(OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA, ___skynum_11)); }
	inline int32_t get_skynum_11() const { return ___skynum_11; }
	inline int32_t* get_address_of_skynum_11() { return &___skynum_11; }
	inline void set_skynum_11(int32_t value)
	{
		___skynum_11 = value;
	}

	inline static int32_t get_offset_of_pastPage_12() { return static_cast<int32_t>(offsetof(OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA, ___pastPage_12)); }
	inline int32_t get_pastPage_12() const { return ___pastPage_12; }
	inline int32_t* get_address_of_pastPage_12() { return &___pastPage_12; }
	inline void set_pastPage_12(int32_t value)
	{
		___pastPage_12 = value;
	}

	inline static int32_t get_offset_of_textPage_13() { return static_cast<int32_t>(offsetof(OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA, ___textPage_13)); }
	inline int32_t get_textPage_13() const { return ___textPage_13; }
	inline int32_t* get_address_of_textPage_13() { return &___textPage_13; }
	inline void set_textPage_13(int32_t value)
	{
		___textPage_13 = value;
	}

	inline static int32_t get_offset_of_maxPage_14() { return static_cast<int32_t>(offsetof(OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA, ___maxPage_14)); }
	inline int32_t get_maxPage_14() const { return ___maxPage_14; }
	inline int32_t* get_address_of_maxPage_14() { return &___maxPage_14; }
	inline void set_maxPage_14(int32_t value)
	{
		___maxPage_14 = value;
	}
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean PlayerController::isAttack
	bool ___isAttack_4;
	// UnityEngine.BoxCollider PlayerController::AttackArea
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___AttackArea_5;
	// UnityEngine.Rigidbody PlayerController::playerRig
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___playerRig_6;
	// UnityEngine.Animator PlayerController::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_7;
	// System.Boolean PlayerController::attackPos
	bool ___attackPos_8;
	// MapSpawn PlayerController::mapSpawn
	MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD * ___mapSpawn_9;
	// UnityEngine.GameObject[] PlayerController::AttackEffect
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___AttackEffect_10;

public:
	inline static int32_t get_offset_of_isAttack_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___isAttack_4)); }
	inline bool get_isAttack_4() const { return ___isAttack_4; }
	inline bool* get_address_of_isAttack_4() { return &___isAttack_4; }
	inline void set_isAttack_4(bool value)
	{
		___isAttack_4 = value;
	}

	inline static int32_t get_offset_of_AttackArea_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___AttackArea_5)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_AttackArea_5() const { return ___AttackArea_5; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_AttackArea_5() { return &___AttackArea_5; }
	inline void set_AttackArea_5(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___AttackArea_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AttackArea_5), (void*)value);
	}

	inline static int32_t get_offset_of_playerRig_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___playerRig_6)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_playerRig_6() const { return ___playerRig_6; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_playerRig_6() { return &___playerRig_6; }
	inline void set_playerRig_6(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___playerRig_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerRig_6), (void*)value);
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___anim_7)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_7() const { return ___anim_7; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_7), (void*)value);
	}

	inline static int32_t get_offset_of_attackPos_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___attackPos_8)); }
	inline bool get_attackPos_8() const { return ___attackPos_8; }
	inline bool* get_address_of_attackPos_8() { return &___attackPos_8; }
	inline void set_attackPos_8(bool value)
	{
		___attackPos_8 = value;
	}

	inline static int32_t get_offset_of_mapSpawn_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___mapSpawn_9)); }
	inline MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD * get_mapSpawn_9() const { return ___mapSpawn_9; }
	inline MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD ** get_address_of_mapSpawn_9() { return &___mapSpawn_9; }
	inline void set_mapSpawn_9(MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD * value)
	{
		___mapSpawn_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapSpawn_9), (void*)value);
	}

	inline static int32_t get_offset_of_AttackEffect_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___AttackEffect_10)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_AttackEffect_10() const { return ___AttackEffect_10; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_AttackEffect_10() { return &___AttackEffect_10; }
	inline void set_AttackEffect_10(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___AttackEffect_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AttackEffect_10), (void*)value);
	}
};


// Slide
struct Slide_tC8A53AEAC5D7D63C97BE75463C17549C0D5831C8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image Slide::Filler
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___Filler_4;
	// UnityEngine.UI.Slider Slide::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_5;

public:
	inline static int32_t get_offset_of_Filler_4() { return static_cast<int32_t>(offsetof(Slide_tC8A53AEAC5D7D63C97BE75463C17549C0D5831C8, ___Filler_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_Filler_4() const { return ___Filler_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_Filler_4() { return &___Filler_4; }
	inline void set_Filler_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___Filler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Filler_4), (void*)value);
	}

	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(Slide_tC8A53AEAC5D7D63C97BE75463C17549C0D5831C8, ___slider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_5() const { return ___slider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_5), (void*)value);
	}
};


// Mkey.SoftEffects
struct SoftEffects_tB95A1D2DA815329FDFBBE95B3C601CE98818A6C0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct SoftEffects_tB95A1D2DA815329FDFBBE95B3C601CE98818A6C0_StaticFields
{
public:
	// System.Boolean Mkey.SoftEffects::debuglog
	bool ___debuglog_4;

public:
	inline static int32_t get_offset_of_debuglog_4() { return static_cast<int32_t>(offsetof(SoftEffects_tB95A1D2DA815329FDFBBE95B3C601CE98818A6C0_StaticFields, ___debuglog_4)); }
	inline bool get_debuglog_4() const { return ___debuglog_4; }
	inline bool* get_address_of_debuglog_4() { return &___debuglog_4; }
	inline void set_debuglog_4(bool value)
	{
		___debuglog_4 = value;
	}
};


// TitleManager
struct TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material[] TitleManager::materials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___materials_4;
	// System.Single TitleManager::degree
	float ___degree_5;
	// System.Int32 TitleManager::skynum
	int32_t ___skynum_6;
	// UnityEngine.UI.Text[] TitleManager::BestScoreTxt
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___BestScoreTxt_7;
	// UnityEngine.GameObject TitleManager::SelectMapPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SelectMapPanel_8;
	// MapBestScore TitleManager::mapBestScore
	MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * ___mapBestScore_9;

public:
	inline static int32_t get_offset_of_materials_4() { return static_cast<int32_t>(offsetof(TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4, ___materials_4)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_materials_4() const { return ___materials_4; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_materials_4() { return &___materials_4; }
	inline void set_materials_4(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___materials_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materials_4), (void*)value);
	}

	inline static int32_t get_offset_of_degree_5() { return static_cast<int32_t>(offsetof(TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4, ___degree_5)); }
	inline float get_degree_5() const { return ___degree_5; }
	inline float* get_address_of_degree_5() { return &___degree_5; }
	inline void set_degree_5(float value)
	{
		___degree_5 = value;
	}

	inline static int32_t get_offset_of_skynum_6() { return static_cast<int32_t>(offsetof(TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4, ___skynum_6)); }
	inline int32_t get_skynum_6() const { return ___skynum_6; }
	inline int32_t* get_address_of_skynum_6() { return &___skynum_6; }
	inline void set_skynum_6(int32_t value)
	{
		___skynum_6 = value;
	}

	inline static int32_t get_offset_of_BestScoreTxt_7() { return static_cast<int32_t>(offsetof(TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4, ___BestScoreTxt_7)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_BestScoreTxt_7() const { return ___BestScoreTxt_7; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_BestScoreTxt_7() { return &___BestScoreTxt_7; }
	inline void set_BestScoreTxt_7(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___BestScoreTxt_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BestScoreTxt_7), (void*)value);
	}

	inline static int32_t get_offset_of_SelectMapPanel_8() { return static_cast<int32_t>(offsetof(TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4, ___SelectMapPanel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SelectMapPanel_8() const { return ___SelectMapPanel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SelectMapPanel_8() { return &___SelectMapPanel_8; }
	inline void set_SelectMapPanel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SelectMapPanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectMapPanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_mapBestScore_9() { return static_cast<int32_t>(offsetof(TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4, ___mapBestScore_9)); }
	inline MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * get_mapBestScore_9() const { return ___mapBestScore_9; }
	inline MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 ** get_address_of_mapBestScore_9() { return &___mapBestScore_9; }
	inline void set_mapBestScore_9(MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * value)
	{
		___mapBestScore_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapBestScore_9), (void*)value);
	}
};


// Togglescript
struct Togglescript_tBB9B87459D5BA1BEAA2570EF0EA217D574F9484C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Toggle Togglescript::toggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___toggle_4;
	// UnityEngine.GameObject Togglescript::Slider
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Slider_5;

public:
	inline static int32_t get_offset_of_toggle_4() { return static_cast<int32_t>(offsetof(Togglescript_tBB9B87459D5BA1BEAA2570EF0EA217D574F9484C, ___toggle_4)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_toggle_4() const { return ___toggle_4; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_toggle_4() { return &___toggle_4; }
	inline void set_toggle_4(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___toggle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggle_4), (void*)value);
	}

	inline static int32_t get_offset_of_Slider_5() { return static_cast<int32_t>(offsetof(Togglescript_tBB9B87459D5BA1BEAA2570EF0EA217D574F9484C, ___Slider_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Slider_5() const { return ___Slider_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Slider_5() { return &___Slider_5; }
	inline void set_Slider_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Slider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Slider_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// csAnimationSpin
struct csAnimationSpin_tFF0562F01AA905A8AB8152911CDBCA2CFCBA01DF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animation csAnimationSpin::an
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___an_4;

public:
	inline static int32_t get_offset_of_an_4() { return static_cast<int32_t>(offsetof(csAnimationSpin_tFF0562F01AA905A8AB8152911CDBCA2CFCBA01DF, ___an_4)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_an_4() const { return ___an_4; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_an_4() { return &___an_4; }
	inline void set_an_4(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___an_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___an_4), (void*)value);
	}
};


// csDestroyEffect
struct csDestroyEffect_t65274EA206144F94103192B8F5F97A5803BDF043  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// csMouseOrbit
struct csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform csMouseOrbit::Target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Target_4;
	// System.Single csMouseOrbit::distance
	float ___distance_5;
	// System.Single csMouseOrbit::xSpeed
	float ___xSpeed_6;
	// System.Single csMouseOrbit::ySpeed
	float ___ySpeed_7;
	// System.Single csMouseOrbit::yMinLimit
	float ___yMinLimit_8;
	// System.Single csMouseOrbit::yMaxLimit
	float ___yMaxLimit_9;
	// System.Single csMouseOrbit::x
	float ___x_10;
	// System.Single csMouseOrbit::y
	float ___y_11;
	// System.Single csMouseOrbit::CameraDist
	float ___CameraDist_12;

public:
	inline static int32_t get_offset_of_Target_4() { return static_cast<int32_t>(offsetof(csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3, ___Target_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Target_4() const { return ___Target_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Target_4() { return &___Target_4; }
	inline void set_Target_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_4), (void*)value);
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}

	inline static int32_t get_offset_of_xSpeed_6() { return static_cast<int32_t>(offsetof(csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3, ___xSpeed_6)); }
	inline float get_xSpeed_6() const { return ___xSpeed_6; }
	inline float* get_address_of_xSpeed_6() { return &___xSpeed_6; }
	inline void set_xSpeed_6(float value)
	{
		___xSpeed_6 = value;
	}

	inline static int32_t get_offset_of_ySpeed_7() { return static_cast<int32_t>(offsetof(csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3, ___ySpeed_7)); }
	inline float get_ySpeed_7() const { return ___ySpeed_7; }
	inline float* get_address_of_ySpeed_7() { return &___ySpeed_7; }
	inline void set_ySpeed_7(float value)
	{
		___ySpeed_7 = value;
	}

	inline static int32_t get_offset_of_yMinLimit_8() { return static_cast<int32_t>(offsetof(csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3, ___yMinLimit_8)); }
	inline float get_yMinLimit_8() const { return ___yMinLimit_8; }
	inline float* get_address_of_yMinLimit_8() { return &___yMinLimit_8; }
	inline void set_yMinLimit_8(float value)
	{
		___yMinLimit_8 = value;
	}

	inline static int32_t get_offset_of_yMaxLimit_9() { return static_cast<int32_t>(offsetof(csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3, ___yMaxLimit_9)); }
	inline float get_yMaxLimit_9() const { return ___yMaxLimit_9; }
	inline float* get_address_of_yMaxLimit_9() { return &___yMaxLimit_9; }
	inline void set_yMaxLimit_9(float value)
	{
		___yMaxLimit_9 = value;
	}

	inline static int32_t get_offset_of_x_10() { return static_cast<int32_t>(offsetof(csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3, ___x_10)); }
	inline float get_x_10() const { return ___x_10; }
	inline float* get_address_of_x_10() { return &___x_10; }
	inline void set_x_10(float value)
	{
		___x_10 = value;
	}

	inline static int32_t get_offset_of_y_11() { return static_cast<int32_t>(offsetof(csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3, ___y_11)); }
	inline float get_y_11() const { return ___y_11; }
	inline float* get_address_of_y_11() { return &___y_11; }
	inline void set_y_11(float value)
	{
		___y_11 = value;
	}

	inline static int32_t get_offset_of_CameraDist_12() { return static_cast<int32_t>(offsetof(csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3, ___CameraDist_12)); }
	inline float get_CameraDist_12() const { return ___CameraDist_12; }
	inline float* get_address_of_CameraDist_12() { return &___CameraDist_12; }
	inline void set_CameraDist_12(float value)
	{
		___CameraDist_12 = value;
	}
};


// csParticleMove
struct csParticleMove_t0C21A163B74C57DD07FCF807416149EF956EE6E8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single csParticleMove::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(csParticleMove_t0C21A163B74C57DD07FCF807416149EF956EE6E8, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};


// csShowAllEffect
struct csShowAllEffect_tF2B53111903252263A6C8902E3BD91CCF921850C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String[] csShowAllEffect::EffectName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___EffectName_4;
	// UnityEngine.Transform[] csShowAllEffect::Effect
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___Effect_5;
	// UnityEngine.UI.Text csShowAllEffect::Text1
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Text1_6;
	// System.Int32 csShowAllEffect::i
	int32_t ___i_7;

public:
	inline static int32_t get_offset_of_EffectName_4() { return static_cast<int32_t>(offsetof(csShowAllEffect_tF2B53111903252263A6C8902E3BD91CCF921850C, ___EffectName_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_EffectName_4() const { return ___EffectName_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_EffectName_4() { return &___EffectName_4; }
	inline void set_EffectName_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___EffectName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EffectName_4), (void*)value);
	}

	inline static int32_t get_offset_of_Effect_5() { return static_cast<int32_t>(offsetof(csShowAllEffect_tF2B53111903252263A6C8902E3BD91CCF921850C, ___Effect_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_Effect_5() const { return ___Effect_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_Effect_5() { return &___Effect_5; }
	inline void set_Effect_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___Effect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Effect_5), (void*)value);
	}

	inline static int32_t get_offset_of_Text1_6() { return static_cast<int32_t>(offsetof(csShowAllEffect_tF2B53111903252263A6C8902E3BD91CCF921850C, ___Text1_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Text1_6() const { return ___Text1_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Text1_6() { return &___Text1_6; }
	inline void set_Text1_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Text1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Text1_6), (void*)value);
	}

	inline static int32_t get_offset_of_i_7() { return static_cast<int32_t>(offsetof(csShowAllEffect_tF2B53111903252263A6C8902E3BD91CCF921850C, ___i_7)); }
	inline int32_t get_i_7() const { return ___i_7; }
	inline int32_t* get_address_of_i_7() { return &___i_7; }
	inline void set_i_7(int32_t value)
	{
		___i_7 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// Mkey.SoftEffectsFont
struct SoftEffectsFont_tD1792CC90A46A9103A7EFF18D43A249F3914A085  : public SoftEffects_tB95A1D2DA815329FDFBBE95B3C601CE98818A6C0
{
public:
	// UnityEngine.Font Mkey.SoftEffectsFont::SourceFont
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___SourceFont_5;
	// UnityEngine.Font Mkey.SoftEffectsFont::SoftFont
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___SoftFont_6;
	// System.String Mkey.SoftEffectsFont::SEFontSubFolderSufix
	String_t* ___SEFontSubFolderSufix_7;
	// System.String Mkey.SoftEffectsFont::key
	String_t* ___key_8;

public:
	inline static int32_t get_offset_of_SourceFont_5() { return static_cast<int32_t>(offsetof(SoftEffectsFont_tD1792CC90A46A9103A7EFF18D43A249F3914A085, ___SourceFont_5)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_SourceFont_5() const { return ___SourceFont_5; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_SourceFont_5() { return &___SourceFont_5; }
	inline void set_SourceFont_5(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___SourceFont_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SourceFont_5), (void*)value);
	}

	inline static int32_t get_offset_of_SoftFont_6() { return static_cast<int32_t>(offsetof(SoftEffectsFont_tD1792CC90A46A9103A7EFF18D43A249F3914A085, ___SoftFont_6)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_SoftFont_6() const { return ___SoftFont_6; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_SoftFont_6() { return &___SoftFont_6; }
	inline void set_SoftFont_6(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___SoftFont_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoftFont_6), (void*)value);
	}

	inline static int32_t get_offset_of_SEFontSubFolderSufix_7() { return static_cast<int32_t>(offsetof(SoftEffectsFont_tD1792CC90A46A9103A7EFF18D43A249F3914A085, ___SEFontSubFolderSufix_7)); }
	inline String_t* get_SEFontSubFolderSufix_7() const { return ___SEFontSubFolderSufix_7; }
	inline String_t** get_address_of_SEFontSubFolderSufix_7() { return &___SEFontSubFolderSufix_7; }
	inline void set_SEFontSubFolderSufix_7(String_t* value)
	{
		___SEFontSubFolderSufix_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SEFontSubFolderSufix_7), (void*)value);
	}

	inline static int32_t get_offset_of_key_8() { return static_cast<int32_t>(offsetof(SoftEffectsFont_tD1792CC90A46A9103A7EFF18D43A249F3914A085, ___key_8)); }
	inline String_t* get_key_8() const { return ___key_8; }
	inline String_t** get_address_of_key_8() { return &___key_8; }
	inline void set_key_8(String_t* value)
	{
		___key_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_8), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * m_Items[1];

public:
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17  : public RuntimeArray
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Byte[0...,0...]
struct ByteU5BU2CU5D_tFFA7E7CA82D7396BFF316C4BDB83D307E0CBBE0D  : public RuntimeArray
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
	inline uint8_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Single[0...,0...]
struct SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[0...,0...]
struct Int64U5BU2CU5D_tEBB2AEAB267BE0C570FC32E17716C77AF3E75E4E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
	inline int64_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int64_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int64_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m02BDA2BE9BA7A8D6BB8554AE3E32ED6EF05EDC0C_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void EnemySpawn::StartEnemySpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawn_StartEnemySpawn_m7B5D8C51A8EB7CE29FED5A3B26FE60F3D7302D5E (EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Collections.IEnumerator EnemySpawn::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawn_Spawn_m95EE582CE3DBCC71D8302FAABA98918C47AD3682 (EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void EnemySpawn/<Spawn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__7__ctor_mDA11760E6E495D79D5BFB36E7CF392F470ABE029 (U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m02BDA2BE9BA7A8D6BB8554AE3E32ED6EF05EDC0C_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Collections.IEnumerator Enenmy::TryDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enenmy_TryDestroy_m6D924E98500252F5FA49E87BB441E0E67C633906 (Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * __this, const RuntimeMethod* method);
// System.Void Enenmy/<TryDestroy>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryDestroyU3Ed__8__ctor_mF4772E85FE96871B188FFD1C3A28538C4B63B49B (U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlayerController>()
inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m530793AE979283CE3ADF36B0036FE0467EB8D741 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void GameManager::LifeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LifeOut_m42C0C44B0DAAC18390E6E9AFE6EC74917B3BA1C2 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void Enenmy::DestroyStone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enenmy_DestroyStone_m8D6011F21E3E3993644271FCFFC5A7A9BB8F4147 (Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void GameManager::TryTextRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TryTextRead_mFAEB230C258F2E005DD1CE3F1722AA85FB4421BA (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::Timer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Timer_m41FD13149177C182E99F0623E48770AD37688D5C (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::RotateSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RotateSky_mA4906F43873B5706010E01CF241C3216CD809572 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_skybox(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_skybox_m452A88810ECA0D7B7B71DBA56E8D0D661CEEA237 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.RenderSettings::get_skybox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * RenderSettings_get_skybox_m26B7C34BE5FD107824F56520824A5CCB4686D4B1 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::TextRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_TextRead_mCA99313307379B910673456EBFA19104C1DE21A3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager/<TextRead>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextReadU3Ed__37__ctor_m57D2E5C08E0819D5FCBEE8B09456948779E9965C (U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::PlayerHitEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_PlayerHitEffect_m8349468F4E262808FB3868E203DD5F10C564C4E7 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::PlayerDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PlayerDeath_m8D0C09E353B0D0DF29837722A47311216DC126E4 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GameManager/<PlayerHitEffect>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayerHitEffectU3Ed__40__ctor_m90DCC8BFBFC95B0848E0CB39A7101E4AD3235361 (U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void OptionManager::WriteText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionManager_WriteText_m0719FBB4FE51C9C118AC570E3B2EE839416EF6C8 (OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA * __this, const RuntimeMethod* method);
// System.Void OptionManager::RotateSkyBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionManager_RotateSkyBox_m1DFA93BBEDD400D775B9B320B00ACD319C8E45C5 (OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void OptionManager::OpenPage(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionManager_OpenPage_m5DCBC3381F6E58B63BC8A0E227D68FF5A19DF4C3 (OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA * __this, int32_t ____page0, int32_t ____pastPage1, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerController::TryAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_TryAttack_mAA296085628E3D297A39772E953C039CF3633584 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Boolean PlayerController::PlayerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_PlayerMove_m243431279422602CA7879E26F9D3279F578A5AC4 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController/<TryAttack>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryAttackU3Ed__8__ctor_m90C0A4CED3B762BDEE3658A89A4A70F8112F9C06 (U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerController::Walking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Walking_m9A21B13C1A1FE2050AB7279F70281179D8BE8A79 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void MapSpawn::MapMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapSpawn_MapMove_mA077CFAD9C459521E3F7016DD228FDB0AC6F6535 (MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD * __this, const RuntimeMethod* method);
// System.Void GameManager::ScoreUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ScoreUp_mD88A09232D3E721AB796869528619AEACEDFFEC7 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ____score0, const RuntimeMethod* method);
// System.Void PlayerController/<Walking>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkingU3Ed__10__ctor_mD2C081C0A08CB378C7424B9DA07721E6F3166C87 (U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.ComputeBuffer::GetData(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeBuffer_GetData_m5BF3A9444662844211B0385EA273BC7FA7AEAD57 (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * __this, RuntimeArray * ___data0, const RuntimeMethod* method);
// System.Void Mkey.PrintData::BufTostring(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_mE5163EA86BF63BD633865E379DC45E7198FF0624 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___a0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method);
// System.Void Mkey.PrintData::BufTostring(System.Single[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m33A5DAF6CABA96819994E14D415AD013B4814296 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___a0, int32_t ___width1, int32_t ___height2, int32_t ___row3, int32_t ___column4, const RuntimeMethod* method);
// System.Void Mkey.PrintData::BufTostring(System.Single[],System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m416E01AEFB2BCF9A7FBFF6F7C124DC8CC376B370 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___a0, int32_t ___width1, int32_t ___height2, int32_t ___row3, int32_t ___column4, bool ___numbers5, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5 (uint8_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.String UnityEngine.Color::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Color_ToString_m2C9303D88F39CDAE35C613A3C816D8982C58B5FC (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// System.Void Mkey.SoftEffects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoftEffects__ctor_mE5C504A57A234CDEC7D1D98F4BDBE39BEA03FB73 (SoftEffects_tB95A1D2DA815329FDFBBE95B3C601CE98818A6C0 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F (float ___f0, const RuntimeMethod* method);
// System.Void TitleManager::RotateSkyBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_RotateSkyBox_m7FCA6D39CB5CB554A9C5ABCF706978E3900FE51E (TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m544EDB55EC6C249F96B487032ECEB73B848CD844 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mF1FD0FEF2EA1871E69A6CDEA2AEA35CA963D870C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_mE08A39E98D46F82D6DD86CC389D86D242C694D52 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single csMouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float csMouseOrbit_ClampAngle_mAC14588C0EE34A27DD2E5D168DDC9FD48BF263C7 (csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3 * __this, float ___ag0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m748821B299E8B2FAC05C55F2C8137BED1DB54917 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m02BDA2BE9BA7A8D6BB8554AE3E32ED6EF05EDC0C_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Mkey.int2::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void int2__ctor_m2A64AFB1F7C34920FD24A8AD1300D83A89CAB22B (int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.String Mkey.int2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* int2_ToString_mD1826E39DF0E0DB1E98AD64275AA2AA5A1942150 (int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0 (int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Mkey.int2::get_ChessLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t int2_get_ChessLength_mB487D5C6BC87D01F881E036433E1953C6AE068AC (int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m7730E1B53DC94E0152DB33692B9E8FD50DD04656 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
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
// System.String CGHolder::TOSTRING()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CGHolder_TOSTRING_m0EBC0D14F2343B617A60F34B29BB54D8CF3C6B5C (CGHolder_t913F49EA107E5271AEA6F8656DDC4DF55EB8F2F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54EBB2280DCE87D12F37FDE3244FAE1BD4991521);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return name + "; id: " + GetInstanceID();
		String_t* L_0;
		L_0 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, _stringLiteral54EBB2280DCE87D12F37FDE3244FAE1BD4991521, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void CGHolder::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGHolder_Save_mA513A80322544080F402E82ABA92B868F846336C (CGHolder_t913F49EA107E5271AEA6F8656DDC4DF55EB8F2F8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CGHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CGHolder__ctor_m7CA09E6A9F5921BF01BA0303980969967EBDEBE3 (CGHolder_t913F49EA107E5271AEA6F8656DDC4DF55EB8F2F8 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void EnemySpawn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawn_Update_mB9B99407B6D92276F7498D8A56515AF260780505 (EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!GameManager.instance.isDead)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_isDead_18();
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// StartEnemySpawn();
		EnemySpawn_StartEnemySpawn_m7B5D8C51A8EB7CE29FED5A3B26FE60F3D7302D5E(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void EnemySpawn::StartEnemySpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawn_StartEnemySpawn_m7B5D8C51A8EB7CE29FED5A3B26FE60F3D7302D5E (EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentTime += Time.deltaTime;
		float L_0 = __this->get_currentTime_7();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_currentTime_7(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if(currentTime >= SpawnTime && !GameManager.instance.isDone)
		float L_2 = __this->get_currentTime_7();
		float L_3 = __this->get_SpawnTime_6();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		bool L_5 = L_4->get_isDone_16();
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		// StartCoroutine(Spawn());
		RuntimeObject* L_6;
		L_6 = EnemySpawn_Spawn_m95EE582CE3DBCC71D8302FAABA98918C47AD3682(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemySpawn::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawn_Spawn_m95EE582CE3DBCC71D8302FAABA98918C47AD3682 (EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66 * L_0 = (U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66 *)il2cpp_codegen_object_new(U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66_il2cpp_TypeInfo_var);
		U3CSpawnU3Ed__7__ctor_mDA11760E6E495D79D5BFB36E7CF392F470ABE029(L_0, 0, /*hidden argument*/NULL);
		U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void EnemySpawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawn__ctor_mF60950C44BDFFF5FCFEFB481F9DA251DA0C1CB4A (EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * __this, const RuntimeMethod* method)
{
	{
		// float SpawnTime = 5f;
		__this->set_SpawnTime_6((5.0f));
		// float speed = 2f;
		__this->set_speed_8((2.0f));
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
// System.Void Enenmy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enenmy_Start_mB67095A54AAB6972360FF0B3E22A1287E3661BC4 (Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rig = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980_RuntimeMethod_var);
		__this->set_rig_8(L_0);
		// }
		return;
	}
}
// System.Void Enenmy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enenmy_Update_mB5D09A3E0F475528B1CA72B833A0466C8AFA0227 (Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!GameManager.instance.isDone)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_isDone_16();
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		// transform.Rotate(-10f, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_2, (-10.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// rig.velocity = new Vector3(0, 0, -1f) * speed;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3 = __this->get_rig_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		float L_5 = __this->get_speed_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0051:
	{
		// rig.velocity = Vector3.zero;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7 = __this->get_rig_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enenmy::DestroyStone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enenmy_DestroyStone_m8D6011F21E3E3993644271FCFFC5A7A9BB8F4147 (Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject stoneEffect = Instantiate(DestroyEffect, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_DestroyEffect_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Destroy(stoneEffect, 0.6f);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_4, (0.600000024f), /*hidden argument*/NULL);
		// StartCoroutine(TryDestroy());
		RuntimeObject* L_5;
		L_5 = Enenmy_TryDestroy_m6D924E98500252F5FA49E87BB441E0E67C633906(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Enenmy::TryDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enenmy_TryDestroy_m6D924E98500252F5FA49E87BB441E0E67C633906 (Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1 * L_0 = (U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1 *)il2cpp_codegen_object_new(U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1_il2cpp_TypeInfo_var);
		U3CTryDestroyU3Ed__8__ctor_mF4772E85FE96871B188FFD1C3A28538C4B63B49B(L_0, 0, /*hidden argument*/NULL);
		U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Enenmy::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enenmy_OnTriggerEnter_m9D0D0D7369E52474094167EA0D5CB4A7DA296A8F (Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m530793AE979283CE3ADF36B0036FE0467EB8D741_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB07D3449BB2C3E5DEA192A50648AD901D78FC600);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0BD8DD3A3D01718D78D76F0A276118177F13485);
		s_Il2CppMethodInitialized = true;
	}
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * V_0 = NULL;
	{
		// if(other.tag == "Player" && !isCrush)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		bool L_3 = __this->get_isCrush_6();
		if (L_3)
		{
			goto IL_0064;
		}
	}
	{
		// if (isDestroy) return;
		bool L_4 = __this->get_isDestroy_5();
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// if (isDestroy) return;
		return;
	}

IL_0023:
	{
		// isCrush = true;
		__this->set_isCrush_6((bool)1);
		// PlayerController player = other.GetComponent<PlayerController>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5 = ___other0;
		NullCheck(L_5);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_6;
		L_6 = Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m530793AE979283CE3ADF36B0036FE0467EB8D741(L_5, /*hidden argument*/Component_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m530793AE979283CE3ADF36B0036FE0467EB8D741_RuntimeMethod_var);
		V_0 = L_6;
		// if(GameManager.instance.Life > 1)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_Life_11();
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_004e;
		}
	}
	{
		// player.anim.SetTrigger("doDamage");
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_9 = V_0;
		NullCheck(L_9);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10 = L_9->get_anim_7();
		NullCheck(L_10);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_10, _stringLiteralE0BD8DD3A3D01718D78D76F0A276118177F13485, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// GameManager.instance.LifeOut();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_12 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_12);
		GameManager_LifeOut_m42C0C44B0DAAC18390E6E9AFE6EC74917B3BA1C2(L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0064:
	{
		// else if(other.tag == "PlayerAttack")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_13 = ___other0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteralB07D3449BB2C3E5DEA192A50648AD901D78FC600, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		// DestroyStone();
		Enenmy_DestroyStone_m8D6011F21E3E3993644271FCFFC5A7A9BB8F4147(__this, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Enenmy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enenmy__ctor_m2E5C01687A9EDA5098E65BBF55396BBFFB80B24D (Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * __this, const RuntimeMethod* method)
{
	{
		// float speed = 2f;
		__this->set_speed_7((2.0f));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mkey.GPUWorker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUWorker__ctor_m9199561A628BFADFF8922DAE40034E08C09FAE23 (GPUWorker_t11BCBFB0C7E68B0B412E54387168C517327A54D0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_instance_4(__this);
	}

IL_0013:
	{
		// Lifes = new GameObject[2] { LifeGroup.transform.GetChild(0).gameObject, LifeGroup.transform.GetChild(1).gameObject };
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)2);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_LifeGroup_12();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_5, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_7);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_LifeGroup_12();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_10, 1, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_12);
		__this->set_Lifes_13(L_8);
		// bestScore = mapBestScore.BestScore[mapBestScore.CurrentMapNum];
		MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * L_13 = __this->get_mapBestScore_32();
		NullCheck(L_13);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = L_13->get_BestScore_5();
		MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * L_15 = __this->get_mapBestScore_32();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_CurrentMapNum_4();
		NullCheck(L_14);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__this->set_bestScore_9(L_18);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// if(!isRead && !isDead)
		bool L_0 = __this->get_isRead_15();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = __this->get_isDead_18();
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// TryTextRead();
		GameManager_TryTextRead_mFAEB230C258F2E005DD1CE3F1722AA85FB4421BA(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// Timer();
		GameManager_Timer_m41FD13149177C182E99F0623E48770AD37688D5C(__this, /*hidden argument*/NULL);
		// RotateSky();
		GameManager_RotateSky_mA4906F43873B5706010E01CF241C3216CD809572(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::RotateSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RotateSky_mA4906F43873B5706010E01CF241C3216CD809572 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2F8A73F36BC9F8340CA51E5D8320663390E37DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// degree += 10 * Time.deltaTime;
		float L_0 = __this->get_degree_35();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_degree_35(((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_1)))));
		// if (degree >= 360)
		float L_2 = __this->get_degree_35();
		if ((!(((float)L_2) >= ((float)(360.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		// degree = 0;
		__this->set_degree_35((0.0f));
		// skynum++;
		int32_t L_3 = __this->get_skynum_34();
		__this->set_skynum_34(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// if (skynum >= 4)
		int32_t L_4 = __this->get_skynum_34();
		if ((((int32_t)L_4) < ((int32_t)4)))
		{
			goto IL_004e;
		}
	}
	{
		// skynum = 0;
		__this->set_skynum_34(0);
	}

IL_004e:
	{
		// RenderSettings.skybox = skyMaterials[skynum];
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_5 = __this->get_skyMaterials_33();
		int32_t L_6 = __this->get_skynum_34();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		RenderSettings_set_skybox_m452A88810ECA0D7B7B71DBA56E8D0D661CEEA237(L_8, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// RenderSettings.skybox.SetFloat("_Rotation", degree);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9;
		L_9 = RenderSettings_get_skybox_m26B7C34BE5FD107824F56520824A5CCB4686D4B1(/*hidden argument*/NULL);
		float L_10 = __this->get_degree_35();
		NullCheck(L_9);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_9, _stringLiteralF2F8A73F36BC9F8340CA51E5D8320663390E37DC, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Timer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Timer_m41FD13149177C182E99F0623E48770AD37688D5C (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameTime += Time.deltaTime;
		float L_0 = __this->get_GameTime_14();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_GameTime_14(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// levelTxt.text = "Level " + level.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_levelTxt_21();
		int32_t* L_3 = __this->get_address_of_level_19();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// if(GameTime >= 20 * (level + 1) && level < maxLevel)
		float L_6 = __this->get_GameTime_14();
		int32_t L_7 = __this->get_level_19();
		if ((!(((float)L_6) >= ((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)20), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))))))))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_8 = __this->get_level_19();
		int32_t L_9 = __this->get_maxLevel_20();
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_006d;
		}
	}
	{
		// if (level >= 10) return;
		int32_t L_10 = __this->get_level_19();
		if ((((int32_t)L_10) < ((int32_t)((int32_t)10))))
		{
			goto IL_005f;
		}
	}
	{
		// if (level >= 10) return;
		return;
	}

IL_005f:
	{
		// level++;
		int32_t L_11 = __this->get_level_19();
		__this->set_level_19(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void GameManager::TryTextRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TryTextRead_mFAEB230C258F2E005DD1CE3F1722AA85FB4421BA (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// isRead = true;
		__this->set_isRead_15((bool)1);
		// StartCoroutine(TextRead());
		RuntimeObject* L_0;
		L_0 = GameManager_TextRead_mCA99313307379B910673456EBFA19104C1DE21A3(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::TextRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_TextRead_mCA99313307379B910673456EBFA19104C1DE21A3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427 * L_0 = (U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427 *)il2cpp_codegen_object_new(U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427_il2cpp_TypeInfo_var);
		U3CTextReadU3Ed__37__ctor_m57D2E5C08E0819D5FCBEE8B09456948779E9965C(L_0, 0, /*hidden argument*/NULL);
		U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameManager::ScoreUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ScoreUp_mD88A09232D3E721AB796869528619AEACEDFFEC7 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ____score0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A0D010563EAFA6C9073D35EB9EF83C988F91B75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += _score;
		int32_t L_0 = __this->get_score_8();
		int32_t L_1 = ____score0;
		__this->set_score_8(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// if (score > bestScore)
		int32_t L_2 = __this->get_score_8();
		int32_t L_3 = __this->get_bestScore_9();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		// bestScore = score;
		int32_t L_4 = __this->get_score_8();
		__this->set_bestScore_9(L_4);
	}

IL_0028:
	{
		// scoreTxt.text = "Score " + score;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_scoreTxt_10();
		int32_t* L_6 = __this->get_address_of_score_8();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A0D010563EAFA6C9073D35EB9EF83C988F91B75, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// }
		return;
	}
}
// System.Void GameManager::LifeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LifeOut_m42C0C44B0DAAC18390E6E9AFE6EC74917B3BA1C2 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(PlayerHitEffect());
		RuntimeObject* L_0;
		L_0 = GameManager_PlayerHitEffect_m8349468F4E262808FB3868E203DD5F10C564C4E7(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// Life--;
		int32_t L_2 = __this->get_Life_11();
		__this->set_Life_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)));
		// if (Life <= 0)
		int32_t L_3 = __this->get_Life_11();
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		// PlayerDeath();
		GameManager_PlayerDeath_m8D0C09E353B0D0DF29837722A47311216DC126E4(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002b:
	{
		// Lifes[Life - 1].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_Lifes_13();
		int32_t L_5 = __this->get_Life_11();
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::PlayerHitEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_PlayerHitEffect_m8349468F4E262808FB3868E203DD5F10C564C4E7 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581 * L_0 = (U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581 *)il2cpp_codegen_object_new(U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581_il2cpp_TypeInfo_var);
		U3CPlayerHitEffectU3Ed__40__ctor_m90DCC8BFBFC95B0848E0CB39A7101E4AD3235361(L_0, 0, /*hidden argument*/NULL);
		U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameManager::ResetBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetBtn_mB630A373DA496D4455B734BFB02F6F0F675AB816 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A0D010563EAFA6C9073D35EB9EF83C988F91B75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0BD8DD3A3D01718D78D76F0A276118177F13485);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// score = 0;
		__this->set_score_8(0);
		// scoreTxt.text = "Score " + score;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreTxt_10();
		int32_t* L_1 = __this->get_address_of_score_8();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A0D010563EAFA6C9073D35EB9EF83C988F91B75, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// gameOverPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_gameOverPanel_27();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// gamePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_gamePanel_5();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// isDead = false;
		__this->set_isDead_18((bool)0);
		// GameTime = 0f;
		__this->set_GameTime_14((0.0f));
		// level = 0;
		__this->set_level_19(0);
		// levelTxt.text = "Level " + level.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_levelTxt_21();
		int32_t* L_7 = __this->get_address_of_level_19();
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// Life = 3;
		__this->set_Life_11(3);
		// for (int i  = 0; i < 2; i++)
		V_0 = 0;
		goto IL_0095;
	}

IL_0083:
	{
		// Lifes[i].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_Lifes_13();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// for (int i  = 0; i < 2; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0095:
	{
		// for (int i  = 0; i < 2; i++)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)2)))
		{
			goto IL_0083;
		}
	}
	{
		// player.anim.SetTrigger("doDamage");
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_16 = __this->get_player_25();
		NullCheck(L_16);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_17 = L_16->get_anim_7();
		NullCheck(L_17);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_17, _stringLiteralE0BD8DD3A3D01718D78D76F0A276118177F13485, /*hidden argument*/NULL);
		// GoImg.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_GoImg_6();
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// StopImg.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_StopImg_7();
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::PlayerDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PlayerDeath_m8D0C09E353B0D0DF29837722A47311216DC126E4 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A0D010563EAFA6C9073D35EB9EF83C988F91B75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93E4072C415F0C4AED1CB487CE31CABC9B6D6094);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD979A78B82E8D731B4AA68482552C03AEEF9B927);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2E418DD810F504616C34E68239312081E36132B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isDead) return;
		bool L_0 = __this->get_isDead_18();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isDead) return;
		return;
	}

IL_0009:
	{
		// isDead = true;
		__this->set_isDead_18((bool)1);
		// player.anim.SetTrigger("doDeath");
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_1 = __this->get_player_25();
		NullCheck(L_1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = L_1->get_anim_7();
		NullCheck(L_2);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_2, _stringLiteralD979A78B82E8D731B4AA68482552C03AEEF9B927, /*hidden argument*/NULL);
		// gamePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_gamePanel_5();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// gameOverPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_gameOverPanel_27();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// EndScore.text = "Score " + score.ToString() + " ?";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_EndScore_28();
		int32_t* L_6 = __this->get_address_of_score_8();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral5A0D010563EAFA6C9073D35EB9EF83C988F91B75, L_7, _stringLiteralF2E418DD810F504616C34E68239312081E36132B, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// BestScore.text = "Best " + bestScore.ToString() + " ?";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_BestScore_29();
		int32_t* L_10 = __this->get_address_of_bestScore_9();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral93E4072C415F0C4AED1CB487CE31CABC9B6D6094, L_11, _stringLiteralF2E418DD810F504616C34E68239312081E36132B, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
		// mapBestScore.BestScore[mapBestScore.CurrentMapNum] = bestScore ;
		MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * L_13 = __this->get_mapBestScore_32();
		NullCheck(L_13);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = L_13->get_BestScore_5();
		MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * L_15 = __this->get_mapBestScore_32();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_CurrentMapNum_4();
		int32_t L_17 = __this->get_bestScore_9();
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)L_17);
		// EndTxt.text = endTxts[Random.Range(0, endTxts.Length)];
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = __this->get_EndTxt_30();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = __this->get_endTxts_31();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = __this->get_endTxts_31();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_23);
		// }
		return;
	}
}
// System.Void GameManager::OptionBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OptionBtn_m3F0F97A67F8216E8F36F9DCAB8377BB15CF8C919 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// optionPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_optionPanel_24();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::PlayGameBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PlayGameBtn_m075222887CD22C9A04215D8575AF6304E2BF6DB3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// optionPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_optionPanel_24();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::TitleBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TitleBtn_mEA4B166D2EC063F7894DCCBF3C3DAB9993BA6EF7 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33D3FAD2CFA48DA36CE4F8092FCD3B48AADFCCC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FCBB1E3514F96781A8FD52E27DEC2298FD6F24B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FCD3668DC9A87F69E839613A65182EE97F0526B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90A6DBE1D6D6A94E5097F1D35B1CA467B5413335);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD4CE3899CC67E9503193DFBF4C031D12EAA9FA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Life = 3;
		__this->set_Life_11(3);
		// int maxLevel = 10;
		__this->set_maxLevel_20(((int32_t)10));
		// string EnemtTxt = "??????????";
		__this->set_EnemtTxt_22(_stringLiteral90A6DBE1D6D6A94E5097F1D35B1CA467B5413335);
		// string[] endTxts = {"?? ??? ???", "??....???..", "?? ??..?? ??", "???? ????..?" };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral33D3FAD2CFA48DA36CE4F8092FCD3B48AADFCCC4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral33D3FAD2CFA48DA36CE4F8092FCD3B48AADFCCC4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral4FCD3668DC9A87F69E839613A65182EE97F0526B);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4FCD3668DC9A87F69E839613A65182EE97F0526B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralDD4CE3899CC67E9503193DFBF4C031D12EAA9FA5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDD4CE3899CC67E9503193DFBF4C031D12EAA9FA5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral4FCBB1E3514F96781A8FD52E27DEC2298FD6F24B);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral4FCBB1E3514F96781A8FD52E27DEC2298FD6F24B);
		__this->set_endTxts_31(L_4);
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
// System.Void MapBestScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapBestScore__ctor_m8EFDD0C34F357496A0FECC3B464D33439DDF96C6 (MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void MapSpawn::MapMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapSpawn_MapMove_mA077CFAD9C459521E3F7016DD228FDB0AC6F6535 (MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// moveCount++;
		int32_t L_0 = __this->get_moveCount_6();
		__this->set_moveCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// for (int i = 0; i < MapPrefabs.Length; i++)
		V_0 = 0;
		goto IL_0048;
	}

IL_0012:
	{
		// MapPrefabs[i].transform.position -= new Vector3(0, 0, moveDistance);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_MapPrefabs_4();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = L_5;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_moveDistance_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_10, /*hidden argument*/NULL);
		// for (int i = 0; i < MapPrefabs.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0048:
	{
		// for (int i = 0; i < MapPrefabs.Length; i++)
		int32_t L_12 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_MapPrefabs_4();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		// if(moveCount >= 39)
		int32_t L_14 = __this->get_moveCount_6();
		if ((((int32_t)L_14) < ((int32_t)((int32_t)39))))
		{
			goto IL_00ad;
		}
	}
	{
		// moveCount = 0;
		__this->set_moveCount_6(0);
		// MapPrefabs[mapNum].transform.position = new Vector3(0.03f, 0.04f, 41.89f);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_MapPrefabs_4();
		int32_t L_16 = __this->get_mapNum_7();
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), (0.0299999993f), (0.0399999991f), (41.8899994f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_19, L_20, /*hidden argument*/NULL);
		// mapNum++;
		int32_t L_21 = __this->get_mapNum_7();
		__this->set_mapNum_7(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
		// if (mapNum > 2)
		int32_t L_22 = __this->get_mapNum_7();
		if ((((int32_t)L_22) <= ((int32_t)2)))
		{
			goto IL_00ad;
		}
	}
	{
		// mapNum = 0;
		__this->set_mapNum_7(0);
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void MapSpawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapSpawn__ctor_m7F234A84CDCDF411A27C25712147594AF14C18F7 (MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD * __this, const RuntimeMethod* method)
{
	{
		// float moveDistance = 0.5f;
		__this->set_moveDistance_5((0.5f));
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
// System.Void OptionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionManager_Start_m2BC10D71934C6473BB09D06C2E50C89AE8685415 (OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA * __this, const RuntimeMethod* method)
{
	{
		// maxPage = TextObj.Length - 1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_TextObj_5();
		NullCheck(L_0);
		__this->set_maxPage_14(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)1)));
		// WriteText();
		OptionManager_WriteText_m0719FBB4FE51C9C118AC570E3B2EE839416EF6C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OptionManager::WriteText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionManager_WriteText_m0719FBB4FE51C9C118AC570E3B2EE839416EF6C8 (OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BA2D6797B6201EAE374BD6801FF593EAC0BE3A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69FD316D6BDC3C05B81ECF31F061259865824C15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral962231085CE4E25D08F810A9F316044FF801094D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36E1D3F02D6F410EBD291948E8D0DA8B6002C07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextPage[0].text = "<color=red><size=40>'??? ?? ?????'</size></color> ??" + "\n???? ??? ???? ??\n?? ??? ??? ?????";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_0 = __this->get_TextPage_6();
		NullCheck(L_0);
		int32_t L_1 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralD36E1D3F02D6F410EBD291948E8D0DA8B6002C07);
		// TextPage[1].text = "<color=red><size=44>Attack</size></color>" + "??? ?? ??\n???? ??? ?? ? ????.\n??? ? 3????";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_3 = __this->get_TextPage_6();
		NullCheck(L_3);
		int32_t L_4 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral69FD316D6BDC3C05B81ECF31F061259865824C15);
		// TextPage[2].text = "<color=red><size=44>Walk</size></color>" + "??? ?? ??\n??? ?? ?? ? ????\nGame Over";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_6 = __this->get_TextPage_6();
		NullCheck(L_6);
		int32_t L_7 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteral962231085CE4E25D08F810A9F316044FF801094D);
		// TextPage[3].text = "??? ??? ???? ?? ??\n??? ? ??? ???? ???\n" + "<color=red><size=44>Game Over</size></color>";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_9 = __this->get_TextPage_6();
		NullCheck(L_9);
		int32_t L_10 = 3;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral5BA2D6797B6201EAE374BD6801FF593EAC0BE3A7);
		// }
		return;
	}
}
// System.Void OptionManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionManager_Update_mEF3BDF0C890BB50D8032B5FAD3F51116CE433477 (OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA * __this, const RuntimeMethod* method)
{
	{
		// RotateSkyBox();
		OptionManager_RotateSkyBox_m1DFA93BBEDD400D775B9B320B00ACD319C8E45C5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OptionManager::RotateSkyBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionManager_RotateSkyBox_m1DFA93BBEDD400D775B9B320B00ACD319C8E45C5 (OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2F8A73F36BC9F8340CA51E5D8320663390E37DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// degree += 10 * Time.deltaTime;
		float L_0 = __this->get_degree_10();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_degree_10(((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_1)))));
		// if (degree >= 360)
		float L_2 = __this->get_degree_10();
		if ((!(((float)L_2) >= ((float)(360.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		// degree = 0;
		__this->set_degree_10((0.0f));
		// skynum++;
		int32_t L_3 = __this->get_skynum_11();
		__this->set_skynum_11(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// if (skynum >= 4)
		int32_t L_4 = __this->get_skynum_11();
		if ((((int32_t)L_4) < ((int32_t)4)))
		{
			goto IL_004e;
		}
	}
	{
		// skynum = 0;
		__this->set_skynum_11(0);
	}

IL_004e:
	{
		// RenderSettings.skybox = materials[skynum];
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_5 = __this->get_materials_4();
		int32_t L_6 = __this->get_skynum_11();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		RenderSettings_set_skybox_m452A88810ECA0D7B7B71DBA56E8D0D661CEEA237(L_8, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// RenderSettings.skybox.SetFloat("_Rotation", degree);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9;
		L_9 = RenderSettings_get_skybox_m26B7C34BE5FD107824F56520824A5CCB4686D4B1(/*hidden argument*/NULL);
		float L_10 = __this->get_degree_10();
		NullCheck(L_9);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_9, _stringLiteralF2F8A73F36BC9F8340CA51E5D8320663390E37DC, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OptionManager::ReadBtn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionManager_ReadBtn_m1B44D6B996596D80CAEADC47DD4B67D77D753395 (OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA * __this, int32_t ___num0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___num0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___num0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0063;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// if (textPage == maxPage)
		int32_t L_2 = __this->get_textPage_13();
		int32_t L_3 = __this->get_maxPage_14();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		// NextBtn.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_NextBtn_9();
		NullCheck(L_4);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// pastPage = textPage;
		int32_t L_5 = __this->get_textPage_13();
		__this->set_pastPage_12(L_5);
		// textPage--;
		int32_t L_6 = __this->get_textPage_13();
		__this->set_textPage_13(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		// OpenPage(textPage, pastPage);
		int32_t L_7 = __this->get_textPage_13();
		int32_t L_8 = __this->get_pastPage_12();
		OptionManager_OpenPage_m5DCBC3381F6E58B63BC8A0E227D68FF5A19DF4C3(__this, L_7, L_8, /*hidden argument*/NULL);
		// if (textPage == 0)
		int32_t L_9 = __this->get_textPage_13();
		if (L_9)
		{
			goto IL_00bd;
		}
	}
	{
		// PreBtn.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = __this->get_PreBtn_8();
		NullCheck(L_10);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_10, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0063:
	{
		// if(textPage == 0)
		int32_t L_11 = __this->get_textPage_13();
		if (L_11)
		{
			goto IL_0077;
		}
	}
	{
		// PreBtn.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_12 = __this->get_PreBtn_8();
		NullCheck(L_12);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_12, (bool)1, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// pastPage = textPage;
		int32_t L_13 = __this->get_textPage_13();
		__this->set_pastPage_12(L_13);
		// textPage++;
		int32_t L_14 = __this->get_textPage_13();
		__this->set_textPage_13(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		// OpenPage(textPage, pastPage);
		int32_t L_15 = __this->get_textPage_13();
		int32_t L_16 = __this->get_pastPage_12();
		OptionManager_OpenPage_m5DCBC3381F6E58B63BC8A0E227D68FF5A19DF4C3(__this, L_15, L_16, /*hidden argument*/NULL);
		// if (textPage == maxPage)
		int32_t L_17 = __this->get_textPage_13();
		int32_t L_18 = __this->get_maxPage_14();
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_00bd;
		}
	}
	{
		// NextBtn.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_19 = __this->get_NextBtn_9();
		NullCheck(L_19);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_19, (bool)0, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void OptionManager::OpenPage(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionManager_OpenPage_m5DCBC3381F6E58B63BC8A0E227D68FF5A19DF4C3 (OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA * __this, int32_t ____page0, int32_t ____pastPage1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// pageTxt.text = (_page + 1) + " / " + (maxPage + 1);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_pageTxt_7();
		int32_t L_1 = ____page0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_3 = __this->get_maxPage_14();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// TextObj[_pastPage].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_TextObj_5();
		int32_t L_7 = ____pastPage1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// TextObj[_page].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_TextObj_5();
		int32_t L_11 = ____page0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OptionManager::TitleBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionManager_TitleBtn_m5AF11FA73F2B5590108400AE0557001BA9E66E3F (OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OptionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionManager__ctor_mF7C9174F7B8B37033587879F174391A3A306E996 (OptionManager_tEF8F161FA54B58E402DC5B7F4BEF7D483C68E9CA * __this, const RuntimeMethod* method)
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
// System.Void PlayerController::AttackBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AttackBtn_mDEE11544EBAB8020308BE1CC2CB49DA03874A757 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameManager.instance.isDead) return;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_isDead_18();
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (GameManager.instance.isDead) return;
		return;
	}

IL_000d:
	{
		// GameManager.instance.isMove = true;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_2);
		L_2->set_isMove_17((bool)1);
		// isAttack = true;
		__this->set_isAttack_4((bool)1);
		// StartCoroutine(TryAttack());
		RuntimeObject* L_3;
		L_3 = PlayerController_TryAttack_mAA296085628E3D297A39772E953C039CF3633584(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// if (PlayerMove())
		bool L_5;
		L_5 = PlayerController_PlayerMove_m243431279422602CA7879E26F9D3279F578A5AC4(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// GameManager.instance.PlayerDeath();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_6);
		GameManager_PlayerDeath_m8D0C09E353B0D0DF29837722A47311216DC126E4(L_6, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_003f:
	{
		// GameManager.instance.isMove = false;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_7);
		L_7->set_isMove_17((bool)0);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::TryAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_TryAttack_mAA296085628E3D297A39772E953C039CF3633584 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621 * L_0 = (U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621 *)il2cpp_codegen_object_new(U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621_il2cpp_TypeInfo_var);
		U3CTryAttackU3Ed__8__ctor_m90C0A4CED3B762BDEE3658A89A4A70F8112F9C06(L_0, 0, /*hidden argument*/NULL);
		U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PlayerController::WalkBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_WalkBtn_m890F3F0034E565AC8FF2471B87C313FBF96CE4FC (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameManager.instance.isDead) return;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_isDead_18();
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (GameManager.instance.isDead) return;
		return;
	}

IL_000d:
	{
		// GameManager.instance.isMove = true;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_2);
		L_2->set_isMove_17((bool)1);
		// StopCoroutine(Walking());
		RuntimeObject* L_3;
		L_3 = PlayerController_Walking_m9A21B13C1A1FE2050AB7279F70281179D8BE8A79(__this, /*hidden argument*/NULL);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(__this, L_3, /*hidden argument*/NULL);
		// StartCoroutine(Walking());
		RuntimeObject* L_4;
		L_4 = PlayerController_Walking_m9A21B13C1A1FE2050AB7279F70281179D8BE8A79(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// if(PlayerMove())
		bool L_6;
		L_6 = PlayerController_PlayerMove_m243431279422602CA7879E26F9D3279F578A5AC4(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// GameManager.instance.PlayerDeath();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_7);
		GameManager_PlayerDeath_m8D0C09E353B0D0DF29837722A47311216DC126E4(L_7, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0044:
	{
		// mapSpawn.MapMove();
		MapSpawn_t96E988571E7D23EFE3ED7309EB97A579B10972DD * L_8 = __this->get_mapSpawn_9();
		NullCheck(L_8);
		MapSpawn_MapMove_mA077CFAD9C459521E3F7016DD228FDB0AC6F6535(L_8, /*hidden argument*/NULL);
		// GameManager.instance.ScoreUp(10);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_9 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_9);
		GameManager_ScoreUp_mD88A09232D3E721AB796869528619AEACEDFFEC7(L_9, ((int32_t)10), /*hidden argument*/NULL);
		// GameManager.instance.isMove = false;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_10);
		L_10->set_isMove_17((bool)0);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::Walking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_Walking_m9A21B13C1A1FE2050AB7279F70281179D8BE8A79 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F * L_0 = (U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F *)il2cpp_codegen_object_new(U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F_il2cpp_TypeInfo_var);
		U3CWalkingU3Ed__10__ctor_mD2C081C0A08CB378C7424B9DA07721E6F3166C87(L_0, 0, /*hidden argument*/NULL);
		U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean PlayerController::PlayerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_PlayerMove_m243431279422602CA7879E26F9D3279F578A5AC4 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameManager.instance.isDone)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_isDone_16();
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
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
// System.Void Mkey.PrintData::BufTostring(UnityEngine.ComputeBuffer,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m9BAB7C9DE9CB0DC51A1F4E9A19F20296B14ADD62 (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ___c0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0825CF40AD9EB9FC0EEB31E0B52468887C429BE5);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	{
		// UnityEngine.Debug.Log("compute  buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0825CF40AD9EB9FC0EEB31E0B52468887C429BE5, /*hidden argument*/NULL);
		// float[] a = new float[width * height];
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		V_0 = L_2;
		// c.GetData(a);
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_3 = ___c0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = V_0;
		NullCheck(L_3);
		ComputeBuffer_GetData_m5BF3A9444662844211B0385EA273BC7FA7AEAD57(L_3, (RuntimeArray *)(RuntimeArray *)L_4, /*hidden argument*/NULL);
		// BufTostring(a, width, height);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = V_0;
		int32_t L_6 = ___width1;
		int32_t L_7 = ___height2;
		PrintData_BufTostring_mE5163EA86BF63BD633865E379DC45E7198FF0624(L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(UnityEngine.ComputeBuffer,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_mCA7C0BC02DB7DE3F9C80AD637160A37E7D07219A (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ___c0, int32_t ___width1, int32_t ___height2, int32_t ___row3, int32_t ___column4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0825CF40AD9EB9FC0EEB31E0B52468887C429BE5);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	{
		// UnityEngine.Debug.Log("compute  buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0825CF40AD9EB9FC0EEB31E0B52468887C429BE5, /*hidden argument*/NULL);
		// float[] a = new float[width * height];
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		V_0 = L_2;
		// c.GetData(a);
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_3 = ___c0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = V_0;
		NullCheck(L_3);
		ComputeBuffer_GetData_m5BF3A9444662844211B0385EA273BC7FA7AEAD57(L_3, (RuntimeArray *)(RuntimeArray *)L_4, /*hidden argument*/NULL);
		// BufTostring(a, width, height, row, column);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = V_0;
		int32_t L_6 = ___width1;
		int32_t L_7 = ___height2;
		int32_t L_8 = ___row3;
		int32_t L_9 = ___column4;
		PrintData_BufTostring_m33A5DAF6CABA96819994E14D415AD013B4814296(L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(UnityEngine.ComputeBuffer,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_mB36E696656CBE2035FE0BF2FD584F8A4745A1665 (ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * ___c0, int32_t ___width1, int32_t ___height2, int32_t ___row3, int32_t ___column4, bool ___numbers5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0825CF40AD9EB9FC0EEB31E0B52468887C429BE5);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	{
		// UnityEngine.Debug.Log("compute  buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0825CF40AD9EB9FC0EEB31E0B52468887C429BE5, /*hidden argument*/NULL);
		// float[] a = new float[width * height];
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		V_0 = L_2;
		// c.GetData(a);
		ComputeBuffer_t795666617BDC98AB4033FDD4CE0304A22B7E6427 * L_3 = ___c0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = V_0;
		NullCheck(L_3);
		ComputeBuffer_GetData_m5BF3A9444662844211B0385EA273BC7FA7AEAD57(L_3, (RuntimeArray *)(RuntimeArray *)L_4, /*hidden argument*/NULL);
		// BufTostring(a, width, height, row, column, numbers);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = V_0;
		int32_t L_6 = ___width1;
		int32_t L_7 = ___height2;
		int32_t L_8 = ___row3;
		int32_t L_9 = ___column4;
		bool L_10 = ___numbers5;
		PrintData_BufTostring_m416E01AEFB2BCF9A7FBFF6F7C124DC8CC376B370(L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Double[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m3279EBEB749D18E3E7F0C3E4B72F91EDBAEAC86D (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___a0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DCB8664A1FA03407755A9EF27AC60BD3FA3D41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		// UnityEngine.Debug.Log("int[] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC6DCB8664A1FA03407755A9EF27AC60BD3FA3D41, /*hidden argument*/NULL);
		// for (int i = 0; i < height; i++)
		V_0 = 0;
		goto IL_0053;
	}

IL_000e:
	{
		// string s = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_2 = 0;
		goto IL_0038;
	}

IL_0018:
	{
		// s +=((long)a[i * width + j]).ToString() + " ";
		String_t* L_0 = V_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = ___a0;
		int32_t L_2 = V_0;
		int32_t L_3 = ___width1;
		int32_t L_4 = V_2;
		NullCheck(L_1);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4));
		double L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = il2cpp_codegen_cast_double_to_int<int64_t>(L_6);
		String_t* L_7;
		L_7 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_1 = L_8;
		// for (int j = 0; j < width; j++)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0038:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_10 = V_2;
		int32_t L_11 = ___width1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0018;
		}
	}
	{
		// if (s != "")
		String_t* L_12 = V_1;
		bool L_13;
		L_13 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_12, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_004f;
		}
	}
	{
		// UnityEngine.Debug.Log(s);
		String_t* L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0053:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_16 = V_0;
		int32_t L_17 = ___height2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Int32[0...,0...],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m971F5A32726D2C5293ED5479D664CC00568148A6 (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___a0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7696DED177E15AD00E2ACE183510B9747172DAD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// UnityEngine.Debug.Log("int[,] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7696DED177E15AD00E2ACE183510B9747172DAD6, /*hidden argument*/NULL);
		// for (int i = 0; i < height; i++)
		V_0 = 0;
		goto IL_0050;
	}

IL_000e:
	{
		// string s = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_2 = 0;
		goto IL_0035;
	}

IL_0018:
	{
		// s += a[i, j].ToString() + " ";
		String_t* L_0 = V_1;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_1 = ___a0;
		int32_t L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		int32_t* L_4;
		L_4 = (L_1)->GetAddressAt(L_2, L_3);
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (int j = 0; j < width; j++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0035:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_8 = V_2;
		int32_t L_9 = ___width1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0018;
		}
	}
	{
		// if (s != "")
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// UnityEngine.Debug.Log(s);
		String_t* L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0050:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_14 = V_0;
		int32_t L_15 = ___height2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Int32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m083FF960A6A77653747E264587FD642CCE99AF47 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___a0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DCB8664A1FA03407755A9EF27AC60BD3FA3D41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// UnityEngine.Debug.Log("int[] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC6DCB8664A1FA03407755A9EF27AC60BD3FA3D41, /*hidden argument*/NULL);
		// for (int i = 0; i < height; i++)
		V_0 = 0;
		goto IL_004e;
	}

IL_000e:
	{
		// string s = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_2 = 0;
		goto IL_0033;
	}

IL_0018:
	{
		// s += a[i * width + j].ToString();
		String_t* L_0 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___a0;
		int32_t L_2 = V_0;
		int32_t L_3 = ___width1;
		int32_t L_4 = V_2;
		NullCheck(L_1);
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4))))), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (int j = 0; j < width; j++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0033:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_8 = V_2;
		int32_t L_9 = ___width1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0018;
		}
	}
	{
		// if (s != "")
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004a;
		}
	}
	{
		// UnityEngine.Debug.Log(s);
		String_t* L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004e:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_14 = V_0;
		int32_t L_15 = ___height2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Byte[0...,0...],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m2C1EF8F89BB70C26B7824747D8037E2BD6340AA4 (ByteU5BU2CU5D_tFFA7E7CA82D7396BFF316C4BDB83D307E0CBBE0D* ___a0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7696DED177E15AD00E2ACE183510B9747172DAD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// UnityEngine.Debug.Log("int[,] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7696DED177E15AD00E2ACE183510B9747172DAD6, /*hidden argument*/NULL);
		// for (int i = 0; i < height; i++)
		V_0 = 0;
		goto IL_0050;
	}

IL_000e:
	{
		// string s = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_2 = 0;
		goto IL_0035;
	}

IL_0018:
	{
		// s += a[i, j].ToString() + " ";
		String_t* L_0 = V_1;
		ByteU5BU2CU5D_tFFA7E7CA82D7396BFF316C4BDB83D307E0CBBE0D* L_1 = ___a0;
		int32_t L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		uint8_t* L_4;
		L_4 = (L_1)->GetAddressAt(L_2, L_3);
		String_t* L_5;
		L_5 = Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5((uint8_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (int j = 0; j < width; j++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0035:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_8 = V_2;
		int32_t L_9 = ___width1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0018;
		}
	}
	{
		// if (s != "")
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// UnityEngine.Debug.Log(s);
		String_t* L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0050:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_14 = V_0;
		int32_t L_15 = ___height2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_mE5163EA86BF63BD633865E379DC45E7198FF0624 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___a0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845A697DDBCB2F80417ED6CF9819D18B379B7D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// UnityEngine.Debug.Log("float [] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral845A697DDBCB2F80417ED6CF9819D18B379B7D32, /*hidden argument*/NULL);
		// for (int i = 0; i < height; i++)
		V_0 = 0;
		goto IL_0054;
	}

IL_000e:
	{
		// string s = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_2 = 0;
		goto IL_0039;
	}

IL_0018:
	{
		// s += System.String.Format("{0:0.000 } ", a[i * width + j]);
		String_t* L_0 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___a0;
		int32_t L_2 = V_0;
		int32_t L_3 = ___width1;
		int32_t L_4 = V_2;
		NullCheck(L_1);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4));
		float L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// for (int j = 0; j < width; j++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0039:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_12 = V_2;
		int32_t L_13 = ___width1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		// if (s != "")
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_14, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0050;
		}
	}
	{
		// UnityEngine.Debug.Log(s);
		String_t* L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_16, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0054:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_18 = V_0;
		int32_t L_19 = ___height2;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Single[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m33A5DAF6CABA96819994E14D415AD013B4814296 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___a0, int32_t ___width1, int32_t ___height2, int32_t ___row3, int32_t ___column4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845A697DDBCB2F80417ED6CF9819D18B379B7D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// UnityEngine.Debug.Log("float [] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral845A697DDBCB2F80417ED6CF9819D18B379B7D32, /*hidden argument*/NULL);
		// if (row >= 0 && row < height)
		int32_t L_0 = ___row3;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_1 = ___row3;
		int32_t L_2 = ___height2;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_006a;
		}
	}
	{
		// UnityEngine.Debug.Log("buffer row: " + row);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___row3), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_1 = 0;
		goto IL_0053;
	}

IL_0032:
	{
		// s += System.String.Format("{0:0.000 } ", a[row * width + j]);
		String_t* L_5 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___a0;
		int32_t L_7 = ___row3;
		int32_t L_8 = ___width1;
		int32_t L_9 = V_1;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_8)), (int32_t)L_9));
		float L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12 = L_11;
		RuntimeObject * L_13 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// for (int j = 0; j < width; j++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0053:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_17 = V_1;
		int32_t L_18 = ___width1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0032;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_19 = V_0;
		bool L_20;
		L_20 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_19, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_006a;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_21, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// if (column >= 0 && column < width)
		int32_t L_22 = ___column4;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_23 = ___column4;
		int32_t L_24 = ___width1;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_00cd;
		}
	}
	{
		// UnityEngine.Debug.Log("buffer column: " + column);
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___column4), /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_26, /*hidden argument*/NULL);
		// string s = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < height; i++)
		V_3 = 0;
		goto IL_00b6;
	}

IL_0094:
	{
		// s += System.String.Format("{0:0.000 } ", a[i * width + column]);
		String_t* L_27 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_28 = ___a0;
		int32_t L_29 = V_3;
		int32_t L_30 = ___width1;
		int32_t L_31 = ___column4;
		NullCheck(L_28);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)L_30)), (int32_t)L_31));
		float L_33 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		float L_34 = L_33;
		RuntimeObject * L_35 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36;
		L_36 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_35, /*hidden argument*/NULL);
		String_t* L_37;
		L_37 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_27, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		// for (int i = 0; i < height; i++)
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00b6:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_39 = V_3;
		int32_t L_40 = ___height2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0094;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_41 = V_2;
		bool L_42;
		L_42 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_41, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_00cd;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_43, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Single[],System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m416E01AEFB2BCF9A7FBFF6F7C124DC8CC376B370 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___a0, int32_t ___width1, int32_t ___height2, int32_t ___row3, int32_t ___column4, bool ___numbers5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845A697DDBCB2F80417ED6CF9819D18B379B7D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// UnityEngine.Debug.Log("float [] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral845A697DDBCB2F80417ED6CF9819D18B379B7D32, /*hidden argument*/NULL);
		// if (row >= 0 && row < height)
		int32_t L_0 = ___row3;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_1 = ___row3;
		int32_t L_2 = ___height2;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0081;
		}
	}
	{
		// UnityEngine.Debug.Log("buffer row: " + row);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___row3), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_1 = 0;
		goto IL_006a;
	}

IL_0032:
	{
		// if (numbers) { s += (j.ToString() +")" ); }
		bool L_5 = ___numbers5;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// if (numbers) { s += (j.ToString() +")" ); }
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_6, L_7, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0049:
	{
		// s += System.String.Format("{0:0.000 } ", a[row * width + j]);
		String_t* L_9 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = ___a0;
		int32_t L_11 = ___row3;
		int32_t L_12 = ___width1;
		int32_t L_13 = V_1;
		NullCheck(L_10);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)L_12)), (int32_t)L_13));
		float L_15 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		float L_16 = L_15;
		RuntimeObject * L_17 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_9, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		// for (int j = 0; j < width; j++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_006a:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_21 = V_1;
		int32_t L_22 = ___width1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0032;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_23 = V_0;
		bool L_24;
		L_24 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_23, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0081;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_25, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// if (column >= 0 && column < width)
		int32_t L_26 = ___column4;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_27 = ___column4;
		int32_t L_28 = ___width1;
		if ((((int32_t)L_27) >= ((int32_t)L_28)))
		{
			goto IL_00fb;
		}
	}
	{
		// UnityEngine.Debug.Log("buffer column: " + column);
		String_t* L_29;
		L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___column4), /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_30, /*hidden argument*/NULL);
		// string s = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < height; i++)
		V_3 = 0;
		goto IL_00e4;
	}

IL_00ab:
	{
		// if (numbers) { s += (i.ToString() + ")"); }
		bool L_31 = ___numbers5;
		if (!L_31)
		{
			goto IL_00c2;
		}
	}
	{
		// if (numbers) { s += (i.ToString() + ")"); }
		String_t* L_32 = V_2;
		String_t* L_33;
		L_33 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_34;
		L_34 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_32, L_33, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_2 = L_34;
	}

IL_00c2:
	{
		// s += System.String.Format("{0:0.000 } ", a[i * width + column]);
		String_t* L_35 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_36 = ___a0;
		int32_t L_37 = V_3;
		int32_t L_38 = ___width1;
		int32_t L_39 = ___column4;
		NullCheck(L_36);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_37, (int32_t)L_38)), (int32_t)L_39));
		float L_41 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		float L_42 = L_41;
		RuntimeObject * L_43 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_42);
		String_t* L_44;
		L_44 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_43, /*hidden argument*/NULL);
		String_t* L_45;
		L_45 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_35, L_44, /*hidden argument*/NULL);
		V_2 = L_45;
		// for (int i = 0; i < height; i++)
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00e4:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_47 = V_3;
		int32_t L_48 = ___height2;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00ab;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_49 = V_2;
		bool L_50;
		L_50 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_49, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_00fb;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_51 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_51, /*hidden argument*/NULL);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Single[0...,0...],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m28364753042D992200BAFB175345D04B52192BA1 (SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* ___a0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBFFE0A5370273ABDE689727EAEE89D9F5516AA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// UnityEngine.Debug.Log("float [,] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralCBFFE0A5370273ABDE689727EAEE89D9F5516AA2, /*hidden argument*/NULL);
		// for (int i = 0; i < height; i++)
		V_0 = 0;
		goto IL_0061;
	}

IL_000e:
	{
		// string s = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_2 = 0;
		goto IL_0046;
	}

IL_0018:
	{
		// s += j.ToString() + ") " + System.String.Format("{0:0.000 } ", a[i, j]); ;
		String_t* L_0 = V_1;
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_2 = ___a0;
		int32_t L_3 = V_0;
		int32_t L_4 = V_2;
		NullCheck(L_2);
		float L_5;
		L_5 = (L_2)->GetAt(L_3, L_4);
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_0, L_1, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// for (int j = 0; j < width; j++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0046:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_11 = V_2;
		int32_t L_12 = ___width1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0018;
		}
	}
	{
		// if (s != "")
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		// UnityEngine.Debug.Log(s);
		String_t* L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0061:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_17 = V_0;
		int32_t L_18 = ___height2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Single[0...,0...],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_mABFC968734251CBB935A6B1C5900FB658344A621 (SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* ___a0, int32_t ___width1, int32_t ___height2, int32_t ___row3, int32_t ___column4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845A697DDBCB2F80417ED6CF9819D18B379B7D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// UnityEngine.Debug.Log("float [] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral845A697DDBCB2F80417ED6CF9819D18B379B7D32, /*hidden argument*/NULL);
		// if (row >= 0 && row < height)
		int32_t L_0 = ___row3;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_1 = ___row3;
		int32_t L_2 = ___height2;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_006b;
		}
	}
	{
		// UnityEngine.Debug.Log("buffer row: " + row);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___row3), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_1 = 0;
		goto IL_0054;
	}

IL_0032:
	{
		// s += System.String.Format("{0:0.000 } ", a[row, j]);
		String_t* L_5 = V_0;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_6 = ___a0;
		int32_t L_7 = ___row3;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		float L_9;
		L_9 = (L_6)->GetAt(L_7, L_8);
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// for (int j = 0; j < width; j++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0054:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_15 = V_1;
		int32_t L_16 = ___width1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0032;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_17 = V_0;
		bool L_18;
		L_18 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_17, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_006b;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_19, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// if (column >= 0 && column < width)
		int32_t L_20 = ___column4;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_21 = ___column4;
		int32_t L_22 = ___width1;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_00cf;
		}
	}
	{
		// UnityEngine.Debug.Log("buffer column: " + column);
		String_t* L_23;
		L_23 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___column4), /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_24, /*hidden argument*/NULL);
		// string s = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < height; i++)
		V_3 = 0;
		goto IL_00b8;
	}

IL_0095:
	{
		// s += System.String.Format("{0:0.000 } ", a[i, column]);
		String_t* L_25 = V_2;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_26 = ___a0;
		int32_t L_27 = V_3;
		int32_t L_28 = ___column4;
		NullCheck(L_26);
		float L_29;
		L_29 = (L_26)->GetAt(L_27, L_28);
		float L_30 = L_29;
		RuntimeObject * L_31 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32;
		L_32 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_31, /*hidden argument*/NULL);
		String_t* L_33;
		L_33 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_25, L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		// for (int i = 0; i < height; i++)
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00b8:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_35 = V_3;
		int32_t L_36 = ___height2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0095;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_37 = V_2;
		bool L_38;
		L_38 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_37, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00cf;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_39 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_39, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(UnityEngine.Vector2[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m5FD564FFCFB2061D3F5DD049E13134802B8FA96C (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___a0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFF22A686258FA1F59C0804D045287A0A0F59224);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// UnityEngine.Debug.Log("Vector2 [] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDFF22A686258FA1F59C0804D045287A0A0F59224, /*hidden argument*/NULL);
		// for (int i = 0; i < height; i++)
		V_0 = 0;
		goto IL_0058;
	}

IL_000e:
	{
		// string s = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_2 = 0;
		goto IL_003d;
	}

IL_0018:
	{
		// s += System.String.Format("{0:0.000 } ", a[i * width + j]);
		String_t* L_0 = V_1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = ___a0;
		int32_t L_2 = V_0;
		int32_t L_3 = ___width1;
		int32_t L_4 = V_2;
		NullCheck(L_1);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = L_6;
		RuntimeObject * L_8 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// for (int j = 0; j < width; j++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003d:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_12 = V_2;
		int32_t L_13 = ___width1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		// if (s != "")
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_14, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0054;
		}
	}
	{
		// UnityEngine.Debug.Log(s);
		String_t* L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_16, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0058:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_18 = V_0;
		int32_t L_19 = ___height2;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(UnityEngine.Vector2[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m7594681352543456106021E7C3A1309E79A90222 (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___a0, int32_t ___width1, int32_t ___height2, int32_t ___row3, int32_t ___column4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845A697DDBCB2F80417ED6CF9819D18B379B7D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDAC616761226DB482108609D17DE7A5BD17A12A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// UnityEngine.Debug.Log("float [] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral845A697DDBCB2F80417ED6CF9819D18B379B7D32, /*hidden argument*/NULL);
		// if (row >= 0 && row < height)
		int32_t L_0 = ___row3;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_1 = ___row3;
		int32_t L_2 = ___height2;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_006e;
		}
	}
	{
		// UnityEngine.Debug.Log("buffer row: " + row);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___row3), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_1 = 0;
		goto IL_0057;
	}

IL_0032:
	{
		// s += System.String.Format("{0:0.00 } ", a[row * width + j]);
		String_t* L_5 = V_0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_6 = ___a0;
		int32_t L_7 = ___row3;
		int32_t L_8 = ___width1;
		int32_t L_9 = V_1;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_8)), (int32_t)L_9));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = L_11;
		RuntimeObject * L_13 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDDAC616761226DB482108609D17DE7A5BD17A12A, L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// for (int j = 0; j < width; j++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0057:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_17 = V_1;
		int32_t L_18 = ___width1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0032;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_19 = V_0;
		bool L_20;
		L_20 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_19, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_006e;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_21, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// if (column >= 0 && column < width)
		int32_t L_22 = ___column4;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_23 = ___column4;
		int32_t L_24 = ___width1;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_00d5;
		}
	}
	{
		// UnityEngine.Debug.Log("buffer column: " + column);
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___column4), /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_26, /*hidden argument*/NULL);
		// string s = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < height; i++)
		V_3 = 0;
		goto IL_00be;
	}

IL_0098:
	{
		// s += System.String.Format("{0:0.00 } ", a[i * width + column]);
		String_t* L_27 = V_2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_28 = ___a0;
		int32_t L_29 = V_3;
		int32_t L_30 = ___width1;
		int32_t L_31 = ___column4;
		NullCheck(L_28);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)L_30)), (int32_t)L_31));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = L_33;
		RuntimeObject * L_35 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36;
		L_36 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDDAC616761226DB482108609D17DE7A5BD17A12A, L_35, /*hidden argument*/NULL);
		String_t* L_37;
		L_37 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_27, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		// for (int i = 0; i < height; i++)
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00be:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_39 = V_3;
		int32_t L_40 = ___height2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0098;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_41 = V_2;
		bool L_42;
		L_42 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_41, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_00d5;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_43, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Int64[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m91B260855A8864DB3C4B905D8441EA3537A095DC (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___a0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A57E2B7DB0DA6D181DC6DAE11178BCFA49A3EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// UnityEngine.Debug.Log("long [] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral10A57E2B7DB0DA6D181DC6DAE11178BCFA49A3EE, /*hidden argument*/NULL);
		// for (int i = 0; i < height; i++)
		V_0 = 0;
		goto IL_0053;
	}

IL_000e:
	{
		// string s = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_2 = 0;
		goto IL_0038;
	}

IL_0018:
	{
		// s +=  a[i * width + j].ToString() +" ";
		String_t* L_0 = V_1;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = ___a0;
		int32_t L_2 = V_0;
		int32_t L_3 = ___width1;
		int32_t L_4 = V_2;
		NullCheck(L_1);
		String_t* L_5;
		L_5 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4))))), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (int j = 0; j < width; j++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0038:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_8 = V_2;
		int32_t L_9 = ___width1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0018;
		}
	}
	{
		// if (s != "")
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		// UnityEngine.Debug.Log(s);
		String_t* L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0053:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_14 = V_0;
		int32_t L_15 = ___height2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Int64[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_mC514055E3B46D81E00FFDED14821D0588C060E80 (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___a0, int32_t ___width1, int32_t ___height2, int32_t ___row3, int32_t ___column4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A57E2B7DB0DA6D181DC6DAE11178BCFA49A3EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// UnityEngine.Debug.Log("long [] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral10A57E2B7DB0DA6D181DC6DAE11178BCFA49A3EE, /*hidden argument*/NULL);
		// if (row >= 0 && row < height)
		int32_t L_0 = ___row3;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_1 = ___row3;
		int32_t L_2 = ___height2;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0069;
		}
	}
	{
		// UnityEngine.Debug.Log("buffer row: " + row);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___row3), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_1 = 0;
		goto IL_0052;
	}

IL_0032:
	{
		// s += a[row * width + j].ToString() +" ";
		String_t* L_5 = V_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_6 = ___a0;
		int32_t L_7 = ___row3;
		int32_t L_8 = ___width1;
		int32_t L_9 = V_1;
		NullCheck(L_6);
		String_t* L_10;
		L_10 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_8)), (int32_t)L_9))))), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_5, L_10, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_0 = L_11;
		// for (int j = 0; j < width; j++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0052:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_13 = V_1;
		int32_t L_14 = ___width1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0032;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_15, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0069;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_17, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// if (column >= 0 && column < width)
		int32_t L_18 = ___column4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_19 = ___column4;
		int32_t L_20 = ___width1;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_00cb;
		}
	}
	{
		// UnityEngine.Debug.Log("buffer column: " + column);
		String_t* L_21;
		L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___column4), /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
		// string s = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < height; i++)
		V_3 = 0;
		goto IL_00b4;
	}

IL_0093:
	{
		// s +=  a[i * width + column].ToString() + " ";
		String_t* L_23 = V_2;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_24 = ___a0;
		int32_t L_25 = V_3;
		int32_t L_26 = ___width1;
		int32_t L_27 = ___column4;
		NullCheck(L_24);
		String_t* L_28;
		L_28 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26)), (int32_t)L_27))))), /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_23, L_28, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_2 = L_29;
		// for (int i = 0; i < height; i++)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00b4:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_31 = V_3;
		int32_t L_32 = ___height2;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0093;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_33, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00cb;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_35 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_35, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Int64[0...,0...],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_mE15EC7BF975271EC6A8F17A20AE292AACF91A9E4 (Int64U5BU2CU5D_tEBB2AEAB267BE0C570FC32E17716C77AF3E75E4E* ___a0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D88EFDCD25BBF0F1FF5FBD772493E6EA046D631);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// UnityEngine.Debug.Log("long [,] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6D88EFDCD25BBF0F1FF5FBD772493E6EA046D631, /*hidden argument*/NULL);
		// for (int i = 0; i < height; i++)
		V_0 = 0;
		goto IL_0050;
	}

IL_000e:
	{
		// string s = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_2 = 0;
		goto IL_0035;
	}

IL_0018:
	{
		// s += a[i, j].ToString() + " ";
		String_t* L_0 = V_1;
		Int64U5BU2CU5D_tEBB2AEAB267BE0C570FC32E17716C77AF3E75E4E* L_1 = ___a0;
		int32_t L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		int64_t* L_4;
		L_4 = (L_1)->GetAddressAt(L_2, L_3);
		String_t* L_5;
		L_5 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (int j = 0; j < width; j++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0035:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_8 = V_2;
		int32_t L_9 = ___width1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0018;
		}
	}
	{
		// if (s != "")
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// UnityEngine.Debug.Log(s);
		String_t* L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0050:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_14 = V_0;
		int32_t L_15 = ___height2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::BufTostring(System.Int64[0...,0...],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_BufTostring_m08DFC655ADAF240E0F0EF046C6F67FFEB2081D4C (Int64U5BU2CU5D_tEBB2AEAB267BE0C570FC32E17716C77AF3E75E4E* ___a0, int32_t ___width1, int32_t ___height2, int32_t ___row3, int32_t ___column4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A57E2B7DB0DA6D181DC6DAE11178BCFA49A3EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// UnityEngine.Debug.Log("long [] buffer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral10A57E2B7DB0DA6D181DC6DAE11178BCFA49A3EE, /*hidden argument*/NULL);
		// if (row >= 0 && row < height)
		int32_t L_0 = ___row3;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_1 = ___row3;
		int32_t L_2 = ___height2;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0066;
		}
	}
	{
		// UnityEngine.Debug.Log("buffer row: " + row);
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___row3), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8307F4EB0EEAC8A90D14B2B40D70A45443F40818, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < width; j++)
		V_1 = 0;
		goto IL_004f;
	}

IL_0032:
	{
		// s += a[row, j].ToString() + " ";
		String_t* L_5 = V_0;
		Int64U5BU2CU5D_tEBB2AEAB267BE0C570FC32E17716C77AF3E75E4E* L_6 = ___a0;
		int32_t L_7 = ___row3;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		int64_t* L_9;
		L_9 = (L_6)->GetAddressAt(L_7, L_8);
		String_t* L_10;
		L_10 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_5, L_10, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_0 = L_11;
		// for (int j = 0; j < width; j++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004f:
	{
		// for (int j = 0; j < width; j++)
		int32_t L_13 = V_1;
		int32_t L_14 = ___width1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0032;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_15, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0066;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_17, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// if (column >= 0 && column < width)
		int32_t L_18 = ___column4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_19 = ___column4;
		int32_t L_20 = ___width1;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_00c5;
		}
	}
	{
		// UnityEngine.Debug.Log("buffer column: " + column);
		String_t* L_21;
		L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___column4), /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3FC5EB4A73D50D30CC1620F9287F539266F601B5, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
		// string s = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < height; i++)
		V_3 = 0;
		goto IL_00ae;
	}

IL_0090:
	{
		// s += a[i, column].ToString() + " ";
		String_t* L_23 = V_2;
		Int64U5BU2CU5D_tEBB2AEAB267BE0C570FC32E17716C77AF3E75E4E* L_24 = ___a0;
		int32_t L_25 = V_3;
		int32_t L_26 = ___column4;
		NullCheck(L_24);
		int64_t* L_27;
		L_27 = (L_24)->GetAddressAt(L_25, L_26);
		String_t* L_28;
		L_28 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)L_27, /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_23, L_28, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		V_2 = L_29;
		// for (int i = 0; i < height; i++)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00ae:
	{
		// for (int i = 0; i < height; i++)
		int32_t L_31 = V_3;
		int32_t L_32 = ___height2;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0090;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_33, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00c5;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_35 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_35, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::Texture2DToString(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_Texture2DToString_m2E0CEA2EBAC14321C13D15280C10CD57C5C226D4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___a0, int32_t ___component1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90443469E4F270C83F3D18BCAF16D757D8BCD5C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// UnityEngine.Debug.Log("texture component plot");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral90443469E4F270C83F3D18BCAF16D757D8BCD5C8, /*hidden argument*/NULL);
		// for (int i = 0; i < a.height; i++)
		V_0 = 0;
		goto IL_00e6;
	}

IL_0011:
	{
		// string s = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < a.width; j++)
		V_2 = 0;
		goto IL_00c3;
	}

IL_001e:
	{
		// if (component == 3)
		int32_t L_0 = ___component1;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0047;
		}
	}
	{
		// s += System.String.Format("{0:0.000 } ", a.GetPixel(j, i).a);
		String_t* L_1 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___a0;
		int32_t L_3 = V_2;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_2, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_a_3();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// }
		goto IL_00bf;
	}

IL_0047:
	{
		// else if (component == 2)
		int32_t L_11 = ___component1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0070;
		}
	}
	{
		// s += System.String.Format("{0:0.000 } ", a.GetPixel(j, i).b);
		String_t* L_12 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = ___a0;
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		NullCheck(L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		L_16 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_13, L_14, L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_b_2();
		float L_18 = L_17;
		RuntimeObject * L_19 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_12, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		// }
		goto IL_00bf;
	}

IL_0070:
	{
		// else if (component == 1)
		int32_t L_22 = ___component1;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0099;
		}
	}
	{
		// s += System.String.Format("{0:0.000 } ", a.GetPixel(j, i).g);
		String_t* L_23 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_24 = ___a0;
		int32_t L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_24);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_24, L_25, L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_g_1();
		float L_29 = L_28;
		RuntimeObject * L_30 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_29);
		String_t* L_31;
		L_31 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_30, /*hidden argument*/NULL);
		String_t* L_32;
		L_32 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_23, L_31, /*hidden argument*/NULL);
		V_1 = L_32;
		// }
		goto IL_00bf;
	}

IL_0099:
	{
		// else if (component == 0)
		int32_t L_33 = ___component1;
		if (L_33)
		{
			goto IL_00bf;
		}
	}
	{
		// s += System.String.Format("{0:0.000 } ", a.GetPixel(j, i).r);
		String_t* L_34 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = ___a0;
		int32_t L_36 = V_2;
		int32_t L_37 = V_0;
		NullCheck(L_35);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38;
		L_38 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_35, L_36, L_37, /*hidden argument*/NULL);
		float L_39 = L_38.get_r_0();
		float L_40 = L_39;
		RuntimeObject * L_41 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_40);
		String_t* L_42;
		L_42 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_41, /*hidden argument*/NULL);
		String_t* L_43;
		L_43 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_34, L_42, /*hidden argument*/NULL);
		V_1 = L_43;
	}

IL_00bf:
	{
		// for (int j = 0; j < a.width; j++)
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00c3:
	{
		// for (int j = 0; j < a.width; j++)
		int32_t L_45 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_46 = ___a0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_46);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_001e;
		}
	}
	{
		// if (s != "")
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_48, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_00e2;
		}
	}
	{
		// UnityEngine.Debug.Log(s);
		String_t* L_50 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_50, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		// for (int i = 0; i < a.height; i++)
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00e6:
	{
		// for (int i = 0; i < a.height; i++)
		int32_t L_52 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_53 = ___a0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_53);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::Texture2DToString(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_Texture2DToString_m1020CFCCE9B2223E46E72C9D72ED5DED1798E34B (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF8FE5A9B03C30BC4CF4DAA59EF7FE6A80EB7C36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// UnityEngine.Debug.Log("texture plot");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFF8FE5A9B03C30BC4CF4DAA59EF7FE6A80EB7C36, /*hidden argument*/NULL);
		// for (int i = 0; i < a.height; i++)
		V_0 = 0;
		goto IL_0059;
	}

IL_000e:
	{
		// string s = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < a.width; j++)
		V_2 = 0;
		goto IL_0039;
	}

IL_0018:
	{
		// s += a.GetPixel(j, i).ToString();
		String_t* L_0 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = ___a0;
		int32_t L_2 = V_2;
		int32_t L_3 = V_0;
		NullCheck(L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		String_t* L_5;
		L_5 = Color_ToString_m2C9303D88F39CDAE35C613A3C816D8982C58B5FC((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_3), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (int j = 0; j < a.width; j++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0039:
	{
		// for (int j = 0; j < a.width; j++)
		int32_t L_8 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ___a0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0018;
		}
	}
	{
		// if (s != "")
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		// UnityEngine.Debug.Log(s);
		String_t* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// for (int i = 0; i < a.height; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0059:
	{
		// for (int i = 0; i < a.height; i++)
		int32_t L_15 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = ___a0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::Texture2DToString(UnityEngine.Texture2D,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_Texture2DToString_m0FC1A019A918620A37D1F2EAB03956024D5A8337 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___a0, int32_t ___component1, int32_t ___row2, int32_t ___column3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D1E1796F9CC6EF984A76B391C1E4BB695FBE8FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32C4C6CDB63870A4CE833AEC3602027A435E7A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90443469E4F270C83F3D18BCAF16D757D8BCD5C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// UnityEngine.Debug.Log("texture component plot");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral90443469E4F270C83F3D18BCAF16D757D8BCD5C8, /*hidden argument*/NULL);
		// if (row >= 0 && row < a.height)
		int32_t L_0 = ___row2;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_1 = ___row2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___a0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0104;
		}
	}
	{
		// UnityEngine.Debug.Log("texture row: " + row);
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___row2), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral32C4C6CDB63870A4CE833AEC3602027A435E7A88, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < a.width; j++)
		V_1 = 0;
		goto IL_00e5;
	}

IL_0040:
	{
		// if (component == 3)
		int32_t L_6 = ___component1;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0069;
		}
	}
	{
		// s += System.String.Format("{0:0.000 } ", a.GetPixel(j, row).a);
		String_t* L_7 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = ___a0;
		int32_t L_9 = V_1;
		int32_t L_10 = ___row2;
		NullCheck(L_8);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_8, L_9, L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_a_3();
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_7, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// }
		goto IL_00e1;
	}

IL_0069:
	{
		// else if (component == 2)
		int32_t L_17 = ___component1;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_0092;
		}
	}
	{
		// s += System.String.Format("{0:0.000 } ", a.GetPixel(j, row).b);
		String_t* L_18 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = ___a0;
		int32_t L_20 = V_1;
		int32_t L_21 = ___row2;
		NullCheck(L_19);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22;
		L_22 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_19, L_20, L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_b_2();
		float L_24 = L_23;
		RuntimeObject * L_25 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26;
		L_26 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_25, /*hidden argument*/NULL);
		String_t* L_27;
		L_27 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_18, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		// }
		goto IL_00e1;
	}

IL_0092:
	{
		// else if (component == 1)
		int32_t L_28 = ___component1;
		if ((!(((uint32_t)L_28) == ((uint32_t)1))))
		{
			goto IL_00bb;
		}
	}
	{
		// s += System.String.Format("{0:0.000 } ", a.GetPixel(j, row).g);
		String_t* L_29 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_30 = ___a0;
		int32_t L_31 = V_1;
		int32_t L_32 = ___row2;
		NullCheck(L_30);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		L_33 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_30, L_31, L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_g_1();
		float L_35 = L_34;
		RuntimeObject * L_36 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_36, /*hidden argument*/NULL);
		String_t* L_38;
		L_38 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_29, L_37, /*hidden argument*/NULL);
		V_0 = L_38;
		// }
		goto IL_00e1;
	}

IL_00bb:
	{
		// else if (component == 0)
		int32_t L_39 = ___component1;
		if (L_39)
		{
			goto IL_00e1;
		}
	}
	{
		// s += System.String.Format("{0:0.000 } ", a.GetPixel(j, row).r);
		String_t* L_40 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_41 = ___a0;
		int32_t L_42 = V_1;
		int32_t L_43 = ___row2;
		NullCheck(L_41);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44;
		L_44 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_41, L_42, L_43, /*hidden argument*/NULL);
		float L_45 = L_44.get_r_0();
		float L_46 = L_45;
		RuntimeObject * L_47 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_46);
		String_t* L_48;
		L_48 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_47, /*hidden argument*/NULL);
		String_t* L_49;
		L_49 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_40, L_48, /*hidden argument*/NULL);
		V_0 = L_49;
	}

IL_00e1:
	{
		// for (int j = 0; j < a.width; j++)
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00e5:
	{
		// for (int j = 0; j < a.width; j++)
		int32_t L_51 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_52 = ___a0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_52);
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_0040;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_54 = V_0;
		bool L_55;
		L_55 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_54, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_0104;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_56 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_56, /*hidden argument*/NULL);
	}

IL_0104:
	{
		// if (column >= 0 && column < a.width)
		int32_t L_57 = ___column3;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_01fe;
		}
	}
	{
		int32_t L_58 = ___column3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_59 = ___a0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_59);
		if ((((int32_t)L_58) >= ((int32_t)L_60)))
		{
			goto IL_01fe;
		}
	}
	{
		// UnityEngine.Debug.Log("texture column: " + column);
		String_t* L_61;
		L_61 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___column3), /*hidden argument*/NULL);
		String_t* L_62;
		L_62 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0D1E1796F9CC6EF984A76B391C1E4BB695FBE8FD, L_61, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_62, /*hidden argument*/NULL);
		// string s = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < a.height; i++)
		V_3 = 0;
		goto IL_01df;
	}

IL_013a:
	{
		// if (component == 3)
		int32_t L_63 = ___component1;
		if ((!(((uint32_t)L_63) == ((uint32_t)3))))
		{
			goto IL_0163;
		}
	}
	{
		// s += System.String.Format("{0:0.000 } ", a.GetPixel(column, i).a);
		String_t* L_64 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_65 = ___a0;
		int32_t L_66 = ___column3;
		int32_t L_67 = V_3;
		NullCheck(L_65);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_68;
		L_68 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_65, L_66, L_67, /*hidden argument*/NULL);
		float L_69 = L_68.get_a_3();
		float L_70 = L_69;
		RuntimeObject * L_71 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_70);
		String_t* L_72;
		L_72 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_71, /*hidden argument*/NULL);
		String_t* L_73;
		L_73 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_64, L_72, /*hidden argument*/NULL);
		V_2 = L_73;
		// }
		goto IL_01db;
	}

IL_0163:
	{
		// else if (component == 2)
		int32_t L_74 = ___component1;
		if ((!(((uint32_t)L_74) == ((uint32_t)2))))
		{
			goto IL_018c;
		}
	}
	{
		// s += System.String.Format("{0:0.000 } ", a.GetPixel(column, i).b);
		String_t* L_75 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_76 = ___a0;
		int32_t L_77 = ___column3;
		int32_t L_78 = V_3;
		NullCheck(L_76);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_79;
		L_79 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_76, L_77, L_78, /*hidden argument*/NULL);
		float L_80 = L_79.get_b_2();
		float L_81 = L_80;
		RuntimeObject * L_82 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_81);
		String_t* L_83;
		L_83 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_82, /*hidden argument*/NULL);
		String_t* L_84;
		L_84 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_75, L_83, /*hidden argument*/NULL);
		V_2 = L_84;
		// }
		goto IL_01db;
	}

IL_018c:
	{
		// else if (component == 1)
		int32_t L_85 = ___component1;
		if ((!(((uint32_t)L_85) == ((uint32_t)1))))
		{
			goto IL_01b5;
		}
	}
	{
		// s += System.String.Format("{0:0.000 } ", a.GetPixel(column, i).g);
		String_t* L_86 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_87 = ___a0;
		int32_t L_88 = ___column3;
		int32_t L_89 = V_3;
		NullCheck(L_87);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_90;
		L_90 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_87, L_88, L_89, /*hidden argument*/NULL);
		float L_91 = L_90.get_g_1();
		float L_92 = L_91;
		RuntimeObject * L_93 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_92);
		String_t* L_94;
		L_94 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_93, /*hidden argument*/NULL);
		String_t* L_95;
		L_95 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_86, L_94, /*hidden argument*/NULL);
		V_2 = L_95;
		// }
		goto IL_01db;
	}

IL_01b5:
	{
		// else if (component == 0)
		int32_t L_96 = ___component1;
		if (L_96)
		{
			goto IL_01db;
		}
	}
	{
		// s += System.String.Format("{0:0.000 } ", a.GetPixel(column, i).r);
		String_t* L_97 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_98 = ___a0;
		int32_t L_99 = ___column3;
		int32_t L_100 = V_3;
		NullCheck(L_98);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_101;
		L_101 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_98, L_99, L_100, /*hidden argument*/NULL);
		float L_102 = L_101.get_r_0();
		float L_103 = L_102;
		RuntimeObject * L_104 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_103);
		String_t* L_105;
		L_105 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC2D6C72012B2BCA4B84A11CB2A0BF8DEEE9C6011, L_104, /*hidden argument*/NULL);
		String_t* L_106;
		L_106 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_97, L_105, /*hidden argument*/NULL);
		V_2 = L_106;
	}

IL_01db:
	{
		// for (int i = 0; i < a.height; i++)
		int32_t L_107 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
	}

IL_01df:
	{
		// for (int i = 0; i < a.height; i++)
		int32_t L_108 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_109 = ___a0;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_109);
		if ((((int32_t)L_108) < ((int32_t)L_110)))
		{
			goto IL_013a;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_111 = V_2;
		bool L_112;
		L_112 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_111, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_112)
		{
			goto IL_01fe;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_113 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_113, /*hidden argument*/NULL);
	}

IL_01fe:
	{
		// }
		return;
	}
}
// System.Void Mkey.PrintData::Texture2DToString(UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData_Texture2DToString_m5BD9C91270A8A1DB56E453153AA73DFC9863F036 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___a0, int32_t ___row1, int32_t ___column2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D1E1796F9CC6EF984A76B391C1E4BB695FBE8FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32C4C6CDB63870A4CE833AEC3602027A435E7A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90443469E4F270C83F3D18BCAF16D757D8BCD5C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// UnityEngine.Debug.Log("texture component plot");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral90443469E4F270C83F3D18BCAF16D757D8BCD5C8, /*hidden argument*/NULL);
		// if (row >= 0 && row < a.height)
		int32_t L_0 = ___row1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_1 = ___row1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___a0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0074;
		}
	}
	{
		// UnityEngine.Debug.Log("texture row: " + row);
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___row1), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral32C4C6CDB63870A4CE833AEC3602027A435E7A88, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int j = 0; j < a.width; j++)
		V_1 = 0;
		goto IL_0058;
	}

IL_0037:
	{
		// s +=  a.GetPixel(j, row).ToString();
		String_t* L_6 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___a0;
		int32_t L_8 = V_1;
		int32_t L_9 = ___row1;
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_7, L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		String_t* L_11;
		L_11 = Color_ToString_m2C9303D88F39CDAE35C613A3C816D8982C58B5FC((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_2), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// for (int j = 0; j < a.width; j++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0058:
	{
		// for (int j = 0; j < a.width; j++)
		int32_t L_14 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = ___a0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0037;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_17 = V_0;
		bool L_18;
		L_18 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_17, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0074;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_19, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// if (column >= 0 && column < a.width)
		int32_t L_20 = ___column2;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_21 = ___column2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = ___a0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		if ((((int32_t)L_21) >= ((int32_t)L_23)))
		{
			goto IL_00e3;
		}
	}
	{
		// UnityEngine.Debug.Log("texture column: " + column);
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___column2), /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0D1E1796F9CC6EF984A76B391C1E4BB695FBE8FD, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_25, /*hidden argument*/NULL);
		// string s = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < a.height; i++)
		V_4 = 0;
		goto IL_00c6;
	}

IL_00a2:
	{
		// s +=  a.GetPixel(column, i).ToString();
		String_t* L_26 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_27 = ___a0;
		int32_t L_28 = ___column2;
		int32_t L_29 = V_4;
		NullCheck(L_27);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_27, L_28, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		String_t* L_31;
		L_31 = Color_ToString_m2C9303D88F39CDAE35C613A3C816D8982C58B5FC((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_2), /*hidden argument*/NULL);
		String_t* L_32;
		L_32 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_26, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		// for (int i = 0; i < a.height; i++)
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00c6:
	{
		// for (int i = 0; i < a.height; i++)
		int32_t L_34 = V_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = ___a0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_35);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_37 = V_3;
		bool L_38;
		L_38 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_37, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00e3;
		}
	}
	{
		// if (s != "") UnityEngine.Debug.Log(s);
		String_t* L_39 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_39, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.String Mkey.PrintData::CharsToString(System.Char[],System.Char[],System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PrintData_CharsToString_m789227F2BFD794896B87B590CDF1513703EA8CB8 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___divider1, Il2CppChar ___endChar2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// string res = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (chars != null && chars.Length > 0)
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___chars0;
		if (!L_0)
		{
			goto IL_00a8;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars0;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_00a8;
		}
	}
	{
		// int length = chars.Length;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___chars0;
		NullCheck(L_2);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		// if (divider != null && divider.Length > 0)
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___divider1;
		if (!L_3)
		{
			goto IL_0076;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___divider1;
		NullCheck(L_4);
		if (!(((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0076;
		}
	}
	{
		// for (int ic = 0; ic < length; ic++)
		V_2 = 0;
		goto IL_0070;
	}

IL_0022:
	{
		// res += chars[ic];
		String_t* L_5 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___chars0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// for (int id = 0; id < divider.Length; id++)
		V_3 = 0;
		goto IL_0066;
	}

IL_0039:
	{
		// if (ic == length - 1) { res += endChar; }
		int32_t L_10 = V_2;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1))))))
		{
			goto IL_004f;
		}
	}
	{
		// if (ic == length - 1) { res += endChar; }
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&___endChar2), /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// if (ic == length - 1) { res += endChar; }
		goto IL_0062;
	}

IL_004f:
	{
		// else { res += divider[id]; }
		String_t* L_15 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = ___divider1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_15, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_0062:
	{
		// for (int id = 0; id < divider.Length; id++)
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0066:
	{
		// for (int id = 0; id < divider.Length; id++)
		int32_t L_21 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = ___divider1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0039;
		}
	}
	{
		// for (int ic = 0; ic < length; ic++)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0070:
	{
		// for (int ic = 0; ic < length; ic++)
		int32_t L_24 = V_2;
		int32_t L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0022;
		}
	}
	{
		// }
		goto IL_00a8;
	}

IL_0076:
	{
		// for (int ic = 0; ic < length; ic++)
		V_4 = 0;
		goto IL_0095;
	}

IL_007b:
	{
		// res += chars[ic];
		String_t* L_26 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = ___chars0;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		String_t* L_29;
		L_29 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_26, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		// for (int ic = 0; ic < length; ic++)
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0095:
	{
		// for (int ic = 0; ic < length; ic++)
		int32_t L_32 = V_4;
		int32_t L_33 = V_1;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_007b;
		}
	}
	{
		// res += endChar;
		String_t* L_34 = V_0;
		String_t* L_35;
		L_35 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&___endChar2), /*hidden argument*/NULL);
		String_t* L_36;
		L_36 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_34, L_35, /*hidden argument*/NULL);
		V_0 = L_36;
	}

IL_00a8:
	{
		// return res;
		String_t* L_37 = V_0;
		return L_37;
	}
}
// System.String Mkey.PrintData::FloatsToString(System.Single[],System.Char[],System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PrintData_FloatsToString_mA06A934E611E7F0D08C2EC525E16DA78C5CFEA59 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___floats0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___divider1, Il2CppChar ___endChar2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// string res = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (floats != null && floats.Length > 0)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___floats0;
		if (!L_0)
		{
			goto IL_00b4;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___floats0;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_00b4;
		}
	}
	{
		// int length = floats.Length;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___floats0;
		NullCheck(L_2);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		// if (divider != null && divider.Length > 0)
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___divider1;
		if (!L_3)
		{
			goto IL_0082;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___divider1;
		NullCheck(L_4);
		if (!(((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0082;
		}
	}
	{
		// for (int ic = 0; ic < length; ic++)
		V_2 = 0;
		goto IL_007c;
	}

IL_0022:
	{
		// res += floats[ic].ToString();
		String_t* L_5 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___floats0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// res += "f";
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_10, _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0, /*hidden argument*/NULL);
		V_0 = L_11;
		// for (int id = 0; id < divider.Length; id++)
		V_3 = 0;
		goto IL_0072;
	}

IL_0045:
	{
		// if (ic == length - 1) { res += endChar; }
		int32_t L_12 = V_2;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1))))))
		{
			goto IL_005b;
		}
	}
	{
		// if (ic == length - 1) { res += endChar; }
		String_t* L_14 = V_0;
		String_t* L_15;
		L_15 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&___endChar2), /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// if (ic == length - 1) { res += endChar; }
		goto IL_006e;
	}

IL_005b:
	{
		// else { res += divider[id]; }
		String_t* L_17 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = ___divider1;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		String_t* L_20;
		L_20 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
	}

IL_006e:
	{
		// for (int id = 0; id < divider.Length; id++)
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0072:
	{
		// for (int id = 0; id < divider.Length; id++)
		int32_t L_23 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = ___divider1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		// for (int ic = 0; ic < length; ic++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_007c:
	{
		// for (int ic = 0; ic < length; ic++)
		int32_t L_26 = V_2;
		int32_t L_27 = V_1;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0022;
		}
	}
	{
		// }
		goto IL_00b4;
	}

IL_0082:
	{
		// for (int ic = 0; ic < length; ic++)
		V_4 = 0;
		goto IL_00a1;
	}

IL_0087:
	{
		// res += floats[ic];
		String_t* L_28 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_29 = ___floats0;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		String_t* L_31;
		L_31 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), /*hidden argument*/NULL);
		String_t* L_32;
		L_32 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_28, L_31, /*hidden argument*/NULL);
		V_0 = L_32;
		// for (int ic = 0; ic < length; ic++)
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00a1:
	{
		// for (int ic = 0; ic < length; ic++)
		int32_t L_34 = V_4;
		int32_t L_35 = V_1;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0087;
		}
	}
	{
		// res += endChar;
		String_t* L_36 = V_0;
		String_t* L_37;
		L_37 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&___endChar2), /*hidden argument*/NULL);
		String_t* L_38;
		L_38 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_36, L_37, /*hidden argument*/NULL);
		V_0 = L_38;
	}

IL_00b4:
	{
		// return res;
		String_t* L_39 = V_0;
		return L_39;
	}
}
// System.Void Mkey.PrintData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintData__ctor_m0E6603C18D8345CB5B7ADA1A6E7997E848E56D52 (PrintData_t7AD9F21BEF67F2C9D361B8241DE6BA655A52754D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Slide::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slide_Start_m7B86AEFD25071C611D4B83B7952280BBD73DFE57 (Slide_tC8A53AEAC5D7D63C97BE75463C17549C0D5831C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Filler = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var);
		__this->set_Filler_4(L_0);
		// }
		return;
	}
}
// System.Void Slide::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slide_Update_mC7A4E7B235274B9F351FD2087806DAA36CAD8D62 (Slide_tC8A53AEAC5D7D63C97BE75463C17549C0D5831C8 * __this, const RuntimeMethod* method)
{
	{
		// Filler.fillAmount = slider.value;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_Filler_4();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_slider_5();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		NullCheck(L_0);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Slide::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slide__ctor_mCF8050FD4D6E2841B151FCF58F8F94ADDBA7F67D (Slide_tC8A53AEAC5D7D63C97BE75463C17549C0D5831C8 * __this, const RuntimeMethod* method)
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
// System.Void Mkey.SoftEffects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoftEffects__ctor_mE5C504A57A234CDEC7D1D98F4BDBE39BEA03FB73 (SoftEffects_tB95A1D2DA815329FDFBBE95B3C601CE98818A6C0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mkey.SoftEffects::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoftEffects__cctor_m87A9C344D2365422AB034E3B63182D96A76B1B47 (const RuntimeMethod* method)
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
// System.Void Mkey.SoftEffectsFont::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoftEffectsFont__ctor_mA726EF76A534A9578E2240806D92BCB8A5AF9DFB (SoftEffectsFont_tD1792CC90A46A9103A7EFF18D43A249F3914A085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoftEffects_tB95A1D2DA815329FDFBBE95B3C601CE98818A6C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C501BAFE20D9493BD1963E4216FAA87C8729DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44607C62C73C74F8CED38080F5D03D40322CE3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string SEFontSubFolderSufix = "_SEFont_0";
		__this->set_SEFontSubFolderSufix_7(_stringLiteralA44607C62C73C74F8CED38080F5D03D40322CE3B);
		// private string key = "_se_rep";
		__this->set_key_8(_stringLiteral40C501BAFE20D9493BD1963E4216FAA87C8729DB);
		IL2CPP_RUNTIME_CLASS_INIT(SoftEffects_tB95A1D2DA815329FDFBBE95B3C601CE98818A6C0_il2cpp_TypeInfo_var);
		SoftEffects__ctor_mE5C504A57A234CDEC7D1D98F4BDBE39BEA03FB73(__this, /*hidden argument*/NULL);
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
// System.Void Mkey.TextSize::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextSize_SetSize_m796284DC062C4DFA0B83FAAA8083AEC7163DD36E (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Width != width || Height != height)
		int32_t L_0 = ((TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields*)il2cpp_codegen_static_fields_for(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var))->get_Width_0();
		int32_t L_1 = ___width0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = ((TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields*)il2cpp_codegen_static_fields_for(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var))->get_Height_1();
		int32_t L_3 = ___height1;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0058;
		}
	}

IL_0010:
	{
		// Width = width;
		int32_t L_4 = ___width0;
		((TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields*)il2cpp_codegen_static_fields_for(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var))->set_Width_0(L_4);
		// Height = height;
		int32_t L_5 = ___height1;
		((TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields*)il2cpp_codegen_static_fields_for(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var))->set_Height_1(L_5);
		// W32d = Mathf.CeilToInt(Width / 32.0f);
		int32_t L_6 = ((TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields*)il2cpp_codegen_static_fields_for(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var))->get_Width_0();
		int32_t L_7;
		L_7 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)((float)L_6))/(float)(32.0f))), /*hidden argument*/NULL);
		((TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields*)il2cpp_codegen_static_fields_for(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var))->set_W32d_2(L_7);
		// H32d = Mathf.CeilToInt(Height / 32.0f);
		int32_t L_8 = ((TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields*)il2cpp_codegen_static_fields_for(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var))->get_Height_1();
		int32_t L_9;
		L_9 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)((float)((float)L_8))/(float)(32.0f))), /*hidden argument*/NULL);
		((TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields*)il2cpp_codegen_static_fields_for(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var))->set_H32d_3(L_9);
		// WxH = Width * Height;
		int32_t L_10 = ((TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields*)il2cpp_codegen_static_fields_for(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var))->get_Width_0();
		int32_t L_11 = ((TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields*)il2cpp_codegen_static_fields_for(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var))->get_Height_1();
		((TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_StaticFields*)il2cpp_codegen_static_fields_for(TextSize_t6C32709AE8CFCF5F2DFCD1692F43E8C832AA21B1_il2cpp_TypeInfo_var))->set_WxH_4(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)));
	}

IL_0058:
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
// System.Void TitleManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_Start_mB1BDED26067331336418D8C8F760161E62F96224 (TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0415DE590AC74A604879C2EC8FF9CA79E01EADD2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < BestScoreTxt.Length; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// BestScoreTxt[i].text = "Best\n" + mapBestScore.BestScore[i].ToString();
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_0 = __this->get_BestScoreTxt_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * L_4 = __this->get_mapBestScore_9();
		NullCheck(L_4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_4->get_BestScore_5();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0415DE590AC74A604879C2EC8FF9CA79E01EADD2, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_8);
		// for (int i = 0; i < BestScoreTxt.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0035:
	{
		// for (int i = 0; i < BestScoreTxt.Length; i++)
		int32_t L_10 = V_0;
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_11 = __this->get_BestScoreTxt_7();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TitleManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_Update_m3D4B2483A33278FCFEB981AA66D621FDF1A652C7 (TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4 * __this, const RuntimeMethod* method)
{
	{
		// RotateSkyBox();
		TitleManager_RotateSkyBox_m7FCA6D39CB5CB554A9C5ABCF706978E3900FE51E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TitleManager::RotateSkyBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_RotateSkyBox_m7FCA6D39CB5CB554A9C5ABCF706978E3900FE51E (TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2F8A73F36BC9F8340CA51E5D8320663390E37DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// degree += 10 * Time.deltaTime;
		float L_0 = __this->get_degree_5();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_degree_5(((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_1)))));
		// if (degree >= 360)
		float L_2 = __this->get_degree_5();
		if ((!(((float)L_2) >= ((float)(360.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		// degree = 0;
		__this->set_degree_5((0.0f));
		// skynum++;
		int32_t L_3 = __this->get_skynum_6();
		__this->set_skynum_6(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// if (skynum >= 4)
		int32_t L_4 = __this->get_skynum_6();
		if ((((int32_t)L_4) < ((int32_t)4)))
		{
			goto IL_004e;
		}
	}
	{
		// skynum = 0;
		__this->set_skynum_6(0);
	}

IL_004e:
	{
		// RenderSettings.skybox = materials[skynum];
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_5 = __this->get_materials_4();
		int32_t L_6 = __this->get_skynum_6();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		RenderSettings_set_skybox_m452A88810ECA0D7B7B71DBA56E8D0D661CEEA237(L_8, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// RenderSettings.skybox.SetFloat("_Rotation", degree);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9;
		L_9 = RenderSettings_get_skybox_m26B7C34BE5FD107824F56520824A5CCB4686D4B1(/*hidden argument*/NULL);
		float L_10 = __this->get_degree_5();
		NullCheck(L_9);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_9, _stringLiteralF2F8A73F36BC9F8340CA51E5D8320663390E37DC, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TitleManager::Btn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_Btn_m4989692D1202F26EA087776620C0274A07CE2CDE (TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___num0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0015;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_0029;
			}
		}
	}
	{
		return;
	}

IL_0015:
	{
		// SelectMapPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_SelectMapPanel_8();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0022:
	{
		// SceneManager.LoadScene(num);
		int32_t L_2 = ___num0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_2, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0029:
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TitleManager::SelecMapBtn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager_SelecMapBtn_m87B6EE1F9D2728CA2E39B6E178100211EF3D1970 (TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4 * __this, int32_t ____num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02DBA41B6912422CAF593E014C88718D80EF9424);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4332D15029DAFB044967D2C89ED9D2F759E8FA88);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ____num0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ____num0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0020;
	}

IL_000a:
	{
		// SceneManager.LoadScene("WoodMap");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral02DBA41B6912422CAF593E014C88718D80EF9424, /*hidden argument*/NULL);
		// break;
		goto IL_0020;
	}

IL_0016:
	{
		// SceneManager.LoadScene("DesertMap");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral4332D15029DAFB044967D2C89ED9D2F759E8FA88, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// mapBestScore.CurrentMapNum = _num - 1;
		MapBestScore_tBF7E8140EC38CD45B453F7994241BD7E9852CAA5 * L_2 = __this->get_mapBestScore_9();
		int32_t L_3 = ____num0;
		NullCheck(L_2);
		L_2->set_CurrentMapNum_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
		// }
		return;
	}
}
// System.Void TitleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleManager__ctor_m0D14731249E3B6D0846A587A421CAE4FAD2056D0 (TitleManager_tD5DD684FA380D9524ED08D1A131C3241E4B8DFC4 * __this, const RuntimeMethod* method)
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
// System.Void Togglescript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Togglescript_Start_mF023BE3E7213D8237E5ACC7E378B8DFDFE8B0E2E (Togglescript_tBB9B87459D5BA1BEAA2570EF0EA217D574F9484C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m544EDB55EC6C249F96B487032ECEB73B848CD844_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle = GetComponent<Toggle>();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0;
		L_0 = Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m544EDB55EC6C249F96B487032ECEB73B848CD844(__this, /*hidden argument*/Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m544EDB55EC6C249F96B487032ECEB73B848CD844_RuntimeMethod_var);
		__this->set_toggle_4(L_0);
		// }
		return;
	}
}
// System.Void Togglescript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Togglescript_Update_m4624DC949065EA0AAD64AAFC151662782228ECF2 (Togglescript_tBB9B87459D5BA1BEAA2570EF0EA217D574F9484C * __this, const RuntimeMethod* method)
{
	{
		// if (toggle.isOn)
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = __this->get_toggle_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Slider.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Slider_5();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// Slider.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_Slider_5();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Togglescript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Togglescript__ctor_m30CB40889342D1B6E49C2A2EE125DD16C917331A (Togglescript_tBB9B87459D5BA1BEAA2570EF0EA217D574F9484C * __this, const RuntimeMethod* method)
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
// System.Void csAnimationSpin::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csAnimationSpin_Update_m09C229D65C7F9FF928B91E90454D7C40BC99B800 (csAnimationSpin_tFF0562F01AA905A8AB8152911CDBCA2CFCBA01DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mF1FD0FEF2EA1871E69A6CDEA2AEA35CA963D870C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// an = gameObject.GetComponent<Animation>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_1;
		L_1 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mF1FD0FEF2EA1871E69A6CDEA2AEA35CA963D870C(L_0, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mF1FD0FEF2EA1871E69A6CDEA2AEA35CA963D870C_RuntimeMethod_var);
		__this->set_an_4(L_1);
		// an.Play();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_2 = __this->get_an_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void csAnimationSpin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csAnimationSpin__ctor_m2E34EF0EFF2B3920E7A269F6E23E599D4CBC474B (csAnimationSpin_tFF0562F01AA905A8AB8152911CDBCA2CFCBA01DF * __this, const RuntimeMethod* method)
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
// System.Void csDestroyEffect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csDestroyEffect_Update_mFABC1A3AB66BAAA478C6842AAED5E3A8FBA8B5EC (csDestroyEffect_t65274EA206144F94103192B8F5F97A5803BDF043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown(KeyCode.X) || Input.GetKeyDown(KeyCode.Z) || Input.GetKeyDown(KeyCode.C))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)120), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)122), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)99), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}

IL_001b:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void csDestroyEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csDestroyEffect__ctor_m6F8A7A8B6F9C153B9912C9B85AB81B7DB67BCB32 (csDestroyEffect_t65274EA206144F94103192B8F5F97A5803BDF043 * __this, const RuntimeMethod* method)
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
// System.Void csMouseOrbit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csMouseOrbit_Start_mA749C43BB44448AAEC7B00D94309F7FE2EE7E51F (csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 angles = transform.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// x = angles.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		float L_3 = L_2.get_x_2();
		__this->set_x_10(L_3);
		// y = angles.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		float L_5 = L_4.get_y_3();
		__this->set_y_11(L_5);
		// distance = 80;
		__this->set_distance_5((80.0f));
		// if (this.GetComponent<Rigidbody>() == true)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6;
		L_6 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// GetComponent<Rigidbody>().freezeRotation = true;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8;
		L_8 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mB4A92A619135F9258670FB93AE08F229A41D0980_RuntimeMethod_var);
		NullCheck(L_8);
		Rigidbody_set_freezeRotation_mE08A39E98D46F82D6DD86CC389D86D242C694D52(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void csMouseOrbit::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csMouseOrbit_LateUpdate_mC1A81D8A1C79E1B72635BA19382370C6CC86FF30 (csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Target)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_Target_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00de;
		}
	}
	{
		// x += Input.GetAxis("Mouse X") * xSpeed * 0.02f;
		float L_2 = __this->get_x_10();
		float L_3;
		L_3 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		float L_4 = __this->get_xSpeed_6();
		__this->set_x_10(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)(0.0199999996f))))));
		// y += Input.GetAxis("Mouse Y") * ySpeed * 0.05f;
		float L_5 = __this->get_y_11();
		float L_6;
		L_6 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		float L_7 = __this->get_ySpeed_7();
		__this->set_y_11(((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), (float)(0.0500000007f))))));
		// y = ClampAngle(y, yMinLimit, yMaxLimit);
		float L_8 = __this->get_y_11();
		float L_9 = __this->get_yMinLimit_8();
		float L_10 = __this->get_yMaxLimit_9();
		float L_11;
		L_11 = csMouseOrbit_ClampAngle_mAC14588C0EE34A27DD2E5D168DDC9FD48BF263C7(__this, L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->set_y_11(L_11);
		// Quaternion rotation = Quaternion.Euler(y, x, 0);
		float L_12 = __this->get_y_11();
		float L_13 = __this->get_x_10();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_12, L_13, (0.0f), /*hidden argument*/NULL);
		V_0 = L_14;
		// Vector3 position = rotation * new Vector3(0, 0, -distance) + Target.position;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = V_0;
		float L_16 = __this->get_distance_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), (0.0f), (0.0f), ((-L_16)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_15, L_17, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = __this->get_Target_4();
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		// transform.rotation = rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23 = V_0;
		NullCheck(L_22);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_22, L_23, /*hidden argument*/NULL);
		// transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_1;
		NullCheck(L_24);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_25, /*hidden argument*/NULL);
		// distance = CameraDist;
		float L_26 = __this->get_CameraDist_12();
		__this->set_distance_5(L_26);
	}

IL_00de:
	{
		// }
		return;
	}
}
// System.Single csMouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float csMouseOrbit_ClampAngle_mAC14588C0EE34A27DD2E5D168DDC9FD48BF263C7 (csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3 * __this, float ___ag0, float ___min1, float ___max2, const RuntimeMethod* method)
{
	{
		// if (ag < -360)
		float L_0 = ___ag0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// ag += 360;
		float L_1 = ___ag0;
		___ag0 = ((float)il2cpp_codegen_add((float)L_1, (float)(360.0f)));
	}

IL_0011:
	{
		// if (ag > 360)
		float L_2 = ___ag0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// ag -= 360;
		float L_3 = ___ag0;
		___ag0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)(360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(ag, min, max);
		float L_4 = ___ag0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		float L_7;
		L_7 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void csMouseOrbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csMouseOrbit__ctor_mC2CD4F998A8ED7361AB68FBD4874C733ADC172D1 (csMouseOrbit_t9AF66235EFA0432A4AC04802EC3F0220C567F3B3 * __this, const RuntimeMethod* method)
{
	{
		// public float xSpeed = 250.0f;
		__this->set_xSpeed_6((250.0f));
		// public float ySpeed = 120.0f;
		__this->set_ySpeed_7((120.0f));
		// public float yMinLimit = -20.0f;
		__this->set_yMinLimit_8((-20.0f));
		// public float yMaxLimit = 80.0f;
		__this->set_yMaxLimit_9((80.0f));
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
// System.Void csParticleMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csParticleMove_Update_m2CA1511C79B6B428147EFD0F581148F8E91E868E (csParticleMove_t0C21A163B74C57DD07FCF807416149EF956EE6E8 * __this, const RuntimeMethod* method)
{
	{
		// transform.Translate(Vector3.back * speed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220(/*hidden argument*/NULL);
		float L_2 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void csParticleMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csParticleMove__ctor_mDEEBCCCF3B1D91932598614D1AA172CB8389BAEA (csParticleMove_t0C21A163B74C57DD07FCF807416149EF956EE6E8 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 0.1f;
		__this->set_speed_4((0.100000001f));
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
// System.Void csShowAllEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csShowAllEffect_Start_m6E7507EC8ED113B710C57A4A2DC3E3682DD9504E (csShowAllEffect_tF2B53111903252263A6C8902E3BD91CCF921850C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m748821B299E8B2FAC05C55F2C8137BED1DB54917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(Effect[i], new Vector3(0, 0, 0), Quaternion.identity);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_Effect_5();
		int32_t L_1 = __this->get_i_7();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m748821B299E8B2FAC05C55F2C8137BED1DB54917(L_3, L_4, L_5, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m748821B299E8B2FAC05C55F2C8137BED1DB54917_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void csShowAllEffect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csShowAllEffect_Update_mB26384EF1615B0F51134806F517DFBCF776FAD98 (csShowAllEffect_tF2B53111903252263A6C8902E3BD91CCF921850C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m748821B299E8B2FAC05C55F2C8137BED1DB54917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Text1.text = i + 1 + ":" + EffectName[i];
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_Text1_6();
		int32_t L_1 = __this->get_i_7();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = __this->get_EffectName_4();
		int32_t L_4 = __this->get_i_7();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_6, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_7);
		// if (Input.GetKeyDown(KeyCode.Z))
		bool L_8;
		L_8 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)122), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		// if (i <= 0)
		int32_t L_9 = __this->get_i_7();
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		// i = 51;
		__this->set_i_7(((int32_t)51));
		goto IL_005c;
	}

IL_004e:
	{
		// i--;
		int32_t L_10 = __this->get_i_7();
		__this->set_i_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
	}

IL_005c:
	{
		// Instantiate(Effect[i], new Vector3(0, 0, 0), Quaternion.identity);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11 = __this->get_Effect_5();
		int32_t L_12 = __this->get_i_7();
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m748821B299E8B2FAC05C55F2C8137BED1DB54917(L_14, L_15, L_16, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m748821B299E8B2FAC05C55F2C8137BED1DB54917_RuntimeMethod_var);
	}

IL_0088:
	{
		// if (Input.GetKeyDown(KeyCode.X))
		bool L_18;
		L_18 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)120), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00de;
		}
	}
	{
		// if (i < 51)
		int32_t L_19 = __this->get_i_7();
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)51))))
		{
			goto IL_00ab;
		}
	}
	{
		// i++;
		int32_t L_20 = __this->get_i_7();
		__this->set_i_7(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		goto IL_00b2;
	}

IL_00ab:
	{
		// i = 0;
		__this->set_i_7(0);
	}

IL_00b2:
	{
		// Instantiate(Effect[i], new Vector3(0, 0, 0), Quaternion.identity);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_21 = __this->get_Effect_5();
		int32_t L_22 = __this->get_i_7();
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m748821B299E8B2FAC05C55F2C8137BED1DB54917(L_24, L_25, L_26, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m748821B299E8B2FAC05C55F2C8137BED1DB54917_RuntimeMethod_var);
	}

IL_00de:
	{
		// if (Input.GetKeyDown(KeyCode.C))
		bool L_28;
		L_28 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)99), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0113;
		}
	}
	{
		// Instantiate(Effect[i], new Vector3(0, 0, 0), Quaternion.identity);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_29 = __this->get_Effect_5();
		int32_t L_30 = __this->get_i_7();
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m748821B299E8B2FAC05C55F2C8137BED1DB54917(L_32, L_33, L_34, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m748821B299E8B2FAC05C55F2C8137BED1DB54917_RuntimeMethod_var);
	}

IL_0113:
	{
		// }
		return;
	}
}
// System.Void csShowAllEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csShowAllEffect__ctor_mF9DDC8E77EE106FFE3B5BB0C3D7D89BFEDD19394 (csShowAllEffect_tF2B53111903252263A6C8902E3BD91CCF921850C * __this, const RuntimeMethod* method)
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
// System.Void Mkey.int2::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void int2__ctor_m2A64AFB1F7C34920FD24A8AD1300D83A89CAB22B (int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		// X = x;
		int32_t L_0 = ___x0;
		__this->set_X_0(L_0);
		// Y = y;
		int32_t L_1 = ___y1;
		__this->set_Y_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void int2__ctor_m2A64AFB1F7C34920FD24A8AD1300D83A89CAB22B_AdjustorThunk (RuntimeObject * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 *>(__this + _offset);
	int2__ctor_m2A64AFB1F7C34920FD24A8AD1300D83A89CAB22B(_thisAdjusted, ___x0, ___y1, method);
}
// System.String Mkey.int2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* int2_ToString_mD1826E39DF0E0DB1E98AD64275AA2AA5A1942150 (int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDC2B27CDC209EB0AF849770DF4C17D8C2DA9620);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (X + " : " + Y + " ;");
		int32_t* L_0 = __this->get_address_of_X_0();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_0, /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of_Y_1();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_1, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, L_3, _stringLiteralFDC2B27CDC209EB0AF849770DF4C17D8C2DA9620, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* int2_ToString_mD1826E39DF0E0DB1E98AD64275AA2AA5A1942150_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = int2_ToString_mD1826E39DF0E0DB1E98AD64275AA2AA5A1942150(_thisAdjusted, method);
	return _returnValue;
}
// Mkey.int2 Mkey.int2::op_Addition(Mkey.int2,Mkey.int2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  int2_op_Addition_m75D471EE801EDB0BC8886E648B7D2FBA80DC464F (int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  ___a0, int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  ___b1, const RuntimeMethod* method)
{
	int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int2 i = new int2();
		il2cpp_codegen_initobj((&V_0), sizeof(int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 ));
		// i.X = a.X + b.X;
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_0 = ___a0;
		int32_t L_1 = L_0.get_X_0();
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_2 = ___b1;
		int32_t L_3 = L_2.get_X_0();
		(&V_0)->set_X_0(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3)));
		// i.Y = a.Y + b.Y;
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_4 = ___a0;
		int32_t L_5 = L_4.get_Y_1();
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_6 = ___b1;
		int32_t L_7 = L_6.get_Y_1();
		(&V_0)->set_Y_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7)));
		// return i;
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_8 = V_0;
		return L_8;
	}
}
// Mkey.int2 Mkey.int2::op_Subtraction(Mkey.int2,Mkey.int2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  int2_op_Subtraction_mEA7151D24B9195ED221311005D2C550B629DB69F (int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  ___a0, int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  ___b1, const RuntimeMethod* method)
{
	int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int2 i = new int2();
		il2cpp_codegen_initobj((&V_0), sizeof(int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 ));
		// i.X = a.X - b.X;
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_0 = ___a0;
		int32_t L_1 = L_0.get_X_0();
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_2 = ___b1;
		int32_t L_3 = L_2.get_X_0();
		(&V_0)->set_X_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_3)));
		// i.Y = a.Y - b.Y;
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_4 = ___a0;
		int32_t L_5 = L_4.get_Y_1();
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_6 = ___b1;
		int32_t L_7 = L_6.get_Y_1();
		(&V_0)->set_Y_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_7)));
		// return i;
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_8 = V_0;
		return L_8;
	}
}
// Mkey.int2 Mkey.int2::op_Division(Mkey.int2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  int2_op_Division_m0DE1782FA7A5029C244C91696B5F10C9A2D75165 (int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int2 i = new int2();
		il2cpp_codegen_initobj((&V_0), sizeof(int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 ));
		// i.X = a.X / b;
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_0 = ___a0;
		int32_t L_1 = L_0.get_X_0();
		int32_t L_2 = ___b1;
		(&V_0)->set_X_0(((int32_t)((int32_t)L_1/(int32_t)L_2)));
		// i.Y = a.Y / b;
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_3 = ___a0;
		int32_t L_4 = L_3.get_Y_1();
		int32_t L_5 = ___b1;
		(&V_0)->set_Y_1(((int32_t)((int32_t)L_4/(int32_t)L_5)));
		// return i;
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_6 = V_0;
		return L_6;
	}
}
// Mkey.int2 Mkey.int2::op_Multiply(Mkey.int2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  int2_op_Multiply_mFA0C2BFE31F6BB76AC83983C406FA9CF1BBD2845 (int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int2 i = new int2();
		il2cpp_codegen_initobj((&V_0), sizeof(int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 ));
		// i.X = a.X * b;
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_0 = ___a0;
		int32_t L_1 = L_0.get_X_0();
		int32_t L_2 = ___b1;
		(&V_0)->set_X_0(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2)));
		// i.Y = a.Y * b;
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_3 = ___a0;
		int32_t L_4 = L_3.get_Y_1();
		int32_t L_5 = ___b1;
		(&V_0)->set_Y_1(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5)));
		// return i;
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Mkey.int2::op_Equality(Mkey.int2,Mkey.int2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool int2_op_Equality_m704F083094BD4DF2542D9D76972CB3FDCDF87C70 (int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  ___a0, int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  ___b1, const RuntimeMethod* method)
{
	{
		// return (a.X == b.X && a.Y == b.Y);
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_0 = ___a0;
		int32_t L_1 = L_0.get_X_0();
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_2 = ___b1;
		int32_t L_3 = L_2.get_X_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_4 = ___a0;
		int32_t L_5 = L_4.get_Y_1();
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_6 = ___b1;
		int32_t L_7 = L_6.get_Y_1();
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean Mkey.int2::op_Inequality(Mkey.int2,Mkey.int2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool int2_op_Inequality_m046F7A3F851B7BD2B5FCE253A7AF7848CC49A144 (int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  ___a0, int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  ___b1, const RuntimeMethod* method)
{
	{
		// return (a.X != b.X || a.Y != b.Y);
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_0 = ___a0;
		int32_t L_1 = L_0.get_X_0();
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_2 = ___b1;
		int32_t L_3 = L_2.get_X_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_4 = ___a0;
		int32_t L_5 = L_4.get_Y_1();
		int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5  L_6 = ___b1;
		int32_t L_7 = L_6.get_Y_1();
		return (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)1;
	}
}
// System.Int32 Mkey.int2::get_ChessLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t int2_get_ChessLength_mB487D5C6BC87D01F881E036433E1953C6AE068AC (int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 * __this, const RuntimeMethod* method)
{
	{
		// get { return (Mathf.Abs(X) + Mathf.Abs(Y)); }
		int32_t L_0 = __this->get_X_0();
		int32_t L_1;
		L_1 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_Y_1();
		int32_t L_3;
		L_3 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t int2_get_ChessLength_mB487D5C6BC87D01F881E036433E1953C6AE068AC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<int2_t322BFCE13EE56B2D643266F044FB95DC4C421FA5 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = int2_get_ChessLength_mB487D5C6BC87D01F881E036433E1953C6AE068AC(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemySpawn/<Spawn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__7__ctor_mDA11760E6E495D79D5BFB36E7CF392F470ABE029 (U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EnemySpawn/<Spawn>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__7_System_IDisposable_Dispose_mF348B4F7C65C629B6AAA5A77832A10D7617172FE (U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EnemySpawn/<Spawn>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnU3Ed__7_MoveNext_m52D1B80BD3481E5D831A2B7236BF89DBC9C6E57B (U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m7730E1B53DC94E0152DB33692B9E8FD50DD04656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// currentTime = 0;
		EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_currentTime_7((0.0f));
		// int random = Random.Range(0,2);
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 2, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0041:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject enemy = Instantiate(enemyPrefabs[Random.Range(0,4)], enemySpawnPlaces.transform.position, Quaternion.identity);
		EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * L_6 = V_1;
		NullCheck(L_6);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = L_6->get_enemyPrefabs_4();
		int32_t L_8;
		L_8 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * L_11 = V_1;
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_11->get_enemySpawnPlaces_5();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_10, L_14, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Rigidbody enemyRig = enemy.GetComponent<Rigidbody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = L_16;
		NullCheck(L_17);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_18;
		L_18 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m7730E1B53DC94E0152DB33692B9E8FD50DD04656(L_17, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m7730E1B53DC94E0152DB33692B9E8FD50DD04656_RuntimeMethod_var);
		// enemyRig.velocity = new Vector3(0,0,-1f) * speed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * L_20 = V_1;
		NullCheck(L_20);
		float L_21 = L_20->get_speed_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_19, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_18, L_22, /*hidden argument*/NULL);
		// Destroy(enemy, 5f);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_17, (5.0f), /*hidden argument*/NULL);
		// SpawnTime = Random.Range(3f,5f);
		EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * L_23 = V_1;
		float L_24;
		L_24 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((3.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		L_23->set_SpawnTime_6(L_24);
		// SpawnTime -= GameManager.instance.level * 0.2f;
		EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * L_25 = V_1;
		EnemySpawn_t31FC0CF9B47EAB0F78BADC85003825DB27B96BE6 * L_26 = V_1;
		NullCheck(L_26);
		float L_27 = L_26->get_SpawnTime_6();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_28 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_level_19();
		NullCheck(L_25);
		L_25->set_SpawnTime_6(((float)il2cpp_codegen_subtract((float)L_27, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_29)), (float)(0.200000003f))))));
		// }
		return (bool)0;
	}
}
// System.Object EnemySpawn/<Spawn>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1B2C1BDAE8E60C2DBC7F3B95E04B369FD19AB4D7 (U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EnemySpawn/<Spawn>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__7_System_Collections_IEnumerator_Reset_m1DAFE288EB3EB1360BD1709AB7F0F1B4272F2C00 (U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnU3Ed__7_System_Collections_IEnumerator_Reset_m1DAFE288EB3EB1360BD1709AB7F0F1B4272F2C00_RuntimeMethod_var)));
	}
}
// System.Object EnemySpawn/<Spawn>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnU3Ed__7_System_Collections_IEnumerator_get_Current_mEA5A6089CEE1720BF61851F2A6751BB876DAFE08 (U3CSpawnU3Ed__7_tC36A655E51313F29E412681DBFC8BC35F8596E66 * __this, const RuntimeMethod* method)
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
// System.Void Enenmy/<TryDestroy>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryDestroyU3Ed__8__ctor_mF4772E85FE96871B188FFD1C3A28538C4B63B49B (U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Enenmy/<TryDestroy>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryDestroyU3Ed__8_System_IDisposable_Dispose_mE6876730302630F36B81C28178391DCD364A29AD (U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Enenmy/<TryDestroy>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTryDestroyU3Ed__8_MoveNext_m07F26DA9DFDA5ECEEE1BF11BD13D343DB9CB7F2B (U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_004a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isDestroy = true;
		Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_isDestroy_5((bool)1);
		// GameManager.instance.ScoreUp(50);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_5);
		GameManager_ScoreUp_mD88A09232D3E721AB796869528619AEACEDFFEC7(L_5, ((int32_t)50), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.22f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.219999999f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy(gameObject);
		Enenmy_tCF5DDB27A2DE343048FC45354E09878C21F86DA7 * L_7 = V_1;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Enenmy/<TryDestroy>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTryDestroyU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBC021A002087E261E938F0883918B8E1C9C3C503 (U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Enenmy/<TryDestroy>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryDestroyU3Ed__8_System_Collections_IEnumerator_Reset_m4C81010C3E52F446C3763E731D0E382BB24E7599 (U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTryDestroyU3Ed__8_System_Collections_IEnumerator_Reset_m4C81010C3E52F446C3763E731D0E382BB24E7599_RuntimeMethod_var)));
	}
}
// System.Object Enenmy/<TryDestroy>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTryDestroyU3Ed__8_System_Collections_IEnumerator_get_Current_m32D8962DB2747B8BDCBF0ACC4BD887CB2B8B9B46 (U3CTryDestroyU3Ed__8_tE43E13D8A289D90BE034E32C9BEEB8CADCD7D7E1 * __this, const RuntimeMethod* method)
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
// System.Void GameManager/<PlayerHitEffect>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayerHitEffectU3Ed__40__ctor_m90DCC8BFBFC95B0848E0CB39A7101E4AD3235361 (U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<PlayerHitEffect>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayerHitEffectU3Ed__40_System_IDisposable_Dispose_m99B8E33EC175E0145984C085AB8139664B67517F (U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<PlayerHitEffect>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlayerHitEffectU3Ed__40_MoveNext_m06D691E266892E5C01544D716D70DF521FC2F126 (U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// HitEffect.SetActive(true);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_HitEffect_26();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		// HitEffect.SetActive(false);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = V_1;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_HitEffect_26();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<PlayerHitEffect>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlayerHitEffectU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1E91F5C84ED9A3D69E26F88D3F4C8C2E28190762 (U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<PlayerHitEffect>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayerHitEffectU3Ed__40_System_Collections_IEnumerator_Reset_m1C1703A8AEB809AD3D23F874B417E5109C6B82D6 (U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlayerHitEffectU3Ed__40_System_Collections_IEnumerator_Reset_m1C1703A8AEB809AD3D23F874B417E5109C6B82D6_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<PlayerHitEffect>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlayerHitEffectU3Ed__40_System_Collections_IEnumerator_get_Current_m1DA02D6E39F3A5C94E957346F91ED012EBF4C261 (U3CPlayerHitEffectU3Ed__40_t4072F1F76FFD4FD3BCAA68A436800595439A7581 * __this, const RuntimeMethod* method)
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
// System.Void GameManager/<TextRead>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextReadU3Ed__37__ctor_m57D2E5C08E0819D5FCBEE8B09456948779E9965C (U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<TextRead>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextReadU3Ed__37_System_IDisposable_Dispose_m5C20A18EE285C5C3280730A6F20D51ED84D79A6A (U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<TextRead>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTextReadU3Ed__37_MoveNext_mC389E1B4A1010C67D2E72E54CC32F5F03B02DC9D (U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_009d;
			}
			case 2:
			{
				goto IL_010d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float[] random = new float[13];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		__this->set_U3CrandomU3E5__2_3(L_3);
		// for (int i = 0; i < random.Length; i++)
		V_3 = 0;
		goto IL_0055;
	}

IL_003a:
	{
		// random[i] = Random.Range(0.28f, 0.82f);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get_U3CrandomU3E5__2_3();
		int32_t L_5 = V_3;
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.280000001f), (0.819999993f), /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)L_6);
		// for (int i = 0; i < random.Length; i++)
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0055:
	{
		// for (int i = 0; i < random.Length; i++)
		int32_t L_8 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = __this->get_U3CrandomU3E5__2_3();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		// for (int i = 0; i < EnemtTxt.Length; i++)
		__this->set_U3CiU3E5__3_4(0);
		goto IL_00b6;
	}

IL_0069:
	{
		// animTxt[i].SetActive(true);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = V_1;
		NullCheck(L_10);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = L_10->get_animTxt_23();
		int32_t L_12 = __this->get_U3CiU3E5__3_4();
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(random[i]);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = __this->get_U3CrandomU3E5__2_3();
		int32_t L_16 = __this->get_U3CiU3E5__3_4();
		NullCheck(L_15);
		int32_t L_17 = L_16;
		float L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_19 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_19, L_18, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_19);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < EnemtTxt.Length; i++)
		int32_t L_20 = __this->get_U3CiU3E5__3_4();
		V_4 = L_20;
		int32_t L_21 = V_4;
		__this->set_U3CiU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
	}

IL_00b6:
	{
		// for (int i = 0; i < EnemtTxt.Length; i++)
		int32_t L_22 = __this->get_U3CiU3E5__3_4();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = L_23->get_EnemtTxt_22();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)L_25)))
		{
			goto IL_0069;
		}
	}
	{
		// isDone = true;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_26 = V_1;
		NullCheck(L_26);
		L_26->set_isDone_16((bool)1);
		// GoImg.SetActive(false);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_27 = V_1;
		NullCheck(L_27);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = L_27->get_GoImg_6();
		NullCheck(L_28);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_28, (bool)0, /*hidden argument*/NULL);
		// StopImg.SetActive(true);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_29 = V_1;
		NullCheck(L_29);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = L_29->get_StopImg_7();
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)1, /*hidden argument*/NULL);
		// float randomSet = Random.Range(0.5f, 1.5f);
		float L_31;
		L_31 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.5f), (1.5f), /*hidden argument*/NULL);
		V_2 = L_31;
		// yield return new WaitForSeconds(randomSet);
		float L_32 = V_2;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_33 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_33, L_32, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_33);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_010d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GoImg.SetActive(true);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_34 = V_1;
		NullCheck(L_34);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = L_34->get_GoImg_6();
		NullCheck(L_35);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_35, (bool)1, /*hidden argument*/NULL);
		// StopImg.SetActive(false);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_36 = V_1;
		NullCheck(L_36);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = L_36->get_StopImg_7();
		NullCheck(L_37);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_37, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < EnemtTxt.Length; i++)
		V_5 = 0;
		goto IL_0146;
	}

IL_0131:
	{
		// animTxt[i].SetActive(false);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_38 = V_1;
		NullCheck(L_38);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_39 = L_38->get_animTxt_23();
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_42, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < EnemtTxt.Length; i++)
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_0146:
	{
		// for (int i = 0; i < EnemtTxt.Length; i++)
		int32_t L_44 = V_5;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_45 = V_1;
		NullCheck(L_45);
		String_t* L_46 = L_45->get_EnemtTxt_22();
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_46, /*hidden argument*/NULL);
		if ((((int32_t)L_44) < ((int32_t)L_47)))
		{
			goto IL_0131;
		}
	}
	{
		// isDone = false;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_48 = V_1;
		NullCheck(L_48);
		L_48->set_isDone_16((bool)0);
		// isRead = false;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_49 = V_1;
		NullCheck(L_49);
		L_49->set_isRead_15((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<TextRead>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTextReadU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC26BABE417FE7F219846AF7F899D6C01351171B0 (U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<TextRead>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextReadU3Ed__37_System_Collections_IEnumerator_Reset_m95A4876C12477C532CA810B7B1E95ABD28E60B69 (U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTextReadU3Ed__37_System_Collections_IEnumerator_Reset_m95A4876C12477C532CA810B7B1E95ABD28E60B69_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<TextRead>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTextReadU3Ed__37_System_Collections_IEnumerator_get_Current_mF2EB6D677E8F2281AFA3254D8B88071A80D502E5 (U3CTextReadU3Ed__37_tD54BB2C6B01C32E439C1AD4A952F45C17CAC7427 * __this, const RuntimeMethod* method)
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
// System.Void PlayerController/<TryAttack>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryAttackU3Ed__8__ctor_m90C0A4CED3B762BDEE3658A89A4A70F8112F9C06 (U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerController/<TryAttack>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryAttackU3Ed__8_System_IDisposable_Dispose_m703BD23D2BECB1E6FC18306CDC881DF9516B5147 (U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerController/<TryAttack>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTryAttackU3Ed__8_MoveNext_mB2869E3E7C5C481C24AC1172709DB7A317A5C61E (U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5969E313289BEDCF05BB2D9BC242CF426926E3C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96187DB4339B8D11BB0C0B47D11D4978EB6B44D0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_007b;
			}
			case 2:
			{
				goto IL_00a7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// attackPos = !attackPos;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_3 = V_1;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_attackPos_8();
		NullCheck(L_3);
		L_3->set_attackPos_8((bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0));
		// if(attackPos)
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = L_6->get_attackPos_8();
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// anim.SetTrigger("doAttackLeft");
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_8 = V_1;
		NullCheck(L_8);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = L_8->get_anim_7();
		NullCheck(L_9);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_9, _stringLiteral96187DB4339B8D11BB0C0B47D11D4978EB6B44D0, /*hidden argument*/NULL);
		// }
		goto IL_0062;
	}

IL_0052:
	{
		// anim.SetTrigger("doAttackRight");
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_10 = V_1;
		NullCheck(L_10);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = L_10->get_anim_7();
		NullCheck(L_11);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_11, _stringLiteral5969E313289BEDCF05BB2D9BC242CF426926E3C1, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// yield return new WaitForSeconds(0.15f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_12, (0.150000006f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_007b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AttackArea.enabled = true;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_13 = V_1;
		NullCheck(L_13);
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_14 = L_13->get_AttackArea_5();
		NullCheck(L_14);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_14, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.27f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_15 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_15, (0.270000011f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00a7:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AttackArea.enabled = false;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_16 = V_1;
		NullCheck(L_16);
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_17 = L_16->get_AttackArea_5();
		NullCheck(L_17);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_17, (bool)0, /*hidden argument*/NULL);
		// isAttack = false;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_18 = V_1;
		NullCheck(L_18);
		L_18->set_isAttack_4((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<TryAttack>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTryAttackU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB1E45356AB414F71F5489EAA0AE28E0B209D5B19 (U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerController/<TryAttack>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryAttackU3Ed__8_System_Collections_IEnumerator_Reset_m759689F4BD68AF510E0027257F8FEF889182F519 (U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTryAttackU3Ed__8_System_Collections_IEnumerator_Reset_m759689F4BD68AF510E0027257F8FEF889182F519_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<TryAttack>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTryAttackU3Ed__8_System_Collections_IEnumerator_get_Current_mD9DCB5A2B7855DA70D09CC5E3BFD223BA64B3FFE (U3CTryAttackU3Ed__8_tCCE203F813BF5F177A391689302826D7C3774621 * __this, const RuntimeMethod* method)
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
// System.Void PlayerController/<Walking>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkingU3Ed__10__ctor_mD2C081C0A08CB378C7424B9DA07721E6F3166C87 (U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerController/<Walking>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkingU3Ed__10_System_IDisposable_Dispose_m4C091BD1871B9E5CF98B835287906221A02D8075 (U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerController/<Walking>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWalkingU3Ed__10_MoveNext_mFE8C5950A96FC330C573B6A2D9A8EF4622F6EC50 (U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// anim.SetBool("isWalk", true);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_4 = V_1;
		NullCheck(L_4);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = L_4->get_anim_7();
		NullCheck(L_5);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_5, _stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.35f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.349999994f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0048:
	{
		__this->set_U3CU3E1__state_0((-1));
		// anim.SetBool("isWalk", false);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_7 = V_1;
		NullCheck(L_7);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = L_7->get_anim_7();
		NullCheck(L_8);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_8, _stringLiteralB194BFA24ADB16F4A943D2120B1D2D8EF70C411E, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<Walking>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWalkingU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6306806DAC35A862CD7CF4D7FBB0CFE7601D6E80 (U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerController/<Walking>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWalkingU3Ed__10_System_Collections_IEnumerator_Reset_m9888FD12D779DC732ADBF759854CC327A3C4517C (U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWalkingU3Ed__10_System_Collections_IEnumerator_Reset_m9888FD12D779DC732ADBF759854CC327A3C4517C_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<Walking>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWalkingU3Ed__10_System_Collections_IEnumerator_get_Current_mCB054AFE165A5BCF0684DC7E0762C3FBD5EF157A (U3CWalkingU3Ed__10_t71C3754E9652DE528A89411A92F5C4C71088B47F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
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
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->get_m_IsOn_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
