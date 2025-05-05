#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "");
    char time1[50], time2[50], vencedor[50];
    int g1, g2, gv;

    printf("\nInforme o nome do primeiro time: ");
    scanf("%s", time1);
    printf("Informe a quantidade de gols do primeiro time: ");
    scanf("%i", &g1);

    printf("\nInforme o nome do segundo time: ");
    scanf("%s", time2);
    printf("Informe a quantidade de gols do segundo time: ");
    scanf("%i", &g2);

    if (g1==g2) {
        printf("\nHouve um empate.");
    }

    else {
       if (g1>g2) {
           strcpy(vencedor, time1);
           gv = g1;
       }
    
       if (g2>g1) {
            strcpy(vencedor, time2);
            gv = g2;
        }

        printf("\nO time vencedor foi o time %s, com %i gols.", vencedor, gv);
    }
}