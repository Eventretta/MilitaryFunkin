#ifndef INCLUDED_flixel_addons_api_FlxGameJolt
#define INCLUDED_flixel_addons_api_FlxGameJolt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,api,FlxGameJolt)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,URLLoader)

namespace flixel{
namespace addons{
namespace api{


class HXCPP_CLASS_ATTRIBUTES FlxGameJolt_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxGameJolt_obj OBJ_;
		FlxGameJolt_obj();

	public:
		enum { _hx_ClassId = 0x1dd09ff2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.addons.api.FlxGameJolt")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.addons.api.FlxGameJolt"); }

		inline static ::hx::ObjectPtr< FlxGameJolt_obj > __new() {
			::hx::ObjectPtr< FlxGameJolt_obj > __this = new FlxGameJolt_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxGameJolt_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxGameJolt_obj *__this = (FlxGameJolt_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGameJolt_obj), false, "flixel.addons.api.FlxGameJolt"));
			*(void **)__this = FlxGameJolt_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGameJolt_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxGameJolt",11,12,a2,c9); }

		static void __boot();
		static int HASH_MD5;
		static int HASH_SHA1;
		static int TROPHIES_MISSING;
		static int TROPHIES_ACHIEVED;
		static int hashType;
		static bool verbose;
		static  ::Dynamic _callBack;
		static int _gameID;
		static ::String _privateKey;
		static ::String _userName;
		static ::String _userToken;
		static ::String _idURL;
		static bool _initialized;
		static bool _verifyAuth;
		static bool _getImage;
		static  ::openfl::net::URLLoader _loader;
		static ::String URL_API;
		static ::String RETURN_TYPE;
		static ::String URL_GAME_ID;
		static ::String URL_USER_NAME;
		static ::String URL_USER_TOKEN;
		static void init(int GameID,::String PrivateKey,::hx::Null< bool >  AutoAuth,::String UserName,::String UserToken, ::Dynamic Callback);
		static ::Dynamic init_dyn();

		static void fetchUser( ::Dynamic UserID,::String UserName,::Array< int > UserIDs, ::Dynamic Callback);
		static ::Dynamic fetchUser_dyn();

		static void authUser(::String UserName,::String UserToken, ::Dynamic Callback);
		static ::Dynamic authUser_dyn();

		static void openSession( ::Dynamic Callback);
		static ::Dynamic openSession_dyn();

		static void pingSession(::hx::Null< bool >  Active, ::Dynamic Callback);
		static ::Dynamic pingSession_dyn();

		static void closeSession( ::Dynamic Callback);
		static ::Dynamic closeSession_dyn();

		static void fetchTrophy(::hx::Null< int >  DataType, ::Dynamic Callback);
		static ::Dynamic fetchTrophy_dyn();

		static void addTrophy(int TrophyID, ::Dynamic Callback);
		static ::Dynamic addTrophy_dyn();

		static void fetchScore( ::Dynamic Limit, ::Dynamic Callback);
		static ::Dynamic fetchScore_dyn();

		static void addScore(::String Score,Float Sort, ::Dynamic TableID,::hx::Null< bool >  AllowGuest,::String GuestName,::String ExtraData, ::Dynamic Callback);
		static ::Dynamic addScore_dyn();

		static void getTables( ::Dynamic Callback);
		static ::Dynamic getTables_dyn();

		static void fetchData(::String Key,::hx::Null< bool >  User, ::Dynamic Callback);
		static ::Dynamic fetchData_dyn();

		static void setData(::String Key,::String Value,::hx::Null< bool >  User, ::Dynamic Callback);
		static ::Dynamic setData_dyn();

		static void updateData(::String Key,::String Operation,::String Value,::hx::Null< bool >  User, ::Dynamic Callback);
		static ::Dynamic updateData_dyn();

		static void removeData(::String Key,::hx::Null< bool >  User, ::Dynamic Callback);
		static ::Dynamic removeData_dyn();

		static void getAllKeys(::hx::Null< bool >  User, ::Dynamic Callback);
		static ::Dynamic getAllKeys_dyn();

		static void sendLoaderRequest(::String URLString, ::Dynamic Callback);
		static ::Dynamic sendLoaderRequest_dyn();

		static void parseData( ::openfl::events::Event e);
		static ::Dynamic parseData_dyn();

		static void verifyAuthentication( ::haxe::ds::StringMap ReturnMap);
		static ::Dynamic verifyAuthentication_dyn();

		static void resetUser(::String UserName,::String UserToken, ::Dynamic Callback);
		static ::Dynamic resetUser_dyn();

		static void fetchTrophyImage(int ID, ::Dynamic Callback);
		static ::Dynamic fetchTrophyImage_dyn();

		static void fetchAvatarImage( ::Dynamic Callback);
		static ::Dynamic fetchAvatarImage_dyn();

		static void retrieveImage( ::haxe::ds::StringMap ImageMap);
		static ::Dynamic retrieveImage_dyn();

		static void returnImage( ::openfl::events::Event e);
		static ::Dynamic returnImage_dyn();

		static ::String encryptURL(::String Url);
		static ::Dynamic encryptURL_dyn();

		static bool get_initialized();
		static ::Dynamic get_initialized_dyn();

		static bool get_gameInit();
		static ::Dynamic get_gameInit_dyn();

		static bool get_authenticated();
		static ::Dynamic get_authenticated_dyn();

		static ::String get_username();
		static ::Dynamic get_username_dyn();

		static ::String get_usertoken();
		static ::Dynamic get_usertoken_dyn();

		static bool get_isQuickPlay();
		static ::Dynamic get_isQuickPlay_dyn();

		static bool get_isEmbeddedFlash();
		static ::Dynamic get_isEmbeddedFlash_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace api

#endif /* INCLUDED_flixel_addons_api_FlxGameJolt */ 
