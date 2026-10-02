/* escriba un programa para "doblar" lineas grandes dde entrada en dos
 o mas lineas mas cortas despues del ultimo caracter no blanco que ocurra antes
de la n-esima columna de entrada. Asegurese de que su programa se comporte
apropiadamente con las lineas muy largas, y de que no hay blancos o
tabuladores antes de la columna especifica */

#include <stdio.h>

#define LIM 40 /* limite de linea de salida */
#define IN 1
#define OUT 0

void imprimir_linea(char l[]);

int obt_tamaño_linea(char l[]);

int main(void)
{
  int c;
  int i,j;
  char line[500]; /* linea de entrada */
  char sline[LIM]; /* linea de salida */
  int len; /* tamaño de la linea */
  int estado; /* bandera para ver si esta en una palabra */
  int ult_esp; /* lugar del ultimo espacio en blanco */

  
  
}

/* Procedimiento que recibe una linea y la imprime por pantalla
   el caracter final tiene que ser '\0' */
void imprimir_linea(char l[])
{
  int i;
  
  i=0;
  while (l[i] != '\0'){
    printf(l[i]);
    i++;
  }   
}

/* Funcion que recibe una linea y devuelve el tamaño de esta
   el caracter final tiene que ser '\0'*/
int obtener_tamaño_linea(char l[])
{
  int i;
  
  i=0;
  while (l[i] != '\0'){
    i++;
  }
  return i;
}
