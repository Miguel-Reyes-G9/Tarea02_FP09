//Construya un diagrama de flujo que lea 100 números y cuente cuántos de ellos son positivos, negativos o nulos.
#include <stdio.h>
int n, i, po, ce, ne;

void main (){
i=1;
po=0, ne=0, ce=0;
  do {
    printf ("Dame un numero: \n");
    scanf ("%d", &n);
    if (n != 0) {
      if (n>0)
        ++po;
      else 
        ++ne;}
    else 
      ++ce;
  ++i;
  } while (i<=100);
printf ("De los 100 valores dados: \n");
printf (" %d son positivos \n", po);
printf (" %d son negativos \n", ne);
printf (" %d son ceros \n", ce);
}
