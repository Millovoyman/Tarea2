//Flores Mejía
// Ejercicio15
//programa en C que lee un arreglo unidimensional de números enteros y determina cuántos de ellos son positivos, negativos o nulo.

#include <stdio.h>

int main() 
{
    int n;

    // Pedir al usuario el tamaño del arreglo
    printf("Ingrese el número de elementos del arreglo: ");
    scanf("%d", &n);

    int arreglo[n];
    int positivos = 0, negativos = 0, nulos = 0;

    // Leer los elementos del arreglo
    printf("Ingrese los %d elementos del arreglo:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arreglo[i]);

        // Clasificar cada número
        if (arreglo[i] > 0) 
        {
            positivos++;
        } 
              else if (arreglo[i]< 0)
        {
            negativos++;
        } 
            else
        {
            nulos++;
        }
    }

    // Mostrar los resultados
    printf("\nCantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);
    printf("Cantidad de números nulos (ceros): %d\n", nulos);

    return 0;
}
