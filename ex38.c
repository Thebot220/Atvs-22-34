#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n1, n2, n3, maior, meio, menor;
    printf("Informe o primeiro número: ");
    scanf("%i", &n1);
    printf("Informe o segundo número: ");
    scanf("%i", &n2);
    printf("Informe o terceiro número: ");
    scanf("%i", &n3);

    if (n1>n2 && n1>n3) {
        maior = n1;
        if (n2>n3) {
            meio = n2;
            menor = n3;
        }
        if (n3>n2) {
            meio = n3;
            menor = n2;
        }
    }

    if (n2>n1 && n2>n3) {
        maior = n2;
        if (n1>n3) {
            meio = n1;
            menor = n3;
        }
        if (n3>n1) {
            meio = n3;
            menor = n1;
        }
    }

    if (n3>n1 && n3>n2) {
        maior = n3;
        if (n1>n2) {
            meio = n1;
            menor = n2;
        }
        if (n2>n1) {
            meio = n2;
            menor = n1;
        }
    }
    printf("Em ordem crescente, os números digitados ficarão da seguinte forma: %i, %i e %i", menor, meio, maior);
}