/* imprime linea de entrada mas larga */

#include <stdio.h>

#define MAXLINE 1000 /* tamaño maximo de la linea de entrada */
#define MIN 80

int  mygetline(char line[], int maxline);

int main(void)
{
  int len; /* longitud actual de la linea*/
  int max; /* maxima longitud vista hasta el momento */
  char line[MAXLINE]; /* linea de entrada acutal, se establece maxline por que es la longitud maxima de la linea, osea es un vector de maximo 1000 */
  char longest[MAXLINE]; /* la linea mas larga se guarda aca */
  
  max = 0;
  while ((len = mygetline(line, MAXLINE)) > 0){
    if (len > MIN){
      printf("%s", line);
    }
  }
  
  return 0;
}

/*getline: lee una linea/arreglo de caracteres  en s, regresa su longitud */
int mygetline(char s[], int lim)
{
  int c, i;
  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c!='\n'; i++){
    s[i] = c;
  }
  if (c == '\n'){
    s[i] = c;
    i++;
  }
  s[i] = '\0';

  
  return i;
}
