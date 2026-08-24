/*el siguiente programa cuenta los caracteres de la entrada*/

#include <stdio.h>

int main(void)
{
  /*
   long son por lo menos de 32birs y int es de 16 bits, en algunas maquinas son lo mismo
   */
  long nc;

  nc = 0;

  while (getchar() != EOF){
    /*la proposicion ++nc; presenta un nuevo operador ++, que significa
    incrementa en uno
    para disminuir en uno se puede utilizar el --, --nc
    ambos operadores pueden usarse atras de la varibale o adelante*/

    ++nc;

    /*
      la especificacion de conversion %ld indica a printf que el argumento
      correspondiente es un entero long
     */
    printf("a%ld\n", nc);
  }
}
