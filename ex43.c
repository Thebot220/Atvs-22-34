#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "");
    float l, tipo, d, p;
    char t[25];

    printf("Informe o tipo de combustível desejado: [A:0 / G:1]\n");
    printf("R: ");
    scanf("%f", &tipo);

    printf("Informe quantos litros você deseja: ");
    scanf("%f", &l);

    if (tipo==0) {
        strcpy(t, "Álcool");
        if (l<=20) {
            d = 0.03;
        }

        if (l>20) {
            d = 0.05;
        }
    }

    if (tipo==1) {
        strcpy(t, "Gasolina");
        if (l<=20) {
            d = 0.04;
        }

        if (l>20) {
            d = 0.06;
        }
    }

    p = (l*2.90)*(1-d);

    printf("Para comprar %.1f litros de %s, o valor total a ser pago será de R$%.2f.", l, t, p);
}