/* escriba un programa para "doblar" lineas grandes dde entrada en dos
 o mas lineas mas cortas despues del ultimo caracter no blanco que ocurra antes
de la n-esima columna de entrada. Asegurese de que su programa se comporte
apropiadamente con las lineas muy largas, y de que no hay blancos o
tabuladores antes de la columna especifica */

#include <stdio.h>

#define LIM 10
#define IN 1
#define OUT 0

int mygetline(char line[], int maxline);

int main(void)
{
  int c;
  int i;
  char line[LIM];

  
}

int mygetline(char l[], int lim)
{
  int i;
  int c;
  int ult_esp;
  int aux;
  int est; /* estado de la linea */

  est = OUT;
  for (i=0; i < lim && c != '\n',i++){
    if (c = ' '){
      est = IN;
    }
    if (c != ' '){
      est = 
    }
    
  }
}
