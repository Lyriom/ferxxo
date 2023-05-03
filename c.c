//Construya un programa que sume 2 números ingresados por el usuario, aplicando el //concepto de funciones.

#include<stdio.h>

int sumar(int a, int b)
{
    int resultado = a + b;
    return resultado;
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Este programa suma 2 números\n");
    printf("Ingrese el 1er número: ");
    scanf("%d", &num1);
    printf("Ingrese el 2do número: ");
    scanf("%d", &num2);
    int res = sumar(num1, num2);
    printf("el resultado de la suma es: %d", res);
    printf ("hola infiel");
    return 0;
}