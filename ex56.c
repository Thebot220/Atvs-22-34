#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float n1, n2, d;

    printf("Informe um n�mero inteiro: ");
    scanf("%f", &n1);
    printf("Informe um outro n�mero inteiro: ");
    scanf("%f", &n2);

    printf("Escolha a opera��o desejada:\n");
    printf("[Adi��o:1 / Subtra��o:2 / Divis�o:3 / Multiplica��o: 4]\n");

    do {
        printf("R: ");
        scanf("%f", &d);
        if (d<1 || d>4) {
            printf("Opera��o n�o encontrada. Tente novamente.\n");
        } 
    } while (d<1 || d>4);

    if (d==1) {
        printf("A soma de %.0f com %.0f � igual a %.0f.", n1, n2, (n1+n2));
    }
    if (d==2) {
        printf("A subtra��o de %.0f em %.0f � igual a %.0f.", n2, n1, (n1-n2));
    }
    if (d==3) {
        printf("A divis�o de %.0f por %.0f � igual a %.1f.", n1, n2, (n1/n2));
    }
    if (d==4) {
        printf("O produto de %.0f por %.0f � igual a %.0f.", n1, n2, (n1*n2));
    }
}