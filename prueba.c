#include<stdio.h>

int multi(int a, int b)
{
    int resultado = a*b;
    return resultado;
}
int main()
{
    int num1, num2;
    printf("ingrese los numeros que desea multiplicar \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    int putoinfiel = multi(num1 , num2);
     printf("la multiplicacion es %d", putoinfiel);
    return 0;
}
