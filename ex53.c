#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n;

    do {
    printf("Digite um número: ");
    scanf("%i", &n);

    if (n<0) {
        printf("Valor não suportado. Tente novamente.\n\n");
    }
    } while (n<0);

    if ((n%2)==0) {
        printf("O número informado é par.");
    }

    if ((n%2)==1) {
        printf("O número informado é ímpar.");
    }
}