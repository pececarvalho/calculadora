****************************************************************************************************
* CALCULADORA.prg
* BY: Paulo Cesar de Carvalho
* Novembro de 2021
****************************************************************************************************
#include 'Fivewin.ch'
#define aFonteCpa12 TFont():New("VERDANA",0,-12,,.T.,,,,,,,,,,,,)
#define aFonteCpa16 TFont():New("VERDANA",0,-16,,.T.,,,,,,,,,,,,)
****************************************************************************************************
EXTERN  Set
REQUEST HB_LANG_PT
****************************************************************************************************
STATIC cDisplay,;
       cSinal  ,;
       oSay[2]
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
FUNCTION Main()
LOCAL oDlgCalc,;
      oBtn[20]

   cSinal := cDisplay := ""

   DEFINE DIALOG oDlgCalc FROM 1, 1 TO 27, 33.8 TITLE "Calculadora" ;
          STYLE nOr( DS_MODALFRAME, WS_POPUP, WS_CAPTION, WS_MINIMIZEBOX, WS_SYSMENU, 4 ) COLORS CLR_BLUE FONT aFonteCpa12 ICON "calc.bmp"

   @ 0.3,  0  SAY oSay[1]     PROMPT cSinal   SIZE   20,10 OF oDlgCalc COLORS CLR_WHITE, CLR_BLACK
   @ 0.3,  0  SAY oSay[2]     PROMPT cDisplay SIZE  130,30 OF oDlgCalc COLORS CLR_WHITE, CLR_BLACK FONT aFonteCpa16 RIGHT

   @ 02,   0  BUTTON oBtn[ 1] PROMPT "%"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('%')
   @ 02, 5.5  BUTTON oBtn[ 2] PROMPT "CE"     SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('E')
   @ 02,  11  BUTTON oBtn[ 3] PROMPT "C"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('C')
   @ 02,16.5  BUTTON oBtn[ 4] PROMPT "+"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('+')

   @ 3.8,   0 BUTTON oBtn[ 5] PROMPT "7"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('7')
   @ 3.8, 5.5 BUTTON oBtn[ 6] PROMPT "8"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('8')
   @ 3.8,  11 BUTTON oBtn[ 7] PROMPT "9"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('9')
   @ 3.8,16.5 BUTTON oBtn[ 8] PROMPT "-"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('-')

   @ 5.6,   0 BUTTON oBtn[ 9] PROMPT "4"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('4')
   @ 5.6, 5.5 BUTTON oBtn[10] PROMPT "5"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('5')
   @ 5.6,  11 BUTTON oBtn[11] PROMPT "6"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('6')
   @ 5.6,16.5 BUTTON oBtn[12] PROMPT "X"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('X')

   @ 7.4,   0 BUTTON oBtn[13] PROMPT "1"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('1')
   @ 7.4, 5.5 BUTTON oBtn[14] PROMPT "2"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('2')
   @ 7.4,  11 BUTTON oBtn[15] PROMPT "3"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('3')
   @ 7.4,16.5 BUTTON oBtn[16] PROMPT "/"      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('/')

   @ 9.2,   0 BUTTON oBtn[17] PROMPT "0"      SIZE  63,30 OF oDlgCalc ACTION Tecla_Func('0')
   @ 9.2,  11 BUTTON oBtn[18] PROMPT ","      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func(',')
   @ 9.2,16.5 BUTTON oBtn[19] PROMPT "="      SIZE  30,30 OF oDlgCalc ACTION Tecla_Func('=')

   ACTIVATE DIALOG oDlgCalc CENTERED ON INIT (oDlgCalc:lHelpIcon := .F. )

RETURN
****************************************************************************************************
STATIC FUNCTION Tecla_Func(cTecla)
#define TECLADO  '0123456789,+-X'
STATIC cResult

   IF cTecla $ TECLADO
          cDisplay+=IF(cTecla=='X','*',IF(cTecla=',','.',cTecla))
          oSay[2]:Varput(cDisplay)
          oSay[2]:Refresh()

   ELSEIF cTecla = 'E'
          IF !Empty(cDisplay)
             cDisplay := Left(cDisplay,Len(cDisplay)-1)
             oSay[2]:Varput(cDisplay)
             oSay[2]:Refresh()
          ENDIF

   ELSEIF cTecla = '%'
          cDisplay+="/100"
          cSinal  := "%"
          oSay[1]:Varput(cSinal)
          oSay[1]:Refresh()
          cResult  :=  &cDisplay
          cDisplay := AllTrim(Str(cResult))
          oSay[2]:Varput(cDisplay)
          oSay[2]:Refresh()

   ELSEIF cTecla = 'C'
          cDisplay := ''
          oSay[2]:Varput(cDisplay)
          oSay[2]:Refresh()

   ELSEIF cTecla = '/'
          IF !Empty(cResult) .AND. ValType(cResult)='N'
             cDisplay := AllTrim(Str(cResult)) + '/'
          ELSE
             cDisplay += '/'
          ENDIF
          oSay[2]:Varput(cDisplay)
          oSay[2]:Refresh()

   ELSEIF cTecla='='
          cResult  :=  &cDisplay
          cDisplay := AllTrim(Str(cResult))
          oSay[2]:Varput(cDisplay)
          oSay[2]:Refresh()
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

