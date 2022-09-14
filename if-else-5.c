#include <stdio.h>

int main(){
    int peso, e = 0, m = 0;
    printf("informe a quantidade de kg de pesca: ");
    scanf("%d", &peso);

    if (peso > 50){
        e = peso - 50;
        m = e * 4;
    }else{
        printf("Sem multa e excesso\n");
       
    } 
    printf("peso: %d\n", peso);
    printf("Excesso: %d\n", e);
    printf("Multa: %d", m);
}