/*Escriba un diagrama de flujo tal que dado como datos dos numeros y
calcular la suma, resta y multiplicacion de dichos numeros.*/
#include <stdio.h>
int a, b, c;

int main (){
  printf ("Dame tu primer valor: \n");
  scanf ("%d", &a);
  printf ("Dame tu segundo valor: \n");
  scanf ("%d", &b);
  c = b + a;
  printf ("La suma de tus dos valores es: %d \n", c);
  c = b - a;
  printf ("La resta de tus dos valores es: %d \n", c);
  c = b * a;
  printf ("La multiplicacion de tus dos valores es: %d \n", c);
return 0;
}
  
