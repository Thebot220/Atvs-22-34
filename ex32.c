#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float sfx, vv, vn, va, ca, sf;
    printf("Informe o seu sal�rio fixo: R$");
    scanf("%f", &sfx);
    printf("Informe o valor total de vendas realizado por voc�: R$");
    scanf("%f", &vv);

    if (vv>1500) {
        vn = 1500*0.03;
        va = vv-1500;
        ca = va*0.05;
    }
    else {
        vn = vv*0.03;
    }
    sf = sfx+vn+ca;
    printf("O seu sal�rio final foi de R$%.2f.", sf);
}