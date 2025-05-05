#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float a1, a2, a3;
    char t[15];

    printf("Informe a medida do primeiro ângulo do triângulo: ");
    scanf("%f", &a1);
    printf("Informe a medida do segundo ângulo do triângulo: ");
    scanf("%f", &a2);
    printf("Informe a medida do terceiro ângulo do triângulo: ");
    scanf("%f", &a3);

    if ((a1+a2+a3)==180) {

        if (a1==90 || a2==90 || a3==90) {
            strcpy(t, "Retângulo");
        }
        if (a1>90 || a2>90 || a3>90) {
            strcpy(t, "Obtusângulo");
        }
        if (a1<90 && a2<90 && a3<90) {
            strcpy(t, "Acutângulo");
        }

        printf("Você pode formar um triângulo do tipo %s.", t);
    }

    else {
        printf("Não é possível formar um triângulo com os ângulos dados.");
    }
}