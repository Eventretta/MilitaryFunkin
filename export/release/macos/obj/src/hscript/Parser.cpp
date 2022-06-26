#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericStack_hscript_Token
#include <haxe/ds/GenericStack_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_FieldAccess
#include <hscript/FieldAccess.h>
#endif
#ifndef INCLUDED_hscript_FieldKind
#include <hscript/FieldKind.h>
#endif
#ifndef INCLUDED_hscript_ModuleDecl
#include <hscript/ModuleDecl.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_45_new,"hscript.Parser","new",0x4b9f158c,"hscript.Parser.new","hscript/Parser.hx",45,0x98735743)
static const ::String _hx_array_data_e9f29f9a_3[] = {
	HX_("%",25,00,00,00),
};
static const ::String _hx_array_data_e9f29f9a_4[] = {
	HX_("*",2a,00,00,00),HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_e9f29f9a_5[] = {
	HX_("+",2b,00,00,00),HX_("-",2d,00,00,00),
};
static const ::String _hx_array_data_e9f29f9a_6[] = {
	HX_("<<",80,34,00,00),HX_(">>",40,36,00,00),HX_(">>>",fe,41,2f,00),
};
static const ::String _hx_array_data_e9f29f9a_7[] = {
	HX_("|",7c,00,00,00),HX_("&",26,00,00,00),HX_("^",5e,00,00,00),
};
static const ::String _hx_array_data_e9f29f9a_8[] = {
	HX_("==",60,35,00,00),HX_("!=",fc,1c,00,00),HX_(">",3e,00,00,00),HX_("<",3c,00,00,00),HX_(">=",3f,36,00,00),HX_("<=",81,34,00,00),
};
static const ::String _hx_array_data_e9f29f9a_9[] = {
	HX_("...",ee,0f,23,00),
};
static const ::String _hx_array_data_e9f29f9a_10[] = {
	HX_("&&",40,21,00,00),
};
static const ::String _hx_array_data_e9f29f9a_11[] = {
	HX_("||",80,6c,00,00),
};
static const ::String _hx_array_data_e9f29f9a_12[] = {
	HX_("=",3d,00,00,00),HX_("+=",b2,25,00,00),HX_("-=",70,27,00,00),HX_("*=",d3,24,00,00),HX_("/=",2e,29,00,00),HX_("%=",78,20,00,00),HX_("<<=",bd,bb,2d,00),HX_(">>=",fd,41,2f,00),HX_(">>>=",7f,7c,2a,29),HX_("|=",41,6c,00,00),HX_("&=",57,21,00,00),HX_("^=",1f,52,00,00),HX_("=>",61,35,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_150_error,"hscript.Parser","error",0x9bb1b3f4,"hscript.Parser.error","hscript/Parser.hx",150,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_159_invalidChar,"hscript.Parser","invalidChar",0x0ae4fe99,"hscript.Parser.invalidChar","hscript/Parser.hx",159,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_162_initParser,"hscript.Parser","initParser",0xe350f063,"hscript.Parser.initParser","hscript/Parser.hx",162,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_186_parseString,"hscript.Parser","parseString",0xed832690,"hscript.Parser.parseString","hscript/Parser.hx",186,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_200_unexpected,"hscript.Parser","unexpected",0xb7770e25,"hscript.Parser.unexpected","hscript/Parser.hx",200,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_211_push,"hscript.Parser","push",0xe0f2532e,"hscript.Parser.push","hscript/Parser.hx",211,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_215_ensure,"hscript.Parser","ensure",0x52df3412,"hscript.Parser.ensure","hscript/Parser.hx",215,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_220_ensureToken,"hscript.Parser","ensureToken",0x4d49bd87,"hscript.Parser.ensureToken","hscript/Parser.hx",220,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_225_maybe,"hscript.Parser","maybe",0x2baefbd4,"hscript.Parser.maybe","hscript/Parser.hx",225,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_233_getIdent,"hscript.Parser","getIdent",0x33becdce,"hscript.Parser.getIdent","hscript/Parser.hx",233,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_247_expr,"hscript.Parser","expr",0xd9af3e89,"hscript.Parser.expr","hscript/Parser.hx",247,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_255_pmin,"hscript.Parser","pmin",0xe0ec3876,"hscript.Parser.pmin","hscript/Parser.hx",255,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_263_pmax,"hscript.Parser","pmax",0xe0ec3188,"hscript.Parser.pmax","hscript/Parser.hx",263,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_274_mk,"hscript.Parser","mk",0xd828e3b2,"hscript.Parser.mk","hscript/Parser.hx",274,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_278_isBlock,"hscript.Parser","isBlock",0x99f5642f,"hscript.Parser.isBlock","hscript/Parser.hx",278,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_297_parseFullExpr,"hscript.Parser","parseFullExpr",0x2c8eb1e3,"hscript.Parser.parseFullExpr","hscript/Parser.hx",297,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_317_parseObject,"hscript.Parser","parseObject",0xf1927c7e,"hscript.Parser.parseObject","hscript/Parser.hx",317,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_352_parseExpr,"hscript.Parser","parseExpr",0x8f01bd34,"hscript.Parser.parseExpr","hscript/Parser.hx",352,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_481_parseLambda,"hscript.Parser","parseLambda",0x2d1330c6,"hscript.Parser.parseLambda","hscript/Parser.hx",481,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_501_parseMetaArgs,"hscript.Parser","parseMetaArgs",0xfe617641,"hscript.Parser.parseMetaArgs","hscript/Parser.hx",501,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_525_mapCompr,"hscript.Parser","mapCompr",0xde0e1f9b,"hscript.Parser.mapCompr","hscript/Parser.hx",525,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_546_makeUnop,"hscript.Parser","makeUnop",0x60b6401c,"hscript.Parser.makeUnop","hscript/Parser.hx",546,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_556_makeBinop,"hscript.Parser","makeBinop",0x4ad5ff06,"hscript.Parser.makeBinop","hscript/Parser.hx",556,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_579_parseStructure,"hscript.Parser","parseStructure",0x237837d4,"hscript.Parser.parseStructure","hscript/Parser.hx",579,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_767_parseExprNext,"hscript.Parser","parseExprNext",0x83d61847,"hscript.Parser.parseExprNext","hscript/Parser.hx",767,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_814_parseFunctionArgs,"hscript.Parser","parseFunctionArgs",0xca222794,"hscript.Parser.parseFunctionArgs","hscript/Parser.hx",814,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_856_parseFunctionDecl,"hscript.Parser","parseFunctionDecl",0xcc13eaa1,"hscript.Parser.parseFunctionDecl","hscript/Parser.hx",856,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_870_parsePath,"hscript.Parser","parsePath",0x9635a5a4,"hscript.Parser.parsePath","hscript/Parser.hx",870,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_883_parseType,"hscript.Parser","parseType",0x98ecb2b9,"hscript.Parser.parseType","hscript/Parser.hx",883,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_928_parseType,"hscript.Parser","parseType",0x98ecb2b9,"hscript.Parser.parseType","hscript/Parser.hx",928,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1005_parseTypeNext,"hscript.Parser","parseTypeNext",0x8b2ab44c,"hscript.Parser.parseTypeNext","hscript/Parser.hx",1005,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1027_parseExprList,"hscript.Parser","parseExprList",0x8286afb2,"hscript.Parser.parseExprList","hscript/Parser.hx",1027,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1049_parseModule,"hscript.Parser","parseModule",0x9d26326b,"hscript.Parser.parseModule","hscript/Parser.hx",1049,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1065_parseMetadata,"hscript.Parser","parseMetadata",0x157712ee,"hscript.Parser.parseMetadata","hscript/Parser.hx",1065,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1080_parseParams,"hscript.Parser","parseParams",0xc9cdf905,"hscript.Parser.parseParams","hscript/Parser.hx",1080,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1086_parseModuleDecl,"hscript.Parser","parseModuleDecl",0xfa46c075,"hscript.Parser.parseModuleDecl","hscript/Parser.hx",1086,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1179_parseField,"hscript.Parser","parseField",0x1bf7d3db,"hscript.Parser.parseField","hscript/Parser.hx",1179,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1254_readChar,"hscript.Parser","readChar",0x8625b4a0,"hscript.Parser.readChar","hscript/Parser.hx",1254,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1257_readString,"hscript.Parser","readString",0xfc2f051b,"hscript.Parser.readString","hscript/Parser.hx",1257,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1317_token,"hscript.Parser","token",0x3cb36b25,"hscript.Parser.token","hscript/Parser.hx",1317,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1555_preprocValue,"hscript.Parser","preprocValue",0xbabba0cc,"hscript.Parser.preprocValue","hscript/Parser.hx",1555,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1560_parsePreproCond,"hscript.Parser","parsePreproCond",0x44c5e42b,"hscript.Parser.parsePreproCond","hscript/Parser.hx",1560,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1576_evalPreproCond,"hscript.Parser","evalPreproCond",0x4859d7fc,"hscript.Parser.evalPreproCond","hscript/Parser.hx",1576,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1594_preprocess,"hscript.Parser","preprocess",0x83c9d500,"hscript.Parser.preprocess","hscript/Parser.hx",1594,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1626_skipTokens,"hscript.Parser","skipTokens",0xeb6e038d,"hscript.Parser.skipTokens","hscript/Parser.hx",1626,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1641_tokenComment,"hscript.Parser","tokenComment",0xb86c15ba,"hscript.Parser.tokenComment","hscript/Parser.hx",1641,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1684_constString,"hscript.Parser","constString",0x0a4693c0,"hscript.Parser.constString","hscript/Parser.hx",1684,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1695_tokenString,"hscript.Parser","tokenString",0x05f471d6,"hscript.Parser.tokenString","hscript/Parser.hx",1695,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_103_boot,"hscript.Parser","boot",0xd7acc586,"hscript.Parser.boot","hscript/Parser.hx",103,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_104_boot,"hscript.Parser","boot",0xd7acc586,"hscript.Parser.boot","hscript/Parser.hx",104,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_105_boot,"hscript.Parser","boot",0xd7acc586,"hscript.Parser.boot","hscript/Parser.hx",105,0x98735743)
namespace hscript{

void Parser_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_45_new)
HXLINE(  93)		this->uid = 0;
HXLINE(  64)		this->preprocesorValues =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 116)		this->line = 1;
HXLINE( 117)		this->opChars = HX_("+*/-=!><&|^%~",e2,ec,c4,dc);
HXLINE( 118)		this->identChars = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_",e0,b5,3b,15);
HXLINE( 119)		::Array< ::Dynamic> priorities = ::Array_obj< ::Dynamic>::__new(10)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_3,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_4,2))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_5,2))->init(3,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_6,3))->init(4,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_7,3))->init(5,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_8,6))->init(6,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_9,1))->init(7,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_10,1))->init(8,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_11,1))->init(9,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_12,13));
HXLINE( 132)		this->opPriority =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 133)		this->opRightAssoc =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 134)		this->unops =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 140)		{
HXLINE( 140)			int _g = 0;
HXDLIN( 140)			int _g1 = priorities->length;
HXDLIN( 140)			while((_g < _g1)){
HXLINE( 140)				_g = (_g + 1);
HXDLIN( 140)				int i = (_g - 1);
HXLINE( 141)				{
HXLINE( 141)					int _g1 = 0;
HXDLIN( 141)					::Array< ::String > _g2 = priorities->__get(i).StaticCast< ::Array< ::String > >();
HXDLIN( 141)					while((_g1 < _g2->length)){
HXLINE( 141)						::String x = _g2->__get(_g1);
HXDLIN( 141)						_g1 = (_g1 + 1);
HXLINE( 142)						this->opPriority->set(x,i);
HXLINE( 143)						if ((i == 9)) {
HXLINE( 143)							this->opRightAssoc->set(x,true);
            						}
            					}
            				}
            			}
            		}
HXLINE( 145)		{
HXLINE( 145)			{
HXLINE( 145)				::String x = HX_("!",21,00,00,00);
HXLINE( 146)				{
HXLINE( 146)					bool _hx_tmp;
HXDLIN( 146)					if ((x != HX_("++",a0,25,00,00))) {
HXLINE( 146)						_hx_tmp = (x == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 146)						_hx_tmp = true;
            					}
HXDLIN( 146)					this->unops->set(x,_hx_tmp);
            				}
            			}
HXLINE( 145)			{
HXLINE( 145)				::String x1 = HX_("++",a0,25,00,00);
HXLINE( 146)				{
HXLINE( 146)					bool _hx_tmp1;
HXDLIN( 146)					if ((x1 != HX_("++",a0,25,00,00))) {
HXLINE( 146)						_hx_tmp1 = (x1 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 146)						_hx_tmp1 = true;
            					}
HXDLIN( 146)					this->unops->set(x1,_hx_tmp1);
            				}
            			}
HXLINE( 145)			{
HXLINE( 145)				::String x2 = HX_("--",60,27,00,00);
HXLINE( 146)				{
HXLINE( 146)					bool _hx_tmp2;
HXDLIN( 146)					if ((x2 != HX_("++",a0,25,00,00))) {
HXLINE( 146)						_hx_tmp2 = (x2 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 146)						_hx_tmp2 = true;
            					}
HXDLIN( 146)					this->unops->set(x2,_hx_tmp2);
            				}
            			}
HXLINE( 145)			{
HXLINE( 145)				::String x3 = HX_("-",2d,00,00,00);
HXLINE( 146)				{
HXLINE( 146)					bool _hx_tmp3;
HXDLIN( 146)					if ((x3 != HX_("++",a0,25,00,00))) {
HXLINE( 146)						_hx_tmp3 = (x3 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 146)						_hx_tmp3 = true;
            					}
HXDLIN( 146)					this->unops->set(x3,_hx_tmp3);
            				}
            			}
HXLINE( 145)			{
HXLINE( 145)				::String x4 = HX_("~",7e,00,00,00);
HXLINE( 146)				{
HXLINE( 146)					bool _hx_tmp4;
HXDLIN( 146)					if ((x4 != HX_("++",a0,25,00,00))) {
HXLINE( 146)						_hx_tmp4 = (x4 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 146)						_hx_tmp4 = true;
            					}
HXDLIN( 146)					this->unops->set(x4,_hx_tmp4);
            				}
            			}
            		}
            	}

Dynamic Parser_obj::__CreateEmpty() { return new Parser_obj; }

void *Parser_obj::_hx_vtable = 0;

Dynamic Parser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Parser_obj > _hx_result = new Parser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Parser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b857072;
}

void Parser_obj::error( ::hscript::Error err,int pmin,int pmax){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_150_error)
HXDLIN( 150)		if (!(this->resumeErrors)) {
HXLINE( 154)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,error,(void))

void Parser_obj::invalidChar(int c){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_159_invalidChar)
HXDLIN( 159)		if (!(this->resumeErrors)) {
HXDLIN( 159)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::Error_obj::EInvalidChar(c)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,invalidChar,(void))

void Parser_obj::initParser(::String origin){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_162_initParser)
HXLINE( 164)		this->preprocStack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 172)		this->tokens =  ::haxe::ds::GenericStack_hscript_Token_obj::__alloc( HX_CTX );
HXLINE( 176)		this->_hx_char = -1;
HXLINE( 177)		this->ops = ::Array_obj< bool >::__new();
HXLINE( 178)		this->idents = ::Array_obj< bool >::__new();
HXLINE( 179)		this->uid = 0;
HXLINE( 180)		{
HXLINE( 180)			int _g = 0;
HXDLIN( 180)			int _g1 = this->opChars.length;
HXDLIN( 180)			while((_g < _g1)){
HXLINE( 180)				_g = (_g + 1);
HXDLIN( 180)				int i = (_g - 1);
HXLINE( 181)				this->ops[( (int)(this->opChars.charCodeAt(i)) )] = true;
            			}
            		}
HXLINE( 182)		{
HXLINE( 182)			int _g2 = 0;
HXDLIN( 182)			int _g3 = this->identChars.length;
HXDLIN( 182)			while((_g2 < _g3)){
HXLINE( 182)				_g2 = (_g2 + 1);
HXDLIN( 182)				int i = (_g2 - 1);
HXLINE( 183)				this->idents[( (int)(this->identChars.charCodeAt(i)) )] = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,initParser,(void))

 ::hscript::Expr Parser_obj::parseString(::String s,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("hscript",73,8c,18,2c);
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_186_parseString)
HXLINE( 187)		this->initParser(origin);
HXLINE( 188)		this->input = s;
HXLINE( 189)		this->readPos = 0;
HXLINE( 190)		::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 191)		while(true){
HXLINE( 192)			 ::hscript::Token tk = this->token();
HXLINE( 193)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TEof_dyn() )) {
HXLINE( 193)				goto _hx_goto_18;
            			}
HXLINE( 194)			{
HXLINE( 194)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 194)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 195)			this->parseFullExpr(a);
            		}
            		_hx_goto_18:;
HXLINE( 197)		if ((a->length == 1)) {
HXLINE( 197)			return a->__get(0).StaticCast<  ::hscript::Expr >();
            		}
            		else {
HXLINE( 197)			return ::hscript::Expr_obj::EBlock(a);
            		}
HXDLIN( 197)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseString,return )

 ::Dynamic Parser_obj::unexpected( ::hscript::Token tk){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_200_unexpected)
HXLINE( 201)		{
HXLINE( 201)			 ::hscript::Error err = ::hscript::Error_obj::EUnexpected(this->tokenString(tk));
HXDLIN( 201)			if (!(this->resumeErrors)) {
HXLINE( 201)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            			}
            		}
HXLINE( 202)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unexpected,return )

void Parser_obj::push( ::hscript::Token tk){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_211_push)
HXDLIN( 211)		 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 211)		_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,push,(void))

void Parser_obj::ensure( ::hscript::Token tk){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_215_ensure)
HXLINE( 216)		 ::hscript::Token t = this->token();
HXLINE( 217)		if (::hx::IsPointerNotEq( t,tk )) {
HXLINE( 217)			this->unexpected(t);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensure,(void))

void Parser_obj::ensureToken( ::hscript::Token tk){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_220_ensureToken)
HXLINE( 221)		 ::hscript::Token t = this->token();
HXLINE( 222)		if (!(__hxcpp_enum_eq(t,tk))) {
HXLINE( 222)			this->unexpected(t);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensureToken,(void))

bool Parser_obj::maybe( ::hscript::Token tk){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_225_maybe)
HXLINE( 226)		 ::hscript::Token t = this->token();
HXLINE( 227)		if (__hxcpp_enum_eq(t,tk)) {
HXLINE( 228)			return true;
            		}
HXLINE( 229)		{
HXLINE( 229)			 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 229)			_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,t,_this->head);
            		}
HXLINE( 230)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,maybe,return )

::String Parser_obj::getIdent(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_233_getIdent)
HXLINE( 234)		 ::hscript::Token tk = this->token();
HXLINE( 235)		if (::hx::IsNull( tk )) {
HXLINE( 238)			this->unexpected(tk);
HXLINE( 239)			return null();
            		}
            		else {
HXLINE( 235)			if ((tk->_hx_getIndex() == 2)) {
HXLINE( 236)				::String id = tk->_hx_getString(0);
HXDLIN( 236)				return id;
            			}
            			else {
HXLINE( 238)				this->unexpected(tk);
HXLINE( 239)				return null();
            			}
            		}
HXLINE( 235)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,getIdent,return )

 ::hscript::Expr Parser_obj::expr( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_247_expr)
HXDLIN( 247)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,expr,return )

int Parser_obj::pmin( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_255_pmin)
HXDLIN( 255)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmin,return )

int Parser_obj::pmax( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_263_pmax)
HXDLIN( 263)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmax,return )

 ::hscript::Expr Parser_obj::mk( ::hscript::Expr e, ::Dynamic pmin, ::Dynamic pmax){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_274_mk)
HXDLIN( 274)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,mk,return )

bool Parser_obj::isBlock( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_278_isBlock)
HXLINE( 279)		if (::hx::IsNull( e )) {
HXLINE( 279)			return false;
            		}
HXLINE( 280)		switch((int)(e->_hx_getIndex())){
            			case (int)2: {
HXLINE( 283)				::String _g = e->_hx_getString(0);
HXDLIN( 283)				 ::hscript::CType t = e->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN( 283)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 283)				if (::hx::IsNotNull( e1 )) {
HXLINE( 283)					return this->isBlock(e1);
            				}
            				else {
HXLINE( 283)					if (::hx::IsNotNull( t )) {
HXLINE( 283)						if (::hx::IsNull( t )) {
HXLINE( 283)							return false;
            						}
            						else {
HXLINE( 283)							if ((t->_hx_getIndex() == 2)) {
HXLINE( 283)								::Array< ::Dynamic> _g = t->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 283)								return true;
            							}
            							else {
HXLINE( 283)								return false;
            							}
            						}
            					}
            					else {
HXLINE( 283)						return false;
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 281)				::Array< ::Dynamic> _g = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 281)				return true;
            			}
            			break;
            			case (int)6: {
HXLINE( 285)				::String _g = e->_hx_getString(0);
HXDLIN( 285)				 ::hscript::Expr _g1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 285)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 285)				return this->isBlock(e1);
            			}
            			break;
            			case (int)7: {
HXLINE( 286)				::String _g = e->_hx_getString(0);
HXDLIN( 286)				bool prefix = e->_hx_getBool(1);
HXDLIN( 286)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 286)				if (!(prefix)) {
HXLINE( 286)					return this->isBlock(e1);
            				}
            				else {
HXLINE( 286)					return false;
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 284)				 ::hscript::Expr _g = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 284)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 284)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 284)				if (::hx::IsNotNull( e2 )) {
HXLINE( 284)					return this->isBlock(e2);
            				}
            				else {
HXLINE( 284)					return this->isBlock(e1);
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 287)				 ::hscript::Expr _g = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 287)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 287)				return this->isBlock(e1);
            			}
            			break;
            			case (int)11: {
HXLINE( 289)				::String _g = e->_hx_getString(0);
HXDLIN( 289)				 ::hscript::Expr _g1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 289)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 289)				return this->isBlock(e1);
            			}
            			break;
            			case (int)14: {
HXLINE( 282)				::Array< ::Dynamic> _g = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 282)				::String _g1 = e->_hx_getString(2);
HXDLIN( 282)				 ::hscript::CType _g2 = e->_hx_getObject(3).StaticCast<  ::hscript::CType >();
HXDLIN( 282)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 282)				return this->isBlock(e1);
            			}
            			break;
            			case (int)15: {
HXLINE( 290)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 290)				if (::hx::IsNotNull( e1 )) {
HXLINE( 290)					return this->isBlock(e1);
            				}
            				else {
HXLINE( 290)					return false;
            				}
            			}
            			break;
            			case (int)20: {
HXLINE( 291)				 ::hscript::Expr _g = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 291)				::String _g1 = e->_hx_getString(1);
HXDLIN( 291)				 ::hscript::CType _g2 = e->_hx_getObject(2).StaticCast<  ::hscript::CType >();
HXDLIN( 291)				 ::hscript::Expr e1 = e->_hx_getObject(3).StaticCast<  ::hscript::Expr >();
HXDLIN( 291)				return this->isBlock(e1);
            			}
            			break;
            			case (int)21: {
HXLINE( 281)				::Array< ::Dynamic> _g = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 281)				return true;
            			}
            			break;
            			case (int)23: {
HXLINE( 281)				 ::hscript::Expr _g = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 281)				::Array< ::Dynamic> _g1 = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 281)				 ::hscript::Expr _g2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 281)				return true;
            			}
            			break;
            			case (int)24: {
HXLINE( 288)				 ::hscript::Expr _g = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 288)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 288)				return this->isBlock(e1);
            			}
            			break;
            			case (int)25: {
HXLINE( 292)				::String _g = e->_hx_getString(0);
HXDLIN( 292)				::Array< ::Dynamic> _g1 = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 292)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 292)				return this->isBlock(e1);
            			}
            			break;
            			default:{
HXLINE( 293)				return false;
            			}
            		}
HXLINE( 280)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isBlock,return )

void Parser_obj::parseFullExpr(::Array< ::Dynamic> exprs){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_297_parseFullExpr)
HXLINE( 298)		 ::hscript::Expr e = this->parseExpr();
HXLINE( 299)		exprs->push(e);
HXLINE( 301)		 ::hscript::Token tk = this->token();
HXLINE( 303)		while(true){
HXLINE( 303)			bool _hx_tmp;
HXDLIN( 303)			bool _hx_tmp1;
HXDLIN( 303)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TComma_dyn() )) {
HXLINE( 303)				_hx_tmp1 = ::hx::IsNotNull( e );
            			}
            			else {
HXLINE( 303)				_hx_tmp1 = false;
            			}
HXDLIN( 303)			if (_hx_tmp1) {
HXLINE( 303)				if ((e->_hx_getIndex() == 2)) {
HXLINE( 303)					::String _g = e->_hx_getString(0);
HXDLIN( 303)					 ::hscript::CType _g1 = e->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN( 303)					 ::hscript::Expr _g2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 303)					_hx_tmp = true;
            				}
            				else {
HXLINE( 303)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 303)				_hx_tmp = false;
            			}
HXDLIN( 303)			if (!(_hx_tmp)) {
HXLINE( 303)				goto _hx_goto_31;
            			}
HXLINE( 304)			e = this->parseStructure(HX_("var",e7,de,59,00));
HXLINE( 305)			exprs->push(e);
HXLINE( 306)			tk = this->token();
            		}
            		_hx_goto_31:;
HXLINE( 309)		bool _hx_tmp;
HXDLIN( 309)		if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE( 309)			_hx_tmp = ::hx::IsPointerNotEq( tk,::hscript::Token_obj::TEof_dyn() );
            		}
            		else {
HXLINE( 309)			_hx_tmp = false;
            		}
HXDLIN( 309)		if (_hx_tmp) {
HXLINE( 310)			if (this->isBlock(e)) {
HXLINE( 311)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 311)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
            			else {
HXLINE( 313)				this->unexpected(tk);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseFullExpr,(void))

 ::hscript::Expr Parser_obj::parseObject( ::Dynamic p1){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_317_parseObject)
HXLINE( 319)		::Array< ::Dynamic> fl = ::Array_obj< ::Dynamic>::__new();
HXLINE( 320)		while(true){
HXLINE( 321)			 ::hscript::Token tk = this->token();
HXLINE( 322)			::String id = null();
HXLINE( 323)			if (::hx::IsNull( tk )) {
HXLINE( 335)				this->unexpected(tk);
HXLINE( 336)				goto _hx_goto_33;
            			}
            			else {
HXLINE( 323)				switch((int)(tk->_hx_getIndex())){
            					case (int)1: {
HXLINE( 325)						 ::hscript::Const c = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXDLIN( 325)						{
HXLINE( 326)							if (!(this->allowJSON)) {
HXLINE( 327)								this->unexpected(tk);
            							}
HXLINE( 328)							if ((c->_hx_getIndex() == 2)) {
HXLINE( 329)								::String s = c->_hx_getString(0);
HXDLIN( 329)								id = s;
            							}
            							else {
HXLINE( 330)								this->unexpected(tk);
            							}
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 324)						::String i = tk->_hx_getString(0);
HXDLIN( 324)						id = i;
            					}
            					break;
            					case (int)7: {
HXLINE( 333)						goto _hx_goto_33;
            					}
            					break;
            					default:{
HXLINE( 335)						this->unexpected(tk);
HXLINE( 336)						goto _hx_goto_33;
            					}
            				}
            			}
HXLINE( 338)			{
HXLINE( 338)				 ::hscript::Token t = this->token();
HXDLIN( 338)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 338)					this->unexpected(t);
            				}
            			}
HXLINE( 339)			fl->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("e",65,00,00,00),this->parseExpr())
            				->setFixed(1,HX_("name",4b,72,ff,48),id)));
HXLINE( 340)			tk = this->token();
HXLINE( 341)			if (::hx::IsNull( tk )) {
HXLINE( 346)				this->unexpected(tk);
            			}
            			else {
HXLINE( 341)				switch((int)(tk->_hx_getIndex())){
            					case (int)7: {
HXLINE( 343)						goto _hx_goto_33;
            					}
            					break;
            					case (int)9: {
            					}
            					break;
            					default:{
HXLINE( 346)						this->unexpected(tk);
            					}
            				}
            			}
            		}
            		_hx_goto_33:;
HXLINE( 349)		return this->parseExprNext(::hscript::Expr_obj::EObject(fl));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseObject,return )

 ::hscript::Expr Parser_obj::parseExpr(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_352_parseExpr)
HXLINE( 353)		 ::hscript::Token tk = this->token();
HXLINE( 357)		if (::hx::IsNull( tk )) {
HXLINE( 477)			return this->unexpected(tk);
            		}
            		else {
HXLINE( 357)			switch((int)(tk->_hx_getIndex())){
            				case (int)1: {
HXLINE( 363)					 ::hscript::Const c = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXLINE( 364)					return this->parseExprNext(::hscript::Expr_obj::EConst(c));
            				}
            				break;
            				case (int)2: {
HXLINE( 358)					::String id = tk->_hx_getString(0);
HXLINE( 359)					 ::hscript::Expr e = this->parseStructure(id);
HXLINE( 360)					if (::hx::IsNull( e )) {
HXLINE( 361)						e = ::hscript::Expr_obj::EIdent(id);
            					}
HXLINE( 362)					return this->parseExprNext(e);
            				}
            				break;
            				case (int)3: {
HXLINE( 435)					::String op = tk->_hx_getString(0);
HXLINE( 436)					if (this->unops->exists(op)) {
HXLINE( 437)						int start = 0;
HXLINE( 438)						 ::hscript::Expr e = this->parseExpr();
HXLINE( 439)						bool _hx_tmp;
HXDLIN( 439)						if ((op == HX_("-",2d,00,00,00))) {
HXLINE( 439)							_hx_tmp = ::hx::IsNotNull( e );
            						}
            						else {
HXLINE( 439)							_hx_tmp = false;
            						}
HXDLIN( 439)						if (_hx_tmp) {
HXLINE( 440)							if ((e->_hx_getIndex() == 0)) {
HXLINE( 443)								 ::hscript::Const _g = e->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXDLIN( 443)								switch((int)(_g->_hx_getIndex())){
            									case (int)0: {
HXLINE( 441)										int i = _g->_hx_getInt(0);
HXLINE( 442)										return ::hscript::Expr_obj::EConst(::hscript::Const_obj::CInt(-(i)));
            									}
            									break;
            									case (int)1: {
HXLINE( 443)										Float f = _g->_hx_getFloat(0);
HXLINE( 444)										return ::hscript::Expr_obj::EConst(::hscript::Const_obj::CFloat(-(f)));
            									}
            									break;
            									default:{
            									}
            								}
            							}
            						}
HXLINE( 447)						return this->makeUnop(op,e);
            					}
HXLINE( 449)					return this->unexpected(tk);
            				}
            				break;
            				case (int)4: {
HXLINE( 366)					 ::hscript::Expr e = this->parseExpr();
HXLINE( 367)					tk = this->token();
HXLINE( 368)					if (::hx::IsNotNull( tk )) {
HXLINE( 368)						switch((int)(tk->_hx_getIndex())){
            							case (int)5: {
HXLINE( 370)								return this->parseExprNext(::hscript::Expr_obj::EParent(e));
            							}
            							break;
            							case (int)9: {
HXLINE( 385)								if ((e->_hx_getIndex() == 1)) {
HXLINE( 386)									::String v = e->_hx_getString(0);
HXDLIN( 386)									return this->parseLambda(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(1)
            										->setFixed(0,HX_("name",4b,72,ff,48),v))),0);
            								}
            							}
            							break;
            							case (int)14: {
HXLINE( 372)								 ::hscript::CType t = this->parseType();
HXLINE( 373)								tk = this->token();
HXLINE( 374)								if (::hx::IsNotNull( tk )) {
HXLINE( 374)									switch((int)(tk->_hx_getIndex())){
            										case (int)5: {
HXLINE( 376)											return this->parseExprNext(::hscript::Expr_obj::ECheckType(e,t));
            										}
            										break;
            										case (int)9: {
HXLINE( 378)											if ((e->_hx_getIndex() == 1)) {
HXLINE( 379)												::String v = e->_hx_getString(0);
HXDLIN( 379)												return this->parseLambda(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            													->setFixed(0,HX_("t",74,00,00,00),t)
            													->setFixed(1,HX_("name",4b,72,ff,48),v))),0);
            											}
            										}
            										break;
            										default:{
            										}
            									}
            								}
            							}
            							break;
            							default:{
            							}
            						}
            					}
HXLINE( 391)					return this->unexpected(tk);
            				}
            				break;
            				case (int)6: {
HXLINE( 393)					tk = this->token();
HXLINE( 394)					if (::hx::IsNull( tk )) {
HXLINE( 424)						 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 424)						_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            					}
            					else {
HXLINE( 394)						switch((int)(tk->_hx_getIndex())){
            							case (int)1: {
HXLINE( 406)								 ::hscript::Const c = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXLINE( 407)								if (this->allowJSON) {
HXLINE( 408)									if ((c->_hx_getIndex() == 2)) {
HXLINE( 409)										::String _g = c->_hx_getString(0);
HXDLIN( 409)										{
HXLINE( 410)											 ::hscript::Token tk2 = this->token();
HXLINE( 411)											{
HXLINE( 411)												 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 411)												_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk2,_this->head);
            											}
HXLINE( 412)											{
HXLINE( 412)												 ::haxe::ds::GenericStack_hscript_Token _this1 = this->tokens;
HXDLIN( 412)												_this1->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this1->head);
            											}
HXLINE( 413)											if (::hx::IsNotNull( tk2 )) {
HXLINE( 413)												if ((tk2->_hx_getIndex() == 14)) {
HXLINE( 415)													return this->parseExprNext(this->parseObject(0));
            												}
            											}
            										}
            									}
            									else {
HXLINE( 419)										 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 419)										_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            									}
            								}
            								else {
HXLINE( 422)									 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 422)									_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            								}
            							}
            							break;
            							case (int)2: {
HXLINE( 397)								::String _g = tk->_hx_getString(0);
HXDLIN( 397)								{
HXLINE( 398)									 ::hscript::Token tk2 = this->token();
HXLINE( 399)									{
HXLINE( 399)										 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 399)										_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk2,_this->head);
            									}
HXLINE( 400)									{
HXLINE( 400)										 ::haxe::ds::GenericStack_hscript_Token _this1 = this->tokens;
HXDLIN( 400)										_this1->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this1->head);
            									}
HXLINE( 401)									if (::hx::IsNotNull( tk2 )) {
HXLINE( 401)										if ((tk2->_hx_getIndex() == 14)) {
HXLINE( 403)											return this->parseExprNext(this->parseObject(0));
            										}
            									}
            								}
            							}
            							break;
            							case (int)7: {
HXLINE( 396)								return this->parseExprNext(::hscript::Expr_obj::EObject(::Array_obj< ::Dynamic>::__new(0)));
            							}
            							break;
            							default:{
HXLINE( 424)								 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 424)								_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            							}
            						}
            					}
HXLINE( 426)					::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 427)					while(true){
HXLINE( 428)						this->parseFullExpr(a);
HXLINE( 429)						tk = this->token();
HXLINE( 430)						bool _hx_tmp;
HXDLIN( 430)						if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TBrClose_dyn() )) {
HXLINE( 430)							if (this->resumeErrors) {
HXLINE( 430)								_hx_tmp = ::hx::IsPointerEq( tk,::hscript::Token_obj::TEof_dyn() );
            							}
            							else {
HXLINE( 430)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE( 430)							_hx_tmp = true;
            						}
HXDLIN( 430)						if (_hx_tmp) {
HXLINE( 431)							goto _hx_goto_35;
            						}
HXLINE( 432)						{
HXLINE( 432)							 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 432)							_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            						}
            					}
            					_hx_goto_35:;
HXLINE( 434)					return ::hscript::Expr_obj::EBlock(a);
            				}
            				break;
            				case (int)11: {
HXLINE( 451)					::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 452)					tk = this->token();
HXLINE( 453)					while(true){
HXLINE( 453)						bool _hx_tmp;
HXDLIN( 453)						if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TBkClose_dyn() )) {
HXLINE( 453)							if (this->resumeErrors) {
HXLINE( 453)								_hx_tmp = ::hx::IsPointerNotEq( tk,::hscript::Token_obj::TEof_dyn() );
            							}
            							else {
HXLINE( 453)								_hx_tmp = true;
            							}
            						}
            						else {
HXLINE( 453)							_hx_tmp = false;
            						}
HXDLIN( 453)						if (!(_hx_tmp)) {
HXLINE( 453)							goto _hx_goto_36;
            						}
HXLINE( 454)						{
HXLINE( 454)							 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 454)							_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            						}
HXLINE( 455)						a->push(this->parseExpr());
HXLINE( 456)						tk = this->token();
HXLINE( 457)						if (::hx::IsPointerEq( tk,::hscript::Token_obj::TComma_dyn() )) {
HXLINE( 458)							tk = this->token();
            						}
            					}
            					_hx_goto_36:;
HXLINE( 460)					bool _hx_tmp;
HXDLIN( 460)					if ((a->length == 1)) {
HXLINE( 460)						_hx_tmp = ::hx::IsNotNull( a->__get(0).StaticCast<  ::hscript::Expr >() );
            					}
            					else {
HXLINE( 460)						_hx_tmp = false;
            					}
HXDLIN( 460)					if (_hx_tmp) {
HXLINE( 461)						 ::hscript::Expr _g = a->__get(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 461)						switch((int)(_g->_hx_getIndex())){
            							case (int)10: {
HXLINE( 462)								 ::hscript::Expr _g1 = _g->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 462)								 ::hscript::Expr _g2 = _g->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXLINE( 463)								::String tmp = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 464)								 ::hscript::Expr e = ::hscript::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,::hscript::Expr_obj::EVar(tmp,null(),::hscript::Expr_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0))))->init(1,this->mapCompr(tmp,a->__get(0).StaticCast<  ::hscript::Expr >()))->init(2,::hscript::Expr_obj::EIdent(tmp)));
HXLINE( 469)								return this->parseExprNext(e);
            							}
            							break;
            							case (int)11: {
HXLINE( 462)								::String _g1 = _g->_hx_getString(0);
HXDLIN( 462)								 ::hscript::Expr _g2 = _g->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 462)								 ::hscript::Expr _g3 = _g->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 463)								::String tmp = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 464)								 ::hscript::Expr e = ::hscript::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,::hscript::Expr_obj::EVar(tmp,null(),::hscript::Expr_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0))))->init(1,this->mapCompr(tmp,a->__get(0).StaticCast<  ::hscript::Expr >()))->init(2,::hscript::Expr_obj::EIdent(tmp)));
HXLINE( 469)								return this->parseExprNext(e);
            							}
            							break;
            							case (int)24: {
HXLINE( 462)								 ::hscript::Expr _g1 = _g->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 462)								 ::hscript::Expr _g2 = _g->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXLINE( 463)								::String tmp = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 464)								 ::hscript::Expr e = ::hscript::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,::hscript::Expr_obj::EVar(tmp,null(),::hscript::Expr_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0))))->init(1,this->mapCompr(tmp,a->__get(0).StaticCast<  ::hscript::Expr >()))->init(2,::hscript::Expr_obj::EIdent(tmp)));
HXLINE( 469)								return this->parseExprNext(e);
            							}
            							break;
            							default:{
            							}
            						}
            					}
HXLINE( 472)					return this->parseExprNext(::hscript::Expr_obj::EArrayDecl(a));
            				}
            				break;
            				case (int)15: {
HXLINE( 473)					::String id = tk->_hx_getString(0);
HXDLIN( 473)					if (this->allowMetadata) {
HXLINE( 474)						::Array< ::Dynamic> args = this->parseMetaArgs();
HXLINE( 475)						return ::hscript::Expr_obj::EMeta(id,args,this->parseExpr());
            					}
            					else {
HXLINE( 477)						return this->unexpected(tk);
            					}
            				}
            				break;
            				default:{
HXLINE( 477)					return this->unexpected(tk);
            				}
            			}
            		}
HXLINE( 357)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseExpr,return )

 ::hscript::Expr Parser_obj::parseLambda(::Array< ::Dynamic> args, ::Dynamic pmin){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_481_parseLambda)
HXLINE( 482)		while(true){
HXLINE( 483)			::String id = this->getIdent();
HXLINE( 484)			 ::hscript::CType t;
HXDLIN( 484)			if (this->maybe(::hscript::Token_obj::TDoubleDot_dyn())) {
HXLINE( 484)				t = this->parseType();
            			}
            			else {
HXLINE( 484)				t = null();
            			}
HXLINE( 485)			args->push( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("t",74,00,00,00),t)
            				->setFixed(1,HX_("name",4b,72,ff,48),id)));
HXLINE( 486)			 ::hscript::Token tk = this->token();
HXLINE( 487)			if (::hx::IsNull( tk )) {
HXLINE( 492)				this->unexpected(tk);
HXLINE( 493)				goto _hx_goto_38;
            			}
            			else {
HXLINE( 487)				switch((int)(tk->_hx_getIndex())){
            					case (int)5: {
HXLINE( 490)						goto _hx_goto_38;
            					}
            					break;
            					case (int)9: {
            					}
            					break;
            					default:{
HXLINE( 492)						this->unexpected(tk);
HXLINE( 493)						goto _hx_goto_38;
            					}
            				}
            			}
            		}
            		_hx_goto_38:;
HXLINE( 496)		{
HXLINE( 496)			 ::hscript::Token t = this->token();
HXDLIN( 496)			if (!(__hxcpp_enum_eq(t,::hscript::Token_obj::TOp(HX_("->",71,27,00,00))))) {
HXLINE( 496)				this->unexpected(t);
            			}
            		}
HXLINE( 497)		 ::hscript::Expr eret = this->parseExpr();
HXLINE( 498)		return ::hscript::Expr_obj::EFunction(args,::hscript::Expr_obj::EReturn(eret),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseLambda,return )

::Array< ::Dynamic> Parser_obj::parseMetaArgs(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_501_parseMetaArgs)
HXLINE( 502)		 ::hscript::Token tk = this->token();
HXLINE( 503)		if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 504)			{
HXLINE( 504)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 504)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 505)			return null();
            		}
HXLINE( 507)		::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 508)		tk = this->token();
HXLINE( 509)		if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 510)			{
HXLINE( 510)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 510)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 511)			while(true){
HXLINE( 512)				args->push(this->parseExpr());
HXLINE( 513)				{
HXLINE( 513)					 ::hscript::Token _g = this->token();
HXDLIN( 513)					if (::hx::IsNull( _g )) {
HXLINE( 517)						 ::hscript::Token tk = _g;
HXLINE( 518)						this->unexpected(tk);
            					}
            					else {
HXLINE( 513)						switch((int)(_g->_hx_getIndex())){
            							case (int)5: {
HXLINE( 516)								goto _hx_goto_40;
            							}
            							break;
            							case (int)9: {
            							}
            							break;
            							default:{
HXLINE( 517)								 ::hscript::Token tk = _g;
HXLINE( 518)								this->unexpected(tk);
            							}
            						}
            					}
            				}
            			}
            			_hx_goto_40:;
            		}
HXLINE( 522)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseMetaArgs,return )

 ::hscript::Expr Parser_obj::mapCompr(::String tmp, ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_525_mapCompr)
HXLINE( 526)		if (::hx::IsNull( e )) {
HXLINE( 526)			return null();
            		}
HXLINE( 527)		 ::hscript::Expr edef;
HXDLIN( 527)		switch((int)(e->_hx_getIndex())){
            			case (int)3: {
HXLINE( 538)				 ::hscript::Expr e2 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 527)				edef = ::hscript::Expr_obj::EParent(this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)4: {
HXLINE( 536)				::Array< ::Dynamic> _g = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 536)				if ((_g->length == 1)) {
HXLINE( 536)					 ::hscript::Expr e = _g->__get(0).StaticCast<  ::hscript::Expr >();
HXLINE( 527)					edef = ::hscript::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(1)->init(0,this->mapCompr(tmp,e)));
            				}
            				else {
HXLINE( 527)					edef = ::hscript::Expr_obj::ECall(::hscript::Expr_obj::EField(::hscript::Expr_obj::EIdent(tmp),HX_("push",da,11,61,4a)),::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 534)				 ::hscript::Expr cond = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 534)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 534)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 534)				if (::hx::IsNull( e2 )) {
HXLINE( 527)					edef = ::hscript::Expr_obj::EIf(cond,this->mapCompr(tmp,e1),null());
            				}
            				else {
HXLINE( 527)					edef = ::hscript::Expr_obj::ECall(::hscript::Expr_obj::EField(::hscript::Expr_obj::EIdent(tmp),HX_("push",da,11,61,4a)),::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 530)				 ::hscript::Expr cond = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 530)				 ::hscript::Expr e2 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXLINE( 527)				edef = ::hscript::Expr_obj::EWhile(cond,this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)11: {
HXLINE( 528)				::String v = e->_hx_getString(0);
HXDLIN( 528)				 ::hscript::Expr it = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 528)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 527)				edef = ::hscript::Expr_obj::EFor(v,it,this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)24: {
HXLINE( 532)				 ::hscript::Expr cond = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 532)				 ::hscript::Expr e2 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXLINE( 527)				edef = ::hscript::Expr_obj::EDoWhile(cond,this->mapCompr(tmp,e2));
            			}
            			break;
            			default:{
HXLINE( 527)				edef = ::hscript::Expr_obj::ECall(::hscript::Expr_obj::EField(::hscript::Expr_obj::EIdent(tmp),HX_("push",da,11,61,4a)),::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            			}
            		}
HXLINE( 543)		return edef;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,mapCompr,return )

 ::hscript::Expr Parser_obj::makeUnop(::String op, ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_546_makeUnop)
HXLINE( 547)		bool _hx_tmp;
HXDLIN( 547)		if (::hx::IsNull( e )) {
HXLINE( 547)			_hx_tmp = this->resumeErrors;
            		}
            		else {
HXLINE( 547)			_hx_tmp = false;
            		}
HXDLIN( 547)		if (_hx_tmp) {
HXLINE( 548)			return null();
            		}
HXLINE( 549)		switch((int)(e->_hx_getIndex())){
            			case (int)6: {
HXLINE( 550)				::String bop = e->_hx_getString(0);
HXDLIN( 550)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 550)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 550)				return ::hscript::Expr_obj::EBinop(bop,this->makeUnop(op,e1),e2);
            			}
            			break;
            			case (int)22: {
HXLINE( 551)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 551)				 ::hscript::Expr e2 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 551)				 ::hscript::Expr e3 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 551)				return ::hscript::Expr_obj::ETernary(this->makeUnop(op,e1),e2,e3);
            			}
            			break;
            			default:{
HXLINE( 552)				return ::hscript::Expr_obj::EUnop(op,true,e);
            			}
            		}
HXLINE( 549)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,makeUnop,return )

 ::hscript::Expr Parser_obj::makeBinop(::String op, ::hscript::Expr e1, ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_556_makeBinop)
HXLINE( 557)		bool _hx_tmp;
HXDLIN( 557)		if (::hx::IsNull( e )) {
HXLINE( 557)			_hx_tmp = this->resumeErrors;
            		}
            		else {
HXLINE( 557)			_hx_tmp = false;
            		}
HXDLIN( 557)		if (_hx_tmp) {
HXLINE( 558)			return ::hscript::Expr_obj::EBinop(op,e1,e);
            		}
HXLINE( 559)		switch((int)(e->_hx_getIndex())){
            			case (int)6: {
HXLINE( 560)				::String op2 = e->_hx_getString(0);
HXDLIN( 560)				 ::hscript::Expr e2 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 560)				 ::hscript::Expr e3 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 561)				bool _hx_tmp;
HXDLIN( 561)				 ::Dynamic _hx_tmp1 = this->opPriority->get(op);
HXDLIN( 561)				if (::hx::IsLessEq( _hx_tmp1,this->opPriority->get(op2) )) {
HXLINE( 561)					_hx_tmp = !(this->opRightAssoc->exists(op));
            				}
            				else {
HXLINE( 561)					_hx_tmp = false;
            				}
HXDLIN( 561)				if (_hx_tmp) {
HXLINE( 562)					return ::hscript::Expr_obj::EBinop(op2,this->makeBinop(op,e1,e2),e3);
            				}
            				else {
HXLINE( 564)					return ::hscript::Expr_obj::EBinop(op,e1,e);
            				}
            			}
            			break;
            			case (int)22: {
HXLINE( 565)				 ::hscript::Expr e2 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 565)				 ::hscript::Expr e3 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 565)				 ::hscript::Expr e4 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 566)				if (this->opRightAssoc->exists(op)) {
HXLINE( 567)					return ::hscript::Expr_obj::EBinop(op,e1,e);
            				}
            				else {
HXLINE( 569)					return ::hscript::Expr_obj::ETernary(this->makeBinop(op,e1,e2),e3,e4);
            				}
            			}
            			break;
            			default:{
HXLINE( 571)				return ::hscript::Expr_obj::EBinop(op,e1,e);
            			}
            		}
HXLINE( 559)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,makeBinop,return )

 ::hscript::Expr Parser_obj::parseStructure(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_579_parseStructure)
HXDLIN( 579)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("break",bf,24,ec,b8)) ){
HXLINE( 635)			return ::hscript::Expr_obj::EBreak_dyn();
HXDLIN( 635)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("continue",67,e0,c8,31)) ){
HXLINE( 636)			return ::hscript::Expr_obj::EContinue_dyn();
HXDLIN( 636)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("do",8b,57,00,00)) ){
HXLINE( 618)			 ::hscript::Expr e = this->parseExpr();
HXLINE( 619)			 ::hscript::Token tk = this->token();
HXLINE( 620)			if (::hx::IsNull( tk )) {
HXLINE( 623)				this->unexpected(tk);
            			}
            			else {
HXLINE( 620)				if ((tk->_hx_getIndex() == 2)) {
HXLINE( 622)					if ((tk->_hx_getString(0) != HX_("while",b1,43,bd,c9))) {
HXLINE( 623)						this->unexpected(tk);
            					}
            				}
            				else {
HXLINE( 623)					this->unexpected(tk);
            				}
            			}
HXLINE( 625)			 ::hscript::Expr econd = this->parseExpr();
HXLINE( 626)			return ::hscript::Expr_obj::EDoWhile(econd,e);
HXLINE( 617)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("else",b9,e4,14,43)) ){
HXLINE( 637)			return this->unexpected(::hscript::Token_obj::TId(id));
HXDLIN( 637)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("for",09,c7,4d,00)) ){
HXLINE( 628)			{
HXLINE( 628)				 ::hscript::Token t = this->token();
HXDLIN( 628)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 628)					this->unexpected(t);
            				}
            			}
HXLINE( 629)			::String vname = this->getIdent();
HXLINE( 630)			{
HXLINE( 630)				 ::hscript::Token t1 = this->token();
HXDLIN( 630)				if (!(__hxcpp_enum_eq(t1,::hscript::Token_obj::TId(HX_("in",e5,5b,00,00))))) {
HXLINE( 630)					this->unexpected(t1);
            				}
            			}
HXLINE( 631)			 ::hscript::Expr eiter = this->parseExpr();
HXLINE( 632)			{
HXLINE( 632)				 ::hscript::Token t2 = this->token();
HXDLIN( 632)				if (::hx::IsPointerNotEq( t2,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 632)					this->unexpected(t2);
            				}
            			}
HXLINE( 633)			 ::hscript::Expr e = this->parseExpr();
HXLINE( 634)			return ::hscript::Expr_obj::EFor(vname,eiter,e);
HXLINE( 627)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("function",18,ab,52,14)) ){
HXLINE( 642)			 ::hscript::Token tk = this->token();
HXLINE( 643)			::String name = null();
HXLINE( 644)			if (::hx::IsNull( tk )) {
HXLINE( 646)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 646)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
            			else {
HXLINE( 644)				if ((tk->_hx_getIndex() == 2)) {
HXLINE( 645)					::String id = tk->_hx_getString(0);
HXDLIN( 645)					name = id;
            				}
            				else {
HXLINE( 646)					 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 646)					_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            				}
            			}
HXLINE( 648)			 ::Dynamic inf = this->parseFunctionDecl();
HXLINE( 649)			return ::hscript::Expr_obj::EFunction( ::Dynamic(inf->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)), ::Dynamic(inf->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic)),name, ::Dynamic(inf->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic)));
HXLINE( 641)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("if",dd,5b,00,00)) ){
HXLINE( 581)			{
HXLINE( 581)				 ::hscript::Token t = this->token();
HXDLIN( 581)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 581)					this->unexpected(t);
            				}
            			}
HXLINE( 582)			 ::hscript::Expr cond = this->parseExpr();
HXLINE( 583)			{
HXLINE( 583)				 ::hscript::Token t1 = this->token();
HXDLIN( 583)				if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 583)					this->unexpected(t1);
            				}
            			}
HXLINE( 584)			 ::hscript::Expr e1 = this->parseExpr();
HXLINE( 585)			 ::hscript::Expr e2 = null();
HXLINE( 586)			bool semic = false;
HXLINE( 587)			 ::hscript::Token tk = this->token();
HXLINE( 588)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE( 589)				semic = true;
HXLINE( 590)				tk = this->token();
            			}
HXLINE( 592)			if (__hxcpp_enum_eq(tk,::hscript::Token_obj::TId(HX_("else",b9,e4,14,43)))) {
HXLINE( 593)				e2 = this->parseExpr();
            			}
            			else {
HXLINE( 595)				{
HXLINE( 595)					 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 595)					_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            				}
HXLINE( 596)				if (semic) {
HXLINE( 596)					 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 596)					_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,::hscript::Token_obj::TSemicolon_dyn(),_this->head);
            				}
            			}
HXLINE( 598)			return ::hscript::Expr_obj::EIf(cond,e1,e2);
HXLINE( 580)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("inline",59,ca,3f,99)) ){
HXLINE( 639)			if (!(this->maybe(::hscript::Token_obj::TId(HX_("function",18,ab,52,14))))) {
HXLINE( 639)				this->unexpected(::hscript::Token_obj::TId(HX_("inline",59,ca,3f,99)));
            			}
HXLINE( 640)			return this->parseStructure(HX_("function",18,ab,52,14));
HXLINE( 638)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("new",60,d0,53,00)) ){
HXLINE( 656)			::Array< ::String > a = ::Array_obj< ::String >::__new();
HXLINE( 657)			a->push(this->getIdent());
HXLINE( 658)			while(true){
HXLINE( 659)				 ::hscript::Token tk = this->token();
HXLINE( 660)				if (::hx::IsNull( tk )) {
HXLINE( 666)					this->unexpected(tk);
HXLINE( 667)					goto _hx_goto_46;
            				}
            				else {
HXLINE( 660)					switch((int)(tk->_hx_getIndex())){
            						case (int)4: {
HXLINE( 664)							goto _hx_goto_46;
            						}
            						break;
            						case (int)8: {
HXLINE( 662)							a->push(this->getIdent());
            						}
            						break;
            						default:{
HXLINE( 666)							this->unexpected(tk);
HXLINE( 667)							goto _hx_goto_46;
            						}
            					}
            				}
            			}
            			_hx_goto_46:;
HXLINE( 670)			::Array< ::Dynamic> args = this->parseExprList(::hscript::Token_obj::TPClose_dyn());
HXLINE( 671)			return ::hscript::Expr_obj::ENew(a->join(HX_(".",2e,00,00,00)),args);
HXLINE( 655)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("return",b0,a4,2d,09)) ){
HXLINE( 651)			 ::hscript::Token tk = this->token();
HXLINE( 652)			{
HXLINE( 652)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 652)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 653)			 ::hscript::Expr e;
HXDLIN( 653)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE( 653)				e = null();
            			}
            			else {
HXLINE( 653)				e = this->parseExpr();
            			}
HXLINE( 654)			return ::hscript::Expr_obj::EReturn(e);
HXLINE( 650)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("switch",f4,49,79,c5)) ){
HXLINE( 690)			 ::hscript::Expr e = this->parseExpr();
HXLINE( 691)			 ::hscript::Expr def = null();
HXDLIN( 691)			::Array< ::Dynamic> cases = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 692)			{
HXLINE( 692)				 ::hscript::Token t = this->token();
HXDLIN( 692)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TBrOpen_dyn() )) {
HXLINE( 692)					this->unexpected(t);
            				}
            			}
HXLINE( 693)			while(true){
HXLINE( 694)				 ::hscript::Token tk = this->token();
HXLINE( 695)				if (::hx::IsNull( tk )) {
HXLINE( 757)					this->unexpected(tk);
HXLINE( 758)					goto _hx_goto_47;
            				}
            				else {
HXLINE( 695)					switch((int)(tk->_hx_getIndex())){
            						case (int)2: {
HXLINE( 732)							::String _hx_switch_1 = tk->_hx_getString(0);
            							if (  (_hx_switch_1==HX_("case",b0,1e,ba,41)) ){
HXLINE( 697)								 ::Dynamic c =  ::Dynamic(::hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("expr",35,fd,1d,43),null())
            									->setFixed(1,HX_("values",e2,03,b7,4f),::Array_obj< ::Dynamic>::__new(0)));
HXLINE( 698)								cases->push(c);
HXLINE( 699)								while(true){
HXLINE( 700)									 ::hscript::Expr e = this->parseExpr();
HXLINE( 701)									( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),::hx::paccDynamic)) )->push(e);
HXLINE( 702)									tk = this->token();
HXLINE( 703)									if (::hx::IsNull( tk )) {
HXLINE( 709)										this->unexpected(tk);
HXLINE( 710)										goto _hx_goto_49;
            									}
            									else {
HXLINE( 703)										switch((int)(tk->_hx_getIndex())){
            											case (int)9: {
            											}
            											break;
            											case (int)14: {
HXLINE( 707)												goto _hx_goto_49;
            											}
            											break;
            											default:{
HXLINE( 709)												this->unexpected(tk);
HXLINE( 710)												goto _hx_goto_49;
            											}
            										}
            									}
            								}
            								_hx_goto_49:;
HXLINE( 713)								::Array< ::Dynamic> exprs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 714)								while(true){
HXLINE( 715)									tk = this->token();
HXLINE( 716)									{
HXLINE( 716)										 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 716)										_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            									}
HXLINE( 717)									if (::hx::IsNull( tk )) {
HXLINE( 723)										this->parseFullExpr(exprs);
            									}
            									else {
HXLINE( 717)										switch((int)(tk->_hx_getIndex())){
            											case (int)0: {
HXLINE( 720)												if (this->resumeErrors) {
HXLINE( 721)													goto _hx_goto_50;
            												}
            												else {
HXLINE( 723)													this->parseFullExpr(exprs);
            												}
            											}
            											break;
            											case (int)2: {
HXLINE( 718)												::String _hx_switch_2 = tk->_hx_getString(0);
            												if (  (_hx_switch_2==HX_("case",b0,1e,ba,41)) ||  (_hx_switch_2==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 719)													goto _hx_goto_50;
HXDLIN( 719)													goto _hx_goto_51;
            												}
            												/* default */{
HXLINE( 723)													this->parseFullExpr(exprs);
            												}
            												_hx_goto_51:;
            											}
            											break;
            											case (int)7: {
HXLINE( 719)												goto _hx_goto_50;
            											}
            											break;
            											default:{
HXLINE( 723)												this->parseFullExpr(exprs);
            											}
            										}
            									}
            								}
            								_hx_goto_50:;
HXLINE( 726)								 ::hscript::Expr _hx_tmp;
HXDLIN( 726)								if ((exprs->length == 1)) {
HXLINE( 726)									_hx_tmp = exprs->__get(0).StaticCast<  ::hscript::Expr >();
            								}
            								else {
HXLINE( 728)									if ((exprs->length == 0)) {
HXLINE( 726)										_hx_tmp = ::hscript::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(0));
            									}
            									else {
HXLINE( 726)										_hx_tmp = ::hscript::Expr_obj::EBlock(exprs);
            									}
            								}
HXDLIN( 726)								c->__SetField(HX_("expr",35,fd,1d,43),_hx_tmp,::hx::paccDynamic);
HXLINE( 696)								goto _hx_goto_48;
            							}
            							if (  (_hx_switch_1==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 733)								if (::hx::IsNotNull( def )) {
HXLINE( 733)									this->unexpected(tk);
            								}
HXLINE( 734)								{
HXLINE( 734)									 ::hscript::Token t = this->token();
HXDLIN( 734)									if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 734)										this->unexpected(t);
            									}
            								}
HXLINE( 735)								::Array< ::Dynamic> exprs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 736)								while(true){
HXLINE( 737)									tk = this->token();
HXLINE( 738)									{
HXLINE( 738)										 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 738)										_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            									}
HXLINE( 739)									if (::hx::IsNull( tk )) {
HXLINE( 745)										this->parseFullExpr(exprs);
            									}
            									else {
HXLINE( 739)										switch((int)(tk->_hx_getIndex())){
            											case (int)0: {
HXLINE( 742)												if (this->resumeErrors) {
HXLINE( 743)													goto _hx_goto_52;
            												}
            												else {
HXLINE( 745)													this->parseFullExpr(exprs);
            												}
            											}
            											break;
            											case (int)2: {
HXLINE( 740)												::String _hx_switch_3 = tk->_hx_getString(0);
            												if (  (_hx_switch_3==HX_("case",b0,1e,ba,41)) ||  (_hx_switch_3==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 741)													goto _hx_goto_52;
HXDLIN( 741)													goto _hx_goto_53;
            												}
            												/* default */{
HXLINE( 745)													this->parseFullExpr(exprs);
            												}
            												_hx_goto_53:;
            											}
            											break;
            											case (int)7: {
HXLINE( 741)												goto _hx_goto_52;
            											}
            											break;
            											default:{
HXLINE( 745)												this->parseFullExpr(exprs);
            											}
            										}
            									}
            								}
            								_hx_goto_52:;
HXLINE( 748)								if ((exprs->length == 1)) {
HXLINE( 749)									def = exprs->__get(0).StaticCast<  ::hscript::Expr >();
            								}
            								else {
HXLINE( 750)									if ((exprs->length == 0)) {
HXLINE( 751)										def = ::hscript::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(0));
            									}
            									else {
HXLINE( 753)										def = ::hscript::Expr_obj::EBlock(exprs);
            									}
            								}
HXLINE( 732)								goto _hx_goto_48;
            							}
            							/* default */{
HXLINE( 757)								this->unexpected(tk);
HXLINE( 758)								goto _hx_goto_47;
            							}
            							_hx_goto_48:;
            						}
            						break;
            						case (int)7: {
HXLINE( 755)							goto _hx_goto_47;
            						}
            						break;
            						default:{
HXLINE( 757)							this->unexpected(tk);
HXLINE( 758)							goto _hx_goto_47;
            						}
            					}
            				}
            			}
            			_hx_goto_47:;
HXLINE( 761)			return ::hscript::Expr_obj::ESwitch(e,cases,def);
HXLINE( 689)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("throw",26,5d,90,0f)) ){
HXLINE( 673)			 ::hscript::Expr e = this->parseExpr();
HXLINE( 674)			return ::hscript::Expr_obj::EThrow(e);
HXLINE( 672)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("try",3b,69,58,00)) ){
HXLINE( 676)			 ::hscript::Expr e = this->parseExpr();
HXLINE( 677)			{
HXLINE( 677)				 ::hscript::Token t = this->token();
HXDLIN( 677)				if (!(__hxcpp_enum_eq(t,::hscript::Token_obj::TId(HX_("catch",3b,7c,21,41))))) {
HXLINE( 677)					this->unexpected(t);
            				}
            			}
HXLINE( 678)			{
HXLINE( 678)				 ::hscript::Token t1 = this->token();
HXDLIN( 678)				if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 678)					this->unexpected(t1);
            				}
            			}
HXLINE( 679)			::String vname = this->getIdent();
HXLINE( 680)			{
HXLINE( 680)				 ::hscript::Token t2 = this->token();
HXDLIN( 680)				if (::hx::IsPointerNotEq( t2,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 680)					this->unexpected(t2);
            				}
            			}
HXLINE( 681)			 ::hscript::CType t3 = null();
HXLINE( 682)			if (this->allowTypes) {
HXLINE( 683)				t3 = this->parseType();
            			}
            			else {
HXLINE( 685)				 ::hscript::Token t = this->token();
HXDLIN( 685)				if (!(__hxcpp_enum_eq(t,::hscript::Token_obj::TId(HX_("Dynamic",5f,c7,66,03))))) {
HXLINE( 685)					this->unexpected(t);
            				}
            			}
HXLINE( 686)			{
HXLINE( 686)				 ::hscript::Token t4 = this->token();
HXDLIN( 686)				if (::hx::IsPointerNotEq( t4,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 686)					this->unexpected(t4);
            				}
            			}
HXLINE( 687)			 ::hscript::Expr ec = this->parseExpr();
HXLINE( 688)			return ::hscript::Expr_obj::ETry(e,vname,t3,ec);
HXLINE( 675)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("var",e7,de,59,00)) ){
HXLINE( 600)			::String ident = this->getIdent();
HXLINE( 601)			 ::hscript::Token tk = this->token();
HXLINE( 602)			 ::hscript::CType t = null();
HXLINE( 603)			bool _hx_tmp;
HXDLIN( 603)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 603)				_hx_tmp = this->allowTypes;
            			}
            			else {
HXLINE( 603)				_hx_tmp = false;
            			}
HXDLIN( 603)			if (_hx_tmp) {
HXLINE( 604)				t = this->parseType();
HXLINE( 605)				tk = this->token();
            			}
HXLINE( 607)			 ::hscript::Expr e = null();
HXLINE( 608)			if (__hxcpp_enum_eq(tk,::hscript::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE( 609)				e = this->parseExpr();
            			}
            			else {
HXLINE( 611)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 611)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 612)			return ::hscript::Expr_obj::EVar(ident,t,e);
HXLINE( 599)			goto _hx_goto_45;
            		}
            		if (  (_hx_switch_0==HX_("while",b1,43,bd,c9)) ){
HXLINE( 614)			 ::hscript::Expr econd = this->parseExpr();
HXLINE( 615)			 ::hscript::Expr e = this->parseExpr();
HXLINE( 616)			return ::hscript::Expr_obj::EWhile(econd,e);
HXLINE( 613)			goto _hx_goto_45;
            		}
            		/* default */{
HXLINE( 763)			return null();
            		}
            		_hx_goto_45:;
HXLINE( 579)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseStructure,return )

 ::hscript::Expr Parser_obj::parseExprNext( ::hscript::Expr e1){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_767_parseExprNext)
HXLINE( 768)		 ::hscript::Token tk = this->token();
HXLINE( 769)		if (::hx::IsNull( tk )) {
HXLINE( 809)			{
HXLINE( 809)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 809)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 810)			return e1;
            		}
            		else {
HXLINE( 769)			switch((int)(tk->_hx_getIndex())){
            				case (int)3: {
HXLINE( 770)					::String op = tk->_hx_getString(0);
HXLINE( 772)					if ((op == HX_("->",71,27,00,00))) {
HXLINE( 774)						switch((int)(e1->_hx_getIndex())){
            							case (int)1: {
HXLINE( 775)								::String i = e1->_hx_getString(0);
HXLINE( 776)								 ::hscript::Expr eret = this->parseExpr();
HXLINE( 777)								return ::hscript::Expr_obj::EFunction(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(1)
            									->setFixed(0,HX_("name",4b,72,ff,48),i))),::hscript::Expr_obj::EReturn(eret),null(),null());
            							}
            							break;
            							case (int)3: {
HXLINE( 775)								 ::hscript::Expr _hx_tmp = e1->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 775)								if ((_hx_tmp->_hx_getIndex() == 1)) {
HXLINE( 775)									::String i = _hx_tmp->_hx_getString(0);
HXLINE( 776)									 ::hscript::Expr eret = this->parseExpr();
HXLINE( 777)									return ::hscript::Expr_obj::EFunction(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(1)
            										->setFixed(0,HX_("name",4b,72,ff,48),i))),::hscript::Expr_obj::EReturn(eret),null(),null());
            								}
            							}
            							break;
            							case (int)26: {
HXLINE( 778)								 ::hscript::Expr _hx_tmp = e1->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 778)								if ((_hx_tmp->_hx_getIndex() == 1)) {
HXLINE( 778)									::String i = _hx_tmp->_hx_getString(0);
HXDLIN( 778)									 ::hscript::CType t = e1->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXLINE( 779)									 ::hscript::Expr eret = this->parseExpr();
HXLINE( 780)									return ::hscript::Expr_obj::EFunction(::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            										->setFixed(0,HX_("t",74,00,00,00),t)
            										->setFixed(1,HX_("name",4b,72,ff,48),i))),::hscript::Expr_obj::EReturn(eret),null(),null());
            								}
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 783)						this->unexpected(tk);
            					}
HXLINE( 786)					if (this->unops->get_bool(op)) {
HXLINE( 787)						bool _hx_tmp;
HXDLIN( 787)						if (!(this->isBlock(e1))) {
HXLINE( 787)							if ((e1->_hx_getIndex() == 3)) {
HXLINE( 787)								 ::hscript::Expr _g = e1->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 787)								_hx_tmp = true;
            							}
            							else {
HXLINE( 787)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE( 787)							_hx_tmp = true;
            						}
HXDLIN( 787)						if (_hx_tmp) {
HXLINE( 788)							{
HXLINE( 788)								 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 788)								_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            							}
HXLINE( 789)							return e1;
            						}
HXLINE( 791)						return this->parseExprNext(::hscript::Expr_obj::EUnop(op,false,e1));
            					}
HXLINE( 793)					return this->makeBinop(op,e1,this->parseExpr());
            				}
            				break;
            				case (int)4: {
HXLINE( 798)					return this->parseExprNext(::hscript::Expr_obj::ECall(e1,this->parseExprList(::hscript::Token_obj::TPClose_dyn())));
            				}
            				break;
            				case (int)8: {
HXLINE( 795)					::String field = this->getIdent();
HXLINE( 796)					return this->parseExprNext(::hscript::Expr_obj::EField(e1,field));
            				}
            				break;
            				case (int)11: {
HXLINE( 800)					 ::hscript::Expr e2 = this->parseExpr();
HXLINE( 801)					{
HXLINE( 801)						 ::hscript::Token t = this->token();
HXDLIN( 801)						if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TBkClose_dyn() )) {
HXLINE( 801)							this->unexpected(t);
            						}
            					}
HXLINE( 802)					return this->parseExprNext(::hscript::Expr_obj::EArray(e1,e2));
            				}
            				break;
            				case (int)13: {
HXLINE( 804)					 ::hscript::Expr e2 = this->parseExpr();
HXLINE( 805)					{
HXLINE( 805)						 ::hscript::Token t = this->token();
HXDLIN( 805)						if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 805)							this->unexpected(t);
            						}
            					}
HXLINE( 806)					 ::hscript::Expr e3 = this->parseExpr();
HXLINE( 807)					return ::hscript::Expr_obj::ETernary(e1,e2,e3);
            				}
            				break;
            				default:{
HXLINE( 809)					{
HXLINE( 809)						 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 809)						_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            					}
HXLINE( 810)					return e1;
            				}
            			}
            		}
HXLINE( 769)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprNext,return )

::Array< ::Dynamic> Parser_obj::parseFunctionArgs(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_814_parseFunctionArgs)
HXLINE( 815)		::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new();
HXLINE( 816)		 ::hscript::Token tk = this->token();
HXLINE( 817)		if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 818)			bool done = false;
HXLINE( 819)			while(!(done)){
HXLINE( 820)				::String name = null();
HXDLIN( 820)				bool opt = false;
HXLINE( 821)				if (::hx::IsNotNull( tk )) {
HXLINE( 821)					if ((tk->_hx_getIndex() == 13)) {
HXLINE( 823)						opt = true;
HXLINE( 824)						tk = this->token();
            					}
            				}
HXLINE( 827)				if (::hx::IsNull( tk )) {
HXLINE( 830)					this->unexpected(tk);
HXLINE( 831)					goto _hx_goto_56;
            				}
            				else {
HXLINE( 827)					if ((tk->_hx_getIndex() == 2)) {
HXLINE( 828)						::String id = tk->_hx_getString(0);
HXDLIN( 828)						name = id;
            					}
            					else {
HXLINE( 830)						this->unexpected(tk);
HXLINE( 831)						goto _hx_goto_56;
            					}
            				}
HXLINE( 833)				 ::Dynamic arg =  ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("name",4b,72,ff,48),name));
HXLINE( 834)				args->push(arg);
HXLINE( 835)				if (opt) {
HXLINE( 835)					arg->__SetField(HX_("opt",33,9c,54,00),true,::hx::paccDynamic);
            				}
HXLINE( 836)				if (this->allowTypes) {
HXLINE( 837)					if (this->maybe(::hscript::Token_obj::TDoubleDot_dyn())) {
HXLINE( 838)						arg->__SetField(HX_("t",74,00,00,00),this->parseType(),::hx::paccDynamic);
            					}
HXLINE( 839)					if (this->maybe(::hscript::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE( 840)						arg->__SetField(HX_("value",71,7f,b8,31),this->parseExpr(),::hx::paccDynamic);
            					}
            				}
HXLINE( 842)				tk = this->token();
HXLINE( 843)				if (::hx::IsNull( tk )) {
HXLINE( 849)					this->unexpected(tk);
            				}
            				else {
HXLINE( 843)					switch((int)(tk->_hx_getIndex())){
            						case (int)5: {
HXLINE( 847)							done = true;
            						}
            						break;
            						case (int)9: {
HXLINE( 845)							tk = this->token();
            						}
            						break;
            						default:{
HXLINE( 849)							this->unexpected(tk);
            						}
            					}
            				}
            			}
            			_hx_goto_56:;
            		}
HXLINE( 853)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFunctionArgs,return )

 ::Dynamic Parser_obj::parseFunctionDecl(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_856_parseFunctionDecl)
HXLINE( 857)		{
HXLINE( 857)			 ::hscript::Token t = this->token();
HXDLIN( 857)			if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 857)				this->unexpected(t);
            			}
            		}
HXLINE( 858)		::Array< ::Dynamic> args = this->parseFunctionArgs();
HXLINE( 859)		 ::hscript::CType ret = null();
HXLINE( 860)		if (this->allowTypes) {
HXLINE( 861)			 ::hscript::Token tk = this->token();
HXLINE( 862)			if (::hx::IsPointerNotEq( tk,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 863)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 863)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
            			else {
HXLINE( 865)				ret = this->parseType();
            			}
            		}
HXLINE( 867)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("ret",61,d9,56,00),ret)
            			->setFixed(1,HX_("args",5d,8d,74,40),args)
            			->setFixed(2,HX_("body",a2,7a,1b,41),this->parseExpr()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFunctionDecl,return )

::Array< ::String > Parser_obj::parsePath(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_870_parsePath)
HXLINE( 871)		::Array< ::String > path = ::Array_obj< ::String >::__new(1)->init(0,this->getIdent());
HXLINE( 872)		while(true){
HXLINE( 873)			 ::hscript::Token t = this->token();
HXLINE( 874)			if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TDot_dyn() )) {
HXLINE( 875)				{
HXLINE( 875)					 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 875)					_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,t,_this->head);
            				}
HXLINE( 876)				goto _hx_goto_59;
            			}
HXLINE( 878)			path->push(this->getIdent());
            		}
            		_hx_goto_59:;
HXLINE( 880)		return path;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parsePath,return )

 ::hscript::CType Parser_obj::parseType(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_883_parseType)
HXDLIN( 883)		 ::hscript::Parser _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 884)		 ::hscript::Token t = this->token();
HXLINE( 885)		if (::hx::IsNull( t )) {
HXLINE(1001)			return this->unexpected(t);
            		}
            		else {
HXLINE( 885)			switch((int)(t->_hx_getIndex())){
            				case (int)2: {
HXLINE( 886)					::String v = t->_hx_getString(0);
HXLINE( 887)					{
HXLINE( 887)						 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 887)						_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,t,_this->head);
            					}
HXLINE( 888)					::Array< ::String > path = this->parsePath();
HXLINE( 889)					::Array< ::Dynamic> params = null();
HXLINE( 890)					t = this->token();
HXLINE( 891)					if (::hx::IsNull( t )) {
HXLINE( 918)						 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 918)						_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,t,_this->head);
            					}
            					else {
HXLINE( 891)						if ((t->_hx_getIndex() == 3)) {
HXLINE( 892)							::String op = t->_hx_getString(0);
HXLINE( 893)							if ((op == HX_("<",3c,00,00,00))) {
HXLINE( 894)								params = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 895)								while(true){
HXLINE( 896)									params->push(this->parseType());
HXLINE( 897)									t = this->token();
HXLINE( 898)									if (::hx::IsNotNull( t )) {
HXLINE( 898)										switch((int)(t->_hx_getIndex())){
            											case (int)3: {
HXLINE( 900)												::String op = t->_hx_getString(0);
HXDLIN( 900)												{
HXLINE( 901)													if ((op == HX_(">",3e,00,00,00))) {
HXLINE( 901)														goto _hx_goto_61;
            													}
HXLINE( 902)													if (::hx::IsEq( op.charCodeAt(0),62 )) {
HXLINE( 906)														{
HXLINE( 906)															 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 906)															 ::hscript::Token item = ::hscript::Token_obj::TOp(op.substr(1,null()));
HXDLIN( 906)															_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,item,_this->head);
            														}
HXLINE( 908)														goto _hx_goto_61;
            													}
            												}
            											}
            											break;
            											case (int)9: {
HXLINE( 899)												continue;
            											}
            											break;
            											default:{
            											}
            										}
            									}
HXLINE( 912)									this->unexpected(t);
HXLINE( 913)									goto _hx_goto_61;
            								}
            								_hx_goto_61:;
            							}
            							else {
HXLINE( 916)								 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 916)								_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,t,_this->head);
            							}
            						}
            						else {
HXLINE( 918)							 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 918)							_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,t,_this->head);
            						}
            					}
HXLINE( 920)					return this->parseTypeNext(::hscript::CType_obj::CTPath(path,params));
            				}
            				break;
            				case (int)4: {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::hscript::Parser,_gthis) HXARGC(1)
            					 ::hscript::CType _hx_run(::Array< ::Dynamic> args){
            						HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_928_parseType)
HXLINE( 929)						{
HXLINE( 929)							 ::hscript::Token _g = _gthis->token();
HXDLIN( 929)							if (::hx::IsNull( _g )) {
HXLINE( 931)								 ::hscript::Token t = _g;
HXDLIN( 931)								_gthis->unexpected(t);
            							}
            							else {
HXLINE( 929)								if ((_g->_hx_getIndex() == 3)) {
HXLINE( 930)									if ((_g->_hx_getString(0) != HX_("->",71,27,00,00))) {
HXLINE( 931)										 ::hscript::Token t = _g;
HXDLIN( 931)										_gthis->unexpected(t);
            									}
            								}
            								else {
HXLINE( 931)									 ::hscript::Token t = _g;
HXDLIN( 931)									_gthis->unexpected(t);
            								}
            							}
            						}
HXLINE( 934)						return ::hscript::CType_obj::CTFun(args,_gthis->parseType());
            					}
            					HX_END_LOCAL_FUNC1(return)

HXLINE( 922)					 ::hscript::Token a = this->token();
HXDLIN( 922)					 ::hscript::Token b = this->token();
HXLINE( 925)					{
HXLINE( 925)						 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 925)						_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,b,_this->head);
            					}
HXLINE( 926)					{
HXLINE( 926)						 ::haxe::ds::GenericStack_hscript_Token _this1 = this->tokens;
HXDLIN( 926)						_this1->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,a,_this1->head);
            					}
HXLINE( 928)					 ::Dynamic withReturn =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 937)					if (::hx::IsNull( a )) {
HXLINE( 953)						 ::hscript::CType t = this->parseType();
HXLINE( 954)						 ::hscript::Token _g = this->token();
HXDLIN( 954)						if (::hx::IsNull( _g )) {
HXLINE( 966)							 ::hscript::Token t = _g;
HXDLIN( 966)							return this->unexpected(t);
            						}
            						else {
HXLINE( 954)							switch((int)(_g->_hx_getIndex())){
            								case (int)5: {
HXLINE( 965)									return this->parseTypeNext(::hscript::CType_obj::CTParent(t));
            								}
            								break;
            								case (int)9: {
HXLINE( 956)									::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE( 958)									while(true){
HXLINE( 959)										args->push(this->parseType());
HXLINE( 960)										if (!(this->maybe(::hscript::Token_obj::TComma_dyn()))) {
HXLINE( 960)											goto _hx_goto_62;
            										}
            									}
            									_hx_goto_62:;
HXLINE( 962)									{
HXLINE( 962)										 ::hscript::Token t1 = this->token();
HXDLIN( 962)										if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 962)											this->unexpected(t1);
            										}
            									}
HXLINE( 963)									return withReturn(args);
            								}
            								break;
            								default:{
HXLINE( 966)									 ::hscript::Token t = _g;
HXDLIN( 966)									return this->unexpected(t);
            								}
            							}
            						}
            					}
            					else {
HXLINE( 937)						switch((int)(a->_hx_getIndex())){
            							case (int)2: {
HXLINE( 938)								::String _g = a->_hx_getString(0);
HXLINE( 937)								if (::hx::IsNull( b )) {
HXLINE( 953)									 ::hscript::CType t = this->parseType();
HXLINE( 954)									 ::hscript::Token _g = this->token();
HXDLIN( 954)									if (::hx::IsNull( _g )) {
HXLINE( 966)										 ::hscript::Token t = _g;
HXDLIN( 966)										return this->unexpected(t);
            									}
            									else {
HXLINE( 954)										switch((int)(_g->_hx_getIndex())){
            											case (int)5: {
HXLINE( 965)												return this->parseTypeNext(::hscript::CType_obj::CTParent(t));
            											}
            											break;
            											case (int)9: {
HXLINE( 956)												::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE( 958)												while(true){
HXLINE( 959)													args->push(this->parseType());
HXLINE( 960)													if (!(this->maybe(::hscript::Token_obj::TComma_dyn()))) {
HXLINE( 960)														goto _hx_goto_64;
            													}
            												}
            												_hx_goto_64:;
HXLINE( 962)												{
HXLINE( 962)													 ::hscript::Token t1 = this->token();
HXDLIN( 962)													if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 962)														this->unexpected(t1);
            													}
            												}
HXLINE( 963)												return withReturn(args);
            											}
            											break;
            											default:{
HXLINE( 966)												 ::hscript::Token t = _g;
HXDLIN( 966)												return this->unexpected(t);
            											}
            										}
            									}
            								}
            								else {
HXLINE( 937)									if ((b->_hx_getIndex() == 14)) {
HXLINE( 940)										::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 940)										{
HXLINE( 940)											int _g1 = 0;
HXDLIN( 940)											::Array< ::Dynamic> _g2 = this->parseFunctionArgs();
HXDLIN( 940)											while((_g1 < _g2->length)){
HXLINE( 940)												 ::Dynamic arg = _g2->__get(_g1);
HXDLIN( 940)												_g1 = (_g1 + 1);
HXLINE( 941)												{
HXLINE( 941)													 ::hscript::Expr _g3 = arg->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic);
HXLINE( 942)													if (::hx::IsNotNull( _g3 )) {
HXLINE( 943)														 ::hscript::Expr v = _g3;
HXLINE( 944)														if (!(this->resumeErrors)) {
HXLINE( 944)															HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::Error_obj::ECustom(HX_("Default values not allowed in function types",28,46,7a,e6))));
            														}
            													}
            												}
HXLINE( 947)												 ::hscript::CType _hx_tmp;
HXDLIN( 947)												if (( (bool)(arg->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 947)													_hx_tmp = ::hscript::CType_obj::CTOpt( ::Dynamic(arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)));
            												}
            												else {
HXLINE( 947)													_hx_tmp = arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
            												}
HXDLIN( 947)												_g->push(::hscript::CType_obj::CTNamed( ::Dynamic(arg->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)),_hx_tmp));
            											}
            										}
HXLINE( 940)										::Array< ::Dynamic> args = _g;
HXLINE( 950)										return withReturn(args);
            									}
            									else {
HXLINE( 953)										 ::hscript::CType t = this->parseType();
HXLINE( 954)										 ::hscript::Token _g = this->token();
HXDLIN( 954)										if (::hx::IsNull( _g )) {
HXLINE( 966)											 ::hscript::Token t = _g;
HXDLIN( 966)											return this->unexpected(t);
            										}
            										else {
HXLINE( 954)											switch((int)(_g->_hx_getIndex())){
            												case (int)5: {
HXLINE( 965)													return this->parseTypeNext(::hscript::CType_obj::CTParent(t));
            												}
            												break;
            												case (int)9: {
HXLINE( 956)													::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE( 958)													while(true){
HXLINE( 959)														args->push(this->parseType());
HXLINE( 960)														if (!(this->maybe(::hscript::Token_obj::TComma_dyn()))) {
HXLINE( 960)															goto _hx_goto_66;
            														}
            													}
            													_hx_goto_66:;
HXLINE( 962)													{
HXLINE( 962)														 ::hscript::Token t1 = this->token();
HXDLIN( 962)														if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 962)															this->unexpected(t1);
            														}
            													}
HXLINE( 963)													return withReturn(args);
            												}
            												break;
            												default:{
HXLINE( 966)													 ::hscript::Token t = _g;
HXDLIN( 966)													return this->unexpected(t);
            												}
            											}
            										}
            									}
            								}
            							}
            							break;
            							case (int)5: {
HXLINE( 940)								::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 940)								{
HXLINE( 940)									int _g1 = 0;
HXDLIN( 940)									::Array< ::Dynamic> _g2 = this->parseFunctionArgs();
HXDLIN( 940)									while((_g1 < _g2->length)){
HXLINE( 940)										 ::Dynamic arg = _g2->__get(_g1);
HXDLIN( 940)										_g1 = (_g1 + 1);
HXLINE( 941)										{
HXLINE( 941)											 ::hscript::Expr _g3 = arg->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic);
HXLINE( 942)											if (::hx::IsNotNull( _g3 )) {
HXLINE( 943)												 ::hscript::Expr v = _g3;
HXLINE( 944)												if (!(this->resumeErrors)) {
HXLINE( 944)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::Error_obj::ECustom(HX_("Default values not allowed in function types",28,46,7a,e6))));
            												}
            											}
            										}
HXLINE( 947)										 ::hscript::CType _hx_tmp;
HXDLIN( 947)										if (( (bool)(arg->__Field(HX_("opt",33,9c,54,00),::hx::paccDynamic)) )) {
HXLINE( 947)											_hx_tmp = ::hscript::CType_obj::CTOpt( ::Dynamic(arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic)));
            										}
            										else {
HXLINE( 947)											_hx_tmp = arg->__Field(HX_("t",74,00,00,00),::hx::paccDynamic);
            										}
HXDLIN( 947)										_g->push(::hscript::CType_obj::CTNamed( ::Dynamic(arg->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)),_hx_tmp));
            									}
            								}
HXLINE( 940)								::Array< ::Dynamic> args = _g;
HXLINE( 950)								return withReturn(args);
            							}
            							break;
            							default:{
HXLINE( 953)								 ::hscript::CType t = this->parseType();
HXLINE( 954)								 ::hscript::Token _g = this->token();
HXDLIN( 954)								if (::hx::IsNull( _g )) {
HXLINE( 966)									 ::hscript::Token t = _g;
HXDLIN( 966)									return this->unexpected(t);
            								}
            								else {
HXLINE( 954)									switch((int)(_g->_hx_getIndex())){
            										case (int)5: {
HXLINE( 965)											return this->parseTypeNext(::hscript::CType_obj::CTParent(t));
            										}
            										break;
            										case (int)9: {
HXLINE( 956)											::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new(1)->init(0,t);
HXLINE( 958)											while(true){
HXLINE( 959)												args->push(this->parseType());
HXLINE( 960)												if (!(this->maybe(::hscript::Token_obj::TComma_dyn()))) {
HXLINE( 960)													goto _hx_goto_63;
            												}
            											}
            											_hx_goto_63:;
HXLINE( 962)											{
HXLINE( 962)												 ::hscript::Token t1 = this->token();
HXDLIN( 962)												if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 962)													this->unexpected(t1);
            												}
            											}
HXLINE( 963)											return withReturn(args);
            										}
            										break;
            										default:{
HXLINE( 966)											 ::hscript::Token t = _g;
HXDLIN( 966)											return this->unexpected(t);
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 970)					::Array< ::Dynamic> fields = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 971)					::Array< ::Dynamic> meta = null();
HXLINE( 972)					while(true){
HXLINE( 973)						t = this->token();
HXLINE( 974)						if (::hx::IsNull( t )) {
HXLINE( 995)							this->unexpected(t);
HXLINE( 996)							goto _hx_goto_68;
            						}
            						else {
HXLINE( 974)							switch((int)(t->_hx_getIndex())){
            								case (int)2: {
HXLINE( 982)									::String _g = t->_hx_getString(0);
HXDLIN( 982)									if ((_g == HX_("var",e7,de,59,00))) {
HXLINE( 977)										::String name = this->getIdent();
HXLINE( 978)										{
HXLINE( 978)											 ::hscript::Token t = this->token();
HXDLIN( 978)											if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 978)												this->unexpected(t);
            											}
            										}
HXLINE( 979)										fields->push( ::Dynamic(::hx::Anon_obj::Create(3)
            											->setFixed(0,HX_("t",74,00,00,00),this->parseType())
            											->setFixed(1,HX_("meta",c5,4a,59,48),meta)
            											->setFixed(2,HX_("name",4b,72,ff,48),name)));
HXLINE( 980)										meta = null();
HXLINE( 981)										{
HXLINE( 981)											 ::hscript::Token t1 = this->token();
HXDLIN( 981)											if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE( 981)												this->unexpected(t1);
            											}
            										}
            									}
            									else {
HXLINE( 982)										::String name = _g;
HXDLIN( 982)										{
HXLINE( 983)											{
HXLINE( 983)												 ::hscript::Token t1 = this->token();
HXDLIN( 983)												if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 983)													this->unexpected(t1);
            												}
            											}
HXLINE( 984)											fields->push( ::Dynamic(::hx::Anon_obj::Create(3)
            												->setFixed(0,HX_("t",74,00,00,00),this->parseType())
            												->setFixed(1,HX_("meta",c5,4a,59,48),meta)
            												->setFixed(2,HX_("name",4b,72,ff,48),name)));
HXLINE( 985)											t = this->token();
HXLINE( 986)											if (::hx::IsNull( t )) {
HXLINE( 989)												this->unexpected(t);
            											}
            											else {
HXLINE( 986)												switch((int)(t->_hx_getIndex())){
            													case (int)7: {
HXLINE( 988)														goto _hx_goto_68;
            													}
            													break;
            													case (int)9: {
            													}
            													break;
            													default:{
HXLINE( 989)														this->unexpected(t);
            													}
            												}
            											}
            										}
            									}
            								}
            								break;
            								case (int)7: {
HXLINE( 975)									goto _hx_goto_68;
            								}
            								break;
            								case (int)15: {
HXLINE( 991)									::String name = t->_hx_getString(0);
HXDLIN( 991)									{
HXLINE( 992)										if (::hx::IsNull( meta )) {
HXLINE( 992)											meta = ::Array_obj< ::Dynamic>::__new(0);
            										}
HXLINE( 993)										meta->push( ::Dynamic(::hx::Anon_obj::Create(2)
            											->setFixed(0,HX_("params",46,fb,7a,ed),this->parseMetaArgs())
            											->setFixed(1,HX_("name",4b,72,ff,48),name)));
            									}
            								}
            								break;
            								default:{
HXLINE( 995)									this->unexpected(t);
HXLINE( 996)									goto _hx_goto_68;
            								}
            							}
            						}
            					}
            					_hx_goto_68:;
HXLINE( 999)					return this->parseTypeNext(::hscript::CType_obj::CTAnon(fields));
            				}
            				break;
            				default:{
HXLINE(1001)					return this->unexpected(t);
            				}
            			}
            		}
HXLINE( 885)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseType,return )

 ::hscript::CType Parser_obj::parseTypeNext( ::hscript::CType t){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1005_parseTypeNext)
HXLINE(1006)		 ::hscript::Token tk = this->token();
HXLINE(1007)		if (::hx::IsNull( tk )) {
HXLINE(1014)			{
HXLINE(1014)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1014)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE(1015)			return t;
            		}
            		else {
HXLINE(1007)			if ((tk->_hx_getIndex() == 3)) {
HXLINE(1008)				::String op = tk->_hx_getString(0);
HXLINE(1009)				if ((op != HX_("->",71,27,00,00))) {
HXLINE(1010)					{
HXLINE(1010)						 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1010)						_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            					}
HXLINE(1011)					return t;
            				}
            			}
            			else {
HXLINE(1014)				{
HXLINE(1014)					 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1014)					_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            				}
HXLINE(1015)				return t;
            			}
            		}
HXLINE(1017)		 ::hscript::CType t2 = this->parseType();
HXLINE(1018)		if ((t2->_hx_getIndex() == 1)) {
HXLINE(1019)			 ::hscript::CType _g = t2->_hx_getObject(1).StaticCast<  ::hscript::CType >();
HXDLIN(1019)			::Array< ::Dynamic> args = t2->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(1020)			args->unshift(t);
HXLINE(1021)			return t2;
            		}
            		else {
HXLINE(1023)			return ::hscript::CType_obj::CTFun(::Array_obj< ::Dynamic>::__new(1)->init(0,t),t2);
            		}
HXLINE(1018)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseTypeNext,return )

::Array< ::Dynamic> Parser_obj::parseExprList( ::hscript::Token etk){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1027_parseExprList)
HXLINE(1028)		::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new();
HXLINE(1029)		 ::hscript::Token tk = this->token();
HXLINE(1030)		if (::hx::IsPointerEq( tk,etk )) {
HXLINE(1031)			return args;
            		}
HXLINE(1032)		{
HXLINE(1032)			 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1032)			_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            		}
HXLINE(1033)		while(true){
HXLINE(1034)			args->push(this->parseExpr());
HXLINE(1035)			tk = this->token();
HXLINE(1036)			if (::hx::IsNull( tk )) {
HXLINE(1039)				if (::hx::IsPointerEq( tk,etk )) {
HXLINE(1039)					goto _hx_goto_72;
            				}
HXLINE(1040)				this->unexpected(tk);
HXLINE(1041)				goto _hx_goto_72;
            			}
            			else {
HXLINE(1036)				if ((tk->_hx_getIndex() != 9)) {
HXLINE(1039)					if (::hx::IsPointerEq( tk,etk )) {
HXLINE(1039)						goto _hx_goto_72;
            					}
HXLINE(1040)					this->unexpected(tk);
HXLINE(1041)					goto _hx_goto_72;
            				}
            			}
            		}
            		_hx_goto_72:;
HXLINE(1044)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprList,return )

::Array< ::Dynamic> Parser_obj::parseModule(::String content,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("hscript",73,8c,18,2c);
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1049_parseModule)
HXLINE(1050)		this->initParser(origin);
HXLINE(1051)		this->input = content;
HXLINE(1052)		this->readPos = 0;
HXLINE(1053)		this->allowTypes = true;
HXLINE(1054)		this->allowMetadata = true;
HXLINE(1055)		::Array< ::Dynamic> decls = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1056)		while(true){
HXLINE(1057)			 ::hscript::Token tk = this->token();
HXLINE(1058)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TEof_dyn() )) {
HXLINE(1058)				goto _hx_goto_74;
            			}
HXLINE(1059)			{
HXLINE(1059)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1059)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE(1060)			decls->push(this->parseModuleDecl());
            		}
            		_hx_goto_74:;
HXLINE(1062)		return decls;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseModule,return )

::Array< ::Dynamic> Parser_obj::parseMetadata(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1065_parseMetadata)
HXLINE(1066)		::Array< ::Dynamic> meta = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1067)		while(true){
HXLINE(1068)			 ::hscript::Token tk = this->token();
HXLINE(1069)			if (::hx::IsNull( tk )) {
HXLINE(1073)				{
HXLINE(1073)					 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1073)					_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            				}
HXLINE(1074)				goto _hx_goto_76;
            			}
            			else {
HXLINE(1069)				if ((tk->_hx_getIndex() == 15)) {
HXLINE(1070)					::String name = tk->_hx_getString(0);
HXLINE(1071)					meta->push( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("params",46,fb,7a,ed),this->parseMetaArgs())
            						->setFixed(1,HX_("name",4b,72,ff,48),name)));
            				}
            				else {
HXLINE(1073)					{
HXLINE(1073)						 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1073)						_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            					}
HXLINE(1074)					goto _hx_goto_76;
            				}
            			}
            		}
            		_hx_goto_76:;
HXLINE(1077)		return meta;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseMetadata,return )

 ::Dynamic Parser_obj::parseParams(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1080_parseParams)
HXLINE(1081)		if (this->maybe(::hscript::Token_obj::TOp(HX_("<",3c,00,00,00)))) {
HXLINE(1082)			if (!(this->resumeErrors)) {
HXLINE(1082)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::Error_obj::EInvalidOp(HX_("Unsupported class type parameters",9d,ae,a3,50))));
            			}
            		}
HXLINE(1083)		return  ::Dynamic(::hx::Anon_obj::Create(0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseParams,return )

 ::hscript::ModuleDecl Parser_obj::parseModuleDecl(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1086_parseModuleDecl)
HXLINE(1087)		::Array< ::Dynamic> meta = this->parseMetadata();
HXLINE(1088)		::String ident = this->getIdent();
HXLINE(1089)		bool isPrivate = false;
HXDLIN(1089)		bool isExtern = false;
HXLINE(1090)		while(true){
HXLINE(1091)			::String _hx_switch_0 = ident;
            			if (  (_hx_switch_0==HX_("extern",60,d5,1a,c7)) ){
HXLINE(1095)				isExtern = true;
HXDLIN(1095)				goto _hx_goto_80;
            			}
            			if (  (_hx_switch_0==HX_("private",03,2d,6f,89)) ){
HXLINE(1093)				isPrivate = true;
HXDLIN(1093)				goto _hx_goto_80;
            			}
            			/* default */{
HXLINE(1097)				goto _hx_goto_79;
            			}
            			_hx_goto_80:;
HXLINE(1099)			ident = this->getIdent();
            		}
            		_hx_goto_79:;
HXLINE(1101)		::String _hx_switch_1 = ident;
            		if (  (_hx_switch_1==HX_("class",38,78,58,48)) ){
HXLINE(1128)			::String name = this->getIdent();
HXLINE(1129)			 ::Dynamic params = this->parseParams();
HXLINE(1130)			 ::hscript::CType extend = null();
HXLINE(1131)			::Array< ::Dynamic> implement = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1133)			while(true){
HXLINE(1134)				 ::hscript::Token t = this->token();
HXLINE(1135)				if (::hx::IsNull( t )) {
HXLINE(1141)					{
HXLINE(1141)						 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1141)						_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,t,_this->head);
            					}
HXLINE(1142)					goto _hx_goto_82;
            				}
            				else {
HXLINE(1135)					if ((t->_hx_getIndex() == 2)) {
HXLINE(1138)						::String _hx_switch_2 = t->_hx_getString(0);
            						if (  (_hx_switch_2==HX_("extends",59,cd,5c,70)) ){
HXLINE(1137)							extend = this->parseType();
HXDLIN(1137)							goto _hx_goto_83;
            						}
            						if (  (_hx_switch_2==HX_("implements",70,fd,43,a8)) ){
HXLINE(1139)							implement->push(this->parseType());
HXDLIN(1139)							goto _hx_goto_83;
            						}
            						/* default */{
HXLINE(1141)							{
HXLINE(1141)								 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1141)								_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,t,_this->head);
            							}
HXLINE(1142)							goto _hx_goto_82;
            						}
            						_hx_goto_83:;
            					}
            					else {
HXLINE(1141)						{
HXLINE(1141)							 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1141)							_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,t,_this->head);
            						}
HXLINE(1142)						goto _hx_goto_82;
            					}
            				}
            			}
            			_hx_goto_82:;
HXLINE(1146)			::Array< ::Dynamic> fields = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1147)			{
HXLINE(1147)				 ::hscript::Token t = this->token();
HXDLIN(1147)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TBrOpen_dyn() )) {
HXLINE(1147)					this->unexpected(t);
            				}
            			}
HXLINE(1148)			while(!(this->maybe(::hscript::Token_obj::TBrClose_dyn()))){
HXLINE(1149)				fields->push(this->parseField());
            			}
HXLINE(1151)			return ::hscript::ModuleDecl_obj::DClass( ::Dynamic(::hx::Anon_obj::Create(8)
            				->setFixed(0,HX_("fields",79,8e,8e,80),fields)
            				->setFixed(1,HX_("isPrivate",39,aa,6d,8d),isPrivate)
            				->setFixed(2,HX_("implement",a3,71,3f,af),implement)
            				->setFixed(3,HX_("extend",da,d1,1a,c7),extend)
            				->setFixed(4,HX_("params",46,fb,7a,ed),params)
            				->setFixed(5,HX_("isExtern",ea,70,84,1f),isExtern)
            				->setFixed(6,HX_("meta",c5,4a,59,48),meta)
            				->setFixed(7,HX_("name",4b,72,ff,48),name)));
HXLINE(1127)			goto _hx_goto_81;
            		}
            		if (  (_hx_switch_1==HX_("import",65,a1,82,08)) ){
HXLINE(1107)			::Array< ::String > path = ::Array_obj< ::String >::__new(1)->init(0,this->getIdent());
HXLINE(1108)			bool star = false;
HXLINE(1109)			while(true){
HXLINE(1110)				 ::hscript::Token t = this->token();
HXLINE(1111)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TDot_dyn() )) {
HXLINE(1112)					{
HXLINE(1112)						 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1112)						_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,t,_this->head);
            					}
HXLINE(1113)					goto _hx_goto_85;
            				}
HXLINE(1115)				t = this->token();
HXLINE(1116)				if (::hx::IsNull( t )) {
HXLINE(1122)					this->unexpected(t);
            				}
            				else {
HXLINE(1116)					switch((int)(t->_hx_getIndex())){
            						case (int)2: {
HXLINE(1117)							::String id = t->_hx_getString(0);
HXLINE(1118)							path->push(id);
            						}
            						break;
            						case (int)3: {
HXLINE(1119)							if ((t->_hx_getString(0) == HX_("*",2a,00,00,00))) {
HXLINE(1120)								star = true;
            							}
            							else {
HXLINE(1122)								this->unexpected(t);
            							}
            						}
            						break;
            						default:{
HXLINE(1122)							this->unexpected(t);
            						}
            					}
            				}
            			}
            			_hx_goto_85:;
HXLINE(1125)			{
HXLINE(1125)				 ::hscript::Token t = this->token();
HXDLIN(1125)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE(1125)					this->unexpected(t);
            				}
            			}
HXLINE(1126)			return ::hscript::ModuleDecl_obj::DImport(path,star);
HXLINE(1106)			goto _hx_goto_81;
            		}
            		if (  (_hx_switch_1==HX_("package",86,2b,b1,41)) ){
HXLINE(1103)			::Array< ::String > path = this->parsePath();
HXLINE(1104)			{
HXLINE(1104)				 ::hscript::Token t = this->token();
HXDLIN(1104)				if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE(1104)					this->unexpected(t);
            				}
            			}
HXLINE(1105)			return ::hscript::ModuleDecl_obj::DPackage(path);
HXLINE(1102)			goto _hx_goto_81;
            		}
            		if (  (_hx_switch_1==HX_("typedef",4b,37,d8,f8)) ){
HXLINE(1162)			::String name = this->getIdent();
HXLINE(1163)			 ::Dynamic params = this->parseParams();
HXLINE(1164)			{
HXLINE(1164)				 ::hscript::Token t = this->token();
HXDLIN(1164)				if (!(__hxcpp_enum_eq(t,::hscript::Token_obj::TOp(HX_("=",3d,00,00,00))))) {
HXLINE(1164)					this->unexpected(t);
            				}
            			}
HXLINE(1165)			 ::hscript::CType t1 = this->parseType();
HXLINE(1166)			return ::hscript::ModuleDecl_obj::DTypedef( ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("isPrivate",39,aa,6d,8d),isPrivate)
            				->setFixed(1,HX_("params",46,fb,7a,ed),params)
            				->setFixed(2,HX_("t",74,00,00,00),t1)
            				->setFixed(3,HX_("meta",c5,4a,59,48),meta)
            				->setFixed(4,HX_("name",4b,72,ff,48),name)));
HXLINE(1161)			goto _hx_goto_81;
            		}
            		/* default */{
HXLINE(1174)			this->unexpected(::hscript::Token_obj::TId(ident));
            		}
            		_hx_goto_81:;
HXLINE(1176)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseModuleDecl,return )

 ::Dynamic Parser_obj::parseField(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1179_parseField)
HXLINE(1180)		::Array< ::Dynamic> meta = this->parseMetadata();
HXLINE(1181)		::Array< ::Dynamic> access = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1182)		while(true){
HXLINE(1183)			::String id = this->getIdent();
HXLINE(1184)			::String _hx_switch_0 = id;
            			if (  (_hx_switch_0==HX_("function",18,ab,52,14)) ){
HXLINE(1198)				::String name = this->getIdent();
HXLINE(1199)				 ::Dynamic inf = this->parseFunctionDecl();
HXLINE(1200)				return  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("access",a4,95,06,0b),access)
            					->setFixed(1,HX_("kind",54,e1,09,47),::hscript::FieldKind_obj::KFunction( ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("ret",61,d9,56,00), ::Dynamic(inf->__Field(HX_("ret",61,d9,56,00),::hx::paccDynamic)))
            						->setFixed(1,HX_("args",5d,8d,74,40), ::Dynamic(inf->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)))
            						->setFixed(2,HX_("expr",35,fd,1d,43), ::Dynamic(inf->__Field(HX_("body",a2,7a,1b,41),::hx::paccDynamic))))))
            					->setFixed(2,HX_("meta",c5,4a,59,48),meta)
            					->setFixed(3,HX_("name",4b,72,ff,48),name));
HXLINE(1197)				goto _hx_goto_88;
            			}
            			if (  (_hx_switch_0==HX_("inline",59,ca,3f,99)) ){
HXLINE(1192)				access->push(::hscript::FieldAccess_obj::AInline_dyn());
HXDLIN(1192)				goto _hx_goto_88;
            			}
            			if (  (_hx_switch_0==HX_("macro",0c,70,16,03)) ){
HXLINE(1196)				access->push(::hscript::FieldAccess_obj::AMacro_dyn());
HXDLIN(1196)				goto _hx_goto_88;
            			}
            			if (  (_hx_switch_0==HX_("override",4c,22,28,49)) ){
HXLINE(1186)				access->push(::hscript::FieldAccess_obj::AOverride_dyn());
HXDLIN(1186)				goto _hx_goto_88;
            			}
            			if (  (_hx_switch_0==HX_("private",03,2d,6f,89)) ){
HXLINE(1190)				access->push(::hscript::FieldAccess_obj::APrivate_dyn());
HXDLIN(1190)				goto _hx_goto_88;
            			}
            			if (  (_hx_switch_0==HX_("public",a9,80,f3,66)) ){
HXLINE(1188)				access->push(::hscript::FieldAccess_obj::APublic_dyn());
HXDLIN(1188)				goto _hx_goto_88;
            			}
            			if (  (_hx_switch_0==HX_("static",ae,dc,fb,05)) ){
HXLINE(1194)				access->push(::hscript::FieldAccess_obj::AStatic_dyn());
HXDLIN(1194)				goto _hx_goto_88;
            			}
            			if (  (_hx_switch_0==HX_("var",e7,de,59,00)) ){
HXLINE(1211)				::String name = this->getIdent();
HXLINE(1212)				::String get = null();
HXDLIN(1212)				::String set = null();
HXLINE(1213)				if (this->maybe(::hscript::Token_obj::TPOpen_dyn())) {
HXLINE(1214)					get = this->getIdent();
HXLINE(1215)					{
HXLINE(1215)						 ::hscript::Token t = this->token();
HXDLIN(1215)						if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TComma_dyn() )) {
HXLINE(1215)							this->unexpected(t);
            						}
            					}
HXLINE(1216)					set = this->getIdent();
HXLINE(1217)					{
HXLINE(1217)						 ::hscript::Token t1 = this->token();
HXDLIN(1217)						if (::hx::IsPointerNotEq( t1,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE(1217)							this->unexpected(t1);
            						}
            					}
            				}
HXLINE(1219)				 ::hscript::CType type;
HXDLIN(1219)				if (this->maybe(::hscript::Token_obj::TDoubleDot_dyn())) {
HXLINE(1219)					type = this->parseType();
            				}
            				else {
HXLINE(1219)					type = null();
            				}
HXLINE(1220)				 ::hscript::Expr expr;
HXDLIN(1220)				if (this->maybe(::hscript::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE(1220)					expr = this->parseExpr();
            				}
            				else {
HXLINE(1220)					expr = null();
            				}
HXLINE(1222)				if (::hx::IsNotNull( expr )) {
HXLINE(1223)					if (this->isBlock(expr)) {
HXLINE(1224)						this->maybe(::hscript::Token_obj::TSemicolon_dyn());
            					}
            					else {
HXLINE(1226)						 ::hscript::Token t = this->token();
HXDLIN(1226)						if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE(1226)							this->unexpected(t);
            						}
            					}
            				}
            				else {
HXLINE(1227)					bool _hx_tmp;
HXDLIN(1227)					if (::hx::IsNotNull( type )) {
HXLINE(1227)						if (::hx::IsNull( type )) {
HXLINE(1227)							_hx_tmp = false;
            						}
            						else {
HXLINE(1227)							if ((type->_hx_getIndex() == 2)) {
HXLINE(1227)								::Array< ::Dynamic> _g = type->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(1227)								_hx_tmp = true;
            							}
            							else {
HXLINE(1227)								_hx_tmp = false;
            							}
            						}
            					}
            					else {
HXLINE(1227)						_hx_tmp = false;
            					}
HXDLIN(1227)					if (_hx_tmp) {
HXLINE(1228)						this->maybe(::hscript::Token_obj::TSemicolon_dyn());
            					}
            					else {
HXLINE(1230)						 ::hscript::Token t = this->token();
HXDLIN(1230)						if (::hx::IsPointerNotEq( t,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE(1230)							this->unexpected(t);
            						}
            					}
            				}
HXLINE(1232)				return  ::Dynamic(::hx::Anon_obj::Create(4)
            					->setFixed(0,HX_("access",a4,95,06,0b),access)
            					->setFixed(1,HX_("kind",54,e1,09,47),::hscript::FieldKind_obj::KVar( ::Dynamic(::hx::Anon_obj::Create(4)
            						->setFixed(0,HX_("get",96,80,4e,00),get)
            						->setFixed(1,HX_("set",a2,9b,57,00),set)
            						->setFixed(2,HX_("expr",35,fd,1d,43),expr)
            						->setFixed(3,HX_("type",ba,f2,08,4d),type))))
            					->setFixed(2,HX_("meta",c5,4a,59,48),meta)
            					->setFixed(3,HX_("name",4b,72,ff,48),name));
HXLINE(1210)				goto _hx_goto_88;
            			}
            			/* default */{
HXLINE(1244)				this->unexpected(::hscript::Token_obj::TId(id));
HXLINE(1245)				goto _hx_goto_87;
            			}
            			_hx_goto_88:;
            		}
            		_hx_goto_87:;
HXLINE(1248)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseField,return )

int Parser_obj::readChar(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1254_readChar)
HXDLIN(1254)		return this->input.cca(this->readPos++);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readChar,return )

::String Parser_obj::readString(int until){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1257_readString)
HXLINE(1258)		int c = 0;
HXLINE(1259)		 ::StringBuf b =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(1260)		bool esc = false;
HXLINE(1261)		int old = this->line;
HXLINE(1262)		::String s = this->input;
HXLINE(1266)		while(true){
HXLINE(1267)			int c = this->input.cca(this->readPos++);
HXLINE(1268)			if ((c == 0)) {
HXLINE(1269)				this->line = old;
HXLINE(1270)				if (!(this->resumeErrors)) {
HXLINE(1270)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::Error_obj::EUnterminatedString_dyn()));
            				}
HXLINE(1271)				goto _hx_goto_91;
            			}
HXLINE(1273)			if (esc) {
HXLINE(1274)				esc = false;
HXLINE(1275)				switch((int)(c)){
            					case (int)34: case (int)39: case (int)92: {
HXLINE(1279)						if ((c >= 127)) {
HXLINE(1279)							::String x = ::String::fromCharCode(c);
HXDLIN(1279)							if (::hx::IsNotNull( b->charBuf )) {
HXLINE(1279)								b->flush();
            							}
HXDLIN(1279)							if (::hx::IsNull( b->b )) {
HXLINE(1279)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE(1279)								::Array< ::String > b1 = b->b;
HXDLIN(1279)								b1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE(1279)							if (::hx::IsNull( b->charBuf )) {
HXLINE(1279)								b->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(1279)							b->charBuf->push(c);
            						}
            					}
            					break;
            					case (int)47: {
HXLINE(1280)						if (this->allowJSON) {
HXLINE(1280)							if ((c >= 127)) {
HXLINE(1280)								::String x = ::String::fromCharCode(c);
HXDLIN(1280)								if (::hx::IsNotNull( b->charBuf )) {
HXLINE(1280)									b->flush();
            								}
HXDLIN(1280)								if (::hx::IsNull( b->b )) {
HXLINE(1280)									b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE(1280)									::Array< ::String > b1 = b->b;
HXDLIN(1280)									b1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE(1280)								if (::hx::IsNull( b->charBuf )) {
HXLINE(1280)									b->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN(1280)								b->charBuf->push(c);
            							}
            						}
            						else {
HXLINE(1280)							this->invalidChar(c);
            						}
            					}
            					break;
            					case (int)110: {
HXLINE(1276)						if (::hx::IsNull( b->charBuf )) {
HXLINE(1276)							b->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(1276)						b->charBuf->push(10);
            					}
            					break;
            					case (int)114: {
HXLINE(1277)						if (::hx::IsNull( b->charBuf )) {
HXLINE(1277)							b->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(1277)						b->charBuf->push(13);
            					}
            					break;
            					case (int)116: {
HXLINE(1278)						if (::hx::IsNull( b->charBuf )) {
HXLINE(1278)							b->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN(1278)						b->charBuf->push(9);
            					}
            					break;
            					case (int)117: {
HXLINE(1282)						if (!(this->allowJSON)) {
HXLINE(1282)							this->invalidChar(c);
            						}
HXLINE(1283)						int k = 0;
HXLINE(1284)						{
HXLINE(1284)							int _g = 0;
HXDLIN(1284)							while((_g < 4)){
HXLINE(1284)								_g = (_g + 1);
HXDLIN(1284)								int i = (_g - 1);
HXLINE(1285)								k = (k << 4);
HXLINE(1286)								int _hx_char = this->input.cca(this->readPos++);
HXLINE(1287)								switch((int)(_hx_char)){
            									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1289)										k = (k + (_hx_char - 48));
            									}
            									break;
            									case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
HXLINE(1291)										k = (k + (_hx_char - 55));
            									}
            									break;
            									case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
HXLINE(1293)										k = (k + (_hx_char - 87));
            									}
            									break;
            									default:{
HXLINE(1295)										if ((_hx_char == 0)) {
HXLINE(1296)											this->line = old;
HXLINE(1297)											if (!(this->resumeErrors)) {
HXLINE(1297)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::Error_obj::EUnterminatedString_dyn()));
            											}
            										}
HXLINE(1299)										this->invalidChar(_hx_char);
            									}
            								}
            							}
            						}
HXLINE(1302)						if ((k >= 127)) {
HXLINE(1302)							::String x = ::String::fromCharCode(k);
HXDLIN(1302)							if (::hx::IsNotNull( b->charBuf )) {
HXLINE(1302)								b->flush();
            							}
HXDLIN(1302)							if (::hx::IsNull( b->b )) {
HXLINE(1302)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE(1302)								::Array< ::String > b1 = b->b;
HXDLIN(1302)								b1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE(1302)							if (::hx::IsNull( b->charBuf )) {
HXLINE(1302)								b->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(1302)							b->charBuf->push(k);
            						}
            					}
            					break;
            					default:{
HXLINE(1303)						this->invalidChar(c);
            					}
            				}
            			}
            			else {
HXLINE(1305)				if ((c == 92)) {
HXLINE(1306)					esc = true;
            				}
            				else {
HXLINE(1307)					if ((c == until)) {
HXLINE(1308)						goto _hx_goto_91;
            					}
            					else {
HXLINE(1310)						if ((c == 10)) {
HXLINE(1310)							this->line++;
            						}
HXLINE(1311)						if ((c >= 127)) {
HXLINE(1311)							::String x = ::String::fromCharCode(c);
HXDLIN(1311)							if (::hx::IsNotNull( b->charBuf )) {
HXLINE(1311)								b->flush();
            							}
HXDLIN(1311)							if (::hx::IsNull( b->b )) {
HXLINE(1311)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE(1311)								::Array< ::String > b1 = b->b;
HXDLIN(1311)								b1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE(1311)							if (::hx::IsNull( b->charBuf )) {
HXLINE(1311)								b->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN(1311)							b->charBuf->push(c);
            						}
            					}
            				}
            			}
            		}
            		_hx_goto_91:;
HXLINE(1314)		return b->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readString,return )

 ::hscript::Token Parser_obj::token(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1317_token)
HXLINE(1335)		if (::hx::IsNotNull( this->tokens->head )) {
HXLINE(1336)			 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1336)			 ::haxe::ds::GenericCell_hscript_Token k = _this->head;
HXDLIN(1336)			if (::hx::IsNull( k )) {
HXLINE(1336)				return null();
            			}
            			else {
HXLINE(1336)				_this->head = k->next;
HXDLIN(1336)				return k->elt;
            			}
            		}
HXLINE(1338)		int _hx_char;
HXLINE(1339)		if ((this->_hx_char < 0)) {
HXLINE(1340)			_hx_char = this->input.cca(this->readPos++);
            		}
            		else {
HXLINE(1342)			_hx_char = this->_hx_char;
HXLINE(1343)			this->_hx_char = -1;
            		}
HXLINE(1345)		while(true){
HXLINE(1346)			if ((_hx_char == 0)) {
HXLINE(1347)				this->_hx_char = _hx_char;
HXLINE(1348)				return ::hscript::Token_obj::TEof_dyn();
            			}
HXLINE(1350)			switch((int)(_hx_char)){
            				case (int)0: {
HXLINE(1352)					return ::hscript::Token_obj::TEof_dyn();
            				}
            				break;
            				case (int)10: {
HXLINE(1357)					this->line++;
            				}
            				break;
            				case (int)9: case (int)13: case (int)32: {
            				}
            				break;
            				case (int)35: {
HXLINE(1505)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1506)					if (this->idents->__get(_hx_char)) {
HXLINE(1507)						::String id = ::String::fromCharCode(_hx_char);
HXLINE(1508)						while(true){
HXLINE(1509)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1510)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1511)								this->_hx_char = _hx_char;
HXLINE(1512)								return this->preprocess(id);
            							}
HXLINE(1514)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1517)					this->invalidChar(_hx_char);
            				}
            				break;
            				case (int)34: case (int)39: {
HXLINE(1479)					return ::hscript::Token_obj::TConst(::hscript::Const_obj::CString(this->readString(_hx_char)));
            				}
            				break;
            				case (int)40: {
HXLINE(1446)					return ::hscript::Token_obj::TPOpen_dyn();
            				}
            				break;
            				case (int)41: {
HXLINE(1447)					return ::hscript::Token_obj::TPClose_dyn();
            				}
            				break;
            				case (int)44: {
HXLINE(1448)					return ::hscript::Token_obj::TComma_dyn();
            				}
            				break;
            				case (int)46: {
HXLINE(1450)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1451)					switch((int)(_hx_char)){
            						case (int)46: {
HXLINE(1467)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1468)							if ((_hx_char != 46)) {
HXLINE(1469)								this->invalidChar(_hx_char);
            							}
HXLINE(1470)							return ::hscript::Token_obj::TOp(HX_("...",ee,0f,23,00));
            						}
            						break;
            						case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1453)							int n = (_hx_char - 48);
HXLINE(1454)							int exp = 1;
HXLINE(1455)							while(true){
HXLINE(1456)								_hx_char = this->input.cca(this->readPos++);
HXLINE(1457)								exp = (exp * 10);
HXLINE(1458)								switch((int)(_hx_char)){
            									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1460)										n = ((n * 10) + (_hx_char - 48));
            									}
            									break;
            									default:{
HXLINE(1462)										this->_hx_char = _hx_char;
HXLINE(1463)										return ::hscript::Token_obj::TConst(::hscript::Const_obj::CFloat((( (Float)(n) ) / ( (Float)(exp) ))));
            									}
            								}
            							}
            						}
            						break;
            						default:{
HXLINE(1472)							this->_hx_char = _hx_char;
HXLINE(1473)							return ::hscript::Token_obj::TDot_dyn();
            						}
            					}
            				}
            				break;
            				case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1362)					Float n = (( (Float)((_hx_char - 48)) ) * ((Float)1.0));
HXLINE(1363)					Float exp = ((Float)0.);
HXLINE(1364)					while(true){
HXLINE(1365)						_hx_char = this->input.cca(this->readPos++);
HXLINE(1366)						exp = (exp * ( (Float)(10) ));
HXLINE(1367)						switch((int)(_hx_char)){
            							case (int)46: {
HXLINE(1388)								if ((exp > 0)) {
HXLINE(1390)									bool _hx_tmp;
HXDLIN(1390)									if ((exp == 10)) {
HXLINE(1390)										_hx_tmp = (this->input.cca(this->readPos++) == 46);
            									}
            									else {
HXLINE(1390)										_hx_tmp = false;
            									}
HXDLIN(1390)									if (_hx_tmp) {
HXLINE(1391)										{
HXLINE(1391)											 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1391)											_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,::hscript::Token_obj::TOp(HX_("...",ee,0f,23,00)),_this->head);
            										}
HXLINE(1392)										int i = ::Std_obj::_hx_int(n);
HXLINE(1393)										 ::hscript::Const _hx_tmp;
HXDLIN(1393)										if ((i == n)) {
HXLINE(1393)											_hx_tmp = ::hscript::Const_obj::CInt(i);
            										}
            										else {
HXLINE(1393)											_hx_tmp = ::hscript::Const_obj::CFloat(n);
            										}
HXDLIN(1393)										return ::hscript::Token_obj::TConst(_hx_tmp);
            									}
HXLINE(1395)									this->invalidChar(_hx_char);
            								}
HXLINE(1397)								exp = ((Float)1.);
            							}
            							break;
            							case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1369)								n = ((n * ( (Float)(10) )) + (_hx_char - 48));
            							}
            							break;
            							case (int)69: case (int)101: {
HXLINE(1371)								 ::hscript::Token tk = this->token();
HXLINE(1372)								 ::Dynamic pow = null();
HXLINE(1373)								if (::hx::IsNull( tk )) {
HXLINE(1382)									 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1382)									_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            								}
            								else {
HXLINE(1373)									switch((int)(tk->_hx_getIndex())){
            										case (int)1: {
HXLINE(1374)											 ::hscript::Const _g = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXDLIN(1374)											if ((_g->_hx_getIndex() == 0)) {
HXLINE(1374)												int e = _g->_hx_getInt(0);
HXDLIN(1374)												pow = e;
            											}
            											else {
HXLINE(1382)												 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1382)												_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            											}
            										}
            										break;
            										case (int)3: {
HXLINE(1375)											if ((tk->_hx_getString(0) == HX_("-",2d,00,00,00))) {
HXLINE(1376)												tk = this->token();
HXLINE(1377)												if (::hx::IsNull( tk )) {
HXLINE(1379)													 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1379)													_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            												}
            												else {
HXLINE(1377)													if ((tk->_hx_getIndex() == 1)) {
HXLINE(1378)														 ::hscript::Const _g = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXDLIN(1378)														if ((_g->_hx_getIndex() == 0)) {
HXLINE(1378)															int e = _g->_hx_getInt(0);
HXDLIN(1378)															pow = -(e);
            														}
            														else {
HXLINE(1379)															 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1379)															_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            														}
            													}
            													else {
HXLINE(1379)														 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1379)														_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            													}
            												}
            											}
            											else {
HXLINE(1382)												 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1382)												_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            											}
            										}
            										break;
            										default:{
HXLINE(1382)											 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1382)											_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            										}
            									}
            								}
HXLINE(1384)								if (::hx::IsNull( pow )) {
HXLINE(1385)									this->invalidChar(_hx_char);
            								}
HXLINE(1386)								return ::hscript::Token_obj::TConst(::hscript::Const_obj::CFloat((((::Math_obj::pow(( (Float)(10) ),( (Float)(pow) )) / exp) * n) * ( (Float)(10) ))));
            							}
            							break;
            							case (int)120: {
HXLINE(1399)								bool _hx_tmp;
HXDLIN(1399)								if (!((n > 0))) {
HXLINE(1399)									_hx_tmp = (exp > 0);
            								}
            								else {
HXLINE(1399)									_hx_tmp = true;
            								}
HXDLIN(1399)								if (_hx_tmp) {
HXLINE(1400)									this->invalidChar(_hx_char);
            								}
HXLINE(1403)								int n1 = 0;
HXLINE(1404)								while(true){
HXLINE(1405)									_hx_char = this->input.cca(this->readPos++);
HXLINE(1406)									switch((int)(_hx_char)){
            										case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1408)											n1 = (((n1 << 4) + _hx_char) - 48);
            										}
            										break;
            										case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
HXLINE(1410)											n1 = ((n1 << 4) + (_hx_char - 55));
            										}
            										break;
            										case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
HXLINE(1412)											n1 = ((n1 << 4) + (_hx_char - 87));
            										}
            										break;
            										default:{
HXLINE(1414)											this->_hx_char = _hx_char;
HXLINE(1415)											return ::hscript::Token_obj::TConst(::hscript::Const_obj::CInt(n1));
            										}
            									}
            								}
            							}
            							break;
            							default:{
HXLINE(1440)								this->_hx_char = _hx_char;
HXLINE(1441)								int i = ::Std_obj::_hx_int(n);
HXLINE(1442)								 ::hscript::Const _hx_tmp;
HXDLIN(1442)								if ((exp > 0)) {
HXLINE(1442)									_hx_tmp = ::hscript::Const_obj::CFloat(((n * ( (Float)(10) )) / exp));
            								}
            								else {
HXLINE(1442)									if ((i == n)) {
HXLINE(1442)										_hx_tmp = ::hscript::Const_obj::CInt(i);
            									}
            									else {
HXLINE(1442)										_hx_tmp = ::hscript::Const_obj::CFloat(n);
            									}
            								}
HXDLIN(1442)								return ::hscript::Token_obj::TConst(_hx_tmp);
            							}
            						}
            					}
            				}
            				break;
            				case (int)58: {
HXLINE(1481)					return ::hscript::Token_obj::TDoubleDot_dyn();
            				}
            				break;
            				case (int)59: {
HXLINE(1445)					return ::hscript::Token_obj::TSemicolon_dyn();
            				}
            				break;
            				case (int)61: {
HXLINE(1483)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1484)					if ((_hx_char == 61)) {
HXLINE(1485)						return ::hscript::Token_obj::TOp(HX_("==",60,35,00,00));
            					}
            					else {
HXLINE(1486)						if ((_hx_char == 62)) {
HXLINE(1487)							return ::hscript::Token_obj::TOp(HX_("=>",61,35,00,00));
            						}
            					}
HXLINE(1488)					this->_hx_char = _hx_char;
HXLINE(1489)					return ::hscript::Token_obj::TOp(HX_("=",3d,00,00,00));
            				}
            				break;
            				case (int)63: {
HXLINE(1480)					return ::hscript::Token_obj::TQuestion_dyn();
            				}
            				break;
            				case (int)64: {
HXLINE(1491)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1492)					bool _hx_tmp;
HXDLIN(1492)					if (!(this->idents->__get(_hx_char))) {
HXLINE(1492)						_hx_tmp = (_hx_char == 58);
            					}
            					else {
HXLINE(1492)						_hx_tmp = true;
            					}
HXDLIN(1492)					if (_hx_tmp) {
HXLINE(1493)						::String id = ::String::fromCharCode(_hx_char);
HXLINE(1494)						while(true){
HXLINE(1495)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1496)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1497)								this->_hx_char = _hx_char;
HXLINE(1498)								return ::hscript::Token_obj::TMeta(id);
            							}
HXLINE(1500)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1503)					this->invalidChar(_hx_char);
            				}
            				break;
            				case (int)91: {
HXLINE(1477)					return ::hscript::Token_obj::TBkOpen_dyn();
            				}
            				break;
            				case (int)93: {
HXLINE(1478)					return ::hscript::Token_obj::TBkClose_dyn();
            				}
            				break;
            				case (int)123: {
HXLINE(1475)					return ::hscript::Token_obj::TBrOpen_dyn();
            				}
            				break;
            				case (int)125: {
HXLINE(1476)					return ::hscript::Token_obj::TBrClose_dyn();
            				}
            				break;
            				default:{
HXLINE(1519)					if (this->ops->__get(_hx_char)) {
HXLINE(1520)						::String op = ::String::fromCharCode(_hx_char);
HXLINE(1521)						int prev = -1;
HXLINE(1522)						while(true){
HXLINE(1523)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1524)							if ((_hx_char == 0)) {
HXLINE(1524)								_hx_char = 0;
            							}
HXLINE(1525)							bool _hx_tmp;
HXDLIN(1525)							if (this->ops->__get(_hx_char)) {
HXLINE(1525)								_hx_tmp = (prev == 61);
            							}
            							else {
HXLINE(1525)								_hx_tmp = true;
            							}
HXDLIN(1525)							if (_hx_tmp) {
HXLINE(1526)								if (::hx::IsEq( op.charCodeAt(0),47 )) {
HXLINE(1527)									return this->tokenComment(op,_hx_char);
            								}
HXLINE(1528)								this->_hx_char = _hx_char;
HXLINE(1529)								return ::hscript::Token_obj::TOp(op);
            							}
HXLINE(1531)							prev = _hx_char;
HXLINE(1532)							op = (op + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1535)					if (this->idents->__get(_hx_char)) {
HXLINE(1536)						::String id = ::String::fromCharCode(_hx_char);
HXLINE(1537)						while(true){
HXLINE(1538)							_hx_char = this->input.cca(this->readPos++);
HXLINE(1539)							if ((_hx_char == 0)) {
HXLINE(1539)								_hx_char = 0;
            							}
HXLINE(1540)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1541)								this->_hx_char = _hx_char;
HXLINE(1542)								return ::hscript::Token_obj::TId(id);
            							}
HXLINE(1544)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1547)					this->invalidChar(_hx_char);
            				}
            			}
HXLINE(1549)			_hx_char = this->input.cca(this->readPos++);
            		}
HXLINE(1345)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,token,return )

 ::Dynamic Parser_obj::preprocValue(::String id){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1555_preprocValue)
HXDLIN(1555)		return this->preprocesorValues->get(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,preprocValue,return )

 ::hscript::Expr Parser_obj::parsePreproCond(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1560_parsePreproCond)
HXLINE(1561)		 ::hscript::Token tk = this->token();
HXLINE(1562)		if (::hx::IsNull( tk )) {
HXLINE(1571)			return this->unexpected(tk);
            		}
            		else {
HXLINE(1562)			switch((int)(tk->_hx_getIndex())){
            				case (int)2: {
HXLINE(1566)					::String id = tk->_hx_getString(0);
HXLINE(1567)					return ::hscript::Expr_obj::EIdent(id);
            				}
            				break;
            				case (int)3: {
HXLINE(1568)					if ((tk->_hx_getString(0) == HX_("!",21,00,00,00))) {
HXLINE(1569)						return ::hscript::Expr_obj::EUnop(HX_("!",21,00,00,00),true,this->parsePreproCond());
            					}
            					else {
HXLINE(1571)						return this->unexpected(tk);
            					}
            				}
            				break;
            				case (int)4: {
HXLINE(1564)					{
HXLINE(1564)						 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1564)						_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,::hscript::Token_obj::TPOpen_dyn(),_this->head);
            					}
HXLINE(1565)					return this->parseExpr();
            				}
            				break;
            				default:{
HXLINE(1571)					return this->unexpected(tk);
            				}
            			}
            		}
HXLINE(1562)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parsePreproCond,return )

bool Parser_obj::evalPreproCond( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1576_evalPreproCond)
HXDLIN(1576)		switch((int)(e->_hx_getIndex())){
            			case (int)1: {
HXLINE(1577)				::String id = e->_hx_getString(0);
HXLINE(1578)				return ::hx::IsNotNull( this->preprocValue(id) );
            			}
            			break;
            			case (int)3: {
HXLINE(1581)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE(1582)				return this->evalPreproCond(e1);
            			}
            			break;
            			case (int)6: {
HXLINE(1585)				 ::hscript::Expr _g = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN(1585)				 ::hscript::Expr _g1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN(1585)				::String _hx_switch_0 = e->_hx_getString(0);
            				if (  (_hx_switch_0==HX_("&&",40,21,00,00)) ){
HXLINE(1583)					 ::hscript::Expr e1 = _g;
HXDLIN(1583)					 ::hscript::Expr e2 = _g1;
HXLINE(1584)					if (this->evalPreproCond(e1)) {
HXLINE(1584)						return this->evalPreproCond(e2);
            					}
            					else {
HXLINE(1584)						return false;
            					}
HXLINE(1583)					goto _hx_goto_105;
            				}
            				if (  (_hx_switch_0==HX_("||",80,6c,00,00)) ){
HXLINE(1585)					 ::hscript::Expr e1 = _g;
HXDLIN(1585)					 ::hscript::Expr e2 = _g1;
HXLINE(1586)					if (!(this->evalPreproCond(e1))) {
HXLINE(1586)						return this->evalPreproCond(e2);
            					}
            					else {
HXLINE(1586)						return true;
            					}
HXLINE(1585)					goto _hx_goto_105;
            				}
            				/* default */{
HXLINE(1588)					{
HXLINE(1588)						 ::hscript::Error err = ::hscript::Error_obj::EInvalidPreprocessor((HX_("Can't eval ",01,17,bf,09) + ::Type_obj::enumConstructor(e)));
HXDLIN(1588)						int pmin = this->readPos;
HXDLIN(1588)						int pmax = this->readPos;
HXDLIN(1588)						if (!(this->resumeErrors)) {
HXLINE(1588)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            						}
            					}
HXLINE(1589)					return false;
            				}
            				_hx_goto_105:;
            			}
            			break;
            			case (int)7: {
HXLINE(1579)				bool _g = e->_hx_getBool(1);
HXDLIN(1579)				if ((e->_hx_getString(0) == HX_("!",21,00,00,00))) {
HXLINE(1579)					 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE(1580)					return !(this->evalPreproCond(e1));
            				}
            				else {
HXLINE(1588)					{
HXLINE(1588)						 ::hscript::Error err = ::hscript::Error_obj::EInvalidPreprocessor((HX_("Can't eval ",01,17,bf,09) + ::Type_obj::enumConstructor(e)));
HXDLIN(1588)						int pmin = this->readPos;
HXDLIN(1588)						int pmax = this->readPos;
HXDLIN(1588)						if (!(this->resumeErrors)) {
HXLINE(1588)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            						}
            					}
HXLINE(1589)					return false;
            				}
            			}
            			break;
            			default:{
HXLINE(1588)				{
HXLINE(1588)					 ::hscript::Error err = ::hscript::Error_obj::EInvalidPreprocessor((HX_("Can't eval ",01,17,bf,09) + ::Type_obj::enumConstructor(e)));
HXDLIN(1588)					int pmin = this->readPos;
HXDLIN(1588)					int pmax = this->readPos;
HXDLIN(1588)					if (!(this->resumeErrors)) {
HXLINE(1588)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(err));
            					}
            				}
HXLINE(1589)				return false;
            			}
            		}
HXLINE(1576)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,evalPreproCond,return )

 ::hscript::Token Parser_obj::preprocess(::String id){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1594_preprocess)
HXDLIN(1594)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("else",b9,e4,14,43)) ||  (_hx_switch_0==HX_("elseif",d6,a0,a2,dd)) ){
HXLINE(1604)			if ((this->preprocStack->length > 0)) {
HXLINE(1605)				if (( (bool)(this->preprocStack->__get((this->preprocStack->length - 1))->__Field(HX_("r",72,00,00,00),::hx::paccDynamic)) )) {
HXLINE(1606)					this->preprocStack->__get((this->preprocStack->length - 1))->__SetField(HX_("r",72,00,00,00),false,::hx::paccDynamic);
HXLINE(1607)					this->skipTokens();
HXLINE(1608)					return this->token();
            				}
            				else {
HXLINE(1609)					if ((id == HX_("else",b9,e4,14,43))) {
HXLINE(1610)						this->preprocStack->pop();
HXLINE(1611)						this->preprocStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("r",72,00,00,00),true)));
HXLINE(1612)						return this->token();
            					}
            					else {
HXLINE(1615)						this->preprocStack->pop();
HXLINE(1616)						return this->preprocess(HX_("if",dd,5b,00,00));
            					}
            				}
            			}
            			else {
HXLINE(1622)				return ::hscript::Token_obj::TPrepro(id);
            			}
HXLINE(1604)			goto _hx_goto_107;
            		}
            		if (  (_hx_switch_0==HX_("end",db,03,4d,00)) ){
HXLINE(1618)			if ((this->preprocStack->length > 0)) {
HXLINE(1619)				this->preprocStack->pop();
HXLINE(1620)				return this->token();
            			}
            			else {
HXLINE(1622)				return ::hscript::Token_obj::TPrepro(id);
            			}
HXLINE(1618)			goto _hx_goto_107;
            		}
            		if (  (_hx_switch_0==HX_("if",dd,5b,00,00)) ){
HXLINE(1596)			 ::hscript::Expr e = this->parsePreproCond();
HXLINE(1597)			if (this->evalPreproCond(e)) {
HXLINE(1598)				this->preprocStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("r",72,00,00,00),true)));
HXLINE(1599)				return this->token();
            			}
HXLINE(1601)			this->preprocStack->push( ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("r",72,00,00,00),false)));
HXLINE(1602)			this->skipTokens();
HXLINE(1603)			return this->token();
HXLINE(1595)			goto _hx_goto_107;
            		}
            		/* default */{
HXLINE(1622)			return ::hscript::Token_obj::TPrepro(id);
            		}
            		_hx_goto_107:;
HXLINE(1594)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,preprocess,return )

void Parser_obj::skipTokens(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1626_skipTokens)
HXLINE(1627)		int spos = (this->preprocStack->length - 1);
HXLINE(1628)		 ::Dynamic obj = this->preprocStack->__get(spos);
HXLINE(1629)		int pos = this->readPos;
HXLINE(1630)		while(true){
HXLINE(1631)			 ::hscript::Token tk = this->token();
HXLINE(1632)			if (::hx::IsPointerEq( tk,::hscript::Token_obj::TEof_dyn() )) {
HXLINE(1633)				if (!(this->resumeErrors)) {
HXLINE(1633)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::Error_obj::EInvalidPreprocessor(HX_("Unclosed",e5,94,4a,ea))));
            				}
            			}
HXLINE(1634)			if (::hx::IsNotEq( this->preprocStack->__get(spos),obj )) {
HXLINE(1635)				{
HXLINE(1635)					 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN(1635)					_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            				}
HXLINE(1636)				goto _hx_goto_109;
            			}
            		}
            		_hx_goto_109:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,skipTokens,(void))

 ::hscript::Token Parser_obj::tokenComment(::String op,int _hx_char){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1641_tokenComment)
HXLINE(1642)		 ::Dynamic c = op.charCodeAt(1);
HXLINE(1643)		::String s = this->input;
HXLINE(1644)		if (::hx::IsEq( c,47 )) {
HXLINE(1645)			while(true){
HXLINE(1645)				bool _hx_tmp;
HXDLIN(1645)				if ((_hx_char != 13)) {
HXLINE(1645)					_hx_tmp = (_hx_char != 10);
            				}
            				else {
HXLINE(1645)					_hx_tmp = false;
            				}
HXDLIN(1645)				if (!(_hx_tmp)) {
HXLINE(1645)					goto _hx_goto_111;
            				}
HXLINE(1646)				_hx_char = this->input.cca(this->readPos++);
HXLINE(1647)				if ((_hx_char == 0)) {
HXLINE(1647)					goto _hx_goto_111;
            				}
            			}
            			_hx_goto_111:;
HXLINE(1649)			this->_hx_char = _hx_char;
HXLINE(1650)			return this->token();
            		}
HXLINE(1652)		if (::hx::IsEq( c,42 )) {
HXLINE(1653)			int old = this->line;
HXLINE(1654)			if ((op == HX_("/**/",a0,0a,31,1f))) {
HXLINE(1655)				this->_hx_char = _hx_char;
HXLINE(1656)				return this->token();
            			}
HXLINE(1658)			while(true){
HXLINE(1659)				while((_hx_char != 42)){
HXLINE(1660)					if ((_hx_char == 10)) {
HXLINE(1660)						this->line++;
            					}
HXLINE(1661)					_hx_char = this->input.cca(this->readPos++);
HXLINE(1662)					if ((_hx_char == 0)) {
HXLINE(1663)						this->line = old;
HXLINE(1664)						if (!(this->resumeErrors)) {
HXLINE(1664)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::Error_obj::EUnterminatedComment_dyn()));
            						}
HXLINE(1665)						goto _hx_goto_113;
            					}
            				}
            				_hx_goto_113:;
HXLINE(1668)				_hx_char = this->input.cca(this->readPos++);
HXLINE(1669)				if ((_hx_char == 0)) {
HXLINE(1670)					this->line = old;
HXLINE(1671)					if (!(this->resumeErrors)) {
HXLINE(1671)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hscript::Error_obj::EUnterminatedComment_dyn()));
            					}
HXLINE(1672)					goto _hx_goto_112;
            				}
HXLINE(1674)				if ((_hx_char == 47)) {
HXLINE(1675)					goto _hx_goto_112;
            				}
            			}
            			_hx_goto_112:;
HXLINE(1677)			return this->token();
            		}
HXLINE(1679)		this->_hx_char = _hx_char;
HXLINE(1680)		return ::hscript::Token_obj::TOp(op);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,tokenComment,return )

::String Parser_obj::constString( ::hscript::Const c){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1684_constString)
HXDLIN(1684)		switch((int)(c->_hx_getIndex())){
            			case (int)0: {
HXLINE(1685)				int v = c->_hx_getInt(0);
HXDLIN(1685)				return ::Std_obj::string(v);
            			}
            			break;
            			case (int)1: {
HXLINE(1686)				Float f = c->_hx_getFloat(0);
HXDLIN(1686)				return ::Std_obj::string(f);
            			}
            			break;
            			case (int)2: {
HXLINE(1687)				::String s = c->_hx_getString(0);
HXDLIN(1687)				return s;
            			}
            			break;
            		}
HXLINE(1684)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,constString,return )

::String Parser_obj::tokenString( ::hscript::Token t){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1695_tokenString)
HXDLIN(1695)		switch((int)(t->_hx_getIndex())){
            			case (int)0: {
HXLINE(1696)				return HX_("<eof>",3e,ee,21,cf);
            			}
            			break;
            			case (int)1: {
HXLINE(1697)				 ::hscript::Const c = t->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXDLIN(1697)				return this->constString(c);
            			}
            			break;
            			case (int)2: {
HXLINE(1698)				::String s = t->_hx_getString(0);
HXDLIN(1698)				return s;
            			}
            			break;
            			case (int)3: {
HXLINE(1699)				::String s = t->_hx_getString(0);
HXDLIN(1699)				return s;
            			}
            			break;
            			case (int)4: {
HXLINE(1700)				return HX_("(",28,00,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE(1701)				return HX_(")",29,00,00,00);
            			}
            			break;
            			case (int)6: {
HXLINE(1702)				return HX_("{",7b,00,00,00);
            			}
            			break;
            			case (int)7: {
HXLINE(1703)				return HX_("}",7d,00,00,00);
            			}
            			break;
            			case (int)8: {
HXLINE(1704)				return HX_(".",2e,00,00,00);
            			}
            			break;
            			case (int)9: {
HXLINE(1705)				return HX_(",",2c,00,00,00);
            			}
            			break;
            			case (int)10: {
HXLINE(1706)				return HX_(";",3b,00,00,00);
            			}
            			break;
            			case (int)11: {
HXLINE(1707)				return HX_("[",5b,00,00,00);
            			}
            			break;
            			case (int)12: {
HXLINE(1708)				return HX_("]",5d,00,00,00);
            			}
            			break;
            			case (int)13: {
HXLINE(1709)				return HX_("?",3f,00,00,00);
            			}
            			break;
            			case (int)14: {
HXLINE(1710)				return HX_(":",3a,00,00,00);
            			}
            			break;
            			case (int)15: {
HXLINE(1711)				::String id = t->_hx_getString(0);
HXDLIN(1711)				return (HX_("@",40,00,00,00) + id);
            			}
            			break;
            			case (int)16: {
HXLINE(1712)				::String id = t->_hx_getString(0);
HXDLIN(1712)				return (HX_("#",23,00,00,00) + id);
            			}
            			break;
            		}
HXLINE(1695)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,tokenString,return )

int Parser_obj::p1;

int Parser_obj::tokenMin;

int Parser_obj::tokenMax;


::hx::ObjectPtr< Parser_obj > Parser_obj::__new() {
	::hx::ObjectPtr< Parser_obj > __this = new Parser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Parser_obj > Parser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Parser_obj *__this = (Parser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Parser_obj), true, "hscript.Parser"));
	*(void **)__this = Parser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Parser_obj::Parser_obj()
{
}

void Parser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parser);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(opChars,"opChars");
	HX_MARK_MEMBER_NAME(identChars,"identChars");
	HX_MARK_MEMBER_NAME(opPriority,"opPriority");
	HX_MARK_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_MARK_MEMBER_NAME(unops,"unops");
	HX_MARK_MEMBER_NAME(preprocesorValues,"preprocesorValues");
	HX_MARK_MEMBER_NAME(allowJSON,"allowJSON");
	HX_MARK_MEMBER_NAME(allowTypes,"allowTypes");
	HX_MARK_MEMBER_NAME(allowMetadata,"allowMetadata");
	HX_MARK_MEMBER_NAME(resumeErrors,"resumeErrors");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(readPos,"readPos");
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(ops,"ops");
	HX_MARK_MEMBER_NAME(idents,"idents");
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(tokens,"tokens");
	HX_MARK_MEMBER_NAME(preprocStack,"preprocStack");
	HX_MARK_END_CLASS();
}

void Parser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(opChars,"opChars");
	HX_VISIT_MEMBER_NAME(identChars,"identChars");
	HX_VISIT_MEMBER_NAME(opPriority,"opPriority");
	HX_VISIT_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_VISIT_MEMBER_NAME(unops,"unops");
	HX_VISIT_MEMBER_NAME(preprocesorValues,"preprocesorValues");
	HX_VISIT_MEMBER_NAME(allowJSON,"allowJSON");
	HX_VISIT_MEMBER_NAME(allowTypes,"allowTypes");
	HX_VISIT_MEMBER_NAME(allowMetadata,"allowMetadata");
	HX_VISIT_MEMBER_NAME(resumeErrors,"resumeErrors");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(readPos,"readPos");
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(ops,"ops");
	HX_VISIT_MEMBER_NAME(idents,"idents");
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(tokens,"tokens");
	HX_VISIT_MEMBER_NAME(preprocStack,"preprocStack");
}

::hx::Val Parser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { return ::hx::Val( mk_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { return ::hx::Val( ops ); }
		if (HX_FIELD_EQ(inName,"uid") ) { return ::hx::Val( uid ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return ::hx::Val( line ); }
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"expr") ) { return ::hx::Val( expr_dyn() ); }
		if (HX_FIELD_EQ(inName,"pmin") ) { return ::hx::Val( pmin_dyn() ); }
		if (HX_FIELD_EQ(inName,"pmax") ) { return ::hx::Val( pmax_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { return ::hx::Val( unops ); }
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"error") ) { return ::hx::Val( error_dyn() ); }
		if (HX_FIELD_EQ(inName,"maybe") ) { return ::hx::Val( maybe_dyn() ); }
		if (HX_FIELD_EQ(inName,"token") ) { return ::hx::Val( token_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { return ::hx::Val( idents ); }
		if (HX_FIELD_EQ(inName,"tokens") ) { return ::hx::Val( tokens ); }
		if (HX_FIELD_EQ(inName,"ensure") ) { return ::hx::Val( ensure_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { return ::hx::Val( opChars ); }
		if (HX_FIELD_EQ(inName,"readPos") ) { return ::hx::Val( readPos ); }
		if (HX_FIELD_EQ(inName,"isBlock") ) { return ::hx::Val( isBlock_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getIdent") ) { return ::hx::Val( getIdent_dyn() ); }
		if (HX_FIELD_EQ(inName,"mapCompr") ) { return ::hx::Val( mapCompr_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeUnop") ) { return ::hx::Val( makeUnop_dyn() ); }
		if (HX_FIELD_EQ(inName,"readChar") ) { return ::hx::Val( readChar_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { return ::hx::Val( allowJSON ); }
		if (HX_FIELD_EQ(inName,"parseExpr") ) { return ::hx::Val( parseExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeBinop") ) { return ::hx::Val( makeBinop_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePath") ) { return ::hx::Val( parsePath_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseType") ) { return ::hx::Val( parseType_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { return ::hx::Val( identChars ); }
		if (HX_FIELD_EQ(inName,"opPriority") ) { return ::hx::Val( opPriority ); }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { return ::hx::Val( allowTypes ); }
		if (HX_FIELD_EQ(inName,"initParser") ) { return ::hx::Val( initParser_dyn() ); }
		if (HX_FIELD_EQ(inName,"unexpected") ) { return ::hx::Val( unexpected_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseField") ) { return ::hx::Val( parseField_dyn() ); }
		if (HX_FIELD_EQ(inName,"readString") ) { return ::hx::Val( readString_dyn() ); }
		if (HX_FIELD_EQ(inName,"preprocess") ) { return ::hx::Val( preprocess_dyn() ); }
		if (HX_FIELD_EQ(inName,"skipTokens") ) { return ::hx::Val( skipTokens_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return ::hx::Val( invalidChar_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseString") ) { return ::hx::Val( parseString_dyn() ); }
		if (HX_FIELD_EQ(inName,"ensureToken") ) { return ::hx::Val( ensureToken_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseObject") ) { return ::hx::Val( parseObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseLambda") ) { return ::hx::Val( parseLambda_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseModule") ) { return ::hx::Val( parseModule_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseParams") ) { return ::hx::Val( parseParams_dyn() ); }
		if (HX_FIELD_EQ(inName,"constString") ) { return ::hx::Val( constString_dyn() ); }
		if (HX_FIELD_EQ(inName,"tokenString") ) { return ::hx::Val( tokenString_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { return ::hx::Val( opRightAssoc ); }
		if (HX_FIELD_EQ(inName,"resumeErrors") ) { return ::hx::Val( resumeErrors ); }
		if (HX_FIELD_EQ(inName,"preprocValue") ) { return ::hx::Val( preprocValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"preprocStack") ) { return ::hx::Val( preprocStack ); }
		if (HX_FIELD_EQ(inName,"tokenComment") ) { return ::hx::Val( tokenComment_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowMetadata") ) { return ::hx::Val( allowMetadata ); }
		if (HX_FIELD_EQ(inName,"parseFullExpr") ) { return ::hx::Val( parseFullExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseMetaArgs") ) { return ::hx::Val( parseMetaArgs_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseExprNext") ) { return ::hx::Val( parseExprNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseTypeNext") ) { return ::hx::Val( parseTypeNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseExprList") ) { return ::hx::Val( parseExprList_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseMetadata") ) { return ::hx::Val( parseMetadata_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseStructure") ) { return ::hx::Val( parseStructure_dyn() ); }
		if (HX_FIELD_EQ(inName,"evalPreproCond") ) { return ::hx::Val( evalPreproCond_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseModuleDecl") ) { return ::hx::Val( parseModuleDecl_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePreproCond") ) { return ::hx::Val( parsePreproCond_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"preprocesorValues") ) { return ::hx::Val( preprocesorValues ); }
		if (HX_FIELD_EQ(inName,"parseFunctionArgs") ) { return ::hx::Val( parseFunctionArgs_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseFunctionDecl") ) { return ::hx::Val( parseFunctionDecl_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Parser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { ops=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { unops=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { idents=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokens") ) { tokens=inValue.Cast<  ::haxe::ds::GenericStack_hscript_Token >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { opChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"readPos") ) { readPos=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { allowJSON=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { identChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { opPriority=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { allowTypes=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { opRightAssoc=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resumeErrors") ) { resumeErrors=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preprocStack") ) { preprocStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowMetadata") ) { allowMetadata=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"preprocesorValues") ) { preprocesorValues=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("line",f4,17,b3,47));
	outFields->push(HX_("opChars",fc,f3,a7,a8));
	outFields->push(HX_("identChars",cd,23,3f,ee));
	outFields->push(HX_("opPriority",a5,21,d8,3e));
	outFields->push(HX_("opRightAssoc",9a,d1,fe,02));
	outFields->push(HX_("unops",79,f3,eb,a6));
	outFields->push(HX_("preprocesorValues",4c,e2,81,ce));
	outFields->push(HX_("allowJSON",31,27,44,b1));
	outFields->push(HX_("allowTypes",30,2b,97,45));
	outFields->push(HX_("allowMetadata",18,79,d4,10));
	outFields->push(HX_("resumeErrors",38,61,37,31));
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("readPos",de,03,cf,02));
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("ops",32,9c,54,00));
	outFields->push(HX_("idents",83,4f,a1,d2));
	outFields->push(HX_("uid",90,23,59,00));
	outFields->push(HX_("tokens",5a,17,e7,91));
	outFields->push(HX_("preprocStack",4f,d3,9d,7a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Parser_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Parser_obj,line),HX_("line",f4,17,b3,47)},
	{::hx::fsString,(int)offsetof(Parser_obj,opChars),HX_("opChars",fc,f3,a7,a8)},
	{::hx::fsString,(int)offsetof(Parser_obj,identChars),HX_("identChars",cd,23,3f,ee)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,opPriority),HX_("opPriority",a5,21,d8,3e)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,opRightAssoc),HX_("opRightAssoc",9a,d1,fe,02)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,unops),HX_("unops",79,f3,eb,a6)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Parser_obj,preprocesorValues),HX_("preprocesorValues",4c,e2,81,ce)},
	{::hx::fsBool,(int)offsetof(Parser_obj,allowJSON),HX_("allowJSON",31,27,44,b1)},
	{::hx::fsBool,(int)offsetof(Parser_obj,allowTypes),HX_("allowTypes",30,2b,97,45)},
	{::hx::fsBool,(int)offsetof(Parser_obj,allowMetadata),HX_("allowMetadata",18,79,d4,10)},
	{::hx::fsBool,(int)offsetof(Parser_obj,resumeErrors),HX_("resumeErrors",38,61,37,31)},
	{::hx::fsString,(int)offsetof(Parser_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsInt,(int)offsetof(Parser_obj,readPos),HX_("readPos",de,03,cf,02)},
	{::hx::fsInt,(int)offsetof(Parser_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(Parser_obj,ops),HX_("ops",32,9c,54,00)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(Parser_obj,idents),HX_("idents",83,4f,a1,d2)},
	{::hx::fsInt,(int)offsetof(Parser_obj,uid),HX_("uid",90,23,59,00)},
	{::hx::fsObject /*  ::haxe::ds::GenericStack_hscript_Token */ ,(int)offsetof(Parser_obj,tokens),HX_("tokens",5a,17,e7,91)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Parser_obj,preprocStack),HX_("preprocStack",4f,d3,9d,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Parser_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Parser_obj::p1,HX_("p1",c1,61,00,00)},
	{::hx::fsInt,(void *) &Parser_obj::tokenMin,HX_("tokenMin",19,a8,42,2b)},
	{::hx::fsInt,(void *) &Parser_obj::tokenMax,HX_("tokenMax",2b,a1,42,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Parser_obj_sMemberFields[] = {
	HX_("line",f4,17,b3,47),
	HX_("opChars",fc,f3,a7,a8),
	HX_("identChars",cd,23,3f,ee),
	HX_("opPriority",a5,21,d8,3e),
	HX_("opRightAssoc",9a,d1,fe,02),
	HX_("unops",79,f3,eb,a6),
	HX_("preprocesorValues",4c,e2,81,ce),
	HX_("allowJSON",31,27,44,b1),
	HX_("allowTypes",30,2b,97,45),
	HX_("allowMetadata",18,79,d4,10),
	HX_("resumeErrors",38,61,37,31),
	HX_("input",0a,c4,1d,be),
	HX_("readPos",de,03,cf,02),
	HX_("char",d6,5e,bf,41),
	HX_("ops",32,9c,54,00),
	HX_("idents",83,4f,a1,d2),
	HX_("uid",90,23,59,00),
	HX_("tokens",5a,17,e7,91),
	HX_("error",c8,cb,29,73),
	HX_("invalidChar",6d,ad,ce,a9),
	HX_("initParser",0f,f8,cd,f1),
	HX_("parseString",64,d5,6c,8c),
	HX_("unexpected",d1,15,f4,c5),
	HX_("push",da,11,61,4a),
	HX_("ensure",be,f5,7b,04),
	HX_("ensureToken",5b,6c,33,ec),
	HX_("maybe",a8,13,27,03),
	HX_("getIdent",7a,52,50,17),
	HX_("expr",35,fd,1d,43),
	HX_("pmin",22,f7,5a,4a),
	HX_("pmax",34,f0,5a,4a),
	HX_("mk",5e,5f,00,00),
	HX_("isBlock",03,19,82,51),
	HX_("parseFullExpr",b7,bd,60,9c),
	HX_("parseObject",52,2b,7c,90),
	HX_("parseExpr",08,4f,c4,ca),
	HX_("parseLambda",9a,df,fc,cb),
	HX_("parseMetaArgs",15,82,33,6e),
	HX_("mapCompr",47,a4,9f,c1),
	HX_("makeUnop",c8,c4,47,44),
	HX_("makeBinop",da,90,98,86),
	HX_("parseStructure",80,85,70,8b),
	HX_("parseExprNext",1b,24,a8,f3),
	HX_("parseFunctionArgs",68,ad,48,04),
	HX_("parseFunctionDecl",75,70,3a,06),
	HX_("parsePath",78,37,f8,d1),
	HX_("parseType",8d,44,af,d4),
	HX_("parseTypeNext",20,c0,fc,fa),
	HX_("parseExprList",86,bb,58,f2),
	HX_("parseModule",3f,e1,0f,3c),
	HX_("parseMetadata",c2,1e,49,85),
	HX_("parseParams",d9,a7,b7,68),
	HX_("parseModuleDecl",49,69,92,8b),
	HX_("parseField",87,db,74,2a),
	HX_("readChar",4c,39,b7,69),
	HX_("readString",c7,0c,ac,0a),
	HX_("token",f9,82,2b,14),
	HX_("preprocValue",78,eb,4a,28),
	HX_("preprocStack",4f,d3,9d,7a),
	HX_("parsePreproCond",ff,8c,11,d6),
	HX_("evalPreproCond",a8,25,52,b0),
	HX_("preprocess",ac,dc,46,92),
	HX_("skipTokens",39,0b,eb,f9),
	HX_("tokenComment",66,60,fb,25),
	HX_("constString",94,42,30,a9),
	HX_("tokenString",aa,20,de,a4),
	::String(null()) };

static void Parser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::p1,"p1");
	HX_MARK_MEMBER_NAME(Parser_obj::tokenMin,"tokenMin");
	HX_MARK_MEMBER_NAME(Parser_obj::tokenMax,"tokenMax");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Parser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::p1,"p1");
	HX_VISIT_MEMBER_NAME(Parser_obj::tokenMin,"tokenMin");
	HX_VISIT_MEMBER_NAME(Parser_obj::tokenMax,"tokenMax");
};

#endif

::hx::Class Parser_obj::__mClass;

static ::String Parser_obj_sStaticFields[] = {
	HX_("p1",c1,61,00,00),
	HX_("tokenMin",19,a8,42,2b),
	HX_("tokenMax",2b,a1,42,2b),
	::String(null())
};

void Parser_obj::__register()
{
	Parser_obj _hx_dummy;
	Parser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hscript.Parser",9a,9f,f2,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Parser_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Parser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Parser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Parser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Parser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Parser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Parser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Parser_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_103_boot)
HXDLIN( 103)		p1 = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_104_boot)
HXDLIN( 104)		tokenMin = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_105_boot)
HXDLIN( 105)		tokenMax = 0;
            	}
}

} // end namespace hscript
