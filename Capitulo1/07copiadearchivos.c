/*el programa se podria escribir de modo mas consiso por programadores mas experimentados
 una asignacion puede aparecer como parte de una expresion mas larga*/

#include <stdio.h>

int main(void)
{
  int c;
  /*el while obtiene un caracter, lo asigna a c y entonces hace la prueba*/
  while ((c = getchar()) != EOF){
    putchar(c);
  }
}
