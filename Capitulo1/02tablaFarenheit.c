#include <stdio.h>
/*
El siguiente program a utiliza la fórm ula °C = (5/9) (°E -3 2 ) para imprimir la siguiente
tabla de temperaturas Fahrenheit y sus equivalentes centígrados o Celsius
tabla Fahrenheit-Celsius
para fahr = 0,20,...,300*/

int main(void)
{
	/*Siempre se debe declarar las variables antes de su uso*/
	/*tambien C tiene varias formas de declarar
	char - caracter -un solo byte
	short - entero corto
	long - entero largo
	double - punto flotante de doble presicion*/

	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /*limite inferior de la tabla de temperaturas*/
	upper = 300; /*limite superior*/
	step = 20; /*tamaño del incremento*/

	fahr = lower;

	while (fahr <= upper){
		celsius = 5 * (fahr - 32) / 9;
		/*printf es una funcion de formato general
		primer argumento %d -> nos especifica un argumento entero
		\t -> hace que los valores esteen escritos con una tabulacion entre ellos
		cada instruccion '%' esta relacionada con el primer, segundo, tercer... argumento
		pasado a la funcion*/
		printf("%d\t%d\n", fahr,celsius);
		
		/*aumentamos a %d una amplitud para justificar hacia su derecha, los numeros amplitud de 3*/
		printf("%3d %6d\n", fahr,celsius);
		fahr = fahr + step;
	}
	/*Se puede escribir una funcion main sin return, pero se recomeinda que se lo ponga*/
	return 0;
}

/*
Pseudocodigo
AMBIENTE
	fahr,celsius,liminf,limsup,increm: entero
PROCESO
	liminf := 0
	limsup := 300
	increm := 20
	fahr := liminf
	Mientras (fahr <= limsup) Hacer
		celsius = 5 * (fahr - 32) DIV 9
		printf(fahr, celsius)
		fahr = fahr + increm
	Fin_Mientras	
*/
