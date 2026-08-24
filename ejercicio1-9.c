/*escriba un programa que copie su entrada a salida, reemplazando cada cadena
 de uno o mas blancos por un solo blanco*/

#include <stdio.h>

int main(void)
{

  int c, espacio;


  espacio = 0;
  /*getchar() lo que hace es que toma el caracter que se envia por el teclado
    al caracter c le asignamos la funcion para que recibe el caracter enviado*/
  /*putchar(c) escribe en la pantalla el valor de la variable c, lo utilizaremos*/

  /*comienza el bucle mientras no se encuentre con EOF, osea el usuario no envie
    ctrl + d, en otras palaras que no se termine el bucle*/
  /*si por teclado se envia HOLA el codigo lo que hace es procesarlo car por car
   osea 'H','O','L''A', como una secuencia*/
  
  while ((c = getchar()) != EOF){
    /*en cada caracter de la sec, c tomara su */
    
    if (c == ' ')
    {
      if (espacio == 0)
      {
	putchar(c);
	espacio = 1;
      }
    }	
    else
    {
      putchar(c);
      espacio = 0;
    }
  }
}
