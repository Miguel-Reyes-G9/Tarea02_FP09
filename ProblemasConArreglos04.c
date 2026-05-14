//Construir un diagrama de flujo para almacenar en un arreglo unidimensional los 100 primeros números pares. Imprimir al final el arreglo.
#include <stdio.h>
int vect[100];
int cont;

void main () {
  for (cont=0; cont<100; cont++) 
    vect[cont]=(2*cont);
  printf ("Arreglo de 100 numeros pares: \n");
  for (cont=0; cont<100; cont++) // Se cuenta el cero como primer numero par, pero si se quiere iniciar en 2, solo hay que cambiar la inicializacion de cont.
    printf ("%d, ", vect[cont]);
}
