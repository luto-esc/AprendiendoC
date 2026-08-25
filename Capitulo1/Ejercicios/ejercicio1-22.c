/* escriba un programa para "doblar" lineas grandes dde entrada en dos
 o mas lineas mas cortas despues del ultimo caracter no blanco que ocurra antes
de la n-esima columna de entrada. Asegurese de que su programa se comporte
apropiadamente con las lineas muy largas, y de que no hay blancos o
tabuladores antes de la columna especifica */

#include <stdio.h>

#define LIM 6

int main(void)
{
  int c; /* caracter leido */
  int esp; /* lugar del ultimo espacio guardado */
  int ind; /* indice del arreglo */
  int i; /* recorre el arreglo */

  char line[LIM]; /* arreglo del 0...5*/

  ind = 0;
  esp = -1;
  while ((c = getchar()) != EOF){
    /*si el usuario puso un '\n' se imprime lo que sea y se reinicia todo */
    if (c == '\n'){
      for (i=0; i<ind;i++){
	putchar(line[i]);
      }
      putchar('\n');
      ind = 0;
      esp = -1;
    }
    else{ /*cualquier otro caracter se guarda en line */
      line[ind] = c;
      if (c == ' '){
	esp = ind /*guardamos el lugar del ultimo espacio en blanco*/
      }
      ind++;
      if (ind == LIM){ /*cuando el ind sea igual al limite */
	/*tendremos que imprimir por pantalla hasta el ultimo espacio*/
	for (i=0; i < esp; i++){
	  putchar(line[i]);
	}
	putchar('\n');
	/*ahora hay que mover lo que sobra al inicio del arreglo*/
      }
    }
  }
 
  return 0;
}
