#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float l1, l2, l3;
    char t[15];

    printf("Informe a medida do primeiro lado do triângulo: ");
    scanf("%f", &l1);
    printf("Informe a medida do segundo lado do triângulo: ");
    scanf("%f", &l2);
    printf("Informe a medida do terceiro lado do triângulo: ");
    scanf("%f", &l3);

    if ((l1+l2)>l3 && (l1+l3)>l2 && (l2+l3)>l1) {

        if (l1==l2 && l2==l3) {
            strcpy(t, "Equilátero");
        }
        if ((l1==l2 && l1!=l3) || (l1==l3 && l1!=l2) || (l2==l3 && l2!=l1)) {
            strcpy(t, "Isósceles");
        }
        if (l1!=l2 && l2!=l3 && l3!=l1) {
            strcpy(t, "Escaleno");
        }

        printf("Você pode formar um triângulo do tipo %s.", t);
    }

    else {
        printf("Não é possível formar um triângulo com as medidas dadas.");
    }
}