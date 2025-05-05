#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float n1, n2, d;

    printf("Informe um número inteiro: ");
    scanf("%f", &n1);
    printf("Informe um outro número inteiro: ");
    scanf("%f", &n2);

    printf("Escolha a operação desejada:\n");
    printf("[Adição:1 / Subtração:2 / Divisão:3 / Multiplicação: 4]\n");

    do {
        printf("R: ");
        scanf("%f", &d);
        if (d<1 || d>4) {
            printf("Operação não encontrada. Tente novamente.\n");
        } 
    } while (d<1 || d>4);

    if (d==1) {
        printf("A soma de %.0f com %.0f é igual a %.0f.", n1, n2, (n1+n2));
    }
    if (d==2) {
        printf("A subtração de %.0f em %.0f é igual a %.0f.", n2, n1, (n1-n2));
    }
    if (d==3) {
        printf("A divisão de %.0f por %.0f é igual a %.1f.", n1, n2, (n1/n2));
    }
    if (d==4) {
        printf("O produto de %.0f por %.0f é igual a %.0f.", n1, n2, (n1*n2));
    }
}