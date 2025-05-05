#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float h, sh, sn, ah, sa, sf;
    printf("Informe as suas horas trabalhadas esse mês: ");
    scanf("%f", &h);
    printf("Informe seu salário por hora: R$");
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

    printf("O seu salário esse mês será de R$%.2f.",sf);
}