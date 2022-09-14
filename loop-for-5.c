#include <stdio.h>
#include <string.h>

int main(){
    char nome[100], senha[100];

    printf("infomre um nome: ");
    gets(nome);
    printf("informe a senha: ");
    gets(senha);

    while(!strcmp(nome, senha)){
        printf("Nome de usuário e senha devem ser diferentes\n");
        printf("infomre um nome: ");
        gets(nome);
        printf("informe a senha: ");
        gets(senha);
    }
}