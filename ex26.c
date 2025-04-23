#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "1252");
    int an, aa, i;

    printf("Informe sua data de nascimento: ");
    scanf("%i", &an);
    printf("Informe a data atual: ");
    scanf("%i", &aa);

    i = aa-an;
    printf("Você tem %i anos de idade.\n", i);

    if (i>=16) {
        printf("Você já tem idade sufuiente para votar.\n");
    }
    else {
        printf("Você não tem idade sufiente para votar.\n");
    }
}