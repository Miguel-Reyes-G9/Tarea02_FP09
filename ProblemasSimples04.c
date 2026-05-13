/* Una persona invierte en un banco una determinada cantidad de dinero y
a una cierta tasa de inter es mensual. Construya un diagrama de flujo que
permita obtener el monto de dinero que obtendra al analizar el mes. */
#include <stdio.h>
float d, p;

void main () {
  printf ("Dame la cantidad de dinero invertida en el banco: \n");
  scanf ("%f", &d);
  printf ("Dame tu porcentaje de tasa de interes: \n");
  scanf ("%f", &p);
  p=d*(p/100);
  d=p+d;
  printf ("Tu monto de dinero en el mes es de: %f \n", d);
}
