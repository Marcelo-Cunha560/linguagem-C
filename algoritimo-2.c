#include <stdio.h>

int main() {
    int num1, num2, soma;

   //Entradas
    printf("informe o numero 1: ");
    scanf("%d", &num1);

    printf("informe o numero 2: ");
    scanf("%d", &num2);

    //processamento
    soma = num1 + num2;
    //saída
    printf("A soma é %d", soma);
}