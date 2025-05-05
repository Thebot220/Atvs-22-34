#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int qa, qM, qm, qme;
    printf("Informe a quantidade atual do produto: ");
    scanf("%i", &qa);
    printf("Informe a quantidade máxima do produto: ");
    scanf("%i", &qM);
    printf("Informe a quantidade mínima do produto: ");
    scanf("%i", &qm);
    qme = (qM+qm)/2;

    if (qa>qme) {
        printf("\nVocê possui %i unidades do produto a mais que a quantidade média.\n", qa-qme);
        printf("Não é necessário efetuar compra.");
    }
    else {
        printf("\nVocê possui %i unidades do produto a menos que a quantidade média.\n", qme-qa);
        printf("É necessário efetuar compra.");
    }
}