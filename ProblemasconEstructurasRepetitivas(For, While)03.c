//Hacer un diagrama de flujo que calcule la suma de los números pares comprendidos entre el 10 y 50.
#include <stdio.h>
int i, p;

void main () {
  i=10, p=0;
  while (i<=50) {
    if (i%2==0)
      p=p+i;
    ++i;
  }
  printf ("La suma de los valores pares entre 10 y 50 es: %d \n",p);
}
