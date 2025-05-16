//Flores Mejía
//Ejercicio6
//

#include <stdio.h>

int main() {

    float sueldo, sueldo_aumentado;


    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);


    if (sueldo < 1000) {

        sueldo_aumentado = sueldo * 1.15;
    } else {

        sueldo_aumentado = sueldo * 1.12;
    }

    printf("El sueldo con aumento es: %.2f\n", sueldo_aumentado);

    return 0;
}
