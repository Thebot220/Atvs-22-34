#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int usuario, senha;

    do{
        do {
            printf("Insira seu login de usu�rio: ");
            scanf("%i", &usuario);

            if (usuario!=1234) {
                printf("\nUsu�rio inv�lido. Por favor, tente novamente.\n");
            }
        } while (usuario!=1234);

        printf("Insira a sua senha:");
        scanf("%i", &senha);

        if (senha!=9999) {
            printf("\nSenha incorreta. Por favor, tente novamente.\n");
        } 
    } while (senha!=9999);

    printf("Bem vindo!!");
}