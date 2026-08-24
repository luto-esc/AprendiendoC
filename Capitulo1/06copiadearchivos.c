/*
cada vez que se invoca getchar lee el siguiente ccaracter de entrada de una secuencia de texto
y devuelve como su valor, esto es despues de
c = getchar()
la variable c contiene el siguiente caracter de entrada
la funcion putchar escribe un caracter cada vez que se invoca:
putchar(c)
escribe el contenido de la variable entera c como un caracter, generalmente en la pantalla
las llamadas a putchar y a printf pueden estar alternadas la salida aparecera
en el orden en que se realicen las llamadas
a continuacion programa que copia la entrada en la salida
*/

#include <stdio.h>

int main(void)
{
  int c;

  c = getchar();

  /* EOF es un entero definido en <stdio.h> el valor numerico especifico no importa
   mientras que no sea el mismo que ningun valor tipo char, utilizando la constante
  simbolica, heos asegurado que nada en el programa depende del valor numerico especifico*/
  while (c != EOF){
    putchar(c);
    c = getchar();
  }
  return 0;
}
