#include <stdio.h>
#include <locale.h>

int main(){
    int n1, n2, n3;
    setlocale(LC_ALL, "");
    printf("Informe o primeiro número: ");
    scanf("%i", &n1);
    printf("Informe o segundo número: ");
    scanf("%i", &n2);
    printf("Informe o terceiro número: ");
    scanf("%i", &n3);

    if (n1==n2 && n2==n3) {
        printf("Os três números são iguais. Por favor, informe novos valores.\nSSS");
    }
    if (n1>n2 && n1>n3) {
        printf("O numero %i é o maior.\n", n1);
    }
    if (n2>n1 && n2>n3) {
        printf("O número %i é o maior.\n", n2);
    }
    if (n3>n1 && n3>n2) {
        printf("O número %i é o maior.\n", n3);
    }
}