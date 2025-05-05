#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int hi, hf, e, v;
    printf("Informe a hora de início da partida: ");
    scanf("%i", &hi);
    printf("Informe a hora final da partida: ");
    scanf("%i", &hf);
    printf("A partida foi finalizada no dia seguinte?\n");
    printf("[0- Não / 1- Sim]\n");
    printf("R: ");
    scanf("%i", &e);

    if (e==0) {
        v = hf-hi;
    }
    if (e==1) {
        v = (24-hi)+hf;
    }

    if (v<=24) {
        printf("A partida durou %i horas.", v);
    }
    else {
        printf("A partida deveria ter 24 horas. %i horas totais de partida não é uma informação válida.", v);
    }
}