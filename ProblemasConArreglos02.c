/*Construya un programa tal que, dado como entrada un arreglo unidimensional de enteros 
y un número entero, determine cuántas veces se encuentra el número dentro del arreglo.*/
#include <stdio.h>
int cont, i, n, g;
char c;
int vect[1000000];

void main () {
  i=0;
  do {
  printf ("Dame un valor entero que desees colocar en el arreglo: \n");
  scanf ("%d", &n);
  vect[i]=n;
  printf ("Deseas colocar otro valor en el arreglo? S/N \n");
  scanf (" %c", &c);
  ++i;
  } while (c=='S' || c=='s');
  printf ("Dame el numero que deseas que busquemos en el arreglo: \n");
  scanf ("%d", &n);
  for (cont=0; cont<=i; cont++) {
    if (vect[cont] == n)
      ++g;}
  printf ("El valor %d aparecio %d veces. \n", n, g);
}
