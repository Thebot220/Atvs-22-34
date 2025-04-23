#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "1252");
    int n1, n2;
    printf("Informe o primeiro número: ");
    scanf("%i", &n1);
    printf("Informe o segundo número: ");
    scanf("%i", &n2);

    if (n1>n2) {
        printf("O maior número é o %i.\n", n1);
    }
    else {
        printf("O maior número é o %i.\n", n2);
    }
}