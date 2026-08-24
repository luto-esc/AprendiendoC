/* Escriba un programa detab que reemplace tabuladores de la entrada con el número
   apropiado de blancos para espaciar hasta el siguiente paro de tabulación.
   Considere un conjunto fijo de paros de tabulación, digamos cada n columnas.
   ¿Debe ser n una variable o un parámetro simbólico? */

#include <stdio.h>

#define TABZISE 8
#define MAXLINE 1000

int mygetline(char line[], int max);

int mydetab(char line[], char to[]);

int main(void)
{

  int c, i;
  int len; /* longitud de la linea */

  char line[MAXLINE]; /* linea de entrada */
  char linetab[MAXLINE]; /* linea tab */

  len = 1;
  while ((len = mygetline(line, MAXLINE)) > 0){
    
  }
 
  
}

/* recibe una caracter y un limite, y devuelve su longitud*/
int mygetline(char s[], int lim)
{
  int i,c;

  for (i=0, i < lim-1 && (c == getchar()) != EOF && c != '\n', i++){
    s[i] = c;
  }

  if (c == '\n'){
    s[i] = c;
    i++;
  }

  s[i] = '\0';

  return i;
}
