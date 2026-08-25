/* Escriba un programa detab que reemplace tabuladores de la entrada con el número
   apropiado de blancos para espaciar hasta el siguiente paro de tabulación.
   Considere un conjunto fijo de paros de tabulación, digamos cada n columnas.
   ¿Debe ser n una variable o un parámetro simbólico? */

#include <stdio.h>

#define TABZISE 8

int main(void)
{
  int c, i;
  int tab;
  int esp;
  int col;

  tab = TABZISE;
  
  col = 0;
  while ((c = getchar()) != EOF){
    if (c != '\t' && c != '\n'){
      putchar(c);
      col++;
    }
    else if (c == '\t'){
      esp = tab - (col % tab);
      for (i=0; i < esp; i++){
	putchar(' ');
      }
      col = col + esp;
    }
    else if (c == '\n'){
      putchar(c);
      col = 0;
    }
  }
}
