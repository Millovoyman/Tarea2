//Flores Mejía
//Ejercicio4
//Tasa de interés mensual.

#include <stdio.h>

int main() {

    float inversion_inicial, tasa_interes_mensual, monto_final;

    printf("Ingrese la inversión inicial: ");
    scanf("%f", &inversion_inicial);

    printf("Ingrese la tasa de interés mensual (como porcentaje): ");
    scanf("%f", &tasa_interes_mensual);

    tasa_interes_mensual = tasa_interes_mensual / 100;
    monto_final = inversion_inicial + (inversion_inicial * tasa_interes_mensual);

    printf("El monto final al final del mes es: %.2f\n", monto_final);

    return 0;
}
