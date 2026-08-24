/*
Escriba un programa que imprima el histograma de las longitudes de
las palabras de su entrada. Es facil dibujar el histograma con las
barras horizontales, la horientacion vertical es un desafio mas
interesante
Histograma:
entrada: hola mundo en c
las palabras son hola (4), mundo(5), en(2), c(1)
salida:
1|*
2|*
3|
4|*
5|*
cada estrella representa una palabra de esa longitud
*/

#include <stdio.h>

#define IN 0 /* definimos estados para el caracter */
#define OUT 1 /* definimos estados para el caracter */

int main(void)
{
  int c, nlet, nest, estado, i, y, aux, nmay, ind;
  int nletr[10];
  
  
  /* inicializa el array, esto hace que el array sea 1(0),2(0),...,10(0)
     el array guarda contadores */
  for (i = 0; i < 10; i++){
    nletr[i] = 0;
  }

  estado = OUT;
  nlet = 1;
  
  while ((c = getchar()) != EOF){
    if (c == ' ' || c == '\n'){
      estado = OUT;

      if (nlet >= 0 && nlet <= 9){
	++nletr[nlet];
      }
      
      nlet = 0;
    }
    else{
      estado = IN;
    }
    
    if (estado == IN){
      nlet++;
    }
  }

  /* tomamos el numero mayor y lo guardamos en nmay*/
  nmay = 0;
  for (i = 0; i < 10; i++){
    y = nletr[i];
    if (y > nmay){
      nmay = y;
    }
  }

  /* bucle principal en el que tendremos en cuenta la altura maxima*/
  while (nmay > 0){
    i = 0;

    /* con este bucle recorremos el arreglo con la altura maxima*/
    while (i < 10){
      y = nletr[i];

      /* esto permite imprimir si el numero guardado es igual a la altura maxima*/
      if (y >= nmay){
	printf("*");
      }
      else{
	printf(" ");
      }
      /* se suma el i para avanzar al siguiente elemento del arreglo*/
      i = i + 1;
    }
    /* una vez se recorre todo el arreglo se baja el renglon*/
    printf("\n");
    /* ahora la altura maxima es una menos y se repite el bucle*/
    nmay = nmay - 1;
  }
  
}
