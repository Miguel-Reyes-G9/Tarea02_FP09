/*Hacer un diagrama de flujo para calcular el precio de un ticket 
de ida y vuelta en ferrocarril, conociendo la distancia de ida y 
el tiempo de estancia. También se sabe que, si el número de días 
de estancia es mayor a 7 y la distancia total (ida y vuelta) a 
recorrer es mayor a 800 km, el ticket tiene un descuento del 30%. 
El precio por kilómetro es de 0.23.*/
#include <stdio.h>
float d, e, t;

void main (){
  printf ("Cual fue la distancia recorrida: \n");
  scanf ("%f", &d);
  d=(2*d);
  printf ("Cual fue tu tiempo de estancia: \n");
  scanf ("%f", &e);
  if (d>800 && e>7)
    t=0.7;
  else 
    t=1;
  d=(d*t);
  printf ("Tu precio fue de: %f \n", d);
}
