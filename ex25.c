#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "1252");
    float n1, n2, m;
    printf("Informe sua primeira nota: ");
    scanf("%f", &n1);
    printf("Informe sua segunda nota: ");
    scanf("%i", &n2);
    m = (n1+n2)/2;
    printf("Sua média final foi de %.2f.\n", m);

    if (m>=6) {
        print("Você foi aprovado!");
    }
    else {
        print("Você foi reprovado.");
    }
}