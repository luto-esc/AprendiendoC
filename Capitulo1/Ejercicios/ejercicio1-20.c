/* Escriba un programa detab que reemplace tabuladores de la entrada con el número
   apropiado de blancos para espaciar hasta el siguiente paro de tabulación.
   Considere un conjunto fijo de paros de tabulación, digamos cada n columnas.
   ¿Debe ser n una variable o un parámetro simbólico? */

#include <stdio.h>

#define TABZISE 8
#define MAXLINE 1000

int mydetab(char line[], int max, int tab);

int main(void)
{

  int c, i;
  int len; /* longitud de la linea */

  char line[MAXLINE]; /* linea de entrada */

  len = 1;
  while ((len = mydetab(line, MAXLINE, TABZISE)) > 0){
    printf("%s",line);
  }
 
  
}

/* recibe una caracter y un limite, y devuelve su longitud*/
int mydetab(char s[], int lim, int tab)
{
  int i,c,col,esp,detab;

  detab = tab;
  for (i=0; i < lim-1 && (c = getchar()) != EOF; i++){
    if (c == '\t'){
      col = i;
      esp = col - tab;
      while (esp >= 0){
	s[i] = ' ';
	esp = esp - 1;
	i++;
      }
      detab = detab + tab;
    }
    else if (c != '\t'){
      s[i] = c;
    }
  }

  if (c == '\n'){
    s[i] = c;
    i++;
  }

  s[i] = '\0';

  return i;
}
