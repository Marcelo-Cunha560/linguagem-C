#include <stdio.h>

int main() {
    //Declaração de variáveis
    int num1, num2, soma, mult;

   //Entradas
    printf("informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("informe o segundo numero: ");
    scanf("%d", &num2);

    //processamento
    soma = num1 + num2;
    mult = soma * num1;
    //saída
    printf("O resultado da Multiplicação é %d", mult);
}