/* escriba un programa para "doblar" lineas grandes dde entrada en dos
 o mas lineas mas cortas despues del ultimo caracter no blanco que ocurra antes
de la n-esima columna de entrada. Asegurese de que su programa se comporte
apropiadamente con las lineas muy largas, y de que no hay blancos o
tabuladores antes de la columna especifica */

#include <stdio.h>

#define LIM 10
#define IN 1
#define OUT 0


int main(void)
{
  int c;
  int i;
  int ini;
  char line[LIM];
  char sline[LIM];
  int estado; /* bandera para ver si esta en una palabra */
  int ult_esp; /* lugar del ultimo espacio */

  estado = OUT;
  i = 0;
  while ((c = getchar()) != EOF && c != '\n'){
    if (i == LIM){
      if (estado == IN){
	for (i=0; i < ult_esp; i++){
	  sline[i] = line[i]; /* grabo el arreglo hasta el ultimo espacio guardado */ 
	}
	printf("%d",sline); /* muestro el arreglo */
      }
      
    }
  }
  
}
