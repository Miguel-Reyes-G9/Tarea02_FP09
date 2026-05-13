/*Construir un diagrama de flujo que pueda determinar, dados dos números enteros, si un número es divisor del otro.*/
#include <stdio.h>
int a, b;

void main () {
  printf ("Dame tu primer numero: \n");
  scanf ("%d", &a);
  printf ("Dame tu segundo numero: \n");
  scanf ("%d", &b);
  
  if (a%b==0 || b%a==0) {
  if (a%b==0) 
    printf ("El valor %d es un divisor de %d \n", b, a);
  if (b%a==0) 
    printf ("El valor %d es un divisor de %d \n", a, b);}
  else 
    printf ("De los valores dados, ninguno es divisor del otro \n");
} 
