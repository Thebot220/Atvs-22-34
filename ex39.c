#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float A, B, C;

    printf("Informe a primeira medida em cm: ");
    scanf("%f", &A);
    printf("Informe a segunda medida em cm: ");
    scanf("%f", &B);
    printf("Informe a terceira medida em cm: ");
    scanf("%f", &C);

    if ((A+B)>=C && (A+C)>=B && (B+C)>=A) {
        printf("Com as medidas %.2f, %.2f e %.2f � poss�vel formar um tri�ngulo.", A, B, C);
    }

    else {
        printf("N�o � poss�vel formar um tri�ngulo com as medidas dadas.");
    }
}