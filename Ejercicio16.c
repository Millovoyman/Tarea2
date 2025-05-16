//Flores Mejía
//Ejercicio16
//Arreglo con los primeros 100 números pares

#include <stdio.h>

int main() {

    int numeros_pares[100];
    int numero_actual = 2;
    int i;


    for (i = 0; i < 100; i++) {
        numeros_pares[i] = numero_actual;
        numero_actual += 2;
    }


    printf("Los 100 primeros números pares son:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", numeros_pares[i]);
    }
    printf("\n");

    return 0;
}
