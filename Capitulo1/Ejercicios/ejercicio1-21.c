/* escriba un programa entab que reemplace cadenas de blancos por el minimo
   numero de tabuladores y blancos para obtener el mismo espaciado. Consid-
   dere los paros de tabulacion de igual manera que para detab. Cuando un tabu-
   lador o un simple espacio en blanco fuese suficiente para alcanzar un paro
   de tabulaion, ¿ a cual se le debe dar preferencia ?*/

#include <stdio.h>

#define TABZISE 8
#define IN 1
#define OUT 0

int main(void)
{
  int c,i;
  int col;
  int esp;
  int bln;
  int tab;

  tab = TABZISE;
  bln = OUT;
  while ((c = getchar(c)) != EOF){
    if (c == ' '){
      bln = IN;
      
    }
    else if (c != ' '){
      bln
    }
  }


}
