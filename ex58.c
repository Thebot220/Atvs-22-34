#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float l1, l2, l3;
    char t[15];

    printf("Informe a medida do primeiro lado do tri�ngulo: ");
    scanf("%f", &l1);
    printf("Informe a medida do segundo lado do tri�ngulo: ");
    scanf("%f", &l2);
    printf("Informe a medida do terceiro lado do tri�ngulo: ");
    scanf("%f", &l3);

    if ((l1+l2)>l3 && (l1+l3)>l2 && (l2+l3)>l1) {

        if (l1==l2 && l2==l3) {
            strcpy(t, "Equil�tero");
        }
        if ((l1==l2 && l1!=l3) || (l1==l3 && l1!=l2) || (l2==l3 && l2!=l1)) {
            strcpy(t, "Is�sceles");
        }
        if (l1!=l2 && l2!=l3 && l3!=l1) {
            strcpy(t, "Escaleno");
        }

        printf("Voc� pode formar um tri�ngulo do tipo %s.", t);
    }

    else {
        printf("N�o � poss�vel formar um tri�ngulo com as medidas dadas.");
    }
}