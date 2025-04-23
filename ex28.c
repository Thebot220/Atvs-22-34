#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "1252");
    int n1, n2, M, m;
    printf("Informe o primeiro número: ");
    scanf("%i", &n1);
    printf("Informe o segundo número: ");
    scanf("%i", &n2);

    if (n1>n2) {
        M = n1;
        m = n2;
    }
    else {
        M = n2;
        m = n1;
    }
    printf("Na ordem crescente, os números informados ficarão na seguinte ordem: %i, %i.\n", m, M);
}