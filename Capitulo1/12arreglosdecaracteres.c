/* imprime linea de entrada mas larga */

#include <stdio.h>

#define MAXLINE 1000 /* tamaño maximo de la linea de entrada */

int  mygetline(char line[], int maxline);

void mycopy(char to[], char from[]);

int main(void)
{
  int len; /* longitud actual de la linea*/
  int max; /* maxima longitud vista hasta el momento */
  char line[MAXLINE]; /* linea de entrada acutal, se establece maxline por que es la longitud maxima de la linea, osea es un vector de maximo 1000 */
  char longest[MAXLINE]; /* la linea mas larga se guarda aca */
  
  max = 0;

  /* el bucle terminaria cuando se ingrese una EOF, si se ingresa
     una linea vacia len = 1*/
  
  while ((len = mygetline(line, MAXLINE)) > 0){
    if (len > max){
      max = len;
      mycopy(longest, line);
    }
  }
  /* si la longitud maxima encontrada es < 0, entonces imprime la linea mas larga*/
  if (max > 0){
    /* %s: imprime un arreglo o cadena de caracteres*/
    printf("%s",longest);
  }
  
  return 0;
}

/*getline: lee una linea/arreglo de caracteres  en s, regresa su longitud */

int mygetline(char s[], int lim)
{
  int c, i;
  /* se hace lim-1 por que se reserva un espacio para el '\0'*/
  /* esto se lee como mientras haya espacio en el arreglo, mientras
     no haya terminado la entrada y mientras el caracter no sea ENTER
     segui leyendo caracteres */
  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c!='\n'; i++){
    /* guarda el valor de c en el arreglo 1(*),
       luego se suma a i++, entonces pasa a ser 2(*) */
    s[i] = c;
  }
  /* en el caso de que el caracter haya sido enter = '\n', osea
     el ultimo caracter que se ingreso fue \n, por que la condicion
     del bucle es que el caracter sea != \n, c ya guardo el ultimo
     caracter como \n, entonces lo escribimos en arreglo
     ATENCION: si se envia una linea vacia, c = '\n', el contador se suma 1
     igual por lo tanto la longitud de la linea seria i, en el caso
     de que se envia EOF, ahi c no lee ningun caracter, osea i = 0*/
  if (c == '\n'){
    s[i] = c;
    /* sumamos para que al momento de agregar otro caracter este agrege al
       siguinte lugar del indice */
    i++;
  }
  /* en el ulimo se le agrega el '\0', como condicion de fin */
  s[i] = '\0';

  /* por ultimo retorna el valor de i, que vendria siendo el valor de la
     longitud del arreglo entero, contando '\n'*/
  return i;
}

/* mycopy: copia 'from' en 'to'; supone que to es suficientemente grande */
/* las funciones con void significan que no devuelven ningun valor */
void mycopy(char to[], char from[])
{
  int i;

  i = 0;
  /* minetras */
  while ((to[i] = from[i]) != '\0'){
    i++;
  }
}
