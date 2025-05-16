//Flores Mejía
//Ejercicio10
//Números positivos, negativos o núlos

#include <stdio.h>

int main() {

    int numero, positivos = 0, negativos = 0, nulos = 0;

    for (int i = 1; i <= 100; i++) {
        printf("Ingrese el número %d: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);
    printf("Cantidad de números nulos: %d\n", nulos);

    return 0;
}
