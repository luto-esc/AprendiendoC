/*
Histograma con la orientacion vertical
 */


#include <stdio.h>

#define IN 0 /* definimos estados para el caracter */
#define OUT 1 /* definimos estados para el caracter */

int main(void)
{
  int c, nlet, nest, estado, i, y;
  int nletr[11];
  
  
  /* inicializa el array, esto hace que el array sea 1(0),2(0),...,10(0)
     el array guarda contadores */
  for (i = 1; i < 11; i++){
    nletr[i] = 0;
  }

  estado = OUT;
  nlet = 0;
  
  while ((c = getchar()) != EOF){
    if (c == ' ' || c == '\n'){
      estado = OUT;

      if (nlet >= 0 && nlet <= 10){
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

  for (i = 1; i < 11; i++){
    y = nletr[i];
    
    while (y > 0){
      printf("*");
      y = y - 1;
    }
    printf("\n");
  }

}
