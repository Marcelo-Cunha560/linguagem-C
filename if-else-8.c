#include <stdio.h>

int main(){
    int n;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("o valor é par\n");
    }else{
        printf("o valor é impar\n");
    }
    if(n > 0){
        printf("o valor é positivo\n");
    }else{
        printf("o valor é negativo");
    }

}