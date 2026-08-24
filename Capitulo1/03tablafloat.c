#include <stdio.h>

/*Version tabla con Reales o decimales*/

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower
	/*—el int se convierte a float antes de efectuarse la operación.*/
	while (fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
		/*Si un operador aritmético tiene operandos enteros, se ejecuta una operación
		entera. Si un operador numérico tiene un operando de punto flotante y otro entero
		este último será convertido a punto flotante antes de hacer la operación*/

		/*el 3.0 indica que se escribira un numero de punto flotante por lo menos
		con 3 caracteres de ancho sin punto decimal y sin digitos fraccionarios
		el 6.1 indica que se escribira un numero de punto flotante de 6 caracteres
		con 1 digito despues del punto decimal

		%6f escribe como punto flotante, por lo menos con 6 caracteres de amplitud
		%.2f escribe como punto flotante, con 2 caracteres después del punto decimal*/
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}