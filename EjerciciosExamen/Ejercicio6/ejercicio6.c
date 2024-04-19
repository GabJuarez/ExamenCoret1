/*Leer dos números e imprima cual es mayor y el menor de los números ingresados.*/

#include <stdio.h>
/*Prototipo de Funcion*/
int Calcular(int num1, int num2);

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Dime el primer numero: ", num1);
    scanf("%d", &num1);
    printf("Dime el segundo numero: ", num2);
    scanf("%d", &num2);
   if (num1 > num2)
        printf("El numero mayor es:%d\n",num1);
    else if (num2 > num1)
        printf("El numero mayor es: %d\n",num2);
    else if (num1 = num2)
        printf("Son iguales...\n");
        else
        printf("invalido");
    return 0;
}
