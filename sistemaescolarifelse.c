#include <stdio.h>

float nota1;
float nota2;
float media;

int main(){
    printf("Seja bem vindo, aluno!\nInsira sua nota da avaliacao 1: ");
    scanf("%f",&nota1);
    printf("Agora insira a nota da avaliacao 2: ");
    scanf("%f",&nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7)
    {
        printf("Voce esta aprovado com %.2f, PARABENS!!",media);
    }
    else if (media <5)
    {
        printf("Voce esta reprovado com %.2f!!", media);
    }
    else
    {
        printf("Voce esta de recuperacao com %.2f, estude mais!",media);
    }
    



    return 0;
}