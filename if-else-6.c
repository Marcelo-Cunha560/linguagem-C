#include <stdio.h>

int main(){
    int c;
    float e = 0, n, salario, valor_hora = 10.00;

    printf("Informe o código: ");
    scanf("%d", &c);
    print("Informe o numero de horas trabalhadas: ");
    scanf("%f", &n);

    if(n > 50){
        e = (n - 50) * 20.00;
        salario = (50 * valor_hora) + e;
        printf("Salário total R$ %.2f\n", salario);
        printf("Salário excedente R$ %.2f ", e);
    }else{
        salario = valor_hora * n;
        printf("salario total R$ %.2f", salario);
    }
}