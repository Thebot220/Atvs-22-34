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
        printf("PARAB�NS! Voc� foi aprovado!");
    }
    if (m<6) {
        printf("Voc� foi REPROVADO. Estude Mais...");
    }
}