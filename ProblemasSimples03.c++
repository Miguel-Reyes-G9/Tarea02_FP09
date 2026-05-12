/*En una Casa de Cabio necesitan construir un programa que dado como
dato una cantidad expresada en d ́olares, convierta esa cantidad en pesos.
Construir el diagrama de ujo correspondiente. Tomar en cuenta que:
1dolar ↢ 11.96pesos.*/
#include <stdio.h>
#define D 11.96
float p;

int main (){
  printf ("Dame tu cantidad de dolares: \n");
  scanf ("%f", &p);
  p = p * D;
  printf ("Tu dinero en pesos es de: %f \n", p);
return 0;
}
