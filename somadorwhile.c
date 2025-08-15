#include <stdio.h>

int main(){
    
int contador = 1;
int valor;
int soma = 0;
int maior = 0;
int menor = 1;

    while (contador <= 5)
    {
        printf("Digite o %io. valor: ",contador);
        scanf("%i", &valor);
        if (valor > maior)
        {
            maior = valor;
        }
        if (valor < menor)
        {
            menor = valor;
        }
        
        
        soma = soma + valor;
        contador = contador + 1;

    }
    
    printf("A Soma dos 5 numeros e: %i\nE o maior numero digitado foi: %i\nE o menor foi: %i",soma, maior, menor);


    return 0;
}