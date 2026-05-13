/*En un negocio de productos electrodomésticos aplican un descuento del 8% a todos 
aquellos clientes cuya compra es superior a 2,500. Dado como dato el monto de la 
compra del cliente, calcule lo que el cliente debe pagar. Hacer el diagrama de flujo correspondiente.*/
#include <stdio.h>
float p, d;

void main () {
  printf ("Cual fue el valor de la compra: \n");
  scanf ("%f", &p);
  if (p > 2500)
    p=(p*0.92);
  printf ("Tu precio es de: %f \n", p);
}
