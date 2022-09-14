#include <stdio.h>

int main(){
    int n;
     printf("informe o número desejado: ");
     scanf("%d", &n);

     if(n >100){
        printf("%d", n);
     }else{
        n=0;
        printf("%d", n);
     }
}