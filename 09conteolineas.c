/*el siguiente programa cuenta lineas de entrada. la biblioteca estandar asegura
 que una secuencia de texto de entrada parezca una secuencia de lineas, cada una termina por un caracter nueva linea \n
por lo tanto contar lineas es solamente contar caracteres nueva linea*/

#include <stdio.h>

int main(void)
{
  int c, nl;

  nl = 0;

  while ((c = getchar()) != EOF){

    /*un caracter escrito entre apostrofes representa un valor entero igual al valor numericco del caracter
     en el conjunto de caracteres de la maquina, esto se llama una constante de caracter, solo es otra forma de
    escribir un pequeño entero, osea que \n en el conjunto ASCII tiene un valor entero entonces por eso se puede comparar*/
    if (c == '\n')
      ++nl;
    printf("%\n", nl);
  }
}
