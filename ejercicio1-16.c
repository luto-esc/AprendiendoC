#include <stdio.h>

#define MAXLINE 1000
#define NUEVA 1
#define CONTINUACION 0

int mygetline(char line[], int maxline);
void mycopy(char to[], char from[]);

int main(void)
{
    char line[MAXLINE];      /* trozo que acaba de leer mygetline */
    char candidate[MAXLINE]; /* primer trozo de la línea lógica actual */
    char longest[MAXLINE];   /* línea más larga encontrada (lo que entra) */
    int len;                 /* longitud del trozo leído */
    int curlen = 0;          /* longitud acumulada de la línea lógica actual */
    int max = 0;             /* longitud de la línea más larga hasta ahora */
    int first_chunk;     /* traducido a primer pedazo, haciendo referencia a primer pedazo de linea? */

    first_chunk = NUEVA;
    curlen = 0;
    max = 0;
    while ((len = mygetline(line, MAXLINE)) > 0) {
      if (first_chunk) {  // si first_chunk es que es un nuevo trozo de  linea
	mycopy(candidate, line); // guardamos la linea
	first_chunk = CONTINUACION; // damos como continuacion si es, ya esta guardado la linea, no fue la primera
      }
      curlen += len; // guardamos en el acumulador
      
      if (line[len-1] == '\n') {   /* nos fijamos si la linea termino en \n, ya que la funcion la funcion guarda la linea \0 como marca de fin pero no \n si la linea ingresada por el usuario en verdad termino, en este condicional si termino */
	if (curlen > max) { // nos fijamos si curlen > max, que en la primera vez siempre sera 0
	  max = curlen; // lo establecemos como maximo
	  mycopy(longest, candidate); // guardamos la linea en la linea mas larga
	}
	curlen = 0;
	first_chunk = NUEVA; // establecemos como nueva para el trozo de la siguiente linean
      }
        /* si no termina en '\n', el buffer se llenó:
           el próximo trozo sigue siendo la MISMA línea lógica */
    }
    /* por si el archivo termina sin '\n' final */
    if (curlen > 0 && curlen > max) {
        max = curlen;
        mycopy(longest, candidate);
    }

    if (max > 0) {
        printf("longitud: %d\n", max);
        printf("%s", longest);
    }

    return 0;
}
/*getline: lee una linea/arreglo de caracteres  en s, regresa su longitud */
int mygetline(char s[], int lim)
{
  int c, i;
 
  /* si c != '\n' se corta el bucle */
  // h,o,l,a,\n,x,d
  for (i = 0; i < lim-1 && (c = getchar() != EOF && c != '\n'); i++){
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
void mycopy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0'){
    i++;
  }
}
