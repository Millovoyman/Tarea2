//Flores Mejía
// Ejercicio11
//Suma de los números pares comprendidos entre 10 y 50.

#include <stdio.h>

int main() 
{
    int suma = 0;
    int i;

    // Recorre los números del 10 al 50
    for (i = 10; i <= 50; i++) 
    {
        if (i % 2 == 0) 
        
         // Verifica si el número es par
        {
            suma += i;
        }
    }

    // Muestra la suma final
    printf("La suma de los números pares entre 10 y 50 es: %d\n", suma);

    return 0;
}
