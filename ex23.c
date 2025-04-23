#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "1252");
    int n;
    printf("Informe um número: ");
    scanf("%i", &n);
    if (n>=0) {
        printf("O número %i é positivo.\n", n);
    }
    else {
        printf("O número %i é negativo.\n", n);
    }
    }