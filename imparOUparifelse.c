#include <stdio.h>

int num;

int main()
{
    printf("Escreva um numero: ");
    scanf("%i", &num);
    if (num % 2 == 0)
    {
        printf("Seu numero e Par!");
    }
    else
    {
        printf("O seu numero e Impar!");
    }
    


    return 0;
}