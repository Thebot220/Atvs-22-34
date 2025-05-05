#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float n1, n2, m;

    printf("Informe a sua nota da primeira prova: ");
    scanf("%f", &n1);
    printf("Informe a sua nota da segunda prova: ");
    scanf("%f", &n2);

    m = (n1+n2)/2;

    if (m>=6) {
        printf("PARABÉNS! Você foi aprovado!");
    }
    if (m<6) {
        printf("Você foi REPROVADO. Estude Mais...");
    }
}