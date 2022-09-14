#include <stdio.h>

int main(){
    //variaveis
    int contador_total = 0, contador_sit1 = 0, contador_sit2 = 0, contador_sit3 = 0, contador_sit4 = 0, indentidicacao, defeito;

    //entradas
    printf("Informe a identificação: ");
    scanf("%d", &indentidicacao);

    while(indentidicacao != 0){
        printf("1 - necessota de esfera.\n");
        printf("2 - necessita de limpeza.\n");
        printf("3 - necessita de troca do cabo ou conector.\n");
        printf("4 - Quebrado ou inutilizado.\n");
        printf("informe o tipo de defeito: \n");
        scanf("%d", &defeito);

        if(defeito == 1){
            contador_sit1 = contador_sit1 + 1;
        }
        if(defeito == 2){
            contador_sit2 = contador_sit2 + 1;
        }
        if(defeito == 3){
            contador_sit3 = contador_sit3 + 1;
        }
        if(defeito == 4){
            contador_sit4 = contador_sit4 + 1;
        }
        contador_total = contador_total + 1;
        printf("Informe a identificação: ");
        scanf("%d", &indentidicacao);
    }
    float p1, p2, p3, p4; // (float) cast
    p1 = ((float)contador_sit1 / (float)contador_total * 100.0);
    p2 = ((float)contador_sit2 / (float)contador_total * 100.0);
    p3 = ((float)contador_sit3 / (float)contador_total * 100.0);
    p4 = ((float)contador_sit4 / (float)contador_total * 100.0);

    printf("Quantidade de mouses %d", contador_total);
    printf("Situação \t\t\tQuantidade \tPercentual\n");
    printf("1 - necessita de esfera \t\t\t\t%d \t%.2f%%\n", contador_sit1, p1);
    printf("2 - neccessita de limpeza \t\t\t\t%d \t%.2f%%\n", contador_sit2, p2);
    printf("3 - necessita de troca de cabo e conector \t%d \t%.2f%%\n", contador_sit3, p3);
    printf("4 - quebrado ou inutilizado \t\t\t%d \t%.2f%%\n", contador_sit4, p4);



}