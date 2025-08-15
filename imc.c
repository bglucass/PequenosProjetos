#include <stdio.h>

float peso;
float altura;
float imc;

int main(){
    printf("Seja bem vindo a calculadora, digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite agora a sua altura(m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("IMC: %.2f", imc);

    if (imc < 17)
    {
        printf(" Muito abaixo do peso!");
    }
        if (imc > 17 && imc < 18.5)
        {
            printf(" Abaixo do peso!");
    }
            if (imc >18.5 && imc <25)
            {
                printf(" Peso ideal!");
    }
                if (imc > 25 && imc < 30)
                {
                    printf(" Sobrepeso");
    }
                    if (imc > 30 && imc < 35)
                    {
                        printf(" Obesidade!");
    }
                        if (imc > 35 && imc < 40)
                        {
                            printf(" Obesidade severa");
    }
                            if (imc > 40)
                            {
                                printf(" Obesidade morbida");
                            }
                                                                            
   
    return 0;
}