//Flores Mejía
// Ejercicio5
//Descuento del 8% si la compra del cliente es superior a $2,500.

#include <stdio.h>

int main() 
{
    float precio, totalCompra = 0.0, montoFinal;
    const float DESCUENTO = 0.08;

    printf("Ingrese el precio de cada producto (0 para finalizar):\n");

    int i = 1;
    while (1) 
    {
        printf("Producto %d: $", i);
        scanf("%f", &precio);

        if (precio == 0) 
        {
            break; // Termina si se ingresa 0
        }

        if (precio < 0) 
        {
            printf("Precio inválido. Intente de nuevo.\n");
            continue;
        }

        totalCompra += precio;
        i++;
    }

    // Aplica descuento si corresponde
    if (totalCompra > 2500) 
    {
        float descuentoAplicado = totalCompra * DESCUENTO;
        montoFinal = totalCompra - descuentoAplicado;
        printf("\nTotal sin descuento: $%.2f", totalCompra);
        printf("\nDescuento aplicado (8%%): $%.2f", descuentoAplicado);
    } else 
    {
        montoFinal = totalCompra;
        printf("\nNo aplica descuento.");
    }

    // Muestra el total a pagar
    printf("\nMonto final a pagar: $%.2f\n", montoFinal);

    return 0;
}
