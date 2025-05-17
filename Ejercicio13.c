//Flores Mejía
// Ejercicio13
//De entrada tenemos un arreglo unidimensional de enteros,calcular la suma de sus elementos.

#include <stdio.h>

int main() 
{
    int n, i, suma = 0;

    // Solicitar el tamaño del arreglo
    printf("Ingrese el número de elementos: ");
    scanf("%d", &n);

    int arreglo[n];  // Declarar el arreglo

    // Leer los elementos del arreglo
    printf("Ingrese los %d elementos:\n", n);
    for (i = 0; i < n; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Calcular la suma de los elementos
    for (i = 0; i < n; i++) 
    {
        suma += arreglo[i];
    }

    // Mostrar el resultado
    printf("La suma de los elementos es: %d\n", suma);

    return 0;
}
