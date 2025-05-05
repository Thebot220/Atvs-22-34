#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n1, n2, n3, M, Mm, m;

    printf("Informe o primeiro número: ");
    scanf("%i", &n1);
    printf("Informe o segundo número: ");
    scanf("%i", &n2);
    printf("Informe o terceiro número: ");
    scanf("%i", &n3);

    if (n1>n2 && n1>n3) {
        M = n1;
        if (n2>n3) {
            Mm = n2;
            m = n3;
        }
        else {
            Mm = n3;
            m = n2;
        }
    }

    if (n2>n1 && n2>n3) {
        M = n2;
        if (n1>n3) {
            Mm = n1;
            m = n3;
        }
        else {
            Mm = n3;
            m = n1;
        }
    }

    if (n3>n1 && n3>n2) {
        M = n3;
        if (n1>n2) {
            Mm = n1;
            m = n2;
        }
        else {
            Mm = n2;
            m = n1;
        }
    }

    printf("Os números informados dispostos de forma decrescente ficam na seguinte ordem: %i, %i, %i", M, Mm, m);
}