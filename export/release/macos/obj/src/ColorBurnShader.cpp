#include <hxcpp.h>

#ifndef INCLUDED_ColorBurnShader
#include <ColorBurnShader.h>
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
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ece942896a87dc68_37_new,"ColorBurnShader","new",0x12328c69,"ColorBurnShader.new","ColorBurnShader.hx",37,0xc6aeb327)

void ColorBurnShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ece942896a87dc68_37_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\t\tuniform vec4 uBlendColor;\n\t\t\n\t\tfloat applyColorBurnToChannel(float base, float blend)\n\t\t{\n\t\t\treturn ((blend == 0.0) ? blend : max((1.0 - ((1.0 - base) / blend)), 0.0));\n\t\t}\n\t\t\n\t\tvec4 blendColorBurn(vec4 base, vec4 blend)\n\t\t{\n\t\t\treturn vec4(\n\t\t\t\tapplyColorBurnToChannel(base.r, blend.r),\n\t\t\t\tapplyColorBurnToChannel(base.g, blend.g),\n\t\t\t\tapplyColorBurnToChannel(base.b, blend.b),\n\t\t\t\tapplyColorBurnToChannel(base.a, blend.a)\n\t\t\t);\n\t\t}\n\t\t\n\t\tvec4 blendColorBurn(vec4 base, vec4 blend, float opacity)\n\t\t{\n\t\t\treturn (blendColorBurn(base, blend) * opacity + base * (1.0 - opacity));\n\t\t}\n\t\t\n\t\tvoid main()\n\t\t{\n\t\t\tvec4 base = texture2D(bitmap, openfl_TextureCoordv);\n\t\t\tgl_FragColor = blendColorBurn(base, uBlendColor, uBlendColor[3]);\n\t\t}",6e,60,24,23);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(  38)		super::__construct();
HXLINE(   5)		this->_hx___isGenerated = true;
HXDLIN(   5)		this->_hx___initGL();
            	}

Dynamic ColorBurnShader_obj::__CreateEmpty() { return new ColorBurnShader_obj; }

void *ColorBurnShader_obj::_hx_vtable = 0;

Dynamic ColorBurnShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorBurnShader_obj > _hx_result = new ColorBurnShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorBurnShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x29570937 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< ColorBurnShader_obj > ColorBurnShader_obj::__new() {
	::hx::ObjectPtr< ColorBurnShader_obj > __this = new ColorBurnShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ColorBurnShader_obj > ColorBurnShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ColorBurnShader_obj *__this = (ColorBurnShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorBurnShader_obj), true, "ColorBurnShader"));
	*(void **)__this = ColorBurnShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ColorBurnShader_obj::ColorBurnShader_obj()
{
}

void ColorBurnShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorBurnShader);
	HX_MARK_MEMBER_NAME(uBlendColor,"uBlendColor");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorBurnShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uBlendColor,"uBlendColor");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ColorBurnShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"uBlendColor") ) { return ::hx::Val( uBlendColor ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ColorBurnShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"uBlendColor") ) { uBlendColor=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorBurnShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("uBlendColor",27,3c,0c,bf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ColorBurnShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(ColorBurnShader_obj,uBlendColor),HX_("uBlendColor",27,3c,0c,bf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ColorBurnShader_obj_sStaticStorageInfo = 0;
#endif

static ::String ColorBurnShader_obj_sMemberFields[] = {
	HX_("uBlendColor",27,3c,0c,bf),
	::String(null()) };

::hx::Class ColorBurnShader_obj::__mClass;

void ColorBurnShader_obj::__register()
{
	ColorBurnShader_obj _hx_dummy;
	ColorBurnShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ColorBurnShader",f7,23,30,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ColorBurnShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ColorBurnShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorBurnShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorBurnShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

