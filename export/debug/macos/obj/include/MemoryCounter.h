#ifndef INCLUDED_MemoryCounter
#define INCLUDED_MemoryCounter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
HX_DECLARE_CLASS0(MemoryCounter)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)



class HXCPP_CLASS_ATTRIBUTES MemoryCounter_obj : public  ::openfl::text::TextField_obj
{
	public:
		typedef  ::openfl::text::TextField_obj super;
		typedef MemoryCounter_obj OBJ_;
		MemoryCounter_obj();

	public:
		enum { _hx_ClassId = 0x5624736f };

		void __construct(::hx::Null< Float >  __o_inX,::hx::Null< Float >  __o_inY,::hx::Null< int >  __o_inCol);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MemoryCounter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MemoryCounter"); }
		static ::hx::ObjectPtr< MemoryCounter_obj > __new(::hx::Null< Float >  __o_inX,::hx::Null< Float >  __o_inY,::hx::Null< int >  __o_inCol);
		static ::hx::ObjectPtr< MemoryCounter_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_inX,::hx::Null< Float >  __o_inY,::hx::Null< int >  __o_inCol);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MemoryCounter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MemoryCounter",db,2d,6d,0d); }

		::Array< Float > times;
		Float memPeak;
		void onEnter( ::openfl::events::Event _);
		::Dynamic onEnter_dyn();

};


#endif /* INCLUDED_MemoryCounter */ 
