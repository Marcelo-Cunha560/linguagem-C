#include <stdio.h>
#include <ctype.h>

int main(){
    float altura, peso_ideal;
    char sexo;

    printf("informe sua altura: ");
    scanf("%f", &altura);
    gets(stdin); //-- coriigir bugs>
    printf("informe o sexo (m/f): ");
    scanf("%c", &sexo);

    if(tolower(sexo) == 'm'){
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f", peso_ideal);
    }
    if(tolower(sexo) == 'f'){
        peso_ideal = (62.1 * altura)- 44.7;
        printf("Seu peso ideal é %.2f", peso_ideal);
        }
    if(tolower(sexo) != 'm' && sexo != 'f'){
        printf("sexo nao reconhecido.\n");
    }
}
