/*Escriba un programa que copie su entrada a la salida, reemplazando por cada tabulacion por \t
 cada diagonal invertida por \\. Esto hace que las tabulaciones y los espacios sean visibles
sin confuciones*/

#include <stdio.h>

int main(void)
{
  int c;

  while ((c = getchar()) != EOF){
    if (c == '\t'){
      putchar('\t');
    }
    else{
      putchar(c);
    }
    if (c == '\\'){
      putchar('\\');
    }
    else{
      putchar(c);
    }
  }
  return 0;
}
