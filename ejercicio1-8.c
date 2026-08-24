/* escriba un programa que cuente espacios en blanco, tabuladores y nuevas lineas*/

#include <stdio.h>

int main(void)
{
  int c;
  long contbla, conttab, contnl;

  contbla = 0;
  conttab = 0;
  contnl = 0;
  while ((c = getchar()) != EOF){
    /*el ' ' es el espacio en blanco*/
    if (c == ' '){
      contbla++;
    }
    /*\t es la tabulacion*/
    if (c == '\t'){
      conttab++;
    }
    if (c == '\n'){
      contnl++;
    }
    
  }
  /*%ld es para mostrar las variables long, y \n es el salto de linea*/
  printf("contador blancos:%ld\ncontador tabuladores:%ld\ncontador nuevas lineas:%ld\n", contbla, conttab, contnl);
}
