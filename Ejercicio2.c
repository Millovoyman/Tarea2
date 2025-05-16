//Flores Mejía
//Ejercicio 2
//Dado el radio de un cırculo, calcule e imprima el área y la circunferencia.
#include <stdio.h>
#include <math.h>

int main() {
    
    float radio, area, circunferencia;

    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    // Calcular el área
    area = M_PI * radio * radio;

    // Calcular la circunferencia
    circunferencia = 2 * M_PI * radio;

    printf("El área del círculo es: %.2f\n", area);
    printf("La circunferencia del círculo es: %.2f\n", circunferencia);

    return 0;
}
