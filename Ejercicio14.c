//Flores Mejía
//Ejercicio14
//Cuántas veces se encuentra un número dentro del arreglo.

#include <stdio.h>

int main() {

    int tamaño, numero_a_buscar, contador = 0;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamaño);

    int arreglo[tamaño];

    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < tamaño; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("Ingrese el número que desea buscar en el arreglo: ");
    scanf("%d", &numero_a_buscar);

    for (int i = 0; i < tamaño; i++) {
        if (arreglo[i] == numero_a_buscar) {
            contador++;
        }
    }

    printf("El número %d aparece %d veces en el arreglo.\n", numero_a_buscar, contador);

    return 0;
}
