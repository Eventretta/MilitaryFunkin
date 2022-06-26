#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedSprite
#include <AttachedSprite.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CreditsState
#include <CreditsState.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_api_FlxGameJolt
#include <flixel/addons/api/FlxGameJolt.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1bf4423a091ce525_23_new,"CreditsState","new",0xfd580e29,"CreditsState.new","CreditsState.hx",23,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_39_create,"CreditsState","create",0x506b2cd3,"CreditsState.create","CreditsState.hx",39,0xdb40a967)
static const ::String _hx_array_data_3b81c5b7_7[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_3b81c5b7_8[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_3b81c5b7_9[] = {
	HX_("VS MILITAR MAN",03,06,3b,b1),
};
static const ::String _hx_array_data_3b81c5b7_10[] = {
	HX_("EventyCodes",e7,de,9d,41),HX_("eventretta",b4,b2,f6,cf),HX_("Main Programmer and Direct",15,c6,a2,f5),HX_("",00,00,00,00),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_11[] = {
	HX_("thomicfee",da,89,67,25),HX_("recliner",ae,42,c5,ea),HX_("Musician",31,22,59,e7),HX_("",00,00,00,00),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_12[] = {
	HX_("GoldenFoxy",53,22,b7,11),HX_("goldenfoxy",13,f2,2c,30),HX_("Charter",ab,90,cc,9c),HX_("",00,00,00,00),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_13[] = {
	HX_("[Cartoon Cat]",94,6c,af,74),HX_("",00,00,00,00),HX_("Coder",85,c6,83,dd),HX_("",00,00,00,00),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_14[] = {
	HX_("Nuke Dude",31,6c,3e,c7),HX_("nuke",a1,9d,0e,49),HX_("Artist",e7,66,dd,ed),HX_("",00,00,00,00),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_15[] = {
	HX_("Kiwi Bird",29,5e,20,2b),HX_("kiwi",30,e9,09,47),HX_("Charting, Music ,Playtest and Co-direct",40,6d,85,0b),HX_("",00,00,00,00),HX_("4444444",b4,c7,47,50),
};
static const ::String _hx_array_data_3b81c5b7_16[] = {
	HX_("Meeby",04,31,ea,98),HX_("meby",2f,3b,59,48),HX_("Charting",e4,0a,35,96),HX_("",00,00,00,00),HX_("4444444",b4,c7,47,50),
};
static const ::String _hx_array_data_3b81c5b7_17[] = {
	HX_("Punkinator7",3a,27,ca,e3),HX_("",00,00,00,00),HX_("Coding (some events and notetypes only)",6e,4d,ed,14),HX_("",00,00,00,00),HX_("4444444",b4,c7,47,50),
};
static const ::String _hx_array_data_3b81c5b7_18[] = {
	HX_("dominykasc",58,5c,4d,ea),HX_("trullymask",0e,bf,b8,e2),HX_("Icons and Art",14,dd,69,20),HX_("",00,00,00,00),HX_("4444444",b4,c7,47,50),
};
static const ::String _hx_array_data_3b81c5b7_19[] = {
	HX_("Kimyou",50,6c,3f,ba),HX_("kim",0f,8d,51,00),HX_("Pixel Art",89,eb,db,85),HX_("",00,00,00,00),HX_("4444444",b4,c7,47,50),
};
static const ::String _hx_array_data_3b81c5b7_20[] = {
	HX_("AKaton",bc,0e,b6,6c),HX_("",00,00,00,00),HX_("Music",85,40,88,a3),HX_("",00,00,00,00),HX_("4444444",b4,c7,47,50),
};
static const ::String _hx_array_data_3b81c5b7_21[] = {
	HX_("5uaty",86,b5,dc,d1),HX_("five-uaty",0c,e5,78,45),HX_("Coder",85,c6,83,dd),HX_("",00,00,00,00),HX_("4444444",b4,c7,47,50),
};
static const ::String _hx_array_data_3b81c5b7_22[] = {
	HX_("MrCatProduction",ea,b2,01,38),HX_("cat",16,74,4b,00),HX_("Charting",e4,0a,35,96),HX_("",00,00,00,00),HX_("4444444",b4,c7,47,50),
};
static const ::String _hx_array_data_3b81c5b7_23[] = {
	HX_("I_Have_Autism",44,b0,68,47),HX_("",00,00,00,00),HX_("Charting",e4,0a,35,96),HX_("",00,00,00,00),HX_("4444444",b4,c7,47,50),
};
static const ::String _hx_array_data_3b81c5b7_24[] = {
	HX_("mrnoob467",9c,8c,7f,b3),HX_("noob",94,13,0a,49),HX_("Coding",ca,f3,cc,f5),HX_("",00,00,00,00),HX_("4444444",b4,c7,47,50),
};
static const ::String _hx_array_data_3b81c5b7_25[] = {
	HX_("MatheusDeSouza",24,70,43,9a),HX_("matty",25,58,23,03),HX_("Coding",ca,f3,cc,f5),HX_("",00,00,00,00),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_26[] = {
	HX_("Ez",95,3c,00,00),HX_("",00,00,00,00),HX_("Voice Acter",11,cd,bf,30),HX_("",00,00,00,00),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_27[] = {
	HX_("ClasD",e9,e7,85,db),HX_("",00,00,00,00),HX_("Art",43,b6,31,00),HX_("",00,00,00,00),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_28[] = {
	HX_("Ruska Panda",20,77,5c,b1),HX_("",00,00,00,00),HX_("Art and Animation",be,c9,72,c6),HX_("",00,00,00,00),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_29[] = {
	HX_("Trullybug",32,bf,13,5f),HX_("trullymask",0e,bf,b8,e2),HX_("Animation",e4,ce,07,ed),HX_("",00,00,00,00),HX_("4444444",b4,c7,47,50),
};
static const ::String _hx_array_data_3b81c5b7_30[] = {
	HX_("Spensem",f5,94,f3,b3),HX_("",00,00,00,00),HX_("Remixes (not added yet)",ad,ab,4c,4f),HX_("",00,00,00,00),HX_("4444444",b4,c7,47,50),
};
static const ::String _hx_array_data_3b81c5b7_31[] = {
	HX_("PolybiusProxy",5d,cc,61,1d),HX_("polybiusproxy",9d,0c,44,42),HX_("Coder",85,c6,83,dd),HX_("https://twitter.com/polybiusproxy",a5,e1,66,7e),HX_("FFEAA6",71,21,d5,78),
};
static const ::String _hx_array_data_3b81c5b7_32[] = {
	HX_("Amaruq",99,48,54,00),HX_("",00,00,00,00),HX_("Voice Acter, Lyrics Write",38,c0,37,82),HX_("",00,00,00,00),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_33[] = {
	HX_("Nathanslayerr",80,53,33,35),HX_("",00,00,00,00),HX_("Voice Acter",11,cd,bf,30),HX_("",00,00,00,00),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_34[] = {
	HX_("Cougar MacDowall",13,f3,79,b6),HX_("",00,00,00,00),HX_("Voice Acter",11,cd,bf,30),HX_("",00,00,00,00),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_35[] = {
	HX_("OLD MEMBERS",20,d8,70,a3),
};
static const ::String _hx_array_data_3b81c5b7_36[] = {
	HX_("Crap Dispenser",f3,46,ae,bb),HX_("",00,00,00,00),HX_("Ex-Artist",a1,12,da,e7),HX_("",00,00,00,00),HX_("FFEAA6",71,21,d5,78),
};
static const ::String _hx_array_data_3b81c5b7_37[] = {
	HX_("EzequielRealMan",c0,00,fd,6c),HX_("",00,00,00,00),HX_("Ex-Musician",6b,b0,a3,da),HX_("",00,00,00,00),HX_("FFEAA6",71,21,d5,78),
};
static const ::String _hx_array_data_3b81c5b7_38[] = {
	HX_("Military Special Thanks",63,09,95,1f),
};
static const ::String _hx_array_data_3b81c5b7_39[] = {
	HX_("ninjamuffin99",f7,4c,e5,00),HX_("ninjamuffin99",f7,4c,e5,00),HX_("Let me use Tankman for my mod (usually \n Tankman is not allowed)",94,b4,4d,e7),HX_("https://twitter.com/ninja_muffin99",7a,ac,b6,89),HX_("F73838",3b,b6,e5,c9),
};
static const ::String _hx_array_data_3b81c5b7_40[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_3b81c5b7_41[] = {
	HX_("Psych Engine Team",36,ef,98,3e),
};
static const ::String _hx_array_data_3b81c5b7_42[] = {
	HX_("Shadow Mario",c4,01,05,71),HX_("shadowmario",24,76,c0,e6),HX_("Main Programmer of Psych Engine",6d,91,ad,35),HX_("https://twitter.com/Shadow_Mario_",a2,98,47,eb),HX_("444444",80,a8,eb,dd),
};
static const ::String _hx_array_data_3b81c5b7_43[] = {
	HX_("RiverOaken",36,1d,dd,33),HX_("riveroaken",36,a9,fe,a9),HX_("Main Artist/Animator of Psych Engine",f8,d1,00,db),HX_("https://twitter.com/river_oaken",17,26,7a,b0),HX_("C30085",8d,9d,37,47),
};
static const ::String _hx_array_data_3b81c5b7_44[] = {
	HX_("bb-panzu",cb,ef,e8,8b),HX_("bb-panzu",cb,ef,e8,8b),HX_("Additional Programmer of Psych Engine",7f,3f,a6,5a),HX_("https://twitter.com/bbsub3",6b,b6,13,17),HX_("389A58",70,8d,82,c8),
};
static const ::String _hx_array_data_3b81c5b7_45[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_3b81c5b7_46[] = {
	HX_("Engine Contributors",56,17,70,dc),
};
static const ::String _hx_array_data_3b81c5b7_47[] = {
	HX_("shubs",11,04,2c,7c),HX_("shubs",11,04,2c,7c),HX_("New Input System Programmer",11,7a,dd,e2),HX_("https://twitter.com/yoshubs",83,11,b4,00),HX_("4494E6",6c,c8,39,e1),
};
static const ::String _hx_array_data_3b81c5b7_48[] = {
	HX_("SqirraRNG",35,93,90,2a),HX_("gedehari",8f,9f,74,d3),HX_("Chart Editor's Sound Waveform base",be,9c,e4,cf),HX_("https://twitter.com/gedehari",87,e7,51,35),HX_("FF9300",9a,e3,db,70),
};
static const ::String _hx_array_data_3b81c5b7_49[] = {
	HX_("iFlicky",97,81,42,80),HX_("iflicky",77,0d,ae,4b),HX_("Delay/Combo Menu Song Composer\nand Dialogue Sounds",81,24,34,43),HX_("https://twitter.com/flicky_i",f0,22,3f,fa),HX_("C549DB",d5,7f,b0,70),
};
static const ::String _hx_array_data_3b81c5b7_50[] = {
	HX_("PolybiusProxy",5d,cc,61,1d),HX_("polybiusproxy",9d,0c,44,42),HX_(".MP4 Video Loader Extension and Coder for Military",94,79,31,34),HX_("https://twitter.com/polybiusproxy",a5,e1,66,7e),HX_("FFEAA6",71,21,d5,78),
};
static const ::String _hx_array_data_3b81c5b7_51[] = {
	HX_("Keoiki",f2,5f,eb,6d),HX_("keoiki",d2,eb,56,39),HX_("Note Splash Animations",7a,27,38,e2),HX_("https://twitter.com/Keoiki_",35,73,4e,3b),HX_("FFFFFF",c0,27,82,79),
};
static const ::String _hx_array_data_3b81c5b7_52[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_3b81c5b7_53[] = {
	HX_("Funkin' Crew",ab,00,2d,30),
};
static const ::String _hx_array_data_3b81c5b7_54[] = {
	HX_("ninjamuffin99",f7,4c,e5,00),HX_("ninjamuffin99",f7,4c,e5,00),HX_("Programmer of Friday Night Funkin'",2c,f9,c3,b2),HX_("https://twitter.com/ninja_muffin99",7a,ac,b6,89),HX_("F73838",3b,b6,e5,c9),
};
static const ::String _hx_array_data_3b81c5b7_55[] = {
	HX_("PhantomArcade",9d,2d,b3,ef),HX_("phantomarcade",9d,69,2e,73),HX_("Animator of Friday Night Funkin'",7d,a9,23,e4),HX_("https://twitter.com/PhantomArcade3K",9d,e2,57,4f),HX_("FFBB1B",f1,31,da,76),
};
static const ::String _hx_array_data_3b81c5b7_56[] = {
	HX_("evilsk8r",66,38,e0,32),HX_("evilsk8r",66,38,e0,32),HX_("Artist of Friday Night Funkin'",dd,f8,e7,48),HX_("https://twitter.com/evilsk8r",5e,80,bd,94),HX_("53E52C",7f,d1,1d,bc),
};
static const ::String _hx_array_data_3b81c5b7_57[] = {
	HX_("kawaisprite",0e,de,66,45),HX_("kawaisprite",0e,de,66,45),HX_("Composer of Friday Night Funkin'",36,08,52,24),HX_("https://twitter.com/kawaisprite",16,e1,bc,3d),HX_("6475F3",09,d7,9e,ac),
};
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_186_update,"CreditsState","update",0x5b614be0,"CreditsState.update","CreditsState.hx",186,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_226_changeSelection,"CreditsState","changeSelection",0x5dc3e005,"CreditsState.changeSelection","CreditsState.hx",226,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_244_changeSelection,"CreditsState","changeSelection",0x5dc3e005,"CreditsState.changeSelection","CreditsState.hx",244,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_266_getCurrentBGColor,"CreditsState","getCurrentBGColor",0xd6c58504,"CreditsState.getCurrentBGColor","CreditsState.hx",266,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_275_unselectableCheck,"CreditsState","unselectableCheck",0x4473c3a2,"CreditsState.unselectableCheck","CreditsState.hx",275,0xdb40a967)

void CreditsState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_23_new)
HXLINE(  31)		this->creditsStuff = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  30)		this->iconArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  27)		this->downtime = 0;
HXLINE(  26)		this->unlockIntended = false;
HXLINE(  25)		this->curSelected = -1;
HXLINE(  23)		super::__construct(TransIn,TransOut);
            	}

Dynamic CreditsState_obj::__CreateEmpty() { return new CreditsState_obj; }

void *CreditsState_obj::_hx_vtable = 0;

Dynamic CreditsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CreditsState_obj > _hx_result = new CreditsState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CreditsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x24631877) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x24631877;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void CreditsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_1bf4423a091ce525_39_create)
HXLINE(  42)		::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE(  45)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  45)		::String library = null();
HXDLIN(  45)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  45)		 ::Dynamic _hx_tmp1;
HXDLIN(  45)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  45)			_hx_tmp1 = imageToReturn;
            		}
            		else {
HXLINE(  45)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  45)		this->bg = _hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE(  46)		this->add(this->bg);
HXLINE(  48)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  49)		this->add(this->grpOptions);
HXLINE(  53)		{
HXLINE(  53)			int _g = 0;
HXDLIN(  53)			::Array< ::String > _g1 = ::Paths_obj::getModDirectories();
HXDLIN(  53)			while((_g < _g1->length)){
HXLINE(  53)				::String folder = _g1->__get(_g);
HXDLIN(  53)				_g = (_g + 1);
HXLINE(  55)				::String key = (folder + HX_("/data/credits.txt",a6,fd,31,d1));
HXDLIN(  55)				if (::hx::IsNull( key )) {
HXLINE(  55)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  55)				::String creditsFile = (HX_("mods/",9e,2f,58,0c) + key);
HXLINE(  56)				if (::sys::FileSystem_obj::exists(creditsFile)) {
HXLINE(  58)					::Array< ::String > firstarray = ::sys::io::File_obj::getContent(creditsFile).split(HX_("\n",0a,00,00,00));
HXLINE(  59)					{
HXLINE(  59)						int _g = 0;
HXDLIN(  59)						while((_g < firstarray->length)){
HXLINE(  59)							::String i = firstarray->__get(_g);
HXDLIN(  59)							_g = (_g + 1);
HXLINE(  61)							::Array< ::String > arr = ::StringTools_obj::replace(i,HX_("\\n",92,50,00,00),HX_("\n",0a,00,00,00)).split(HX_("::",c0,32,00,00));
HXLINE(  62)							if ((arr->length >= 5)) {
HXLINE(  62)								arr->push(folder);
            							}
HXLINE(  63)							this->creditsStuff->push(arr);
            						}
            					}
HXLINE(  65)					this->creditsStuff->push(::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_7,1));
            				}
            			}
            		}
HXLINE(  68)		::String folder = HX_("",00,00,00,00);
HXLINE(  69)		::String key = HX_("data/credits.txt",77,6f,6e,c6);
HXDLIN(  69)		if (::hx::IsNull( key )) {
HXLINE(  69)			key = HX_("",00,00,00,00);
            		}
HXDLIN(  69)		::String creditsFile = (HX_("mods/",9e,2f,58,0c) + key);
HXLINE(  70)		if (::sys::FileSystem_obj::exists(creditsFile)) {
HXLINE(  72)			::Array< ::String > firstarray = ::sys::io::File_obj::getContent(creditsFile).split(HX_("\n",0a,00,00,00));
HXLINE(  73)			{
HXLINE(  73)				int _g = 0;
HXDLIN(  73)				while((_g < firstarray->length)){
HXLINE(  73)					::String i = firstarray->__get(_g);
HXDLIN(  73)					_g = (_g + 1);
HXLINE(  75)					::Array< ::String > arr = ::StringTools_obj::replace(i,HX_("\\n",92,50,00,00),HX_("\n",0a,00,00,00)).split(HX_("::",c0,32,00,00));
HXLINE(  76)					if ((arr->length >= 5)) {
HXLINE(  76)						arr->push(folder);
            					}
HXLINE(  77)					this->creditsStuff->push(arr);
            				}
            			}
HXLINE(  79)			this->creditsStuff->push(::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_8,1));
            		}
HXLINE(  83)		::Array< ::Dynamic> pisspoop = ::Array_obj< ::Dynamic>::__new(49)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_9,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_10,5))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_11,5))->init(3,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_12,5))->init(4,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_13,5))->init(5,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_14,5))->init(6,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_15,5))->init(7,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_16,5))->init(8,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_17,5))->init(9,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_18,5))->init(10,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_19,5))->init(11,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_20,5))->init(12,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_21,5))->init(13,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_22,5))->init(14,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_23,5))->init(15,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_24,5))->init(16,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_25,5))->init(17,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_26,5))->init(18,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_27,5))->init(19,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_28,5))->init(20,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_29,5))->init(21,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_30,5))->init(22,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_31,5))->init(23,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_32,5))->init(24,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_33,5))->init(25,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_34,5))->init(26,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_35,1))->init(27,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_36,5))->init(28,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_37,5))->init(29,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_38,1))->init(30,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_39,5))->init(31,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_40,1))->init(32,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_41,1))->init(33,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_42,5))->init(34,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_43,5))->init(35,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_44,5))->init(36,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_45,1))->init(37,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_46,1))->init(38,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_47,5))->init(39,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_48,5))->init(40,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_49,5))->init(41,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_50,5))->init(42,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_51,5))->init(43,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_52,1))->init(44,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_53,1))->init(45,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_54,5))->init(46,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_55,5))->init(47,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_56,5))->init(48,::Array_obj< ::String >::fromData( _hx_array_data_3b81c5b7_57,5));
HXLINE( 135)		{
HXLINE( 135)			int _g2 = 0;
HXDLIN( 135)			while((_g2 < pisspoop->length)){
HXLINE( 135)				::Array< ::String > i = pisspoop->__get(_g2).StaticCast< ::Array< ::String > >();
HXDLIN( 135)				_g2 = (_g2 + 1);
HXLINE( 136)				this->creditsStuff->push(i);
            			}
            		}
HXLINE( 139)		{
HXLINE( 139)			int _g3 = 0;
HXDLIN( 139)			int _g4 = this->creditsStuff->length;
HXDLIN( 139)			while((_g3 < _g4)){
HXLINE( 139)				_g3 = (_g3 + 1);
HXDLIN( 139)				int i = (_g3 - 1);
HXLINE( 141)				bool isSelectable = !(this->unselectableCheck(i));
HXLINE( 142)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((70 * i)) ),this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(0),!(isSelectable),false,null(),null());
HXLINE( 143)				optionText->isMenuItem = true;
HXLINE( 144)				optionText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 145)				 ::Alphabet optionText1 = optionText;
HXDLIN( 145)				optionText1->yAdd = (optionText1->yAdd - ( (Float)(70) ));
HXLINE( 146)				if (isSelectable) {
HXLINE( 147)					optionText->set_x((optionText->x - ( (Float)(70) )));
            				}
HXLINE( 149)				optionText->forceX = optionText->x;
HXLINE( 151)				optionText->targetY = ( (Float)(i) );
HXLINE( 152)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
HXLINE( 154)				if (isSelectable) {
HXLINE( 155)					if (::hx::IsNotNull( this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(5) )) {
HXLINE( 157)						::Paths_obj::currentModDirectory = this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(5);
            					}
HXLINE( 160)					 ::AttachedSprite icon =  ::AttachedSprite_obj::__alloc( HX_CTX ,(HX_("credits/",d5,48,ee,de) + this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(1)),null(),null(),null());
HXLINE( 161)					icon->xAdd = (optionText->get_width() + 10);
HXLINE( 162)					icon->sprTracker = optionText;
HXLINE( 165)					this->iconArray->push(icon);
HXLINE( 166)					this->add(icon);
HXLINE( 167)					::Paths_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 169)					if ((this->curSelected == -1)) {
HXLINE( 169)						this->curSelected = i;
            					}
            				}
            			}
            		}
HXLINE( 173)		this->descText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,600,1180,HX_("",00,00,00,00),32,null());
HXLINE( 174)		 ::flixel::text::FlxText _hx_tmp2 = this->descText;
HXDLIN( 174)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 174)		::String _hx_tmp3;
HXDLIN( 174)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 174)			_hx_tmp3 = file;
            		}
            		else {
HXLINE( 174)			_hx_tmp3 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 174)		_hx_tmp2->setFormat(_hx_tmp3,32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 175)		this->descText->scrollFactor->set(null(),null());
HXLINE( 176)		this->descText->set_borderSize(((Float)2.4));
HXLINE( 177)		this->add(this->descText);
HXLINE( 179)		 ::flixel::FlxSprite _hx_tmp4 = this->bg;
HXDLIN( 179)		_hx_tmp4->set_color(( (int)(this->getCurrentBGColor()) ));
HXLINE( 180)		this->intendedColor = this->bg->color;
HXLINE( 181)		this->changeSelection(null());
HXLINE( 182)		this->super::create();
            	}


void CreditsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_1bf4423a091ce525_186_update)
HXLINE( 187)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.7))) {
HXLINE( 189)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 189)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 192)		bool upP = ::PlayerSettings_obj::player1->controls->_ui_upP->check();
HXLINE( 193)		bool downP = ::PlayerSettings_obj::player1->controls->_ui_downP->check();
HXLINE( 195)		if (upP) {
HXLINE( 197)			this->changeSelection(-1);
            		}
HXLINE( 199)		if (downP) {
HXLINE( 201)			this->changeSelection(1);
HXLINE( 202)			 ::CreditsState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 202)			_hx_tmp->downtime = (_hx_tmp->downtime + 1);
HXLINE( 203)			if ((this->downtime >= this->creditsStuff->length)) {
HXLINE( 205)				this->unlockIntended = true;
            			}
            		}
HXLINE( 209)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 211)			if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 212)				this->colorTween->cancel();
            			}
HXLINE( 214)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 214)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 215)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 218)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 220)			::flixel::addons::api::FlxGameJolt_obj::addTrophy(160970,null());
            		}
HXLINE( 222)		this->super::update(elapsed);
            	}


void CreditsState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_226_changeSelection)
HXDLIN( 226)		 ::CreditsState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 227)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 227)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 228)		while(true){
HXLINE( 229)			 ::CreditsState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 229)			_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 230)			if ((this->curSelected < 0)) {
HXLINE( 231)				this->curSelected = (this->creditsStuff->length - 1);
            			}
HXLINE( 232)			if ((this->curSelected >= this->creditsStuff->length)) {
HXLINE( 233)				this->curSelected = 0;
            			}
HXLINE( 228)			if (!(this->unselectableCheck(this->curSelected))) {
HXLINE( 228)				goto _hx_goto_59;
            			}
            		}
            		_hx_goto_59:;
HXLINE( 236)		int newColor = ( (int)(this->getCurrentBGColor()) );
HXLINE( 237)		if ((newColor != this->intendedColor)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::CreditsState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_244_changeSelection)
HXLINE( 244)				_gthis->colorTween = null();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 238)			if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 239)				this->colorTween->cancel();
            			}
HXLINE( 241)			this->intendedColor = newColor;
HXLINE( 242)			this->colorTween = ::flixel::tweens::FlxTween_obj::color(this->bg,1,this->bg->color,this->intendedColor, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
HXLINE( 249)		int bullShit = 0;
HXLINE( 251)		{
HXLINE( 251)			int _g = 0;
HXDLIN( 251)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 251)			while((_g < _g1->length)){
HXLINE( 251)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 251)				_g = (_g + 1);
HXLINE( 253)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 254)				bullShit = (bullShit + 1);
HXLINE( 256)				if (!(this->unselectableCheck((bullShit - 1)))) {
HXLINE( 257)					item->set_alpha(((Float)0.6));
HXLINE( 258)					if ((item->targetY == 0)) {
HXLINE( 259)						item->set_alpha(( (Float)(1) ));
            					}
            				}
            			}
            		}
HXLINE( 263)		this->descText->set_text(this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(2));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsState_obj,changeSelection,(void))

 ::Dynamic CreditsState_obj::getCurrentBGColor(){
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_266_getCurrentBGColor)
HXLINE( 267)		::String bgColor = this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(4);
HXLINE( 268)		if (!(::StringTools_obj::startsWith(bgColor,HX_("0x",48,2a,00,00)))) {
HXLINE( 269)			bgColor = (HX_("0xFF",88,89,15,20) + bgColor);
            		}
HXLINE( 271)		return ::Std_obj::parseInt(bgColor);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CreditsState_obj,getCurrentBGColor,return )

bool CreditsState_obj::unselectableCheck(int num){
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_275_unselectableCheck)
HXDLIN( 275)		return (this->creditsStuff->__get(num).StaticCast< ::Array< ::String > >()->length <= 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsState_obj,unselectableCheck,return )


::hx::ObjectPtr< CreditsState_obj > CreditsState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< CreditsState_obj > __this = new CreditsState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< CreditsState_obj > CreditsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	CreditsState_obj *__this = (CreditsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CreditsState_obj), true, "CreditsState"));
	*(void **)__this = CreditsState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

CreditsState_obj::CreditsState_obj()
{
}

void CreditsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CreditsState);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(unlockIntended,"unlockIntended");
	HX_MARK_MEMBER_NAME(downtime,"downtime");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(iconArray,"iconArray");
	HX_MARK_MEMBER_NAME(creditsStuff,"creditsStuff");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(descText,"descText");
	HX_MARK_MEMBER_NAME(intendedColor,"intendedColor");
	HX_MARK_MEMBER_NAME(colorTween,"colorTween");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CreditsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(unlockIntended,"unlockIntended");
	HX_VISIT_MEMBER_NAME(downtime,"downtime");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(iconArray,"iconArray");
	HX_VISIT_MEMBER_NAME(creditsStuff,"creditsStuff");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	HX_VISIT_MEMBER_NAME(intendedColor,"intendedColor");
	HX_VISIT_MEMBER_NAME(colorTween,"colorTween");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CreditsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"downtime") ) { return ::hx::Val( downtime ); }
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconArray") ) { return ::hx::Val( iconArray ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"colorTween") ) { return ::hx::Val( colorTween ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creditsStuff") ) { return ::hx::Val( creditsStuff ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { return ::hx::Val( intendedColor ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unlockIntended") ) { return ::hx::Val( unlockIntended ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getCurrentBGColor") ) { return ::hx::Val( getCurrentBGColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CreditsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"downtime") ) { downtime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconArray") ) { iconArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTween") ) { colorTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creditsStuff") ) { creditsStuff=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { intendedColor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unlockIntended") ) { unlockIntended=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CreditsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("unlockIntended",8f,bc,4e,16));
	outFields->push(HX_("downtime",6f,9d,0b,97));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("iconArray",60,3f,53,5f));
	outFields->push(HX_("creditsStuff",7a,9a,7e,73));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("descText",9e,53,35,f3));
	outFields->push(HX_("intendedColor",b8,fb,ff,5a));
	outFields->push(HX_("colorTween",08,c2,dc,3d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CreditsState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CreditsState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(int)offsetof(CreditsState_obj,unlockIntended),HX_("unlockIntended",8f,bc,4e,16)},
	{::hx::fsInt,(int)offsetof(CreditsState_obj,downtime),HX_("downtime",6f,9d,0b,97)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CreditsState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsState_obj,iconArray),HX_("iconArray",60,3f,53,5f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsState_obj,creditsStuff),HX_("creditsStuff",7a,9a,7e,73)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,descText),HX_("descText",9e,53,35,f3)},
	{::hx::fsInt,(int)offsetof(CreditsState_obj,intendedColor),HX_("intendedColor",b8,fb,ff,5a)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CreditsState_obj,colorTween),HX_("colorTween",08,c2,dc,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CreditsState_obj_sStaticStorageInfo = 0;
#endif

static ::String CreditsState_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("unlockIntended",8f,bc,4e,16),
	HX_("downtime",6f,9d,0b,97),
	HX_("grpOptions",f9,45,d8,00),
	HX_("iconArray",60,3f,53,5f),
	HX_("creditsStuff",7a,9a,7e,73),
	HX_("bg",c5,55,00,00),
	HX_("descText",9e,53,35,f3),
	HX_("intendedColor",b8,fb,ff,5a),
	HX_("colorTween",08,c2,dc,3d),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("getCurrentBGColor",7b,19,20,ac),
	HX_("unselectableCheck",19,58,ce,19),
	::String(null()) };

::hx::Class CreditsState_obj::__mClass;

void CreditsState_obj::__register()
{
	CreditsState_obj _hx_dummy;
	CreditsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CreditsState",b7,c5,81,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CreditsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CreditsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CreditsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CreditsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

