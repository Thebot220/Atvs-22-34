#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n;
    printf("Informe um n�mero: ");
    scanf("%i", &n);
    if (n>10) {
        printf("O n�mero %i � maior que 10.", n);
    }
    if (n==10) {
        printf("O n�mero � igual a 10.");
    }
    if (n<10) {
        printf("O n�mero %i � menor que 10.");
    }
}