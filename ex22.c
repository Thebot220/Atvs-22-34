#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n;
    printf("Informe um número: ");
    scanf("%i", &n);
    if (n>10) {
        printf("O número %i é maior que 10.", n);
    }
    if (n==10) {
        printf("O número é igual a 10.");
    }
    if (n<10) {
        printf("O número %i é menor que 10.");
    }
}