#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n1, n2, n3, M, Mm, m;

    printf("Informe o primeiro n�mero: ");
    scanf("%i", &n1);
    printf("Informe o segundo n�mero: ");
    scanf("%i", &n2);
    printf("Informe o terceiro n�mero: ");
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

    printf("Os n�meros informados dispostos de forma decrescente ficam na seguinte ordem: %i, %i, %i", M, Mm, m);
}