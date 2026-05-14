// Escribir un diagrama de flujo tal que, dado como entrada un arreglo unidimensional de enteros, obtenga como resultado la suma de los mismos.
#include <stdio.h>
int i, n, cont;
char c;
int vect[100000000];

void main () {
  i=0;
  do {
    printf ("Dame el valor que quieras agregar al arreglo: \n");
    scanf ("%d", &n);
    vect[i]=n;
    ++i;
    printf ("Desas agregar otro numero ? S/N \n");
    scanf (" %c", &c);
    } while (c=='S' || c=='s');
  n=0;
  for (cont=0; cont<=i; cont++)
    n=n+vect[cont];
  printf ("La suma de los valores del arreglo es de: %d \n", n);
}
