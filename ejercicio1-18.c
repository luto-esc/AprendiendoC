/*Escriba un programa que elimine los blancos y los tabuladores
que estén al final de cada línea de en trada, y que borre completamente las líneas
en blanco.*/

#include <stdio.h>

#define MAXLINE 1000

int mygetline(char line[], int maxline);

int main(void)
{
    char line[MAXLINE];
    int len;

    while ((len = mygetline(line, MAXLINE)) > 0) {
      printf("salida limpia: %s", line);
    }

    return 0;
}

int mygetline(char s[], int lim)
{
  int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++){
      s[i] = c;
    }

    
    
    /* esto daria el arreglo algo asi s[19] = '\n', s[18] = ' ', s[17] = '\t'*/
    /* preguntamos si termino en tab o en espacio, la posicion real es i-1, ya que debido
       al bucle for siempre termina en \n o EOF */
    if (s[i-1] == '\t' || s[i-1] == ' '){
      /* establecemos el lugar de inicio*/
      i = i - 1;
      /* entramos en bucle de mientras sea tab o espacio, que reduzca uno al indice*/
      while (i > 0){
	if (s[i] != '\t' && s[i] != ' '){
	  i++;
	  s[i] = '\n';
	  i++;
	  s[i] = '\0';
	  return i;
	}
	i = i - 1;
      }
    }
    if (c == '\n') {
        s[i] = c;
        i++;

	s[i] = '\0';
    }
    return i;
}
