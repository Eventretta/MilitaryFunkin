#ifndef INCLUDED_openfl_printing_PrintJob
#define INCLUDED_openfl_printing_PrintJob

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,printing,PrintJob)
HX_DECLARE_CLASS2(openfl,printing,PrintJobOptions)

namespace openfl{
namespace printing{


class HXCPP_CLASS_ATTRIBUTES PrintJob_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PrintJob_obj OBJ_;
		PrintJob_obj();

	public:
		enum { _hx_ClassId = 0x78a694d5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.printing.PrintJob")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.printing.PrintJob"); }
		static ::hx::ObjectPtr< PrintJob_obj > __new();
		static ::hx::ObjectPtr< PrintJob_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PrintJob_obj();

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
		::String __ToString() const { return HX_("PrintJob",f0,85,c4,02); }

		static void __boot();
		static bool isSupported;
		 ::Dynamic orientation;
		int pageHeight;
		int pageWidth;
		int paperHeight;
		int paperWidth;
		::Array< ::Dynamic> _hx___bitmapData;
		bool _hx___started;
		void addPage( ::openfl::display::Sprite sprite, ::openfl::geom::Rectangle printArea, ::openfl::printing::PrintJobOptions options,::hx::Null< int >  frameNum);
		::Dynamic addPage_dyn();

		void send();
		::Dynamic send_dyn();

		bool start();
		::Dynamic start_dyn();

};

} // end namespace openfl
} // end namespace printing

#endif /* INCLUDED_openfl_printing_PrintJob */ 
