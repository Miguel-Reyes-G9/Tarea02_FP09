/*Escribir un diagrama de flujo tal que, dado como entrada un arreglo unidimensional de 
enteros, determine cuántos de ellos son positivos, negativos o nulos.*/
#include <stdio.h>
int vect[10000];
int i, cont, ce, po, ne, n;
char c;

void main () {
  i=0, ce=0, ne=0, po=0;
  do {
    printf ("Dame el valor entero que desees colocar en el arreglo: \n");
    scanf ("%d", &n);
    vect[i]=n;
    ++i;
    printf ("Deseas colocar otro valor en el arreglo? S/N \n");
    scanf (" %c", &c);
  } while (c== 'S' || c=='s');
  for (cont=0; cont<i; cont++) {
    if (vect[cont]==0) 
      ++ce;
    else {
      if (vect[cont]<0)
        ++ne;
      else 
        ++po; 
    }
  }
printf ("De tu arreglo, hay %d valores que son ceros \n", ce);
printf ("De tu arreglo, hay %d valores que son positivos \n", po);
printf ("De tu arreglo, hay %d valores que son negativos \n", ne);
}
