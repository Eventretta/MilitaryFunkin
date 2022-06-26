#include <hxcpp.h>

#ifndef INCLUDED_FunkinLua
#include <FunkinLua.h>
#endif
#ifndef INCLUDED_ModchartSprite
#include <ModchartSprite.h>
#endif
#ifndef INCLUDED_ModchartText
#include <ModchartText.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ac4b451d003459d8_41_new,"FunkinLua","new",0x0f3d1459,"FunkinLua.new","FunkinLua.hx",41,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1557_getTextObject,"FunkinLua","getTextObject",0x6333b0bb,"FunkinLua.getTextObject","FunkinLua.hx",1557,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1560_getGroupStuff,"FunkinLua","getGroupStuff",0x11e9e0a4,"FunkinLua.getGroupStuff","FunkinLua.hx",1560,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1572_setGroupStuff,"FunkinLua","setGroupStuff",0x56efc2b0,"FunkinLua.setGroupStuff","FunkinLua.hx",1572,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1585_resetTextTag,"FunkinLua","resetTextTag",0xe26aea85,"FunkinLua.resetTextTag","FunkinLua.hx",1585,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1599_resetSpriteTag,"FunkinLua","resetSpriteTag",0x3513682d,"FunkinLua.resetSpriteTag","FunkinLua.hx",1599,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1614_cancelTween,"FunkinLua","cancelTween",0xb2cc778a,"FunkinLua.cancelTween","FunkinLua.hx",1614,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1621_tweenShit,"FunkinLua","tweenShit",0xb737bc84,"FunkinLua.tweenShit","FunkinLua.hx",1621,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1639_cancelTimer,"FunkinLua","cancelTimer",0xa9918ce4,"FunkinLua.cancelTimer","FunkinLua.hx",1639,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1648_getFlxEaseByString,"FunkinLua","getFlxEaseByString",0x2e3003d9,"FunkinLua.getFlxEaseByString","FunkinLua.hx",1648,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1690_blendModeFromString,"FunkinLua","blendModeFromString",0x22a3cd48,"FunkinLua.blendModeFromString","FunkinLua.hx",1690,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1710_cameraFromString,"FunkinLua","cameraFromString",0x153f0d47,"FunkinLua.cameraFromString","FunkinLua.hx",1710,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1718_luaTrace,"FunkinLua","luaTrace",0x51031f14,"FunkinLua.luaTrace","FunkinLua.hx",1718,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1759_call,"FunkinLua","call",0x3eec4e85,"FunkinLua.call","FunkinLua.hx",1759,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1772_set,"FunkinLua","set",0x0f40df9b,"FunkinLua.set","FunkinLua.hx",1772,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1800_stop,"FunkinLua","stop",0x498e25e9,"FunkinLua.stop","FunkinLua.hx",1800,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_1817_getInstance,"FunkinLua","getInstance",0x7b084744,"FunkinLua.getInstance","FunkinLua.hx",1817,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_42_boot,"FunkinLua","boot",0x3e4dba19,"FunkinLua.boot","FunkinLua.hx",42,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_43_boot,"FunkinLua","boot",0x3e4dba19,"FunkinLua.boot","FunkinLua.hx",43,0x00117937)

void FunkinLua_obj::__construct(::String script){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_41_new)
HXLINE(  52)		this->accessedProps = null();
HXLINE(  50)		this->gonnaClose = false;
HXLINE(  49)		this->scriptName = HX_("",00,00,00,00);
            	}

Dynamic FunkinLua_obj::__CreateEmpty() { return new FunkinLua_obj; }

void *FunkinLua_obj::_hx_vtable = 0;

Dynamic FunkinLua_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FunkinLua_obj > _hx_result = new FunkinLua_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FunkinLua_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x574d0d5f;
}

 ::flixel::text::FlxText FunkinLua_obj::getTextObject(::String name){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1557_getTextObject)
HXDLIN(1557)		if (::PlayState_obj::instance->modchartTexts->exists(name)) {
HXDLIN(1557)			return ( ( ::flixel::text::FlxText)(::PlayState_obj::instance->modchartTexts->get(name)) );
            		}
            		else {
HXDLIN(1557)			return ( ( ::flixel::text::FlxText)(::Reflect_obj::getProperty(::PlayState_obj::instance,name)) );
            		}
HXDLIN(1557)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,getTextObject,return )

 ::Dynamic FunkinLua_obj::getGroupStuff( ::Dynamic leArray,::String variable){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1560_getGroupStuff)
HXLINE(1561)		::Array< ::String > killMe = variable.split(HX_(".",2e,00,00,00));
HXLINE(1562)		if ((killMe->length > 1)) {
HXLINE(1563)			 ::Dynamic coverMeInPiss = ::Reflect_obj::getProperty(leArray,killMe->__get(0));
HXLINE(1564)			{
HXLINE(1564)				int _g = 1;
HXDLIN(1564)				int _g1 = (killMe->length - 1);
HXDLIN(1564)				while((_g < _g1)){
HXLINE(1564)					_g = (_g + 1);
HXDLIN(1564)					int i = (_g - 1);
HXLINE(1565)					coverMeInPiss = ::Reflect_obj::getProperty(coverMeInPiss,killMe->__get(i));
            				}
            			}
HXLINE(1567)			return ::Reflect_obj::getProperty(coverMeInPiss,killMe->__get((killMe->length - 1)));
            		}
HXLINE(1569)		return ::Reflect_obj::getProperty(leArray,variable);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunkinLua_obj,getGroupStuff,return )

void FunkinLua_obj::setGroupStuff( ::Dynamic leArray,::String variable, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1572_setGroupStuff)
HXLINE(1573)		::Array< ::String > killMe = variable.split(HX_(".",2e,00,00,00));
HXLINE(1574)		if ((killMe->length > 1)) {
HXLINE(1575)			 ::Dynamic coverMeInPiss = ::Reflect_obj::getProperty(leArray,killMe->__get(0));
HXLINE(1576)			{
HXLINE(1576)				int _g = 1;
HXDLIN(1576)				int _g1 = (killMe->length - 1);
HXDLIN(1576)				while((_g < _g1)){
HXLINE(1576)					_g = (_g + 1);
HXDLIN(1576)					int i = (_g - 1);
HXLINE(1577)					coverMeInPiss = ::Reflect_obj::getProperty(coverMeInPiss,killMe->__get(i));
            				}
            			}
HXLINE(1579)			::Reflect_obj::setProperty(coverMeInPiss,killMe->__get((killMe->length - 1)),value);
HXLINE(1580)			return;
            		}
HXLINE(1582)		::Reflect_obj::setProperty(leArray,variable,value);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FunkinLua_obj,setGroupStuff,(void))

void FunkinLua_obj::resetTextTag(::String tag){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1585_resetTextTag)
HXLINE(1586)		if (!(::PlayState_obj::instance->modchartTexts->exists(tag))) {
HXLINE(1587)			return;
            		}
HXLINE(1590)		 ::ModchartText pee = ( ( ::ModchartText)(::PlayState_obj::instance->modchartTexts->get(tag)) );
HXLINE(1591)		pee->kill();
HXLINE(1592)		if (pee->wasAdded) {
HXLINE(1593)			::PlayState_obj::instance->remove(pee,true).StaticCast<  ::flixel::FlxBasic >();
            		}
HXLINE(1595)		pee->destroy();
HXLINE(1596)		::PlayState_obj::instance->modchartTexts->remove(tag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,resetTextTag,(void))

void FunkinLua_obj::resetSpriteTag(::String tag){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1599_resetSpriteTag)
HXLINE(1600)		if (!(::PlayState_obj::instance->modchartSprites->exists(tag))) {
HXLINE(1601)			return;
            		}
HXLINE(1604)		 ::ModchartSprite pee = ( ( ::ModchartSprite)(::PlayState_obj::instance->modchartSprites->get(tag)) );
HXLINE(1605)		pee->kill();
HXLINE(1606)		if (pee->wasAdded) {
HXLINE(1607)			::PlayState_obj::instance->remove(pee,true).StaticCast<  ::flixel::FlxBasic >();
            		}
HXLINE(1609)		pee->destroy();
HXLINE(1610)		::PlayState_obj::instance->modchartSprites->remove(tag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,resetSpriteTag,(void))

void FunkinLua_obj::cancelTween(::String tag){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1614_cancelTween)
HXDLIN(1614)		if (::PlayState_obj::instance->modchartTweens->exists(tag)) {
HXLINE(1615)			( ( ::flixel::tweens::FlxTween)(::PlayState_obj::instance->modchartTweens->get(tag)) )->cancel();
HXLINE(1616)			( ( ::flixel::tweens::FlxTween)(::PlayState_obj::instance->modchartTweens->get(tag)) )->destroy();
HXLINE(1617)			::PlayState_obj::instance->modchartTweens->remove(tag);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,cancelTween,(void))

 ::Dynamic FunkinLua_obj::tweenShit(::String tag,::String vars){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1621_tweenShit)
HXLINE(1622)		this->cancelTween(tag);
HXLINE(1623)		::Array< ::String > variables = ::StringTools_obj::replace(vars,HX_(" ",20,00,00,00),HX_("",00,00,00,00)).split(HX_(".",2e,00,00,00));
HXLINE(1624)		 ::Dynamic sexyProp = ::Reflect_obj::getProperty(::PlayState_obj::instance,variables->__get(0));
HXLINE(1625)		if (::PlayState_obj::instance->modchartSprites->exists(variables->__get(0))) {
HXLINE(1626)			sexyProp = ::PlayState_obj::instance->modchartSprites->get(variables->__get(0));
            		}
HXLINE(1628)		if (::PlayState_obj::instance->modchartTexts->exists(variables->__get(0))) {
HXLINE(1629)			sexyProp = ::PlayState_obj::instance->modchartTexts->get(variables->__get(0));
            		}
HXLINE(1632)		{
HXLINE(1632)			int _g = 1;
HXDLIN(1632)			int _g1 = variables->length;
HXDLIN(1632)			while((_g < _g1)){
HXLINE(1632)				_g = (_g + 1);
HXDLIN(1632)				int i = (_g - 1);
HXLINE(1633)				sexyProp = ::Reflect_obj::getProperty(sexyProp,variables->__get(i));
            			}
            		}
HXLINE(1635)		return sexyProp;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunkinLua_obj,tweenShit,return )

void FunkinLua_obj::cancelTimer(::String tag){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1639_cancelTimer)
HXDLIN(1639)		if (::PlayState_obj::instance->modchartTimers->exists(tag)) {
HXLINE(1640)			 ::flixel::util::FlxTimer theTimer = ( ( ::flixel::util::FlxTimer)(::PlayState_obj::instance->modchartTimers->get(tag)) );
HXLINE(1641)			theTimer->cancel();
HXLINE(1642)			theTimer->destroy();
HXLINE(1643)			::PlayState_obj::instance->modchartTimers->remove(tag);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,cancelTimer,(void))

 ::Dynamic FunkinLua_obj::getFlxEaseByString(::String __o_ease){
            		::String ease = __o_ease;
            		if (::hx::IsNull(__o_ease)) ease = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1648_getFlxEaseByString)
HXLINE(1649)		::String _hx_switch_0 = ::StringTools_obj::trim(ease.toLowerCase());
            		if (  (_hx_switch_0==HX_("backin",cc,4d,99,4a)) ){
HXLINE(1650)			return ::flixel::tweens::FlxEase_obj::backIn_dyn();
HXDLIN(1650)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("backinout",42,fa,a0,07)) ){
HXLINE(1651)			return ::flixel::tweens::FlxEase_obj::backInOut_dyn();
HXDLIN(1651)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("backout",c7,58,8f,fb)) ){
HXLINE(1652)			return ::flixel::tweens::FlxEase_obj::backOut_dyn();
HXDLIN(1652)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("bouncein",6d,53,b0,4c)) ){
HXLINE(1653)			return ::flixel::tweens::FlxEase_obj::bounceIn_dyn();
HXDLIN(1653)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("bounceinout",41,6f,66,e6)) ){
HXLINE(1654)			return ::flixel::tweens::FlxEase_obj::bounceInOut_dyn();
HXDLIN(1654)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("bounceout",06,40,9d,cd)) ){
HXLINE(1655)			return ::flixel::tweens::FlxEase_obj::bounceOut_dyn();
HXDLIN(1655)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("circin",7c,6f,0d,56)) ){
HXLINE(1656)			return ::flixel::tweens::FlxEase_obj::circIn_dyn();
HXDLIN(1656)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("circinout",92,06,0d,e1)) ){
HXLINE(1657)			return ::flixel::tweens::FlxEase_obj::circInOut_dyn();
HXDLIN(1657)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("circout",17,b1,b8,f5)) ){
HXLINE(1658)			return ::flixel::tweens::FlxEase_obj::circOut_dyn();
HXDLIN(1658)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("cubein",1a,80,4a,34)) ){
HXLINE(1659)			return ::flixel::tweens::FlxEase_obj::cubeIn_dyn();
HXDLIN(1659)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("cubeinout",b4,ac,c9,c2)) ){
HXLINE(1660)			return ::flixel::tweens::FlxEase_obj::cubeInOut_dyn();
HXDLIN(1660)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("cubeout",b9,2a,ea,8c)) ){
HXLINE(1661)			return ::flixel::tweens::FlxEase_obj::cubeOut_dyn();
HXDLIN(1661)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("elasticin",fa,3c,61,27)) ){
HXLINE(1662)			return ::flixel::tweens::FlxEase_obj::elasticIn_dyn();
HXDLIN(1662)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("elasticinout",d4,3b,a0,39)) ){
HXLINE(1663)			return ::flixel::tweens::FlxEase_obj::elasticInOut_dyn();
HXDLIN(1663)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("elasticout",d9,b1,b8,4d)) ){
HXLINE(1664)			return ::flixel::tweens::FlxEase_obj::elasticOut_dyn();
HXDLIN(1664)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("expoin",97,89,7d,c4)) ){
HXLINE(1665)			return ::flixel::tweens::FlxEase_obj::expoIn_dyn();
HXDLIN(1665)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("expoinout",57,ef,01,5a)) ){
HXLINE(1666)			return ::flixel::tweens::FlxEase_obj::expoInOut_dyn();
HXDLIN(1666)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("expoout",9c,6e,5f,29)) ){
HXLINE(1667)			return ::flixel::tweens::FlxEase_obj::expoOut_dyn();
HXDLIN(1667)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("quadin",6c,94,9f,cc)) ){
HXLINE(1668)			return ::flixel::tweens::FlxEase_obj::quadIn_dyn();
HXDLIN(1668)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("quadinout",a2,97,0c,bc)) ){
HXLINE(1669)			return ::flixel::tweens::FlxEase_obj::quadInOut_dyn();
HXDLIN(1669)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("quadout",27,de,06,3f)) ){
HXLINE(1670)			return ::flixel::tweens::FlxEase_obj::quadOut_dyn();
HXDLIN(1670)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("quartin",a4,9b,4b,48)) ){
HXLINE(1671)			return ::flixel::tweens::FlxEase_obj::quartIn_dyn();
HXDLIN(1671)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("quartinout",6a,e3,62,99)) ){
HXLINE(1672)			return ::flixel::tweens::FlxEase_obj::quartInOut_dyn();
HXDLIN(1672)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("quartout",ef,27,e1,f9)) ){
HXLINE(1673)			return ::flixel::tweens::FlxEase_obj::quartOut_dyn();
HXDLIN(1673)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("quintin",30,65,db,e0)) ){
HXLINE(1674)			return ::flixel::tweens::FlxEase_obj::quintIn_dyn();
HXDLIN(1674)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("quintinout",5e,99,a0,bc)) ){
HXLINE(1675)			return ::flixel::tweens::FlxEase_obj::quintInOut_dyn();
HXDLIN(1675)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("quintout",e3,b8,21,df)) ){
HXLINE(1676)			return ::flixel::tweens::FlxEase_obj::quintOut_dyn();
HXDLIN(1676)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("sinein",72,df,1f,b9)) ){
HXLINE(1677)			return ::flixel::tweens::FlxEase_obj::sineIn_dyn();
HXDLIN(1677)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("sineinout",5c,74,84,36)) ){
HXLINE(1678)			return ::flixel::tweens::FlxEase_obj::sineInOut_dyn();
HXDLIN(1678)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("sineout",61,38,c8,42)) ){
HXLINE(1679)			return ::flixel::tweens::FlxEase_obj::sineOut_dyn();
HXDLIN(1679)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("smootherstepin",8c,7c,27,7b)) ){
HXLINE(1683)			return ::flixel::tweens::FlxEase_obj::smootherStepIn_dyn();
HXDLIN(1683)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("smootherstepinout",82,83,8c,0a)) ){
HXLINE(1684)			return ::flixel::tweens::FlxEase_obj::smootherStepInOut_dyn();
HXDLIN(1684)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("smootherstepout",07,12,6a,47)) ){
HXLINE(1685)			return ::flixel::tweens::FlxEase_obj::smootherStepOut_dyn();
HXDLIN(1685)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("smoothstepin",df,0c,da,16)) ){
HXLINE(1680)			return ::flixel::tweens::FlxEase_obj::smoothStepIn_dyn();
HXDLIN(1680)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("smoothstepinout",0f,a9,b0,af)) ){
HXLINE(1681)			return ::flixel::tweens::FlxEase_obj::smoothStepInOut_dyn();
HXDLIN(1681)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==HX_("smoothstepout",54,ca,f5,e7)) ){
HXLINE(1682)			return ::flixel::tweens::FlxEase_obj::smoothStepInOut_dyn();
HXDLIN(1682)			goto _hx_goto_12;
            		}
            		_hx_goto_12:;
HXLINE(1687)		return ::flixel::tweens::FlxEase_obj::linear_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,getFlxEaseByString,return )

 ::Dynamic FunkinLua_obj::blendModeFromString(::String blend){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1690_blendModeFromString)
HXLINE(1691)		::String _hx_switch_0 = ::StringTools_obj::trim(blend.toLowerCase());
            		if (  (_hx_switch_0==HX_("add",21,f2,49,00)) ){
HXLINE(1692)			return 0;
HXDLIN(1692)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("alpha",5e,a7,96,21)) ){
HXLINE(1693)			return 1;
HXDLIN(1693)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("darken",5f,36,3a,21)) ){
HXLINE(1694)			return 2;
HXDLIN(1694)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("difference",fd,9b,91,46)) ){
HXLINE(1695)			return 3;
HXDLIN(1695)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("erase",e6,e8,1c,73)) ){
HXLINE(1696)			return 4;
HXDLIN(1696)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("hardlight",0b,6e,6b,53)) ){
HXLINE(1697)			return 5;
HXDLIN(1697)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("invert",16,e7,d8,9f)) ){
HXLINE(1698)			return 6;
HXDLIN(1698)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("layer",d1,81,c0,6f)) ){
HXLINE(1699)			return 7;
HXDLIN(1699)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("lighten",bf,4a,e3,19)) ){
HXLINE(1700)			return 8;
HXDLIN(1700)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("multiply",24,e2,8c,9a)) ){
HXLINE(1701)			return 9;
HXDLIN(1701)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("overlay",90,43,10,a9)) ){
HXLINE(1702)			return 11;
HXDLIN(1702)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("screen",6c,3b,5d,47)) ){
HXLINE(1703)			return 12;
HXDLIN(1703)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("shader",25,bf,20,1d)) ){
HXLINE(1704)			return 13;
HXDLIN(1704)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("subtract",14,75,11,f8)) ){
HXLINE(1705)			return 14;
HXDLIN(1705)			goto _hx_goto_14;
            		}
            		_hx_goto_14:;
HXLINE(1707)		return 10;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,blendModeFromString,return )

 ::flixel::FlxCamera FunkinLua_obj::cameraFromString(::String cam){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1710_cameraFromString)
HXLINE(1711)		::String _hx_switch_0 = cam.toLowerCase();
            		if (  (_hx_switch_0==HX_("camhud",08,90,8e,b7)) ||  (_hx_switch_0==HX_("hud",b7,50,4f,00)) ){
HXLINE(1712)			return ::PlayState_obj::instance->camHUD;
HXDLIN(1712)			goto _hx_goto_16;
            		}
            		if (  (_hx_switch_0==HX_("camother",61,dc,80,ab)) ||  (_hx_switch_0==HX_("other",d0,66,76,36)) ){
HXLINE(1713)			return ::PlayState_obj::instance->camOther;
HXDLIN(1713)			goto _hx_goto_16;
            		}
            		_hx_goto_16:;
HXLINE(1715)		return ::PlayState_obj::instance->camGame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,cameraFromString,return )

void FunkinLua_obj::luaTrace(::String text,::hx::Null< bool >  __o_ignoreCheck,::hx::Null< bool >  __o_deprecated){
            		bool ignoreCheck = __o_ignoreCheck.Default(false);
            		bool deprecated = __o_deprecated.Default(false);
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1718_luaTrace)
            	}


HX_DEFINE_DYNAMIC_FUNC3(FunkinLua_obj,luaTrace,(void))

 ::Dynamic FunkinLua_obj::call(::String event,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1759_call)
HXDLIN(1759)		return ::FunkinLua_obj::Function_Continue;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunkinLua_obj,call,return )

void FunkinLua_obj::set(::String variable, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1772_set)
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunkinLua_obj,set,(void))

void FunkinLua_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1800_stop)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunkinLua_obj,stop,(void))

int FunkinLua_obj::Function_Stop;

int FunkinLua_obj::Function_Continue;

 ::PlayState FunkinLua_obj::getInstance(){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_1817_getInstance)
HXDLIN(1817)		return ::PlayState_obj::instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FunkinLua_obj,getInstance,return )


::hx::ObjectPtr< FunkinLua_obj > FunkinLua_obj::__new(::String script) {
	::hx::ObjectPtr< FunkinLua_obj > __this = new FunkinLua_obj();
	__this->__construct(script);
	return __this;
}

::hx::ObjectPtr< FunkinLua_obj > FunkinLua_obj::__alloc(::hx::Ctx *_hx_ctx,::String script) {
	FunkinLua_obj *__this = (FunkinLua_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FunkinLua_obj), true, "FunkinLua"));
	*(void **)__this = FunkinLua_obj::_hx_vtable;
	__this->__construct(script);
	return __this;
}

FunkinLua_obj::FunkinLua_obj()
{
}

void FunkinLua_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FunkinLua);
	HX_MARK_MEMBER_NAME(scriptName,"scriptName");
	HX_MARK_MEMBER_NAME(gonnaClose,"gonnaClose");
	HX_MARK_MEMBER_NAME(accessedProps,"accessedProps");
	HX_MARK_END_CLASS();
}

void FunkinLua_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scriptName,"scriptName");
	HX_VISIT_MEMBER_NAME(gonnaClose,"gonnaClose");
	HX_VISIT_MEMBER_NAME(accessedProps,"accessedProps");
}

::hx::Val FunkinLua_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"luaTrace") ) { return ::hx::Val( luaTrace_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tweenShit") ) { return ::hx::Val( tweenShit_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scriptName") ) { return ::hx::Val( scriptName ); }
		if (HX_FIELD_EQ(inName,"gonnaClose") ) { return ::hx::Val( gonnaClose ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cancelTween") ) { return ::hx::Val( cancelTween_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancelTimer") ) { return ::hx::Val( cancelTimer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetTextTag") ) { return ::hx::Val( resetTextTag_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accessedProps") ) { return ::hx::Val( accessedProps ); }
		if (HX_FIELD_EQ(inName,"getTextObject") ) { return ::hx::Val( getTextObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGroupStuff") ) { return ::hx::Val( getGroupStuff_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGroupStuff") ) { return ::hx::Val( setGroupStuff_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetSpriteTag") ) { return ::hx::Val( resetSpriteTag_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cameraFromString") ) { return ::hx::Val( cameraFromString_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getFlxEaseByString") ) { return ::hx::Val( getFlxEaseByString_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"blendModeFromString") ) { return ::hx::Val( blendModeFromString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FunkinLua_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { outValue = getInstance_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"Function_Stop") ) { outValue = ( Function_Stop ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"Function_Continue") ) { outValue = ( Function_Continue ); return true; }
	}
	return false;
}

::hx::Val FunkinLua_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"scriptName") ) { scriptName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gonnaClose") ) { gonnaClose=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accessedProps") ) { accessedProps=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FunkinLua_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"Function_Stop") ) { Function_Stop=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"Function_Continue") ) { Function_Continue=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FunkinLua_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scriptName",f6,4d,e0,41));
	outFields->push(HX_("gonnaClose",ff,59,b7,ea));
	outFields->push(HX_("accessedProps",6d,6d,dc,c1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FunkinLua_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FunkinLua_obj,scriptName),HX_("scriptName",f6,4d,e0,41)},
	{::hx::fsBool,(int)offsetof(FunkinLua_obj,gonnaClose),HX_("gonnaClose",ff,59,b7,ea)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FunkinLua_obj,accessedProps),HX_("accessedProps",6d,6d,dc,c1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FunkinLua_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FunkinLua_obj::Function_Stop,HX_("Function_Stop",c9,a5,e8,d3)},
	{::hx::fsInt,(void *) &FunkinLua_obj::Function_Continue,HX_("Function_Continue",ae,85,11,8b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FunkinLua_obj_sMemberFields[] = {
	HX_("scriptName",f6,4d,e0,41),
	HX_("gonnaClose",ff,59,b7,ea),
	HX_("accessedProps",6d,6d,dc,c1),
	HX_("getTextObject",82,5b,a2,a8),
	HX_("getGroupStuff",6b,8b,58,57),
	HX_("setGroupStuff",77,6d,5e,9c),
	HX_("resetTextTag",9e,f5,a5,10),
	HX_("resetSpriteTag",86,2b,7a,b0),
	HX_("cancelTween",91,12,99,b7),
	HX_("tweenShit",cb,b7,19,83),
	HX_("cancelTimer",eb,27,5e,ae),
	HX_("getFlxEaseByString",b2,e7,5d,b6),
	HX_("blendModeFromString",4f,47,9d,c2),
	HX_("cameraFromString",e0,18,60,4a),
	HX_("luaTrace",ad,69,82,94),
	HX_("call",9e,18,ba,41),
	HX_("set",a2,9b,57,00),
	HX_("stop",02,f0,5b,4c),
	::String(null()) };

static void FunkinLua_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FunkinLua_obj::Function_Stop,"Function_Stop");
	HX_MARK_MEMBER_NAME(FunkinLua_obj::Function_Continue,"Function_Continue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FunkinLua_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FunkinLua_obj::Function_Stop,"Function_Stop");
	HX_VISIT_MEMBER_NAME(FunkinLua_obj::Function_Continue,"Function_Continue");
};

#endif

::hx::Class FunkinLua_obj::__mClass;

static ::String FunkinLua_obj_sStaticFields[] = {
	HX_("Function_Stop",c9,a5,e8,d3),
	HX_("Function_Continue",ae,85,11,8b),
	HX_("getInstance",4b,e2,d4,7f),
	::String(null())
};

void FunkinLua_obj::__register()
{
	FunkinLua_obj _hx_dummy;
	FunkinLua_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FunkinLua",e7,f3,7b,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FunkinLua_obj::__GetStatic;
	__mClass->mSetStaticField = &FunkinLua_obj::__SetStatic;
	__mClass->mMarkFunc = FunkinLua_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FunkinLua_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FunkinLua_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FunkinLua_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FunkinLua_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FunkinLua_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FunkinLua_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FunkinLua_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_42_boot)
HXDLIN(  42)		Function_Stop = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_43_boot)
HXDLIN(  43)		Function_Continue = 0;
            	}
}

