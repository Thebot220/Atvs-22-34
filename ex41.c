#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n1, n2;

    printf("Informe o primeiro valor: ");
    scanf("%i", &n1);
    printf("Informe o segundo valor: ");
    scanf("%i", &n2);

    if (n1==n2) {
        printf("Os valores são iguais.");
    }
    if (n1>n2) {
        printf("O primeiro número é maior.");
    }
    if (n1<n2) {
        printf("O segundo número é maior.");
    }
}