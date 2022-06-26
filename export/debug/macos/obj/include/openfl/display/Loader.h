#ifndef INCLUDED_openfl_display_Loader
#define INCLUDED_openfl_display_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Loader)
HX_DECLARE_CLASS2(openfl,display,LoaderInfo)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,ProgressEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,events,UncaughtErrorEvents)
HX_DECLARE_CLASS2(openfl,net,URLRequest)
HX_DECLARE_CLASS2(openfl,_hx_system,LoaderContext)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Loader_obj : public  ::openfl::display::DisplayObjectContainer_obj
{
	public:
		typedef  ::openfl::display::DisplayObjectContainer_obj super;
		typedef Loader_obj OBJ_;
		Loader_obj();

	public:
		enum { _hx_ClassId = 0x25ff2b41 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Loader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.Loader"); }
		static ::hx::ObjectPtr< Loader_obj > __new();
		static ::hx::ObjectPtr< Loader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Loader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Loader",33,bc,03,8d); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::openfl::display::DisplayObject content;
		 ::openfl::display::LoaderInfo contentLoaderInfo;
		 ::openfl::events::UncaughtErrorEvents uncaughtErrorEvents;
		 ::openfl::utils::AssetLibrary _hx___library;
		::String _hx___path;
		bool _hx___unloaded;
		 ::openfl::display::DisplayObject addChild( ::openfl::display::DisplayObject child);

		 ::openfl::display::DisplayObject addChildAt( ::openfl::display::DisplayObject child,int index);

		void close();
		::Dynamic close_dyn();

		void load( ::openfl::net::URLRequest request, ::openfl::_hx_system::LoaderContext context);
		::Dynamic load_dyn();

		void loadBytes( ::openfl::utils::ByteArrayData buffer, ::openfl::_hx_system::LoaderContext context);
		::Dynamic loadBytes_dyn();

		 ::openfl::display::DisplayObject removeChild( ::openfl::display::DisplayObject child);

		 ::openfl::display::DisplayObject removeChildAt(int index);

		void setChildIndex( ::openfl::display::DisplayObject child,int index);

		void unload();
		::Dynamic unload_dyn();

		void unloadAndStop(::hx::Null< bool >  gc);
		::Dynamic unloadAndStop_dyn();

		void _hx___dispatchError(::String text);
		::Dynamic _hx___dispatchError_dyn();

		void _hx___setContent( ::openfl::display::DisplayObject content,int width,int height);
		::Dynamic _hx___setContent_dyn();

		void BitmapData_onError( ::Dynamic error);
		::Dynamic BitmapData_onError_dyn();

		void BitmapData_onLoad( ::openfl::display::BitmapData bitmapData);
		::Dynamic BitmapData_onLoad_dyn();

		void BitmapData_onProgress(int bytesLoaded,int bytesTotal);
		::Dynamic BitmapData_onProgress_dyn();

		void loader_onComplete( ::openfl::events::Event event);
		::Dynamic loader_onComplete_dyn();

		void loader_onError( ::openfl::events::IOErrorEvent event);
		::Dynamic loader_onError_dyn();

		void loader_onProgress( ::openfl::events::ProgressEvent event);
		::Dynamic loader_onProgress_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Loader */ 
