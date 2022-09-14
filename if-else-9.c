#include <stdio.h>

int main(){
    float poluicao;

    printf("informe o índice de poluição: ");
    scanf("%f", &poluicao);

    if(poluicao >= 0.3 && poluicao <=0.4){
        printf("Grupo 1 suspender atividades");
    }
    else if(poluicao >=0.4 && poluicao <= 0.5){
        printf("Grupo 1 e 2 suspender atividdes");
    }
    else if(poluicao >=0.5 ){
        printf("Todos os grupos suspender atividades");
    }else{
        printf("Niveis aceitaveis");
    }
    
}