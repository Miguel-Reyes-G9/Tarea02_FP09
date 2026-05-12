/* Construir un diagrama de flujo tal que dado el radio de un circulo,
calcule e imprima el area y la circunferencia. */

#include <stdio.h>
#define PI 3.1416

int main() {
    float r, area, circunferencia;
    printf("Dame tu valor de radio:\n");
    scanf("%f", &r);
    area = PI * (r * r);
    printf("Tu area calculada es: %f\n", area);
    circunferencia = 2 * PI * r;
    printf("Tu circunferencia calculada es: %f\n", circunferencia);
    return 0;
}
