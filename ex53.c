#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n;

    do {
    printf("Digite um n�mero: ");
    scanf("%i", &n);

    if (n<0) {
        printf("Valor n�o suportado. Tente novamente.\n\n");
    }
    } while (n<0);

    if ((n%2)==0) {
        printf("O n�mero informado � par.");
    }

    if ((n%2)==1) {
        printf("O n�mero informado � �mpar.");
    }
}