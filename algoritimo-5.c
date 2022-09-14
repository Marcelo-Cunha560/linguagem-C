#include <stdio.h>

int main(){
    float altura, peso;

    printf("informe o valor da sua altura: ");
    scanf("%f", &altura);

    peso = (altura * 72.7) - 58;

    print("O seu peso ideal é: %.2f", peso);



}