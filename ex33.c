#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float c, s, d, cr, sf;
    printf("Informe seu número da conta: ");
    scanf("%f", &c);
    printf("Informe o seu saldo: R$");
    scanf("%f", &s);
    printf("Informe o valor de seus débitos: R$");
    scanf("%f", &d);
    printf("Informe a valor de seu crédito: R$");
    scanf("%f", &cr);
    sf = (s + cr)-d;

    printf("\nO seu saldo atual é de R$%.2f.\n", sf);
    if (sf>0) {
        printf("Saldo Positivo.");
    }
    else {
        printf("Saldo Negativado.");
    }
}