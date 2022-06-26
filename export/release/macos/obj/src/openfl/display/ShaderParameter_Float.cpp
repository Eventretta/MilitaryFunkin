#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8c0b4e9630d09afb_168_new,"openfl.display.ShaderParameter_Float","new",0x2b32a149,"openfl.display.ShaderParameter_Float.new","openfl/display/ShaderParameter.hx",168,0xc89f13e6)
HX_LOCAL_STACK_FRAME(_hx_pos_8c0b4e9630d09afb_172___disableGL,"openfl.display.ShaderParameter_Float","__disableGL",0x91c89cd6,"openfl.display.ShaderParameter_Float.__disableGL","openfl/display/ShaderParameter.hx",172,0xc89f13e6)
HX_LOCAL_STACK_FRAME(_hx_pos_8c0b4e9630d09afb_185___updateGL,"openfl.display.ShaderParameter_Float","__updateGL",0x33b799c5,"openfl.display.ShaderParameter_Float.__updateGL","openfl/display/ShaderParameter.hx",185,0xc89f13e6)
HX_LOCAL_STACK_FRAME(_hx_pos_8c0b4e9630d09afb_419___updateGLFromBuffer,"openfl.display.ShaderParameter_Float","__updateGLFromBuffer",0xc243282f,"openfl.display.ShaderParameter_Float.__updateGLFromBuffer","openfl/display/ShaderParameter.hx",419,0xc89f13e6)
HX_LOCAL_STACK_FRAME(_hx_pos_8c0b4e9630d09afb_585_set_name,"openfl.display.ShaderParameter_Float","set_name",0x8badc9bf,"openfl.display.ShaderParameter_Float.set_name","openfl/display/ShaderParameter.hx",585,0xc89f13e6)
HX_LOCAL_STACK_FRAME(_hx_pos_8c0b4e9630d09afb_96_boot,"openfl.display.ShaderParameter_Float","boot",0x99337f29,"openfl.display.ShaderParameter_Float.boot","openfl/display/ShaderParameter.hx",96,0xc89f13e6)
namespace openfl{
namespace display{

void ShaderParameter_Float_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8c0b4e9630d09afb_168_new)
HXDLIN( 168)		this->index = 0;
            	}

Dynamic ShaderParameter_Float_obj::__CreateEmpty() { return new ShaderParameter_Float_obj; }

void *ShaderParameter_Float_obj::_hx_vtable = 0;

Dynamic ShaderParameter_Float_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderParameter_Float_obj > _hx_result = new ShaderParameter_Float_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderParameter_Float_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2004e677;
}

void ShaderParameter_Float_obj::_hx___disableGL( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_8c0b4e9630d09afb_172___disableGL)
HXLINE( 173)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 175)		if (!(this->_hx___isUniform)) {
HXLINE( 177)			int _g = 0;
HXDLIN( 177)			int _g1 = this->_hx___arrayLength;
HXDLIN( 177)			while((_g < _g1)){
HXLINE( 177)				_g = (_g + 1);
HXDLIN( 177)				int i = (_g - 1);
HXLINE( 179)				gl->disableVertexAttribArray(( (int)((this->index + i)) ));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderParameter_Float_obj,_hx___disableGL,(void))

void ShaderParameter_Float_obj::_hx___updateGL( ::openfl::display3D::Context3D context,::Array< Float > overrideValue){
            	HX_STACKFRAME(&_hx_pos_8c0b4e9630d09afb_185___updateGL)
HXLINE( 187)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 189)		::Array< Float > value;
HXDLIN( 189)		if (::hx::IsNotNull( overrideValue )) {
HXLINE( 189)			value = overrideValue;
            		}
            		else {
HXLINE( 189)			value = this->value;
            		}
HXLINE( 191)		::Array< bool > boolValue;
HXDLIN( 191)		if (this->_hx___isBool) {
HXLINE( 191)			boolValue = value;
            		}
            		else {
HXLINE( 191)			boolValue = null();
            		}
HXLINE( 192)		::Array< Float > floatValue;
HXDLIN( 192)		if (this->_hx___isFloat) {
HXLINE( 192)			floatValue = value;
            		}
            		else {
HXLINE( 192)			floatValue = null();
            		}
HXLINE( 193)		::Array< int > intValue;
HXDLIN( 193)		if (this->_hx___isInt) {
HXLINE( 193)			intValue = value;
            		}
            		else {
HXLINE( 193)			intValue = null();
            		}
HXLINE( 195)		if (this->_hx___isUniform) {
HXLINE( 197)			bool _hx_tmp;
HXDLIN( 197)			if (::hx::IsNotNull( value )) {
HXLINE( 197)				_hx_tmp = (value->length >= this->__length);
            			}
            			else {
HXLINE( 197)				_hx_tmp = false;
            			}
HXDLIN( 197)			if (_hx_tmp) {
HXLINE( 199)				 ::Dynamic _hx_switch_0 = this->type;
            				if (  (_hx_switch_0==0) ){
HXLINE( 202)					int _hx_tmp;
HXDLIN( 202)					if (boolValue->__get(0)) {
HXLINE( 202)						_hx_tmp = 1;
            					}
            					else {
HXLINE( 202)						_hx_tmp = 0;
            					}
HXDLIN( 202)					gl->uniform1i(( (int)(this->index) ),_hx_tmp);
HXDLIN( 202)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE( 204)					int _hx_tmp;
HXDLIN( 204)					if (boolValue->__get(0)) {
HXLINE( 204)						_hx_tmp = 1;
            					}
            					else {
HXLINE( 204)						_hx_tmp = 0;
            					}
HXDLIN( 204)					int _hx_tmp1;
HXDLIN( 204)					if (boolValue->__get(1)) {
HXLINE( 204)						_hx_tmp1 = 1;
            					}
            					else {
HXLINE( 204)						_hx_tmp1 = 0;
            					}
HXDLIN( 204)					gl->uniform2i(( (int)(this->index) ),_hx_tmp,_hx_tmp1);
HXDLIN( 204)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE( 206)					int _hx_tmp;
HXDLIN( 206)					if (boolValue->__get(0)) {
HXLINE( 206)						_hx_tmp = 1;
            					}
            					else {
HXLINE( 206)						_hx_tmp = 0;
            					}
HXDLIN( 206)					int _hx_tmp1;
HXDLIN( 206)					if (boolValue->__get(1)) {
HXLINE( 206)						_hx_tmp1 = 1;
            					}
            					else {
HXLINE( 206)						_hx_tmp1 = 0;
            					}
HXDLIN( 206)					int _hx_tmp2;
HXDLIN( 206)					if (boolValue->__get(2)) {
HXLINE( 206)						_hx_tmp2 = 1;
            					}
            					else {
HXLINE( 206)						_hx_tmp2 = 0;
            					}
HXDLIN( 206)					gl->uniform3i(( (int)(this->index) ),_hx_tmp,_hx_tmp1,_hx_tmp2);
HXDLIN( 206)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE( 208)					int _hx_tmp;
HXDLIN( 208)					if (boolValue->__get(0)) {
HXLINE( 208)						_hx_tmp = 1;
            					}
            					else {
HXLINE( 208)						_hx_tmp = 0;
            					}
HXDLIN( 208)					int _hx_tmp1;
HXDLIN( 208)					if (boolValue->__get(1)) {
HXLINE( 208)						_hx_tmp1 = 1;
            					}
            					else {
HXLINE( 208)						_hx_tmp1 = 0;
            					}
HXDLIN( 208)					int _hx_tmp2;
HXDLIN( 208)					if (boolValue->__get(2)) {
HXLINE( 208)						_hx_tmp2 = 1;
            					}
            					else {
HXLINE( 208)						_hx_tmp2 = 0;
            					}
HXDLIN( 208)					int _hx_tmp3;
HXDLIN( 208)					if (boolValue->__get(3)) {
HXLINE( 208)						_hx_tmp3 = 1;
            					}
            					else {
HXLINE( 208)						_hx_tmp3 = 0;
            					}
HXDLIN( 208)					gl->uniform4i(( (int)(this->index) ),_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3);
HXDLIN( 208)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==4) ){
HXLINE( 210)					gl->uniform1f(( (int)(this->index) ),floatValue->__get(0));
HXDLIN( 210)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==5) ){
HXLINE( 212)					gl->uniform2f(( (int)(this->index) ),floatValue->__get(0),floatValue->__get(1));
HXDLIN( 212)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==6) ){
HXLINE( 214)					gl->uniform3f(( (int)(this->index) ),floatValue->__get(0),floatValue->__get(1),floatValue->__get(2));
HXDLIN( 214)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==7) ){
HXLINE( 216)					gl->uniform4f(( (int)(this->index) ),floatValue->__get(0),floatValue->__get(1),floatValue->__get(2),floatValue->__get(3));
HXDLIN( 216)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==8) ){
HXLINE( 248)					gl->uniform1i(( (int)(this->index) ),intValue->__get(0));
HXDLIN( 248)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==9) ){
HXLINE( 250)					gl->uniform2i(( (int)(this->index) ),intValue->__get(0),intValue->__get(1));
HXDLIN( 250)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==10) ){
HXLINE( 252)					gl->uniform3i(( (int)(this->index) ),intValue->__get(0),intValue->__get(1),intValue->__get(2));
HXDLIN( 252)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==11) ){
HXLINE( 254)					gl->uniform4i(( (int)(this->index) ),intValue->__get(0),intValue->__get(1),intValue->__get(2),intValue->__get(3));
HXDLIN( 254)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==12) ){
HXLINE( 219)					{
HXLINE( 221)						{
HXLINE( 221)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 221)							Float val = floatValue->__get(0);
HXDLIN( 221)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            						}
HXDLIN( 221)						{
HXLINE( 221)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 221)							Float val1 = floatValue->__get(1);
HXDLIN( 221)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            						}
HXDLIN( 221)						{
HXLINE( 221)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 221)							Float val2 = floatValue->__get(2);
HXDLIN( 221)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            						}
HXDLIN( 221)						{
HXLINE( 221)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 221)							Float val3 = floatValue->__get(3);
HXDLIN( 221)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            						}
            					}
HXLINE( 223)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix2fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 218)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==16) ){
HXLINE( 230)					{
HXLINE( 232)						{
HXLINE( 232)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 232)							Float val = floatValue->__get(0);
HXDLIN( 232)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            						}
HXDLIN( 232)						{
HXLINE( 232)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 232)							Float val1 = floatValue->__get(1);
HXDLIN( 232)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            						}
HXDLIN( 232)						{
HXLINE( 232)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 232)							Float val2 = floatValue->__get(2);
HXDLIN( 232)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            						}
HXDLIN( 232)						{
HXLINE( 232)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 232)							Float val3 = floatValue->__get(3);
HXDLIN( 232)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            						}
HXDLIN( 232)						{
HXLINE( 232)							 ::lime::utils::ArrayBufferView this5 = this->_hx___uniformMatrix;
HXDLIN( 232)							Float val4 = floatValue->__get(4);
HXDLIN( 232)							 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),val4);
            						}
HXDLIN( 232)						{
HXLINE( 232)							 ::lime::utils::ArrayBufferView this6 = this->_hx___uniformMatrix;
HXDLIN( 232)							Float val5 = floatValue->__get(5);
HXDLIN( 232)							 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),val5);
            						}
HXDLIN( 232)						{
HXLINE( 232)							 ::lime::utils::ArrayBufferView this7 = this->_hx___uniformMatrix;
HXDLIN( 232)							Float val6 = floatValue->__get(6);
HXDLIN( 232)							 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),val6);
            						}
HXDLIN( 232)						{
HXLINE( 232)							 ::lime::utils::ArrayBufferView this8 = this->_hx___uniformMatrix;
HXDLIN( 232)							Float val7 = floatValue->__get(7);
HXDLIN( 232)							 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),val7);
            						}
HXDLIN( 232)						{
HXLINE( 232)							 ::lime::utils::ArrayBufferView this9 = this->_hx___uniformMatrix;
HXDLIN( 232)							Float val8 = floatValue->__get(8);
HXDLIN( 232)							 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),val8);
            						}
            					}
HXLINE( 234)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix3fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 229)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==20) ){
HXLINE( 241)					{
HXLINE( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val = floatValue->__get(0);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val1 = floatValue->__get(1);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val2 = floatValue->__get(2);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val3 = floatValue->__get(3);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this5 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val4 = floatValue->__get(4);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),val4);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this6 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val5 = floatValue->__get(5);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),val5);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this7 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val6 = floatValue->__get(6);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),val6);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this8 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val7 = floatValue->__get(7);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),val7);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this9 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val8 = floatValue->__get(8);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),val8);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this10 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val9 = floatValue->__get(9);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this10->buffer->b,(this10->byteOffset + 36),val9);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this11 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val10 = floatValue->__get(10);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this11->buffer->b,(this11->byteOffset + 40),val10);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this12 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val11 = floatValue->__get(11);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this12->buffer->b,(this12->byteOffset + 44),val11);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this13 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val12 = floatValue->__get(12);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this13->buffer->b,(this13->byteOffset + 48),val12);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this14 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val13 = floatValue->__get(13);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this14->buffer->b,(this14->byteOffset + 52),val13);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this15 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val14 = floatValue->__get(14);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this15->buffer->b,(this15->byteOffset + 56),val14);
            						}
HXDLIN( 243)						{
HXLINE( 243)							 ::lime::utils::ArrayBufferView this16 = this->_hx___uniformMatrix;
HXDLIN( 243)							Float val15 = floatValue->__get(15);
HXDLIN( 243)							 ::__hxcpp_memory_set_float(this16->buffer->b,(this16->byteOffset + 60),val15);
            						}
            					}
HXLINE( 245)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix4fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 240)					goto _hx_goto_3;
            				}
            				/* default */{
            				}
            				_hx_goto_3:;
            			}
            			else {
HXLINE( 261)				 ::Dynamic _hx_switch_1 = this->type;
            				if (  (_hx_switch_1==1) ||  (_hx_switch_1==9) ){
HXLINE( 266)					gl->uniform2i(( (int)(this->index) ),0,0);
HXDLIN( 266)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==3) ||  (_hx_switch_1==11) ){
HXLINE( 270)					gl->uniform4i(( (int)(this->index) ),0,0,0,0);
HXDLIN( 270)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==4) ){
HXLINE( 272)					gl->uniform1f(( (int)(this->index) ),( (Float)(0) ));
HXDLIN( 272)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==5) ){
HXLINE( 274)					gl->uniform2f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 274)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==6) ){
HXLINE( 276)					gl->uniform3f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 276)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==7) ){
HXLINE( 278)					gl->uniform4f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 278)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==0) ||  (_hx_switch_1==8) ){
HXLINE( 264)					gl->uniform1i(( (int)(this->index) ),0);
HXDLIN( 264)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==2) ||  (_hx_switch_1==10) ){
HXLINE( 268)					gl->uniform3i(( (int)(this->index) ),0,0,0);
HXDLIN( 268)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==12) ){
HXLINE( 281)					{
HXLINE( 283)						{
HXLINE( 283)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 283)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,0);
            						}
HXDLIN( 283)						{
HXLINE( 283)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 283)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),0);
            						}
HXDLIN( 283)						{
HXLINE( 283)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 283)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),0);
            						}
HXDLIN( 283)						{
HXLINE( 283)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 283)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),0);
            						}
            					}
HXLINE( 285)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix2fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 280)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==16) ){
HXLINE( 292)					{
HXLINE( 294)						{
HXLINE( 294)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 294)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,0);
            						}
HXDLIN( 294)						{
HXLINE( 294)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 294)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),0);
            						}
HXDLIN( 294)						{
HXLINE( 294)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 294)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),0);
            						}
HXDLIN( 294)						{
HXLINE( 294)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 294)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),0);
            						}
HXDLIN( 294)						{
HXLINE( 294)							 ::lime::utils::ArrayBufferView this5 = this->_hx___uniformMatrix;
HXDLIN( 294)							 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),0);
            						}
HXDLIN( 294)						{
HXLINE( 294)							 ::lime::utils::ArrayBufferView this6 = this->_hx___uniformMatrix;
HXDLIN( 294)							 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),0);
            						}
HXDLIN( 294)						{
HXLINE( 294)							 ::lime::utils::ArrayBufferView this7 = this->_hx___uniformMatrix;
HXDLIN( 294)							 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),0);
            						}
HXDLIN( 294)						{
HXLINE( 294)							 ::lime::utils::ArrayBufferView this8 = this->_hx___uniformMatrix;
HXDLIN( 294)							 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),0);
            						}
HXDLIN( 294)						{
HXLINE( 294)							 ::lime::utils::ArrayBufferView this9 = this->_hx___uniformMatrix;
HXDLIN( 294)							 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),0);
            						}
            					}
HXLINE( 296)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix3fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 291)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==20) ){
HXLINE( 303)					{
HXLINE( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this5 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this6 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this7 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this8 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this9 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this10 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this10->buffer->b,(this10->byteOffset + 36),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this11 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this11->buffer->b,(this11->byteOffset + 40),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this12 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this12->buffer->b,(this12->byteOffset + 44),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this13 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this13->buffer->b,(this13->byteOffset + 48),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this14 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this14->buffer->b,(this14->byteOffset + 52),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this15 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this15->buffer->b,(this15->byteOffset + 56),0);
            						}
HXDLIN( 305)						{
HXLINE( 305)							 ::lime::utils::ArrayBufferView this16 = this->_hx___uniformMatrix;
HXDLIN( 305)							 ::__hxcpp_memory_set_float(this16->buffer->b,(this16->byteOffset + 60),0);
            						}
            					}
HXLINE( 307)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix4fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 302)					goto _hx_goto_4;
            				}
            				/* default */{
            				}
            				_hx_goto_4:;
            			}
            		}
            		else {
HXLINE( 315)			bool _hx_tmp;
HXDLIN( 315)			if (!(this->_hx___useArray)) {
HXLINE( 315)				if (::hx::IsNotNull( value )) {
HXLINE( 315)					_hx_tmp = (value->length == this->__length);
            				}
            				else {
HXLINE( 315)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 315)				_hx_tmp = false;
            			}
HXDLIN( 315)			if (_hx_tmp) {
HXLINE( 317)				{
HXLINE( 317)					int _g = 0;
HXDLIN( 317)					int _g1 = this->_hx___arrayLength;
HXDLIN( 317)					while((_g < _g1)){
HXLINE( 317)						_g = (_g + 1);
HXDLIN( 317)						int i = (_g - 1);
HXLINE( 319)						gl->disableVertexAttribArray(( (int)((this->index + i)) ));
            					}
            				}
HXLINE( 322)				if (::hx::IsNotNull( value )) {
HXLINE( 324)					 ::Dynamic _hx_switch_2 = this->type;
            					if (  (_hx_switch_2==0) ){
HXLINE( 327)						Float _hx_tmp;
HXDLIN( 327)						if (boolValue->__get(0)) {
HXLINE( 327)							_hx_tmp = ( (Float)(1) );
            						}
            						else {
HXLINE( 327)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 327)						gl->vertexAttrib1f(( (int)(this->index) ),_hx_tmp);
HXDLIN( 327)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==1) ){
HXLINE( 329)						Float _hx_tmp;
HXDLIN( 329)						if (boolValue->__get(0)) {
HXLINE( 329)							_hx_tmp = ( (Float)(1) );
            						}
            						else {
HXLINE( 329)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 329)						Float _hx_tmp1;
HXDLIN( 329)						if (boolValue->__get(1)) {
HXLINE( 329)							_hx_tmp1 = ( (Float)(1) );
            						}
            						else {
HXLINE( 329)							_hx_tmp1 = ( (Float)(0) );
            						}
HXDLIN( 329)						gl->vertexAttrib2f(( (int)(this->index) ),_hx_tmp,_hx_tmp1);
HXDLIN( 329)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==2) ){
HXLINE( 331)						Float _hx_tmp;
HXDLIN( 331)						if (boolValue->__get(0)) {
HXLINE( 331)							_hx_tmp = ( (Float)(1) );
            						}
            						else {
HXLINE( 331)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 331)						Float _hx_tmp1;
HXDLIN( 331)						if (boolValue->__get(1)) {
HXLINE( 331)							_hx_tmp1 = ( (Float)(1) );
            						}
            						else {
HXLINE( 331)							_hx_tmp1 = ( (Float)(0) );
            						}
HXDLIN( 331)						Float _hx_tmp2;
HXDLIN( 331)						if (boolValue->__get(2)) {
HXLINE( 331)							_hx_tmp2 = ( (Float)(1) );
            						}
            						else {
HXLINE( 331)							_hx_tmp2 = ( (Float)(0) );
            						}
HXDLIN( 331)						gl->vertexAttrib3f(( (int)(this->index) ),_hx_tmp,_hx_tmp1,_hx_tmp2);
HXDLIN( 331)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==3) ){
HXLINE( 333)						Float _hx_tmp;
HXDLIN( 333)						if (boolValue->__get(0)) {
HXLINE( 333)							_hx_tmp = ( (Float)(1) );
            						}
            						else {
HXLINE( 333)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 333)						Float _hx_tmp1;
HXDLIN( 333)						if (boolValue->__get(1)) {
HXLINE( 333)							_hx_tmp1 = ( (Float)(1) );
            						}
            						else {
HXLINE( 333)							_hx_tmp1 = ( (Float)(0) );
            						}
HXDLIN( 333)						Float _hx_tmp2;
HXDLIN( 333)						if (boolValue->__get(2)) {
HXLINE( 333)							_hx_tmp2 = ( (Float)(1) );
            						}
            						else {
HXLINE( 333)							_hx_tmp2 = ( (Float)(0) );
            						}
HXDLIN( 333)						Float _hx_tmp3;
HXDLIN( 333)						if (boolValue->__get(3)) {
HXLINE( 333)							_hx_tmp3 = ( (Float)(1) );
            						}
            						else {
HXLINE( 333)							_hx_tmp3 = ( (Float)(0) );
            						}
HXDLIN( 333)						gl->vertexAttrib4f(( (int)(this->index) ),_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3);
HXDLIN( 333)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==4) ){
HXLINE( 335)						gl->vertexAttrib1f(( (int)(this->index) ),floatValue->__get(0));
HXDLIN( 335)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==5) ){
HXLINE( 337)						gl->vertexAttrib2f(( (int)(this->index) ),floatValue->__get(0),floatValue->__get(1));
HXDLIN( 337)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==6) ){
HXLINE( 339)						gl->vertexAttrib3f(( (int)(this->index) ),floatValue->__get(0),floatValue->__get(1),floatValue->__get(2));
HXDLIN( 339)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==7) ){
HXLINE( 341)						gl->vertexAttrib4f(( (int)(this->index) ),floatValue->__get(0),floatValue->__get(1),floatValue->__get(2),floatValue->__get(3));
HXDLIN( 341)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==8) ){
HXLINE( 362)						gl->vertexAttrib1f(( (int)(this->index) ),( (Float)(intValue->__get(0)) ));
HXDLIN( 362)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==9) ){
HXLINE( 364)						gl->vertexAttrib2f(( (int)(this->index) ),( (Float)(intValue->__get(0)) ),( (Float)(intValue->__get(1)) ));
HXDLIN( 364)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==10) ){
HXLINE( 366)						gl->vertexAttrib3f(( (int)(this->index) ),( (Float)(intValue->__get(0)) ),( (Float)(intValue->__get(1)) ),( (Float)(intValue->__get(2)) ));
HXDLIN( 366)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==11) ){
HXLINE( 368)						gl->vertexAttrib4f(( (int)(this->index) ),( (Float)(intValue->__get(0)) ),( (Float)(intValue->__get(1)) ),( (Float)(intValue->__get(2)) ),( (Float)(intValue->__get(3)) ));
HXDLIN( 368)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==12) ){
HXLINE( 346)						gl->vertexAttrib2f(( (int)((this->index + 0)) ),floatValue->__get(0),floatValue->__get(1));
HXDLIN( 346)						gl->vertexAttrib2f(( (int)((this->index + 1)) ),floatValue->__get(2),floatValue->__get(3));
HXLINE( 344)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==16) ){
HXLINE( 352)						gl->vertexAttrib3f(( (int)((this->index + 0)) ),floatValue->__get(0),floatValue->__get(1),floatValue->__get(2));
HXDLIN( 352)						gl->vertexAttrib3f(( (int)((this->index + 1)) ),floatValue->__get(3),floatValue->__get(4),floatValue->__get(5));
HXDLIN( 352)						gl->vertexAttrib3f(( (int)((this->index + 2)) ),floatValue->__get(6),floatValue->__get(7),floatValue->__get(8));
HXLINE( 350)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==20) ){
HXLINE( 358)						gl->vertexAttrib4f(( (int)((this->index + 0)) ),floatValue->__get(0),floatValue->__get(1),floatValue->__get(2),floatValue->__get(3));
HXDLIN( 358)						gl->vertexAttrib4f(( (int)((this->index + 1)) ),floatValue->__get(4),floatValue->__get(5),floatValue->__get(6),floatValue->__get(7));
HXDLIN( 358)						gl->vertexAttrib4f(( (int)((this->index + 2)) ),floatValue->__get(8),floatValue->__get(9),floatValue->__get(10),floatValue->__get(11));
HXDLIN( 358)						gl->vertexAttrib4f(( (int)((this->index + 3)) ),floatValue->__get(12),floatValue->__get(13),floatValue->__get(14),floatValue->__get(15));
HXLINE( 356)						goto _hx_goto_6;
            					}
            					/* default */{
            					}
            					_hx_goto_6:;
            				}
            				else {
HXLINE( 374)					 ::Dynamic _hx_switch_3 = this->type;
            					if (  (_hx_switch_3==1) ||  (_hx_switch_3==5) ||  (_hx_switch_3==9) ){
HXLINE( 379)						gl->vertexAttrib2f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 379)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_3==3) ||  (_hx_switch_3==7) ||  (_hx_switch_3==11) ){
HXLINE( 383)						gl->vertexAttrib4f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 383)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_3==0) ||  (_hx_switch_3==4) ||  (_hx_switch_3==8) ){
HXLINE( 377)						gl->vertexAttrib1f(( (int)(this->index) ),( (Float)(0) ));
HXDLIN( 377)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_3==2) ||  (_hx_switch_3==6) ||  (_hx_switch_3==10) ){
HXLINE( 381)						gl->vertexAttrib3f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 381)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_3==12) ){
HXLINE( 388)						gl->vertexAttrib2f(( (int)((this->index + 0)) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 388)						gl->vertexAttrib2f(( (int)((this->index + 1)) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 386)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_3==16) ){
HXLINE( 394)						gl->vertexAttrib3f(( (int)((this->index + 0)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 394)						gl->vertexAttrib3f(( (int)((this->index + 1)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 394)						gl->vertexAttrib3f(( (int)((this->index + 2)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 392)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_3==20) ){
HXLINE( 400)						gl->vertexAttrib4f(( (int)((this->index + 0)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 400)						gl->vertexAttrib4f(( (int)((this->index + 1)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 400)						gl->vertexAttrib4f(( (int)((this->index + 2)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 400)						gl->vertexAttrib4f(( (int)((this->index + 3)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 398)						goto _hx_goto_7;
            					}
            					/* default */{
            					}
            					_hx_goto_7:;
            				}
            			}
            			else {
HXLINE( 409)				int _g = 0;
HXDLIN( 409)				int _g1 = this->_hx___arrayLength;
HXDLIN( 409)				while((_g < _g1)){
HXLINE( 409)					_g = (_g + 1);
HXDLIN( 409)					int i = (_g - 1);
HXLINE( 411)					gl->enableVertexAttribArray(( (int)((this->index + i)) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderParameter_Float_obj,_hx___updateGL,(void))

void ShaderParameter_Float_obj::_hx___updateGLFromBuffer( ::openfl::display3D::Context3D context, ::lime::utils::ArrayBufferView buffer,int position,int length,int bufferOffset){
            	HX_STACKFRAME(&_hx_pos_8c0b4e9630d09afb_419___updateGLFromBuffer)
HXLINE( 421)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 423)		if (this->_hx___isUniform) {
HXLINE( 425)			if ((length >= this->__length)) {
HXLINE( 427)				 ::Dynamic _hx_switch_0 = this->type;
            				if (  (_hx_switch_0==1) ||  (_hx_switch_0==9) ){
HXLINE( 432)					int location = ( (int)(this->index) );
HXDLIN( 432)					int v0 = ::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4))));
HXDLIN( 432)					gl->uniform2i(location,v0,::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)))));
HXDLIN( 432)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==3) ||  (_hx_switch_0==11) ){
HXLINE( 436)					int location = ( (int)(this->index) );
HXDLIN( 436)					int v0 = ::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4))));
HXDLIN( 436)					int v1 = ::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4))));
HXDLIN( 436)					int v2 = ::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4))));
HXDLIN( 436)					gl->uniform4i(location,v0,v1,v2,::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4)))));
HXDLIN( 436)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==4) ){
HXLINE( 439)					int location = ( (int)(this->index) );
HXDLIN( 439)					gl->uniform1f(location, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4))));
HXDLIN( 439)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==5) ){
HXLINE( 441)					int location = ( (int)(this->index) );
HXDLIN( 441)					Float v0 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 441)					gl->uniform2f(location,v0, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4))));
HXDLIN( 441)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==6) ){
HXLINE( 443)					int location = ( (int)(this->index) );
HXDLIN( 443)					Float v0 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 443)					Float v1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 443)					gl->uniform3f(location,v0,v1, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4))));
HXDLIN( 443)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==7) ){
HXLINE( 445)					int location = ( (int)(this->index) );
HXDLIN( 445)					Float v0 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 445)					Float v1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 445)					Float v2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 445)					gl->uniform4f(location,v0,v1,v2, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4))));
HXDLIN( 445)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==0) ||  (_hx_switch_0==8) ){
HXLINE( 430)					int location = ( (int)(this->index) );
HXDLIN( 430)					gl->uniform1i(location,::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)))));
HXDLIN( 430)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==2) ||  (_hx_switch_0==10) ){
HXLINE( 434)					int location = ( (int)(this->index) );
HXDLIN( 434)					int v0 = ::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4))));
HXDLIN( 434)					int v1 = ::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4))));
HXDLIN( 434)					gl->uniform3i(location,v0,v1,::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)))));
HXDLIN( 434)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==12) ){
HXLINE( 448)					{
HXLINE( 450)						{
HXLINE( 450)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 450)							Float val =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 450)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            						}
HXDLIN( 450)						{
HXLINE( 450)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 450)							Float val1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 450)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            						}
HXDLIN( 450)						{
HXLINE( 450)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 450)							Float val2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 450)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            						}
HXDLIN( 450)						{
HXLINE( 450)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 450)							Float val3 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4)));
HXDLIN( 450)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            						}
            					}
HXLINE( 452)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix2fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 447)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==16) ){
HXLINE( 459)					{
HXLINE( 461)						{
HXLINE( 461)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 461)							Float val =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 461)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            						}
HXDLIN( 461)						{
HXLINE( 461)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 461)							Float val1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 461)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            						}
HXDLIN( 461)						{
HXLINE( 461)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 461)							Float val2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 461)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            						}
HXDLIN( 461)						{
HXLINE( 461)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 461)							Float val3 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4)));
HXDLIN( 461)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            						}
HXDLIN( 461)						{
HXLINE( 461)							 ::lime::utils::ArrayBufferView this5 = this->_hx___uniformMatrix;
HXDLIN( 461)							Float val4 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 4) * 4)));
HXDLIN( 461)							 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),val4);
            						}
HXDLIN( 461)						{
HXLINE( 461)							 ::lime::utils::ArrayBufferView this6 = this->_hx___uniformMatrix;
HXDLIN( 461)							Float val5 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 5) * 4)));
HXDLIN( 461)							 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),val5);
            						}
HXDLIN( 461)						{
HXLINE( 461)							 ::lime::utils::ArrayBufferView this7 = this->_hx___uniformMatrix;
HXDLIN( 461)							Float val6 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 6) * 4)));
HXDLIN( 461)							 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),val6);
            						}
HXDLIN( 461)						{
HXLINE( 461)							 ::lime::utils::ArrayBufferView this8 = this->_hx___uniformMatrix;
HXDLIN( 461)							Float val7 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 7) * 4)));
HXDLIN( 461)							 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),val7);
            						}
HXDLIN( 461)						{
HXLINE( 461)							 ::lime::utils::ArrayBufferView this9 = this->_hx___uniformMatrix;
HXDLIN( 461)							Float val8 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 8) * 4)));
HXDLIN( 461)							 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),val8);
            						}
            					}
HXLINE( 463)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix3fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 458)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==20) ){
HXLINE( 470)					{
HXLINE( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val3 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this5 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val4 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 4) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),val4);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this6 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val5 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 5) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),val5);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this7 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val6 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 6) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),val6);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this8 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val7 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 7) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),val7);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this9 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val8 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 8) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),val8);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this10 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val9 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 9) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this10->buffer->b,(this10->byteOffset + 36),val9);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this11 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val10 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 10) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this11->buffer->b,(this11->byteOffset + 40),val10);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this12 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val11 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 11) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this12->buffer->b,(this12->byteOffset + 44),val11);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this13 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val12 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 12) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this13->buffer->b,(this13->byteOffset + 48),val12);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this14 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val13 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 13) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this14->buffer->b,(this14->byteOffset + 52),val13);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this15 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val14 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 14) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this15->buffer->b,(this15->byteOffset + 56),val14);
            						}
HXDLIN( 472)						{
HXLINE( 472)							 ::lime::utils::ArrayBufferView this16 = this->_hx___uniformMatrix;
HXDLIN( 472)							Float val15 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 15) * 4)));
HXDLIN( 472)							 ::__hxcpp_memory_set_float(this16->buffer->b,(this16->byteOffset + 60),val15);
            						}
            					}
HXLINE( 474)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix4fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 469)					goto _hx_goto_10;
            				}
            				/* default */{
            				}
            				_hx_goto_10:;
            			}
            		}
            		else {
HXLINE( 482)			bool _hx_tmp;
HXDLIN( 482)			if (!(this->_hx___internal)) {
HXLINE( 482)				if ((length != 0)) {
HXLINE( 482)					_hx_tmp = (length == this->__length);
            				}
            				else {
HXLINE( 482)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 482)				_hx_tmp = false;
            			}
HXDLIN( 482)			if (_hx_tmp) {
HXLINE( 484)				{
HXLINE( 484)					int _g = 0;
HXDLIN( 484)					int _g1 = this->_hx___arrayLength;
HXDLIN( 484)					while((_g < _g1)){
HXLINE( 484)						_g = (_g + 1);
HXDLIN( 484)						int i = (_g - 1);
HXLINE( 486)						gl->disableVertexAttribArray(( (int)((this->index + i)) ));
            					}
            				}
HXLINE( 489)				if ((length > 0)) {
HXLINE( 491)					 ::Dynamic _hx_switch_1 = this->type;
            					if (  (_hx_switch_1==1) ||  (_hx_switch_1==5) ||  (_hx_switch_1==9) ){
HXLINE( 496)						int indx = ( (int)(this->index) );
HXDLIN( 496)						Float x =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 496)						gl->vertexAttrib2f(indx,x, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4))));
HXDLIN( 496)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==3) ||  (_hx_switch_1==7) ||  (_hx_switch_1==11) ){
HXLINE( 500)						int indx = ( (int)(this->index) );
HXDLIN( 500)						Float x =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 500)						Float y =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 500)						Float z =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 500)						gl->vertexAttrib4f(indx,x,y,z, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4))));
HXDLIN( 500)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==0) ||  (_hx_switch_1==4) ||  (_hx_switch_1==8) ){
HXLINE( 494)						int indx = ( (int)(this->index) );
HXDLIN( 494)						gl->vertexAttrib1f(indx, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4))));
HXDLIN( 494)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==2) ||  (_hx_switch_1==6) ||  (_hx_switch_1==10) ){
HXLINE( 498)						int indx = ( (int)(this->index) );
HXDLIN( 498)						Float x =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 498)						Float y =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 498)						gl->vertexAttrib3f(indx,x,y, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4))));
HXDLIN( 498)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==12) ){
HXLINE( 505)						{
HXLINE( 505)							int indx = ( (int)((this->index + 0)) );
HXDLIN( 505)							Float x =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 505)							gl->vertexAttrib2f(indx,x, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4))));
            						}
HXDLIN( 505)						{
HXLINE( 505)							int indx1 = ( (int)((this->index + 1)) );
HXDLIN( 505)							Float x1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 505)							gl->vertexAttrib2f(indx1,x1, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 2) + 1) * 4))));
            						}
HXLINE( 503)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==16) ){
HXLINE( 511)						{
HXLINE( 511)							int indx = ( (int)((this->index + 0)) );
HXDLIN( 511)							Float x =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 511)							Float y =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 511)							gl->vertexAttrib3f(indx,x,y, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4))));
            						}
HXDLIN( 511)						{
HXLINE( 511)							int indx1 = ( (int)((this->index + 1)) );
HXDLIN( 511)							Float x1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4)));
HXDLIN( 511)							Float y1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 3) + 1) * 4)));
HXDLIN( 511)							gl->vertexAttrib3f(indx1,x1,y1, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 3) + 2) * 4))));
            						}
HXDLIN( 511)						{
HXLINE( 511)							int indx2 = ( (int)((this->index + 2)) );
HXDLIN( 511)							Float x2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 6) * 4)));
HXDLIN( 511)							Float y2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 6) + 1) * 4)));
HXDLIN( 511)							gl->vertexAttrib3f(indx2,x2,y2, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 6) + 2) * 4))));
            						}
HXLINE( 509)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==20) ){
HXLINE( 517)						{
HXLINE( 517)							int indx = ( (int)((this->index + 0)) );
HXDLIN( 517)							Float x =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 517)							Float y =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 517)							Float z =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 517)							gl->vertexAttrib4f(indx,x,y,z, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4))));
            						}
HXDLIN( 517)						{
HXLINE( 517)							int indx1 = ( (int)((this->index + 1)) );
HXDLIN( 517)							Float x1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 4) * 4)));
HXDLIN( 517)							Float y1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 4) + 1) * 4)));
HXDLIN( 517)							Float z1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 4) + 2) * 4)));
HXDLIN( 517)							gl->vertexAttrib4f(indx1,x1,y1,z1, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 4) + 3) * 4))));
            						}
HXDLIN( 517)						{
HXLINE( 517)							int indx2 = ( (int)((this->index + 2)) );
HXDLIN( 517)							Float x2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 8) * 4)));
HXDLIN( 517)							Float y2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 8) + 1) * 4)));
HXDLIN( 517)							Float z2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 8) + 2) * 4)));
HXDLIN( 517)							gl->vertexAttrib4f(indx2,x2,y2,z2, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 8) + 3) * 4))));
            						}
HXDLIN( 517)						{
HXLINE( 517)							int indx3 = ( (int)((this->index + 3)) );
HXDLIN( 517)							Float x3 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 12) * 4)));
HXDLIN( 517)							Float y3 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 12) + 1) * 4)));
HXDLIN( 517)							Float z3 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 12) + 2) * 4)));
HXDLIN( 517)							gl->vertexAttrib4f(indx3,x3,y3,z3, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 12) + 3) * 4))));
            						}
HXLINE( 515)						goto _hx_goto_12;
            					}
            					/* default */{
            					}
            					_hx_goto_12:;
            				}
            				else {
HXLINE( 526)					 ::Dynamic _hx_switch_2 = this->type;
            					if (  (_hx_switch_2==1) ||  (_hx_switch_2==5) ||  (_hx_switch_2==9) ){
HXLINE( 531)						gl->vertexAttrib2f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 531)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==3) ||  (_hx_switch_2==7) ||  (_hx_switch_2==11) ){
HXLINE( 535)						gl->vertexAttrib4f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 535)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==0) ||  (_hx_switch_2==4) ||  (_hx_switch_2==8) ){
HXLINE( 529)						gl->vertexAttrib1f(( (int)(this->index) ),( (Float)(0) ));
HXDLIN( 529)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==2) ||  (_hx_switch_2==6) ||  (_hx_switch_2==10) ){
HXLINE( 533)						gl->vertexAttrib3f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 533)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==12) ){
HXLINE( 540)						gl->vertexAttrib2f(( (int)((this->index + 0)) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 540)						gl->vertexAttrib2f(( (int)((this->index + 1)) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 538)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==16) ){
HXLINE( 546)						gl->vertexAttrib3f(( (int)((this->index + 0)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 546)						gl->vertexAttrib3f(( (int)((this->index + 1)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 546)						gl->vertexAttrib3f(( (int)((this->index + 2)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 544)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==20) ){
HXLINE( 552)						gl->vertexAttrib4f(( (int)((this->index + 0)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 552)						gl->vertexAttrib4f(( (int)((this->index + 1)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 552)						gl->vertexAttrib4f(( (int)((this->index + 2)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 552)						gl->vertexAttrib4f(( (int)((this->index + 3)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 550)						goto _hx_goto_13;
            					}
            					/* default */{
            					}
            					_hx_goto_13:;
            				}
            			}
            			else {
HXLINE( 561)				int type = gl->FLOAT;
HXLINE( 562)				if (this->_hx___isBool) {
HXLINE( 562)					type = gl->INT;
            				}
            				else {
HXLINE( 563)					if (this->_hx___isInt) {
HXLINE( 563)						type = gl->INT;
            					}
            				}
HXLINE( 565)				{
HXLINE( 565)					int _g = 0;
HXDLIN( 565)					int _g1 = this->_hx___arrayLength;
HXDLIN( 565)					while((_g < _g1)){
HXLINE( 565)						_g = (_g + 1);
HXDLIN( 565)						int i = (_g - 1);
HXLINE( 567)						gl->enableVertexAttribArray(( (int)((this->index + i)) ));
            					}
            				}
HXLINE( 570)				if ((length > 0)) {
HXLINE( 572)					int _g = 0;
HXDLIN( 572)					int _g1 = this->_hx___arrayLength;
HXDLIN( 572)					while((_g < _g1)){
HXLINE( 572)						_g = (_g + 1);
HXDLIN( 572)						int i = (_g - 1);
HXLINE( 574)						{
HXLINE( 574)							int indx = ( (int)((this->index + i)) );
HXDLIN( 574)							int size = this->__length;
HXDLIN( 574)							int stride = (this->__length * 4);
HXDLIN( 574)							gl->vertexAttribPointer(indx,size,type,false,stride,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((((position + (bufferOffset * this->__length)) + (i * this->_hx___arrayLength)) * 4)));
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(ShaderParameter_Float_obj,_hx___updateGLFromBuffer,(void))

::String ShaderParameter_Float_obj::set_name(::String value){
            	HX_STACKFRAME(&_hx_pos_8c0b4e9630d09afb_585_set_name)
HXLINE( 586)		this->_hx___internal = ::StringTools_obj::startsWith(value,HX_("openfl_",cf,ba,42,40));
HXLINE( 587)		return (this->name = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderParameter_Float_obj,set_name,return )


::hx::ObjectPtr< ShaderParameter_Float_obj > ShaderParameter_Float_obj::__new() {
	::hx::ObjectPtr< ShaderParameter_Float_obj > __this = new ShaderParameter_Float_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ShaderParameter_Float_obj > ShaderParameter_Float_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ShaderParameter_Float_obj *__this = (ShaderParameter_Float_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderParameter_Float_obj), true, "openfl.display.ShaderParameter_Float"));
	*(void **)__this = ShaderParameter_Float_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShaderParameter_Float_obj::ShaderParameter_Float_obj()
{
}

void ShaderParameter_Float_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderParameter_Float);
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(_hx___arrayLength,"__arrayLength");
	HX_MARK_MEMBER_NAME(_hx___internal,"__internal");
	HX_MARK_MEMBER_NAME(_hx___isBool,"__isBool");
	HX_MARK_MEMBER_NAME(_hx___isFloat,"__isFloat");
	HX_MARK_MEMBER_NAME(_hx___isInt,"__isInt");
	HX_MARK_MEMBER_NAME(_hx___isUniform,"__isUniform");
	HX_MARK_MEMBER_NAME(__length,"__length");
	HX_MARK_MEMBER_NAME(_hx___uniformMatrix,"__uniformMatrix");
	HX_MARK_MEMBER_NAME(_hx___useArray,"__useArray");
	HX_MARK_END_CLASS();
}

void ShaderParameter_Float_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(_hx___arrayLength,"__arrayLength");
	HX_VISIT_MEMBER_NAME(_hx___internal,"__internal");
	HX_VISIT_MEMBER_NAME(_hx___isBool,"__isBool");
	HX_VISIT_MEMBER_NAME(_hx___isFloat,"__isFloat");
	HX_VISIT_MEMBER_NAME(_hx___isInt,"__isInt");
	HX_VISIT_MEMBER_NAME(_hx___isUniform,"__isUniform");
	HX_VISIT_MEMBER_NAME(__length,"__length");
	HX_VISIT_MEMBER_NAME(_hx___uniformMatrix,"__uniformMatrix");
	HX_VISIT_MEMBER_NAME(_hx___useArray,"__useArray");
}

::hx::Val ShaderParameter_Float_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__isInt") ) { return ::hx::Val( _hx___isInt ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__isBool") ) { return ::hx::Val( _hx___isBool ); }
		if (HX_FIELD_EQ(inName,"__length") ) { return ::hx::Val( __length ); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return ::hx::Val( set_name_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isFloat") ) { return ::hx::Val( _hx___isFloat ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__internal") ) { return ::hx::Val( _hx___internal ); }
		if (HX_FIELD_EQ(inName,"__useArray") ) { return ::hx::Val( _hx___useArray ); }
		if (HX_FIELD_EQ(inName,"__updateGL") ) { return ::hx::Val( _hx___updateGL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__isUniform") ) { return ::hx::Val( _hx___isUniform ); }
		if (HX_FIELD_EQ(inName,"__disableGL") ) { return ::hx::Val( _hx___disableGL_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__arrayLength") ) { return ::hx::Val( _hx___arrayLength ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uniformMatrix") ) { return ::hx::Val( _hx___uniformMatrix ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__updateGLFromBuffer") ) { return ::hx::Val( _hx___updateGLFromBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderParameter_Float_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_name(inValue.Cast< ::String >()) );name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__isInt") ) { _hx___isInt=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__isBool") ) { _hx___isBool=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__length") ) { __length=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isFloat") ) { _hx___isFloat=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__internal") ) { _hx___internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__useArray") ) { _hx___useArray=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__isUniform") ) { _hx___isUniform=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__arrayLength") ) { _hx___arrayLength=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uniformMatrix") ) { _hx___uniformMatrix=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderParameter_Float_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("__arrayLength",3f,70,c7,d4));
	outFields->push(HX_("__internal",5d,da,ae,cb));
	outFields->push(HX_("__isBool",54,b4,b1,06));
	outFields->push(HX_("__isFloat",32,ba,6a,20));
	outFields->push(HX_("__isInt",05,90,ac,2b));
	outFields->push(HX_("__isUniform",4a,07,8f,e7));
	outFields->push(HX_("__length",06,00,37,47));
	outFields->push(HX_("__uniformMatrix",75,03,f6,b5));
	outFields->push(HX_("__useArray",f2,42,33,90));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderParameter_Float_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderParameter_Float_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsString,(int)offsetof(ShaderParameter_Float_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderParameter_Float_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(ShaderParameter_Float_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsInt,(int)offsetof(ShaderParameter_Float_obj,_hx___arrayLength),HX_("__arrayLength",3f,70,c7,d4)},
	{::hx::fsBool,(int)offsetof(ShaderParameter_Float_obj,_hx___internal),HX_("__internal",5d,da,ae,cb)},
	{::hx::fsBool,(int)offsetof(ShaderParameter_Float_obj,_hx___isBool),HX_("__isBool",54,b4,b1,06)},
	{::hx::fsBool,(int)offsetof(ShaderParameter_Float_obj,_hx___isFloat),HX_("__isFloat",32,ba,6a,20)},
	{::hx::fsBool,(int)offsetof(ShaderParameter_Float_obj,_hx___isInt),HX_("__isInt",05,90,ac,2b)},
	{::hx::fsBool,(int)offsetof(ShaderParameter_Float_obj,_hx___isUniform),HX_("__isUniform",4a,07,8f,e7)},
	{::hx::fsInt,(int)offsetof(ShaderParameter_Float_obj,__length),HX_("__length",06,00,37,47)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(ShaderParameter_Float_obj,_hx___uniformMatrix),HX_("__uniformMatrix",75,03,f6,b5)},
	{::hx::fsBool,(int)offsetof(ShaderParameter_Float_obj,_hx___useArray),HX_("__useArray",f2,42,33,90)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderParameter_Float_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderParameter_Float_obj_sMemberFields[] = {
	HX_("index",12,9b,14,be),
	HX_("name",4b,72,ff,48),
	HX_("type",ba,f2,08,4d),
	HX_("value",71,7f,b8,31),
	HX_("__arrayLength",3f,70,c7,d4),
	HX_("__internal",5d,da,ae,cb),
	HX_("__isBool",54,b4,b1,06),
	HX_("__isFloat",32,ba,6a,20),
	HX_("__isInt",05,90,ac,2b),
	HX_("__isUniform",4a,07,8f,e7),
	HX_("__length",06,00,37,47),
	HX_("__uniformMatrix",75,03,f6,b5),
	HX_("__useArray",f2,42,33,90),
	HX_("__disableGL",ed,3a,e1,35),
	HX_("__updateGL",8e,8b,32,1b),
	HX_("__updateGLFromBuffer",38,8f,d7,17),
	HX_("set_name",48,87,17,77),
	::String(null()) };

::hx::Class ShaderParameter_Float_obj::__mClass;

void ShaderParameter_Float_obj::__register()
{
	ShaderParameter_Float_obj _hx_dummy;
	ShaderParameter_Float_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.ShaderParameter_Float",d7,48,8c,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderParameter_Float_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderParameter_Float_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderParameter_Float_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderParameter_Float_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ShaderParameter_Float_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8c0b4e9630d09afb_96_boot)
HXDLIN(  96)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("index",12,9b,14,be), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("name",4b,72,ff,48), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
}

} // end namespace openfl
} // end namespace display
