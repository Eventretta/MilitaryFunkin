#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4744c2053d08e87b_8_new,"flixel.animation.FlxAnimation","new",0x9bc5ffc0,"flixel.animation.FlxAnimation.new","flixel/animation/FlxAnimation.hx",8,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_96_destroy,"flixel.animation.FlxAnimation","destroy",0x7cb38c5a,"flixel.animation.FlxAnimation.destroy","flixel/animation/FlxAnimation.hx",96,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_114_play,"flixel.animation.FlxAnimation","play",0xb2d17294,"flixel.animation.FlxAnimation.play","flixel/animation/FlxAnimation.hx",114,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_145_restart,"flixel.animation.FlxAnimation","restart",0xc2d3272f,"flixel.animation.FlxAnimation.restart","flixel/animation/FlxAnimation.hx",145,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_149_stop,"flixel.animation.FlxAnimation","stop",0xb4d334a2,"flixel.animation.FlxAnimation.stop","flixel/animation/FlxAnimation.hx",149,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_155_reset,"flixel.animation.FlxAnimation","reset",0xe6ad112f,"flixel.animation.FlxAnimation.reset","flixel/animation/FlxAnimation.hx",155,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_161_finish,"flixel.animation.FlxAnimation","finish",0x6ec8ecf3,"flixel.animation.FlxAnimation.finish","flixel/animation/FlxAnimation.hx",161,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_168_pause,"flixel.animation.FlxAnimation","pause",0xbd3c9e56,"flixel.animation.FlxAnimation.pause","flixel/animation/FlxAnimation.hx",168,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_173_resume,"flixel.animation.FlxAnimation","resume",0xf0ce164d,"flixel.animation.FlxAnimation.resume","flixel/animation/FlxAnimation.hx",173,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_177_reverse,"flixel.animation.FlxAnimation","reverse",0x73299882,"flixel.animation.FlxAnimation.reverse","flixel/animation/FlxAnimation.hx",177,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_184_update,"flixel.animation.FlxAnimation","update",0x6f4f32a9,"flixel.animation.FlxAnimation.update","flixel/animation/FlxAnimation.hx",184,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_211_clone,"flixel.animation.FlxAnimation","clone",0x4847dabd,"flixel.animation.FlxAnimation.clone","flixel/animation/FlxAnimation.hx",211,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_215_set_frameRate,"flixel.animation.FlxAnimation","set_frameRate",0x8699eef0,"flixel.animation.FlxAnimation.set_frameRate","flixel/animation/FlxAnimation.hx",215,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_224_set_curFrame,"flixel.animation.FlxAnimation","set_curFrame",0x46812eaa,"flixel.animation.FlxAnimation.set_curFrame","flixel/animation/FlxAnimation.hx",224,0x660bc6ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4744c2053d08e87b_253_get_numFrames,"flixel.animation.FlxAnimation","get_numFrames",0x65f5f5c3,"flixel.animation.FlxAnimation.get_numFrames","flixel/animation/FlxAnimation.hx",253,0x660bc6ae)
namespace flixel{
namespace animation{

void FlxAnimation_obj::__construct( ::flixel::animation::FlxAnimationController Parent,::String Name,::Array< int > Frames,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY){
            		Float FrameRate = __o_FrameRate.Default(0);
            		bool Looped = __o_Looped.Default(true);
            		bool FlipX = __o_FlipX.Default(false);
            		bool FlipY = __o_FlipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_8_new)
HXLINE(  70)		this->_frameTimer = ((Float)0);
HXLINE(  59)		this->flipY = false;
HXLINE(  54)		this->flipX = false;
HXLINE(  49)		this->reversed = false;
HXLINE(  44)		this->looped = true;
HXLINE(  39)		this->paused = true;
HXLINE(  34)		this->finished = true;
HXLINE(  29)		this->delay = ((Float)0);
HXLINE(  19)		this->curFrame = 0;
HXLINE(  83)		super::__construct(Parent,Name);
HXLINE(  85)		this->set_frameRate(FrameRate);
HXLINE(  86)		this->frames = Frames;
HXLINE(  87)		this->looped = Looped;
HXLINE(  88)		this->flipX = FlipX;
HXLINE(  89)		this->flipY = FlipY;
            	}

Dynamic FlxAnimation_obj::__CreateEmpty() { return new FlxAnimation_obj; }

void *FlxAnimation_obj::_hx_vtable = 0;

Dynamic FlxAnimation_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAnimation_obj > _hx_result = new FlxAnimation_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool FlxAnimation_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x14455e69) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x14455e69;
	} else {
		return inClassId==(int)0x5cf1ddba;
	}
}

void FlxAnimation_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_96_destroy)
HXLINE(  97)		this->frames = null();
HXLINE(  98)		this->name = null();
HXLINE(  99)		this->super::destroy();
            	}


void FlxAnimation_obj::play(::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Reversed,::hx::Null< int >  __o_Frame){
            		bool Force = __o_Force.Default(false);
            		bool Reversed = __o_Reversed.Default(false);
            		int Frame = __o_Frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_114_play)
HXLINE( 115)		bool _hx_tmp;
HXDLIN( 115)		bool _hx_tmp1;
HXDLIN( 115)		if (!(Force)) {
HXLINE( 115)			_hx_tmp1 = !(this->finished);
            		}
            		else {
HXLINE( 115)			_hx_tmp1 = false;
            		}
HXDLIN( 115)		if (_hx_tmp1) {
HXLINE( 115)			_hx_tmp = (this->reversed == Reversed);
            		}
            		else {
HXLINE( 115)			_hx_tmp = false;
            		}
HXDLIN( 115)		if (_hx_tmp) {
HXLINE( 117)			this->paused = false;
HXLINE( 118)			this->finished = false;
HXLINE( 119)			return;
            		}
HXLINE( 122)		this->reversed = Reversed;
HXLINE( 123)		this->paused = false;
HXLINE( 124)		this->_frameTimer = ( (Float)(0) );
HXLINE( 125)		this->finished = (this->delay == 0);
HXLINE( 127)		int maxFrameIndex = (this->frames->length - 1);
HXLINE( 128)		if ((Frame < 0)) {
HXLINE( 129)			this->set_curFrame(::flixel::FlxG_obj::random->_hx_int(0,maxFrameIndex,null()));
            		}
            		else {
HXLINE( 132)			if ((Frame > maxFrameIndex)) {
HXLINE( 133)				Frame = maxFrameIndex;
            			}
HXLINE( 134)			if (this->reversed) {
HXLINE( 135)				Frame = (maxFrameIndex - Frame);
            			}
HXLINE( 136)			this->set_curFrame(Frame);
            		}
HXLINE( 139)		if (this->finished) {
HXLINE( 140)			 ::flixel::animation::FlxAnimationController _this = this->parent;
HXDLIN( 140)			if (::hx::IsNotNull( _this->finishCallback )) {
HXLINE( 140)				_this->finishCallback(this->name);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimation_obj,play,(void))

void FlxAnimation_obj::restart(){
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_145_restart)
HXDLIN( 145)		this->play(true,this->reversed,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,restart,(void))

void FlxAnimation_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_149_stop)
HXLINE( 150)		this->finished = true;
HXLINE( 151)		this->paused = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,stop,(void))

void FlxAnimation_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_155_reset)
HXLINE( 156)		this->stop();
HXLINE( 157)		int _hx_tmp;
HXDLIN( 157)		if (this->reversed) {
HXLINE( 157)			_hx_tmp = (this->frames->length - 1);
            		}
            		else {
HXLINE( 157)			_hx_tmp = 0;
            		}
HXDLIN( 157)		this->set_curFrame(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,reset,(void))

void FlxAnimation_obj::finish(){
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_161_finish)
HXLINE( 162)		this->stop();
HXLINE( 163)		int _hx_tmp;
HXDLIN( 163)		if (this->reversed) {
HXLINE( 163)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 163)			_hx_tmp = (this->frames->length - 1);
            		}
HXDLIN( 163)		this->set_curFrame(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,finish,(void))

void FlxAnimation_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_168_pause)
HXDLIN( 168)		this->paused = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,pause,(void))

void FlxAnimation_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_173_resume)
HXDLIN( 173)		this->paused = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,resume,(void))

void FlxAnimation_obj::reverse(){
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_177_reverse)
HXLINE( 178)		this->reversed = !(this->reversed);
HXLINE( 179)		if (this->finished) {
HXLINE( 180)			this->play(false,this->reversed,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,reverse,(void))

void FlxAnimation_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_184_update)
HXLINE( 185)		bool _hx_tmp;
HXDLIN( 185)		bool _hx_tmp1;
HXDLIN( 185)		if ((this->delay != 0)) {
HXLINE( 185)			_hx_tmp1 = this->finished;
            		}
            		else {
HXLINE( 185)			_hx_tmp1 = true;
            		}
HXDLIN( 185)		if (!(_hx_tmp1)) {
HXLINE( 185)			_hx_tmp = this->paused;
            		}
            		else {
HXLINE( 185)			_hx_tmp = true;
            		}
HXDLIN( 185)		if (_hx_tmp) {
HXLINE( 186)			return;
            		}
HXLINE( 188)		 ::flixel::animation::FlxAnimation _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 188)		_hx_tmp2->_frameTimer = (_hx_tmp2->_frameTimer + elapsed);
HXLINE( 189)		while(true){
HXLINE( 189)			bool _hx_tmp;
HXDLIN( 189)			if ((this->_frameTimer > this->delay)) {
HXLINE( 189)				_hx_tmp = !(this->finished);
            			}
            			else {
HXLINE( 189)				_hx_tmp = false;
            			}
HXDLIN( 189)			if (!(_hx_tmp)) {
HXLINE( 189)				goto _hx_goto_10;
            			}
HXLINE( 191)			 ::flixel::animation::FlxAnimation _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)			_hx_tmp1->_frameTimer = (_hx_tmp1->_frameTimer - this->delay);
HXLINE( 192)			if (this->reversed) {
HXLINE( 194)				bool _hx_tmp;
HXDLIN( 194)				if (this->looped) {
HXLINE( 194)					_hx_tmp = (this->curFrame == 0);
            				}
            				else {
HXLINE( 194)					_hx_tmp = false;
            				}
HXDLIN( 194)				if (_hx_tmp) {
HXLINE( 195)					this->set_curFrame((this->frames->length - 1));
            				}
            				else {
HXLINE( 197)					this->set_curFrame((this->curFrame - 1));
            				}
            			}
            			else {
HXLINE( 201)				bool _hx_tmp;
HXDLIN( 201)				if (this->looped) {
HXLINE( 201)					_hx_tmp = (this->curFrame == (this->frames->length - 1));
            				}
            				else {
HXLINE( 201)					_hx_tmp = false;
            				}
HXDLIN( 201)				if (_hx_tmp) {
HXLINE( 202)					this->set_curFrame(0);
            				}
            				else {
HXLINE( 204)					this->set_curFrame((this->curFrame + 1));
            				}
            			}
            		}
            		_hx_goto_10:;
            	}


 ::flixel::animation::FlxBaseAnimation FlxAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
            	HX_GC_STACKFRAME(&_hx_pos_4744c2053d08e87b_211_clone)
HXDLIN( 211)		return  ::flixel::animation::FlxAnimation_obj::__alloc( HX_CTX ,Parent,this->name,this->frames,this->frameRate,this->looped,this->flipX,this->flipY);
            	}


Float FlxAnimation_obj::set_frameRate(Float value){
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_215_set_frameRate)
HXLINE( 216)		this->delay = ( (Float)(0) );
HXLINE( 217)		this->frameRate = value;
HXLINE( 218)		if ((value > 0)) {
HXLINE( 219)			this->delay = (((Float)1.0) / value);
            		}
HXLINE( 220)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimation_obj,set_frameRate,return )

int FlxAnimation_obj::set_curFrame(int Frame){
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_224_set_curFrame)
HXLINE( 225)		int maxFrameIndex = (this->frames->length - 1);
HXLINE( 226)		int tempFrame;
HXDLIN( 226)		if (this->reversed) {
HXLINE( 226)			tempFrame = (maxFrameIndex - Frame);
            		}
            		else {
HXLINE( 226)			tempFrame = Frame;
            		}
HXLINE( 228)		if ((tempFrame >= 0)) {
HXLINE( 230)			bool _hx_tmp;
HXDLIN( 230)			if (!(this->looped)) {
HXLINE( 230)				_hx_tmp = (Frame > maxFrameIndex);
            			}
            			else {
HXLINE( 230)				_hx_tmp = false;
            			}
HXDLIN( 230)			if (_hx_tmp) {
HXLINE( 232)				this->finished = true;
HXLINE( 233)				int _hx_tmp;
HXDLIN( 233)				if (this->reversed) {
HXLINE( 233)					_hx_tmp = 0;
            				}
            				else {
HXLINE( 233)					_hx_tmp = maxFrameIndex;
            				}
HXDLIN( 233)				this->curFrame = _hx_tmp;
            			}
            			else {
HXLINE( 237)				this->curFrame = Frame;
            			}
            		}
            		else {
HXLINE( 241)			this->curFrame = ::flixel::FlxG_obj::random->_hx_int(0,maxFrameIndex,null());
            		}
HXLINE( 243)		this->set_curIndex(this->frames->__get(this->curFrame));
HXLINE( 245)		bool _hx_tmp;
HXDLIN( 245)		if (this->finished) {
HXLINE( 245)			_hx_tmp = ::hx::IsNotNull( this->parent );
            		}
            		else {
HXLINE( 245)			_hx_tmp = false;
            		}
HXDLIN( 245)		if (_hx_tmp) {
HXLINE( 246)			 ::flixel::animation::FlxAnimationController _this = this->parent;
HXDLIN( 246)			if (::hx::IsNotNull( _this->finishCallback )) {
HXLINE( 246)				_this->finishCallback(this->name);
            			}
            		}
HXLINE( 248)		return Frame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimation_obj,set_curFrame,return )

int FlxAnimation_obj::get_numFrames(){
            	HX_STACKFRAME(&_hx_pos_4744c2053d08e87b_253_get_numFrames)
HXDLIN( 253)		return this->frames->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,get_numFrames,return )


::hx::ObjectPtr< FlxAnimation_obj > FlxAnimation_obj::__new( ::flixel::animation::FlxAnimationController Parent,::String Name,::Array< int > Frames,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY) {
	::hx::ObjectPtr< FlxAnimation_obj > __this = new FlxAnimation_obj();
	__this->__construct(Parent,Name,Frames,__o_FrameRate,__o_Looped,__o_FlipX,__o_FlipY);
	return __this;
}

::hx::ObjectPtr< FlxAnimation_obj > FlxAnimation_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::animation::FlxAnimationController Parent,::String Name,::Array< int > Frames,::hx::Null< Float >  __o_FrameRate,::hx::Null< bool >  __o_Looped,::hx::Null< bool >  __o_FlipX,::hx::Null< bool >  __o_FlipY) {
	FlxAnimation_obj *__this = (FlxAnimation_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAnimation_obj), true, "flixel.animation.FlxAnimation"));
	*(void **)__this = FlxAnimation_obj::_hx_vtable;
	__this->__construct(Parent,Name,Frames,__o_FrameRate,__o_Looped,__o_FlipX,__o_FlipY);
	return __this;
}

FlxAnimation_obj::FlxAnimation_obj()
{
}

void FlxAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimation);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(curFrame,"curFrame");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(looped,"looped");
	HX_MARK_MEMBER_NAME(reversed,"reversed");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(_frameTimer,"_frameTimer");
	 ::flixel::animation::FlxBaseAnimation_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(curFrame,"curFrame");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(looped,"looped");
	HX_VISIT_MEMBER_NAME(reversed,"reversed");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(_frameTimer,"_frameTimer");
	 ::flixel::animation::FlxBaseAnimation_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxAnimation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		if (HX_FIELD_EQ(inName,"flipX") ) { return ::hx::Val( flipX ); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return ::hx::Val( flipY ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"looped") ) { return ::hx::Val( looped ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"finish") ) { return ::hx::Val( finish_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"restart") ) { return ::hx::Val( restart_dyn() ); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return ::hx::Val( reverse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { return ::hx::Val( curFrame ); }
		if (HX_FIELD_EQ(inName,"finished") ) { return ::hx::Val( finished ); }
		if (HX_FIELD_EQ(inName,"reversed") ) { return ::hx::Val( reversed ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return ::hx::Val( frameRate ); }
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numFrames() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { return ::hx::Val( _frameTimer ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curFrame") ) { return ::hx::Val( set_curFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return ::hx::Val( set_frameRate_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return ::hx::Val( get_numFrames_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxAnimation_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"looped") ) { looped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_curFrame(inValue.Cast< int >()) );curFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reversed") ) { reversed=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frameRate(inValue.Cast< Float >()) );frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { _frameTimer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("frameRate",ad,11,25,39));
	outFields->push(HX_("curFrame",8d,72,31,4e));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("finished",72,93,0e,95));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("looped",c3,5f,b9,61));
	outFields->push(HX_("reversed",02,c5,b5,81));
	outFields->push(HX_("flipX",0b,45,92,02));
	outFields->push(HX_("flipY",0c,45,92,02));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("_frameTimer",77,c1,e5,c5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxAnimation_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxAnimation_obj,frameRate),HX_("frameRate",ad,11,25,39)},
	{::hx::fsInt,(int)offsetof(FlxAnimation_obj,curFrame),HX_("curFrame",8d,72,31,4e)},
	{::hx::fsFloat,(int)offsetof(FlxAnimation_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsBool,(int)offsetof(FlxAnimation_obj,finished),HX_("finished",72,93,0e,95)},
	{::hx::fsBool,(int)offsetof(FlxAnimation_obj,paused),HX_("paused",ae,40,84,ef)},
	{::hx::fsBool,(int)offsetof(FlxAnimation_obj,looped),HX_("looped",c3,5f,b9,61)},
	{::hx::fsBool,(int)offsetof(FlxAnimation_obj,reversed),HX_("reversed",02,c5,b5,81)},
	{::hx::fsBool,(int)offsetof(FlxAnimation_obj,flipX),HX_("flipX",0b,45,92,02)},
	{::hx::fsBool,(int)offsetof(FlxAnimation_obj,flipY),HX_("flipY",0c,45,92,02)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxAnimation_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsFloat,(int)offsetof(FlxAnimation_obj,_frameTimer),HX_("_frameTimer",77,c1,e5,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxAnimation_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAnimation_obj_sMemberFields[] = {
	HX_("frameRate",ad,11,25,39),
	HX_("curFrame",8d,72,31,4e),
	HX_("delay",83,d7,26,d7),
	HX_("finished",72,93,0e,95),
	HX_("paused",ae,40,84,ef),
	HX_("looped",c3,5f,b9,61),
	HX_("reversed",02,c5,b5,81),
	HX_("flipX",0b,45,92,02),
	HX_("flipY",0c,45,92,02),
	HX_("frames",a6,af,85,ac),
	HX_("_frameTimer",77,c1,e5,c5),
	HX_("destroy",fa,2c,86,24),
	HX_("play",f4,2d,5a,4a),
	HX_("restart",cf,c7,a5,6a),
	HX_("stop",02,f0,5b,4c),
	HX_("reset",cf,49,c8,e6),
	HX_("finish",53,40,7f,86),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("reverse",22,39,fc,1a),
	HX_("update",09,86,05,87),
	HX_("clone",5d,13,63,48),
	HX_("set_frameRate",90,c7,8e,3f),
	HX_("set_curFrame",0a,4a,44,18),
	HX_("get_numFrames",63,ce,ea,1e),
	::String(null()) };

::hx::Class FlxAnimation_obj::__mClass;

void FlxAnimation_obj::__register()
{
	FlxAnimation_obj _hx_dummy;
	FlxAnimation_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.animation.FlxAnimation",ce,5f,e3,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAnimation_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAnimation_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAnimation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAnimation_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace animation