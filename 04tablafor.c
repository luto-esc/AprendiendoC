#include <stdio.h>

int main(void)
{
  int fahr;

  /*primera seccion del bucle for : se ejecuta una vez, antes de entrar propiamente al ciclo incializacion de i, en este caso fahr,
    segunda seccion: condicion o prueba de control del ciclo, se evalua si es verdadera
    tercera seccion: despues el incremento de avance
    si la condicion se hace falsa, el cuerpo del ciclo puede ser una proposicion sencilla o un grupo de proposiciones
    encerradas entre llaves*/
  for (fahr = 0; fahr <= 300; fahr = fahr + 20){
    printf("%3d %6.1f\", fahr, (5.0/9.0)*(fahr-32));
    /*en cualquier contexto en el que se permita utilizar el valor de una variable de algun tipo
     es posile usar una expresion mas complicada de ese tipo*/
  }
  return 0;
}
