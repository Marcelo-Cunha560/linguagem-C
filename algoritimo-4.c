#include <stdio.h>

int main(){
    int Htrabalhadas, Vhora, total;
    printf("informe suas horas trabalhadas: ");
    scanf("%d", &Htrabalhadas);

    printf("informe o valor por hora: ");
    scanf("%d", &Vhora);

    total = Htrabalhadas * Vhora;

    printf("o valor por hora trabalhado é: %d", total);
}