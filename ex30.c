#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float h, sh, sn, ah, sa, sf;
    printf("Informe as suas horas trabalhadas esse m�s: ");
    scanf("%f", &h);
    printf("Informe seu sal�rio por hora: R$");
    scanf("%f", &sh);

    if (h>160) {
        sn = 160*sh;
        ah = h-160;
        sa = ah*(sh*1.5);
    }
    else {
        sn = h*sh;
    }

    sf = sn+sa;

    printf("O seu sal�rio esse m�s ser� de R$%.2f.",sf);
}