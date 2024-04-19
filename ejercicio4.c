/*Cree una función para calcular la raíz cuadra de un numero entre 80 y 200*/
#include <stdio.h>
#include <math.h>

// Función para calcular la raíz cuadrada
float calcularRaizCuadrada(int numero) {
    if (numero < 80 || numero > 200) {
        printf("El número debe estar entre 80 y 200.\n");
        return -1;
    }
    return sqrt(numero);
}

int main(int argc, char const *argv[])
{
     int numero;

    printf("Introduce un número entre 80 y 200: ");
    scanf("%d", &numero);

    float raiz = calcularRaizCuadrada(numero);

    if (raiz != -1) {
        printf("La raíz cuadrada de %d es: %.2lf\n", numero, raiz);
    }
    return 0;
}

   
    

