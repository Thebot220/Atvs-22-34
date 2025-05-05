#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int h1, h2, Mh, mh, m1, m2, Mm, mm;

    printf("Digite a idade do 1º homem: ");
    scanf("%i", &h1);
    printf("Digite a idade do 2º homem: ");
    scanf("%i", &h2);

    printf("\nDigite a idade da 1º mulher: ");
    scanf("%i", &m1);
    printf("Digite a idade da 2º mulher: ");
    scanf("%i", &m2);

    if (h1>h2) {
        Mh = h1;
        mh = h2;
    }
    if (h1<h2) {
        Mh = h2;
        mh = h1;
    }

    if (m1>m2) {
        Mm = m1;
        mm = m2;
    }
    if (m1<m2) {
        Mm = m2;
        mm = m1;
    }

    printf("\nA soma da idade do homem mais velho, de %i anos, com a mulher mais nova, de %i anos, é de %i.\n", Mh, mm, Mh+mm);
    printf("O produto da idade do homem mais novo, de %i anos, com a mulher mais velha, de %i anos, é de %i.\n", mh, Mm, mh*Mm);
}