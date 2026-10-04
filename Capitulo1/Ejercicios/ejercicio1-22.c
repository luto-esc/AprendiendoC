/* escriba un programa para "doblar" lineas grandes dde entrada en dos
 o mas lineas mas cortas despues del ultimo caracter no blanco que ocurra antes
de la n-esima columna de entrada. Asegurese de que su programa se comporte
apropiadamente con las lineas muy largas, y de que no hay blancos o
tabuladores antes de la columna especifica */

#include <stdio.h>

#define LIMITE 500 /* limite de la linea de entrada */
#define LIM 40 /* limite de linea de salida */
#define IN 1
#define OUT 0

void imprimir_linea(char l[]);

int obt_tamano_linea(char l[]);

void copiar_linea(char l[], char sl[], int inicio);


int main(void)
{
  int c;
  int i,j,x;
  char line[LIMITE]; /* linea de entrada */
  char sline[LIM]; /* linea de salida */
  int len; /* tamaño de la linea */
  int estado; /* bandera para ver si esta en una palabra */
  int ult_esp; /* lugar del ultimo espacio en blanco */
  int col; /* contador de columna */
  
  /* cargamos el arreglo con la linea de entrada */
  for (i=0; i<LIMITE-1 && (c = getchar()) != EOF && c != '\n'; i++){
    line[i] = c;
  }
  i++;
  line[i] = '\0';
  
  len = obt_tamano_linea(line);

  i=0;
  while (i < len){
    if (col = LIM){ /* tenemos que grabar en sline */
      if (estado = IN){ /* tenemos que grabar hasta el ultimo espacio en blanco */
	j=0;
	for (x=col - i; j < col - ult_esp - 1;j++){
	  sline[j] = line[x];
	  x++;
	}
	j++;
	sline[j] = '\0';
	imprimir_linea(sline);
	printf("\n");
	col=0;
      }
      else if (estado = OUT){ /* se graba hasta el lugar de i */
	j=0;
	for (x=col - i; j < col - 1; j++){
	  sline[j] = line[x];
	  x++;
	}
	j++;
	sline[j] = '\0';
	imprimir_linea(sline);
	printf("\n");
	col=0;
      }
    }
    else if (line[i] = ' '){
      estado = IN;
    }
    else if (line[i] != ' '){
      estado = OUT;
    }
    col++;
    i++;
  }
  
  
}

/* procedimiento que recibe una linea y la imprime por pantalla
   el caracter final tiene que ser '\0' */
void imprimir_linea(char l[])
{
  int i;
  
  i=0;
  while (l[i] != '\0'){
    printf("%c",l[i]);
    i++;
  }   
}

/* funcion que recibe una linea y devuelve el tamaño de esta
   el caracter final tiene que ser '\0'*/
int obt_tamano_linea(char l[])
{
  int i;
  
  i=0;
  while (l[i] != '\0'){
    i++;
  }
  return i;
}

/* procedimiento que recibe linea de llega y linea a donde se copia
   tambien recibe de donde inicia segun el indice de la linea de llegada */
void copiar_linea (l[], ls[], int indice, int ultimo_espacio, int columna)
{
  int i;
  int inicio;
  int final;
  
  
  inicio = indice - columna;
  final = final - columna;
  
  i=0;
  while (i < final - 1){
    sline[i] = line[inicio];
    i++;
    inicio++;
  }
}

