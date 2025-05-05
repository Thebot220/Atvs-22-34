#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int senha;

    do {
    printf("Informe a senha: ");
    scanf("%i", &senha);

    if (senha!=1234) {
        printf("Acesso Negado.\n\n");
    }
    } while (senha!=1234);

    printf("Acesso Permitido.");
}