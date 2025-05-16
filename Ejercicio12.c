//Flores Mejía
//Ejercicio12
//Producto de los N primeros números naturales.

#include <stdio.h>

int main() {

    int n;
    long long producto = 1;

    printf("Ingrese el valor de N (número de números naturales a multiplicar): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        producto *= i;
    }

    printf("El producto de los primeros %d números naturales es: %lld\n", n, producto);

    return 0;
}
