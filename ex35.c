#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n;
    printf("Informe um n�mero: ");
    scanf("%i", &n);

    if (n>0) {
        printf("O n�mero digitado � positivo.");
    }
    if (n==0) {
        printf("O n�mero digitado � igual a zero.");
    }
    if (n<0) {
        printf("O n�mero digitado � negativo.");
    }
}