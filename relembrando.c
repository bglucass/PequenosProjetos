#include <stdio.h>

int idade;
char nome[20];


int main()  
{
        printf("Seja bem vindo ao detran!\nInsira a sua idade: ");
        scanf("%i", &idade);
    if (idade <=17)
    {
        printf("Voce esta inapto para tirar a sua habilitacao, retorne quando tiver a idade minima!! ");

        return 0;
    }
        getchar();
        printf("Voce esta apto para tirar a sua habilitacao!\nInsira qual seu nome: ");
        fgets(nome, sizeof(nome), stdin);
        printf("Bem vindo %sIremos comecar o seu registro!", nome);

    return 0;
}