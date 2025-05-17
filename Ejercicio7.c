//Flores Mejía
// Ejercicio7
//Descuento de tiket de ferrocarril 

#include <stdio.h>

int main() 
{
    float distanciaIda, distanciaTotal, precioTotal, precioFinal;
    int diasEstancia;
    const float PRECIO_POR_KM = 0.23;
    const float DESCUENTO = 0.30;

    // Solicita los datos al usuario
    printf("Ingrese la distancia de ida en km: ");
    scanf("%f", &distanciaIda);

    printf("Ingrese el número de días de estancia: ");
    scanf("%d", &diasEstancia);

    // Calcula la distancia total (ida + vuelta)
    distanciaTotal = distanciaIda * 2;

    // Calcula el precio total sin descuento
    precioTotal = distanciaTotal * PRECIO_POR_KM;

    // Verifica si aplica descuento
    if (diasEstancia > 7 && distanciaTotal > 800) 
    {
        precioFinal = precioTotal * (1 - DESCUENTO);
        printf("\nAplica descuento del 30%%.\n");
    } 
        else 
    {
        precioFinal = precioTotal;
        printf("\nNo aplica descuento.\n");
    }

    // Muestra el precio final
    printf("Precio final del ticket: $%.2f\n", precioFinal);

    return 0;
}
