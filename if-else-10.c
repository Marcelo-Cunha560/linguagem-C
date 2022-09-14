#include <stdio.h>

int main(){
    int idade;

    printf("informe a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <=7){
        printf("infantil A");
    }else if(idade >= 8 && idade <= 11){
        printf("infantil B");
    }else if(idade >= 12 && idade <=13){
        printf("juvenil A");
    }else if(idade >= 14 && idade <=17){
        printf("juvenil B");
    }else if(idade >= 18){
        printf("adulto");

    }

    }

