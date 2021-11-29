/***
*
* Calculadora.prg
* by Paulo Cesar de Carvalho
* Novembro de 2021
*/
#include 'Fivewin.ch'
#define aFonteCpa12 TFont():New("VERDANA",0,-16,,.T.,,,,,,,,,,,,)
****************************************************************************************************

EXTERN  Set
REQUEST HB_LANG_PT
****************************************************************************************************
STATIC cDisplay,;
       oSay
****************************************************************************************************
INIT PROCEDURE Start

   SET DELETED ON
   SET CENTURY ON
   SET DATE BRITISH
   SET EPOCH TO 1963
   SET _3DLOOK ON
   SET CONFIRM ON
   HB_LangSelect('PT')

   SetGetColorFocus()
   SkinButtons()


RETURN
****************************************************************************************************

FUNCTION _Main()
LOCAL oDlgTmp, ;
      oBtn[20]

   cDisplay := ""

   DEFINE DIALOG oDlgTmp FROM 1, 1 TO 29, 33.8 TITLE "Calculadora" ;
          STYLE nOr( DS_MODALFRAME, WS_POPUP, WS_CAPTION, WS_SYSMENU, 4 )

   @ 0.3,  0 SAY oSay        PROMPT cDisplay SIZE  90,30 OF oDlgTmp COLORS CLR_BLUE FONT aFonteCpa12

   @ 02,   0 BUTTON oBtn[ 1] PROMPT "%"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('%')
   @ 02, 5.5 BUTTON oBtn[ 2] PROMPT "CE"     SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('E')
   @ 02,  11 BUTTON oBtn[ 3] PROMPT "C"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('C')
   @ 02,16.5 BUTTON oBtn[ 4] PROMPT "+"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('+')

   @ 04,   0 BUTTON oBtn[ 5] PROMPT "7"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('7')
   @ 04, 5.5 BUTTON oBtn[ 6] PROMPT "8"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('8')
   @ 04,  11 BUTTON oBtn[ 7] PROMPT "9"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('9')
   @ 04,16.5 BUTTON oBtn[ 8] PROMPT "-"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('-')

   @ 06,   0 BUTTON oBtn[ 9] PROMPT "4"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('4')
   @ 06, 5.5 BUTTON oBtn[10] PROMPT "5"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('5')
   @ 06,  11 BUTTON oBtn[11] PROMPT "6"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('6')
   @ 06,16.5 BUTTON oBtn[12] PROMPT "X"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('X')

   @ 08,   0 BUTTON oBtn[13] PROMPT "1"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('1')
   @ 08, 5.5 BUTTON oBtn[14] PROMPT "2"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('2')
   @ 08,  11 BUTTON oBtn[15] PROMPT "3"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('3')
   @ 08,16.5 BUTTON oBtn[16] PROMPT "/"      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('/')

   @ 10,   0 BUTTON oBtn[17] PROMPT "0"      SIZE  60,30 OF oDlgTmp ACTION Tecla_Func('0')
   @ 10,  11 BUTTON oBtn[18] PROMPT ","      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func(',')
   @ 10,16.5 BUTTON oBtn[19] PROMPT "="      SIZE  30,30 OF oDlgTmp ACTION Tecla_Func('=')

   ACTIVATE DIALOG oDlgTmp CENTERED ON INIT (oDlgTmp:lHelpIcon := .F. )


RETURN MsgRun('Deus seja louvado!','Bye bye...')
****************************************************************************************************

STATIC FUNCTION Tecla_Func(cTecla)
#define TECLADO  '0123456789,+-X/'
LOCAL cResult

   IF cTecla $ TECLADO
          cDisplay+=IF(cTecla=='X','*',IF(cTecla=',','.',cTecla))
          oSay:Varput(cDisplay)
          oSay:Refresh()
   ELSEIF cTecla = 'E'
          IF !Empty(cDisplay)
             cDisplay := Left(cDisplay,Len(cDisplay)-1)
             oSay:Varput(cDisplay)
             oSay:Refresh()
          ENDIF
   ELSEIF cTecla = '%'
          cDisplay+="/100"
   ELSEIF cTecla = 'C'
          cDisplay := ''
          oSay:Varput(cDisplay)
          oSay:Refresh()
   ELSEIF cTecla='='
          cResult :=  &cDisplay
          cDisplay:= cResult
          oSay:Varput(cDisplay)
          oSay:Refresh()
   ENDIF

RETURN
****************************************************************************************************
EXIT PROCEDURE Halt()

   FreeResources() // Set Resources To

   Release All
   SysRefresh()


   /*limpia arreglo y llama al colecor de basura de xharbour*/ //-> Lixeira
   HB_GCALL( .T. )


   PostQuitMessage( 0 )  // use sempre na saida do seu programa

   QUIT                  // must be QUIT !!!

RETURN
****************************************************************************************************
