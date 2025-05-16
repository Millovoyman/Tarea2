//Flores Mejía
//Ejercicio8
//un número divisor de otro

#include <stdio.h>

int main() {

    int numero1, numero2;

    printf("Ingrese el primer número entero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo número entero: ");
    scanf("%d", &numero2);


    if (numero2 != 0) {
        if (numero1 % numero2 == 0) {
            printf("%d es divisor de %d\n", numero2, numero1);
        } else if (numero2 % numero1 == 0) {
            printf("%d es divisor de %d\n", numero1, numero2);
        } else {
            printf("Ninguno de los números es divisor del otro.\n");
        }
    } else {
        printf("Error: No se puede dividir por cero.\n");
    }

    return 0;
}
