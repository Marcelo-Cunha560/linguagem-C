#include <stdio.h>

int main(){
    int m, cent;
    
    printf("Escreva o valor em metros: ");
    scanf("%d", &m);

    cent = m * 100;

    printf("%d metros em centimetros é: %d", m, cent);
}