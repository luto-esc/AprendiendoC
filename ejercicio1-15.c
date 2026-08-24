/* programa tabla de conversion de temperatura de la seccion 1.2
   pero esta vez vamos a hacerlo una fucion */

/* hare una funcion que solo muestre la tabla a la hora que se la llama */

#include <stdio.h>

int tabla(){
  
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	/*—el int se convierte a float antes de efectuarse la operación.*/
	while (fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

}

int main(void)
{
  printf("a contuniuacion se mostrara la tabla de fahr a celsius\n");
  
  tabla();
}
