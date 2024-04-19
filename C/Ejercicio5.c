#include <stdio.h>

double calcularTotal(double precio){
    double iva = 0.15; 
    double descuento = 0.05;
    double total;

total = precio + (precio * iva);
if (precio > 2500) {
    total = total - (total * descuento);
}
return total;
}

int main () {
    double precio;
    printf("Introduce el precio del auto: ");
    scanf("%lf", &precio);

    double total = calcularTotal(precio);
    printf("El total a pagar es U$ %.2f\n", total);

    return 0;
}