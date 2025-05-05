#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float qmr, pmr, qmc, pmc, qt, pt, d=0;

    printf("Informe quantos Kg de morangos que você deseja comprar: ");
    scanf("%f", &qmr);
    printf("Informe quantos Kg de maçãs que você deseja comprar: ");
    scanf("%f", &qmc);

    if (qmr<=5) {
        pmr = 2.5;
    }
    if (qmr>5) {
        pmr = 2.2;
    }

    if (qmc<=5) {
        pmc = 1.8;
    }
    if (qmc>5) {
        pmc = 1.5;
    }

    qt = qmr+qmc;
    pt = (qmr*pmr)+(qmc*pmc);

    if (qt>8 || pt>25) {
        d = pt*0.1;
    }

    printf("Por ter comprado %.2fKg de morangos e %.2fKg de maçãs, você deverá pagar um total de R$%.2f.", qmr, qmc, pt-d);
}