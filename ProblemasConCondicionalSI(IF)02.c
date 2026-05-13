/*Dado como dato el sueldo de un trabajador, considere un aumento 
del 15% si el sueldo es inferior a 1,000 y de un 12% en caso contrario. 
Imprimir el sueldo con el aumento incorporado. Hacer el diagrama de 
flujo correspondiente.*/
#include <stdio.h>
float s, a;

void main (){
  printf ("Cual es el sueldo del trabajador: \n");
  scanf ("%f", &s);
  if (s<1000)
    a=(s*0.15);
  else 
    a=(s*0.12);
  s=s+a;
  printf ("El sueldo considerando el aumento es de: %f \n", s);
}
