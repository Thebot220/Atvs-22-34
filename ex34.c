#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int qa, qM, qm, qme;
    printf("Informe a quantidade atual do produto: ");
    scanf("%i", &qa);
    printf("Informe a quantidade m�xima do produto: ");
    scanf("%i", &qM);
    printf("Informe a quantidade m�nima do produto: ");
    scanf("%i", &qm);
    qme = (qM+qm)/2;

    if (qa>qme) {
        printf("\nVoc� possui %i unidades do produto a mais que a quantidade m�dia.\n", qa-qme);
        printf("N�o � necess�rio efetuar compra.");
    }
    else {
        printf("\nVoc� possui %i unidades do produto a menos que a quantidade m�dia.\n", qme-qa);
        printf("� necess�rio efetuar compra.");
    }
}