#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n1, n2, n3, M, m;
    printf("Informe o primeiro número: ");
    scanf("%i", &n1);
    printf("Informe o segundo número: ");
    scanf("%i", &n2);
    printf("Informe o terceiro número: ");
    scanf("%i", &n3);

    if (n1==n2 && n2==n3) {
        printf("Valor inválido, tente novamente.");
    }

    if (n1>n2 && n1>n3) {
        M = n1;
        if (n2>n3) {
            m = n2;
        }
        if (n3>n2) {
            m = n3;
        }
    }

    if (n2>n1 && n2>n3) {
        M = n2;
        if (n1>n3) {
            m = n1;
        }
        if (n3>n1) {
            m = n2;
        }
    }

    if (n3>n1 && n3>n2) {
        M = n3;
        if (n1>n2) {
            m = n1;
        }
        if (n2>n1) {
            m = n2;
        }
    }

    printf("A soma dos dois maiores valores, %i e %i, é igual a %i.", M, m, M+m);
}