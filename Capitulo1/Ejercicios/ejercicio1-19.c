/*  Escriba una función reverse(s) que invierta la cadena de caracteres s.
    Usela para escribir un programa que invierta su entrada, línea a línea. */

#include <stdio.h>

#define MAXLINE 1000 /* tamaño maximo de la linea de entrada */

int  mygetline(char line[], int maxline);

void mycopy(char to[], char from[]);

void myreverse(char line[], char to[]);

int main(void)
{
  int len; /* longitud actual de la linea*/
  int max; /* maxima longitud vista hasta el momento */
  char line[MAXLINE]; /* linea de entrada acutal */
  char rev[MAXLINE]; /* linea invertida */
  
  while ((len = mygetline(line, MAXLINE)) > 0){
    myreverse(line,rev);
    printf("linea invertida: %s",rev);
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

/* mycopy: copia 'from' en 'to'; supone que to es suficientemente grande */
/* las funciones con void significan que no devuelven ningun valor */
void mycopy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0'){
    i++;
  }
}

void myreverse(char s[], char re[])
{
  int i, aux;
  
  
  i = 0;
  while (s[i] != '\n'){
    i++;
  }
  
  aux = 0;
  while (i >= 0){
    re[aux] = s[i];
    aux++;
    i = i - 1;
  }
}
