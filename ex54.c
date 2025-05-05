#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");
    float l, m;

    do {
        printf("Informe a quantidade de lados do pol�gono regular desejado: ");
        scanf("%f", &l);

        if (l<3 || l>5) {
            printf("Quantidade de lados n�o suportada. Por favor, tente novamente.\n");
        }
    } while (l<3 || l>5);

    if (l==3) {
        printf("\nVoc� escolheu uma quantidade de lados referente a um TRI�NGULO\n");
        printf("Informe a medida em cent�metros dos lados desse tri�ngulo regular: ");
        scanf("%f", &m);
        printf("O per�metro desse tri�ngulo � de %.0fcm", m*3);
    }

    if (l==4) {
        printf("\nVoc� escolheu uma quantidade de lados referente a um QUADRADO\n");
        printf("Informe a medida em cent�metros dos lados desse quadrado regular: ");
        scanf("%f", &m);
        printf("A �reda desse quadrado � de %.0fcm�", pow(m, 2));
    }

    if (l==5) {
        printf("\nVoc� escolheu uma quantidade de lados referente a um PENT�GONO");
    }
}