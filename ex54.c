#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");
    float l, m;

    do {
        printf("Informe a quantidade de lados do polígono regular desejado: ");
        scanf("%f", &l);

        if (l<3 || l>5) {
            printf("Quantidade de lados não suportada. Por favor, tente novamente.\n");
        }
    } while (l<3 || l>5);

    if (l==3) {
        printf("\nVocê escolheu uma quantidade de lados referente a um TRIÂNGULO\n");
        printf("Informe a medida em centímetros dos lados desse triângulo regular: ");
        scanf("%f", &m);
        printf("O perímetro desse triângulo é de %.0fcm", m*3);
    }

    if (l==4) {
        printf("\nVocê escolheu uma quantidade de lados referente a um QUADRADO\n");
        printf("Informe a medida em centímetros dos lados desse quadrado regular: ");
        scanf("%f", &m);
        printf("A áreda desse quadrado é de %.0fcm²", pow(m, 2));
    }

    if (l==5) {
        printf("\nVocê escolheu uma quantidade de lados referente a um PENTÁGONO");
    }
}