#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "");
    float n1, n2, no, d, m;

    printf("Digite a nota de sua primeira prova: ");
    scanf("%f", &n1);
    printf("Digite a nota de sua segunda prova: ");
    scanf("%f", &n2);

    printf("Você fez a prova facultativa? [S: 1/N: -1]");
    printf("\nR:");
    scanf("%f", &d);

    if (d==1) {
        printf("Digite a nota de sua prova substitutiva: ");
        scanf("%f", &no);

        if (n1>n2) {
            n2 = no;
            m = (n1+no)/2;
            printf("A média será de %.2f.", m);
        }
        if (n1<n2) {
            n1 = no;
            m = (n2+no)/2;
            printf("A média será de %.2f.", m);
        }
    }

    if (d==-1) {
        m = (n1+n2)/2;
        printf("A média será de %.2f.", m);
    }

    if (m>=6) {
        printf("Você foi APROVADO.");
    }
    if (m>=3) {
        printf("Você está EM EXAME.");
    }
    if (m<3) {
        printf("Você foi REPROVADO.");
    }
}