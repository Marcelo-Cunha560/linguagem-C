#include <stdio.h>

int main(){
    int n, a, b;
     printf("informe o número desejado: ");
     scanf("%d", &n);

     if(n > 0){
        a = n;
        printf("O %d é um valor positivo", n);
    }else{
        b = n;
        printf("O %d é um valor negativo", n);
    }
}