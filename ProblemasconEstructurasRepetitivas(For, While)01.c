// Haga un diagrama de flujo para obtener la tabla de multiplicar de un número entero N, comenzando desde el 1.
#include <stdio.h>
int cont, n, i;

void main (){
  printf ("Dame el numero que quieras su tabla de multiplicar \n");
  scanf ("%d", &n);
  printf ("Multiplicador | Producto \n");
  for (cont = 1; cont <= 10; cont++){
    i=(n*cont);
    printf ("%13d | %d \n", cont, i);
  }
}
