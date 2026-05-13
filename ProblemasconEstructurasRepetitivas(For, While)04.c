//Hacer un diagrama de flujo que calcule e imprima el producto de los N primeros números naturales.
#include <stdio.h>
int i, g, m;

void main (){
  printf ("Dame tu valor N: \n");
  scanf ("%d", &i);
  m=i;
  g=1;
    while (i>=1) {
      g=(g*i);
      --i;
    }
  printf ("El producto de los primeros numeros de %d es: %d \n", m, g);
}
