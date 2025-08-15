#include <stdio.h> 

int contador;
int valor;
int salto;

int main (){
    
    printf("Ate qual numero voce quer que eu conte? ");
    scanf("%i",&valor);    
    printf("Qual sera o valor do salto? ");
    scanf("%i",&salto);

    while (contador <= valor)
    {
        printf("%i\n",contador);
        contador = contador + salto;
    }
    
    printf("Terminei a contagem!");
    return 0;
}