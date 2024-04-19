/*✓ Leer dos números e imprima cual es mayor y el menor de los números ingresados.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    printf("Dime el primer numero: ");
    scanf("%i", &num1);
    printf("Dime el segundo numero: ");
    scanf("%i", &num2);

    if (num1 > num2)
    {
        printf("%i es mayor que %i\n", num1, num2);
        printf("%i es menor que %i\n", num2, num1);
    }
    else if (num2 > num1)
    {
        printf("%i es mayor que %i\n", num2, num1);
        printf("%i es menor que %i\n", num1, num2);
    }
    else
    {
        printf("Ambos numeros son iguales\n");
    }

    return 0;
}