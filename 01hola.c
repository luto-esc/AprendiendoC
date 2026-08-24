#include <stdio.h> /*indica al compilador
que incluya informacion de la biblioteca estandar de
(entrada/salida)*/

/*
Antes en C se escribia asi

main()
{
	printf("hola, mundo\n");
}
*/

/*Ahora a la funcion principal hay que definirla
como la que se ve abajo, ya que eso le indica a la consola
que el programa finalizo sin errores*/

/*int: le dice qal sistema operativo que la funcion main
devolver un numero entero
void: indica que la funcion no recibbe parametros ni argumentos de entrada
reurn 0: envia un codigo de estado 0 al sistema operativo.  EN la terminal, 0
significa exito y cualquier numero distinto de cero indica que el programa fallo
(por ejemplo errores de memoria)*/
int main(void)
/*las proposiciones entre main estan encerradas entre llaves*/
{
	/* main llama la funcion de biblioteca printf para escribir la secuencia de cararteres
	\n representa el caracter nueva linea*/
	printf("hola,");
	printf("mundo");
	printf("\n");

	printf("hola, mundo");
	return 0;
}