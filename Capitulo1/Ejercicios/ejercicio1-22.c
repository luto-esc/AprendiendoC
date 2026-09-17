/* escriba un programa para "doblar" lineas grandes dde entrada en dos
 o mas lineas mas cortas despues del ultimo caracter no blanco que ocurra antes
de la n-esima columna de entrada. Asegurese de que su programa se comporte
apropiadamente con las lineas muy largas, y de que no hay blancos o
tabuladores antes de la columna especifica */

#include <stdio.h>

#define LIMIN
#define LIM 40


int main(void)
{
  int LIMITE;
  int c;
  int i,j;
  char line[4000];
  char sline[LIM];
  int len; /* tamaño de la linea */
  int estado; /* bandera para ver si esta en una palabra */
  int ult_esp; /* lugar del ultimo espacio */

  /* cargamos la entrada en al arreglo general */
  for (i=0; i < 4000 && (c = getchar()) != EOF && c != '\n';i++){
    line[i] = c;
  }

  /* tomamos el tamaño de la linea de entrada */
  len = 0;
  while (line[len] != '\n'){
    len++;
  }

  /* tratamos el arreglo */
  i = 0;
  j = 0;
  LIMITE = 40;
  while (i < len){
    if (i == LIMITE || line[i] == '\n'){
      if (line[i] == ' '){
	printf("%s",sline);
	putchar('\n');
      }
      else if (line[i] != ' '){
	sline[ult_esp] = '\n';
	printf("%s",sline);
	j = 0;
	sline[j] = line[i];
      }
      LIMITE = LIMITE * 2;
    }
    else{
      if (c == ' '){
	ult_esp = i;
      }
      sline[j] = line[i];
    }
    
    i++;
    j++;
  }
}
