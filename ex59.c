#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float a1, a2, a3;
    char t[15];

    printf("Informe a medida do primeiro �ngulo do tri�ngulo: ");
    scanf("%f", &a1);
    printf("Informe a medida do segundo �ngulo do tri�ngulo: ");
    scanf("%f", &a2);
    printf("Informe a medida do terceiro �ngulo do tri�ngulo: ");
    scanf("%f", &a3);

    if ((a1+a2+a3)==180) {

        if (a1==90 || a2==90 || a3==90) {
            strcpy(t, "Ret�ngulo");
        }
        if (a1>90 || a2>90 || a3>90) {
            strcpy(t, "Obtus�ngulo");
        }
        if (a1<90 && a2<90 && a3<90) {
            strcpy(t, "Acut�ngulo");
        }

        printf("Voc� pode formar um tri�ngulo do tipo %s.", t);
    }

    else {
        printf("N�o � poss�vel formar um tri�ngulo com os �ngulos dados.");
    }
}