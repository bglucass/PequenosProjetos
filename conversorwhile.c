#include <stdio.h> 

int main(){
    int valor1;
    int contador = 1;
    int dolares;
    float resultado;

        while (contador <= 4)
        {
            printf("Digite o seu valor em R$: ");
            scanf("%i",&valor1);
            resultado = valor1 * 5.40;
            printf("O Valor convertido fica: %.2f\n",resultado);
            contador = contador + 1;
            
        }
        



    return 0;
}