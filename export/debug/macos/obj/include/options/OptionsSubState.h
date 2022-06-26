#ifndef INCLUDED_options_OptionsSubState
#define INCLUDED_options_OptionsSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(options,OptionsSubState)

namespace options{


class HXCPP_CLASS_ATTRIBUTES OptionsSubState_obj : public  ::MusicBeatSubstate_obj
{
	public:
		typedef  ::MusicBeatSubstate_obj super;
		typedef OptionsSubState_obj OBJ_;
		OptionsSubState_obj();

	public:
		enum { _hx_ClassId = 0x0a8da779 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.OptionsSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.OptionsSubState"); }
		static ::hx::ObjectPtr< OptionsSubState_obj > __new();
		static ::hx::ObjectPtr< OptionsSubState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OptionsSubState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OptionsSubState",cf,51,f6,cd); }

		static void __boot();
		static bool isFromPause;
		static bool blockNextAccept;
		static bool clickedSomething;
		static int curSelected;
		static  ::flixel::FlxSprite menuBG;
		 ::flixel::text::FlxText versionShit;
		::Array< ::String > options;
		 ::flixel::group::FlxTypedGroup grpOptions;
		void openSubStaten( ::flixel::FlxSubState next);
		::Dynamic openSubStaten_dyn();

		void openSelectedSubstate(::String label);
		::Dynamic openSelectedSubstate_dyn();

		 ::Alphabet selectorLeft;
		 ::Alphabet selectorRight;
		void create();

		void closeSubState();

		void update(Float elapsed);

		void changeSelection(::hx::Null< int >  change);
		::Dynamic changeSelection_dyn();

};

} // end namespace options

#endif /* INCLUDED_options_OptionsSubState */ 
