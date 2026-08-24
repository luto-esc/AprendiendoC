#include <stdio.h>

/*
  Es mala practica poner 'numeros magicos' como 300 y 20
  en un programa, una manera de tratar numeros magicos es darles
  nombres significativos
  #define difine un nombre o constante simbolico como una cadena de caracteres
*/
#define LOWER 0 /*limite inferior de la tabla*/
#define UPPER 300 /*limite superior*/
#define STEP 20 /*tamaño del incremento*/

/* imprime la talba Fahrenheit-Celsius */

int main (void)
{
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }
}
