//Flores Mejía
// Ejercicio9
//Tabla de multiplicar de un número N, desde 1 hasta N.

#include <stdio.h>

int main() 
{
    int N, i;

    // Solicita al usuario el número para la tabla
    printf("Ingrese un número entero: ");
    scanf("%d", &N);

    // Imprime la tabla de multiplicar desde 1 hasta N
    printf("\nTabla de multiplicar del %d hasta %d:\n", N, N);
    
    for (i = 1; i <= N; i++) 
    
    {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
