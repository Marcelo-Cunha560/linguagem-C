#include <stdio.h>

int main(){
    int vetor1[10], vetor2[10], soma[10];

    for(int i = 0; i < 10; i++){
        print("informe o valor para o primeiro vetor: ");
        scanf("%d", &vetor1[i]);
        printf("informe o valor para o segundo vetor: ");
        scanf("%d", &vetor2[i]);
        soma[i] = vetor1[i] + vetor2[i];
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", soma[i]);
    }
}