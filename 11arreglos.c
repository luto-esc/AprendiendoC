#include <stdio.h>

/* cuenta de digitos, espacios blancos y otros */

int main(void)
{
  int c, i, nwhite, nother;

  /*
    declara ndigit como un arreglo de 10, los subindices de arreglos
    comienzan en 0, por lo que los elementos seran de
    ndigit[0], ndigit[1], ..., ndigit[9].
    un subindice puede ser cualquier expresion entera
  */
  int ndigit[10];

  nwhile = nother = 0;

  for (i = 0; i < 10; i++){
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF){
    if (c >= '0' && c <= '9'){
      ++ndigit[c-'0'];
    }
    else if (c == ' '|| c == '\n' || c == '\t'){
      nwhite++;
    }
    else{
      nother++;
    }
  }
  printf("digitos =");
  for (i =0; i < 10; i++){
    printf("%d", ndigit[i]);
  }
  printf(", espacios en blancos = %d, otros = %d\n", nwhile, nother);
}
