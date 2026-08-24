/*Cuenta las lineas, palabras y caracteres usando la deficion de que
 una palabra es cualquier secuencia de caracteres que no contiene
 espacios en blanco ni tabulaciones ni nueva linea. Esta es una
 version reducida del programa wc de UNIX*/

#include <stdio.h>

#define IN 1 /* en una palabra */
#define OUT 0 /* fuera de una palabra */

/* cuenta lineas, palabras y caracteres de entrada*/
int main(void)
{
  int c, nl, nw, nc, state;

  state = OUT;

  nl, nw, nc = 0;

  /*
    el operador || significa 'O' (OR)
    el operador && significa 'y' (AND)
    se evalua de izquierda a derecha
  */
  while ((c = getchar()) != EOF){
    nc++;
    if(c == '\n'){
      nl++;
    }
    if (c == ' '||c == '\n'||c == '\t'){
      state = OUT;
    }
    else if(state == OUT){
      state = IN;
      nw++;
    }
  }
  printf("%d %d  %d\n", nl, nw, nc);
  return 0;
}
