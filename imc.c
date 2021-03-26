#include <stdio.h>
/* Cálculo de IMC */
int main()
{
    float peso, altura, imc;
    printf ("CALCULADORA DE ÍNDICE DE MASSA CORPORAL:\n");
    printf ("Digite seu peso (em Kg): ");
    scanf ("%f",&peso);
    printf ("Digite sua altura (em metros): ");
    scanf ("%f",&altura);
    imc=peso/(altura*altura);
    printf ("Seu IMC é %.1f. \n", imc);
    if (imc < 18.5)
    {
        printf ("Você está abaixo do peso. O risco de desenvolver comorbidades está entre normal e elevado.\n");
    }   
    else if ((18.5 < imc) && (imc < 24.9))
    {
        printf ("Parabéns, você está na faixa de peso normal.\n");
    }
    else if ((25 < imc) && (imc < 29.9))
    {
        printf ("Você está na faixa do sobrepeso. O risco de desenvolver comorbidades é ligeiramente elevado.\n");
    }
    else if ((30 < imc) && (imc < 34.9))
    {
        printf ("Você está na faixa de peso de Obesidade 1. O risco de desenvolver comorbidades é elevado.\n");
    }
    else if ((35 < imc) && (imc < 39.9))
    {
        printf ("Você está na faixa de peso de Obesidade 2. O risco de desenvolver comorbidades é muito elevado.\n");
    }
    else 
    {
        printf ("Você está na faixa de peso de Obesidade 3, ou grave. O risco de desenvolver comorbidades é extremamente elevado.\n");
    }
}