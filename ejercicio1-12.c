/* Escriba un programa que que imprima su entrada una palabra por linea */

#include <stdio.h>

#define IN 0
#define OUT 1

int main(void)
{

  int c, state;
  state = IN;

  while ((c = getchar()) != EOF){
    if(c == ' '){
      putchar('\n');
      state = IN;
    }
    else if(state == IN){
      putchar(c);
    }
  }
}
