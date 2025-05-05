#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "");
    int codigo;
    char regiao[20];

    do {
    printf("Informe o código de origem do produto: ");
    scanf("%i", &codigo);

    if (codigo<=0) {
        printf("O código informado não é válido. Tente outra");
    }
    } while (codigo<=0);

    if (codigo<12) {
        if (codigo==1) {
            strcpy(regiao, "Sul");
        }

        if (codigo==2) {
            strcpy(regiao, "Norte");
        }

        if (codigo==3) {
            strcpy(regiao, "Leste");
        }

        if (codigo==4) {
            strcpy(regiao, "Oeste");
        }

        if (codigo==5 || codigo==6) {
            strcpy(regiao, "Nordeste");
        }

        if (codigo==7 || codigo==8 || codigo==9) {
            strcpy(regiao, "Sudeste");
        }
        
        if (codigo==10) {
            strcpy(regiao, "Centro-Oeste");
        }

        if (codigo==11) {
            strcpy(regiao, "Noroeste");
        }
        printf("%s", regiao);
    }

    else {
        printf("O produto informado é importado.");
    }
}