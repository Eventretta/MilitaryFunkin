#include <hxcpp.h>

#ifndef INCLUDED_ScanlineEffect
#include <ScanlineEffect.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_46c0692e5a271c8d_139_new,"ScanlineEffect","new",0x7e020f74,"ScanlineEffect.new","ScanlineEffect.hx",139,0x1e699a7c)

void ScanlineEffect_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_46c0692e5a271c8d_139_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t#pragma parameter amp          \"Amplitude\"      1.2500  0.000 2.000 0.05\n\t#pragma parameter phase        \"Phase\"          0.5000  0.000 2.000 0.05\n\t#pragma parameter lines_black  \"Lines Blacks\"   0.0000  0.000 1.000 0.05\n\t#pragma parameter lines_white  \"Lines Whites\"   1.0000  0.000 2.000 0.05\n\t \n\t#define freq             0.500000\n\t#define offset           0.000000\n\t#define pi               3.141592654\n\t\n\t#ifndef PARAMETER_UNIFORM\n\t#define amp              1.250000\n\t#define phase            0.500000\n\t#define lines_black      0.000000\n\t#define lines_white      1.000000\n\t#endif\n\t \n\t#if defined(VERTEX)\n\t\n\t#ifdef GL_ES\n\t#define COMPAT_PRECISION mediump\n\t#else\n\t#define COMPAT_PRECISION\n\t#endif\n\t \n\t#if __VERSION__ >= 130\n\t#define COMPAT_VARYING out\n\t#define COMPAT_ATTRIBUTE in\n\t#define COMPAT_TEXTURE texture\n\t#else\n\t#define COMPAT_VARYING varying\n\t#define COMPAT_ATTRIBUTE attribute\n\t#define COMPAT_TEXTURE texture2D\n\t#endif\n\t \n\tCOMPAT_ATTRIBUTE vec4 VertexCoord;\n\tCOMPAT_ATTRIBUTE vec4 COLOR;\n\tCOMPAT_ATTRIBUTE vec4 TexCoord;\n\tCOMPAT_VARYING vec4 COL0;\n\tCOMPAT_VARYING vec4 TEX0;\n\tCOMPAT_VARYING float angle;\n\t \n\tvec4 _oPosition1;\n\tuniform mat4 MVPMatrix;\n\tuniform COMPAT_PRECISION int FrameDirection;\n\tuniform COMPAT_PRECISION int FrameCount;\n\tuniform COMPAT_PRECISION vec2 OutputSize;\n\tuniform COMPAT_PRECISION vec2 TextureSize;\n\tuniform COMPAT_PRECISION vec2 InputSize;\n\t\n\t#ifdef PARAMETER_UNIFORM\n\tuniform COMPAT_PRECISION float amp;\n\tuniform COMPAT_PRECISION float phase;\n\tuniform COMPAT_PRECISION float lines_black;\n\tuniform COMPAT_PRECISION float lines_white;\n\t#endif\n\t \n\tvoid main()\n\t{\n\t\tgl_Position = MVPMatrix * VertexCoord;\n\t\tCOL0 = COLOR;\n\t\tTEX0.xy = TexCoord.xy;\n\t \n\t\tfloat omega = 2.0 * pi * freq;              // Angular frequency\n\t\tangle = TEX0.y * omega * TextureSize.y + phase;\n\t}\n\t \n\t#elif defined(FRAGMENT)\n\t \n\t#if __VERSION__ >= 130\n\t#define COMPAT_VARYING in\n\t#define COMPAT_TEXTURE texture\n\tout vec4 FragColor;\n\t#else\n\t#define COMPAT_VARYING varying\n\t#define FragColor gl_FragColor\n\t#define COMPAT_TEXTURE texture2D\n\t#endif\n\t \n\t#ifdef GL_ES\n\t#ifdef GL_FRAGMENT_PRECISION_HIGH\n\tprecision highp float;\n\t#else\n\tprecision mediump float;\n\t#endif\n\t#define COMPAT_PRECISION mediump\n\t#else\n\t#define COMPAT_PRECISION\n\t#endif\n\t \n\tuniform COMPAT_PRECISION int FrameDirection;\n\tuniform COMPAT_PRECISION int FrameCount;\n\tuniform COMPAT_PRECISION vec2 OutputSize;\n\tuniform COMPAT_PRECISION vec2 TextureSize;\n\tuniform COMPAT_PRECISION vec2 InputSize;\n\tuniform sampler2D Texture;\n\tCOMPAT_VARYING vec4 TEX0;\n\tCOMPAT_VARYING float angle;\n\t \n\t// compatibility #defines\n\t#define Source Texture\n\t#define vTexCoord TEX0.xy\n\t\n\t#define SourceSize vec4(TextureSize, 1.0 / TextureSize) //either TextureSize or InputSize\n\t#define OutputSize vec4(OutputSize, 1.0 / OutputSize)\n\t \n\t#ifdef PARAMETER_UNIFORM\n\tuniform COMPAT_PRECISION float amp;\n\tuniform COMPAT_PRECISION float phase;\n\tuniform COMPAT_PRECISION float lines_black;\n\tuniform COMPAT_PRECISION float lines_white;\n\t#endif\n\t \n\tvoid main()\n\t{\n\t\tvec3 color = COMPAT_TEXTURE(Source, vTexCoord).xyz;\n\t\tfloat grid;\n\t \n\t\tfloat lines;\n\t \n\t\tlines = sin(angle);\n\t\tlines *= amp;\n\t\tlines += offset;\n\t\tlines = abs(lines);\n\t\tlines *= lines_white - lines_black;\n\t\tlines += lines_black;\n\t\tcolor *= lines;\n\t \n\t\tFragColor = vec4(color.xyz, 1.0);\n\t}\n\t#endif",0e,ee,6f,43);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 140)		super::__construct();
HXLINE(   5)		this->_hx___isGenerated = true;
HXDLIN(   5)		this->_hx___initGL();
            	}

Dynamic ScanlineEffect_obj::__CreateEmpty() { return new ScanlineEffect_obj; }

void *ScanlineEffect_obj::_hx_vtable = 0;

Dynamic ScanlineEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScanlineEffect_obj > _hx_result = new ScanlineEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScanlineEffect_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x77f40842 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< ScanlineEffect_obj > ScanlineEffect_obj::__new() {
	::hx::ObjectPtr< ScanlineEffect_obj > __this = new ScanlineEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScanlineEffect_obj > ScanlineEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScanlineEffect_obj *__this = (ScanlineEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScanlineEffect_obj), true, "ScanlineEffect"));
	*(void **)__this = ScanlineEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScanlineEffect_obj::ScanlineEffect_obj()
{
}

void ScanlineEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScanlineEffect);
	HX_MARK_MEMBER_NAME(MVPMatrix,"MVPMatrix");
	HX_MARK_MEMBER_NAME(Texture,"Texture");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScanlineEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(MVPMatrix,"MVPMatrix");
	HX_VISIT_MEMBER_NAME(Texture,"Texture");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScanlineEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"Texture") ) { return ::hx::Val( Texture ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MVPMatrix") ) { return ::hx::Val( MVPMatrix ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScanlineEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"Texture") ) { Texture=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MVPMatrix") ) { MVPMatrix=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScanlineEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("MVPMatrix",68,b2,a0,98));
	outFields->push(HX_("Texture",bb,f0,31,6c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScanlineEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ScanlineEffect_obj,MVPMatrix),HX_("MVPMatrix",68,b2,a0,98)},
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(ScanlineEffect_obj,Texture),HX_("Texture",bb,f0,31,6c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScanlineEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String ScanlineEffect_obj_sMemberFields[] = {
	HX_("MVPMatrix",68,b2,a0,98),
	HX_("Texture",bb,f0,31,6c),
	::String(null()) };

::hx::Class ScanlineEffect_obj::__mClass;

void ScanlineEffect_obj::__register()
{
	ScanlineEffect_obj _hx_dummy;
	ScanlineEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ScanlineEffect",82,85,08,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScanlineEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScanlineEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScanlineEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScanlineEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

