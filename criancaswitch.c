#include <stdio.h> 

int valor;
int doacao;

int main(){
    printf("==============================\n");
    printf("      CRIANCA ESPERANCA       \n");
    printf(" Muito obrigado por contribuir\n");
    printf("Digite 1 para doar R$10\n");
    printf("Digite 2 para doar R$20\n");
    printf("Digite 3 para doar R$40\n");
    printf("Digite 4 para doar outro valor\n");
    printf("Digite 5 para encerrar\n");
    scanf("%i" ,&doacao);

    switch (doacao)
    {
    case 1:
        valor = 10;
        break;
    case 2:
        valor = 20;
        break;
    case 3:
        valor = 40;
        break;
    case 4:
        printf("Insira o valor desejado: ");
        scanf("%i",&valor);
        break;
    case 5:
        valor = 0;
        break;
    } 
    printf("=================================\n");
    printf("Sua doacao foi de %i, obrigado!\n", valor);
    printf("=================================\n");

    return 0;
}