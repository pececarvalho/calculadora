/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20150518)
 * Generated C source code from <Generico.prg>
 * Command: Generico.prg /m /n /gc0 /es2 /iC:\Language\Fwh\Include;C:\Language\Sqllib\Include;C:\Language\xHarbour\Include;C:\Language\Borland\Include /iC:\Language\xHarbour\Include /q /oObj\Generico.c 
 * Created: 2021.11.01 10:07:25 (Borland C++ 5.8.2 (32-bit))
 */

#include "hbvmpub.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "Generico.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( _MAIN );
HB_FUNC_INIT( START );
HB_FUNC_STATIC( EXECMYACTION );
HB_FUNC_EXIT( HALT );
HB_FUNC_INITSTATICS();

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( GETPROCADD );
HB_FUNC_EXTERN( TACTIVEX );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( SQLLIB );
HB_FUNC_EXTERN( MYSQL );
HB_FUNC_EXTERN( HB_LANG_PT );
HB_FUNC_EXTERN( DBFCDX );
HB_FUNC_EXTERN( TICON );
HB_FUNC_EXTERN( TWINDOW );
HB_FUNC_EXTERN( VERSION );
HB_FUNC_EXTERN( TBAR );
HB_FUNC_EXTERN( TBTNBMP );
HB_FUNC_EXTERN( TMSGBAR );
HB_FUNC_EXTERN( MSGRUN );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( HB_LANGSELECT );
HB_FUNC_EXTERN( SETGETCOLORFOCUS );
HB_FUNC_EXTERN( SKINBUTTONS );
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( DESCONECTAR );
HB_FUNC_EXTERN( FREERESOURCES );
HB_FUNC_EXTERN( __MVRELEASE );
HB_FUNC_EXTERN( SYSREFRESH );
HB_FUNC_EXTERN( HB_GCALL );
HB_FUNC_EXTERN( POSTQUITMESSAGE );
HB_FUNC_EXTERN( __QUIT );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_GENERICO )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "GETPROCADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPROCADD )}, NULL },
{ "TACTIVEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TACTIVEX )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "SQLLIB", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLLIB )}, NULL },
{ "MYSQL", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSQL )}, NULL },
{ "HB_LANG_PT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LANG_PT )}, NULL },
{ "DBFCDX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFCDX )}, NULL },
{ "_MAIN", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( _MAIN )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TICON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TICON )}, NULL },
{ "TWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( TWINDOW )}, NULL },
{ "VERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERSION )}, NULL },
{ "TBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBAR )}, NULL },
{ "NEWBAR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TBTNBMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBTNBMP )}, NULL },
{ "EXECMYACTION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EXECMYACTION )}, &ModuleFakeDyn },
{ "END", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OMSGBAR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TMSGBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMSGBAR )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BRESIZED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BKEYDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BLBUTTONUP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MSGRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGRUN )}, NULL },
{ "START$", {HB_FS_INIT | HB_FS_LOCAL}, {HB_INIT_FUNCNAME( START )}, &ModuleFakeDyn },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "HB_LANGSELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LANGSELECT )}, NULL },
{ "SETGETCOLORFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETGETCOLORFOCUS )}, NULL },
{ "SKINBUTTONS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SKINBUTTONS )}, NULL },
{ "ACONEXOES", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__MVPUBLIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPUBLIC )}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "HALT$", {HB_FS_EXIT | HB_FS_LOCAL}, {HB_EXIT_FUNCNAME( HALT )}, &ModuleFakeDyn },
{ "DESCONECTAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( DESCONECTAR )}, NULL },
{ "FREERESOURCES", {HB_FS_PUBLIC}, {HB_FUNCNAME( FREERESOURCES )}, NULL },
{ "__MVRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVRELEASE )}, NULL },
{ "SYSREFRESH", {HB_FS_PUBLIC}, {HB_FUNCNAME( SYSREFRESH )}, NULL },
{ "HB_GCALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GCALL )}, NULL },
{ "POSTQUITMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( POSTQUITMESSAGE )}, NULL },
{ "__QUIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __QUIT )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_GENERICO )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_GENERICO
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_GENERICO )
   #include "hbiniseg.h"
#endif

HB_FUNC( _MAIN )
{
   static const BYTE pcode[] =
   {
	13,2,0,116,48,0,133,21,0,48,10,0,108,11,
	100,12,0,100,100,106,5,70,73,86,69,0,100,100,
	112,5,80,1,134,3,48,10,0,108,12,100,12,0,
	121,121,92,24,92,79,108,13,100,12,0,100,100,100,
	95,1,100,100,100,106,5,87,43,47,66,0,100,100,
	100,120,120,120,120,9,100,106,5,111,87,110,100,0,
	112,23,82,1,0,134,5,48,10,0,108,14,100,12,
	0,103,1,0,92,32,92,32,120,100,100,9,9,9,
	112,9,80,2,134,9,48,15,0,108,16,100,12,0,
	106,8,66,84,78,95,65,67,84,0,100,100,100,100,
	89,13,0,1,0,0,0,108,17,100,12,0,6,9,
	95,2,120,100,106,33,69,120,101,99,117,116,97,32,
	117,109,97,32,97,231,227,111,32,112,114,233,45,100,
	101,116,101,114,109,105,110,97,100,97,0,9,100,106,
	15,69,120,101,99,77,121,65,99,116,105,111,110,40,
	41,0,100,100,100,100,100,100,100,100,100,100,9,112,
	25,73,134,13,48,15,0,108,16,100,12,0,106,9,
	66,84,78,95,69,88,73,84,0,100,100,100,100,89,
	16,0,1,0,0,0,48,18,0,103,1,0,112,0,
	6,120,95,2,120,100,106,16,70,105,109,32,100,101,
	32,69,120,101,99,117,231,227,111,0,9,100,106,14,
	40,111,87,110,100,58,69,78,68,40,41,32,41,0,
	100,100,100,100,100,100,100,100,100,100,9,112,25,73,
	134,15,48,19,0,103,1,0,48,10,0,108,20,100,
	12,0,103,1,0,106,1,0,9,120,120,120,100,100,
	100,9,9,9,112,12,112,1,73,134,17,48,21,0,
	103,1,0,106,10,77,65,88,73,77,73,90,69,68,
	0,48,22,0,103,1,0,112,0,48,23,0,103,1,
	0,112,0,48,24,0,103,1,0,112,0,48,25,0,
	103,1,0,112,0,48,26,0,103,1,0,112,0,48,
	27,0,103,1,0,112,0,48,28,0,103,1,0,112,
	0,100,100,100,100,100,100,100,100,100,100,48,29,0,
	103,1,0,112,0,112,19,73,134,19,108,30,100,106,
	19,68,101,117,115,32,115,101,106,97,32,108,111,117,
	118,97,100,111,33,0,106,11,66,121,101,32,98,121,
	101,46,46,46,0,12,2,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INIT( START )
{
   static const BYTE pcode[] =
   {
	133,44,0,108,4,100,92,11,106,3,79,78,0,20,
	2,134,1,108,32,100,106,3,79,78,0,20,1,134,
	2,108,4,100,92,4,108,32,100,12,0,28,17,106,
	11,100,100,47,109,109,47,121,121,121,121,0,25,13,
	106,9,100,100,47,109,109,47,121,121,0,20,2,134,
	3,108,4,100,92,5,93,171,7,20,2,134,5,108,
	4,100,92,27,106,3,79,78,0,20,2,134,6,108,
	33,100,106,3,80,84,0,20,1,134,8,108,34,100,
	20,0,134,9,108,35,100,20,0,134,11,108,37,100,
	108,36,20,1,134,14,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EXECMYACTION )
{
   static const BYTE pcode[] =
   {
	133,62,0,108,38,100,106,34,69,120,101,99,117,116,
	97,32,117,109,97,32,97,231,227,111,32,112,114,233,
	45,100,101,116,101,114,109,105,110,97,100,97,33,0,
	108,39,100,12,0,12,2,110,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_EXIT( HALT )
{
   static const BYTE pcode[] =
   {
	133,66,0,108,41,100,20,0,134,2,108,42,100,20,
	0,134,4,108,43,100,106,2,42,0,120,20,2,134,
	5,108,44,100,20,0,134,9,108,45,100,120,20,1,
	134,12,108,46,100,121,20,1,134,14,108,47,100,20,
	0,134,16,7
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	117,48,0,1,0,7
   };

   hb_vmExecute( pcode, symbols );
}
