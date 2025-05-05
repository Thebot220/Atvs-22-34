#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n;
    printf("Informe um número: ");
    scanf("%i", &n);

    if (n>0) {
        printf("O número digitado é positivo.");
    }
    if (n==0) {
        printf("O número digitado é igual a zero.");
    }
    if (n<0) {
        printf("O número digitado é negativo.");
    }
}