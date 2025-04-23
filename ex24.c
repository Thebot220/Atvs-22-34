#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "1252");
    int m;
    float p;
    printf("Informe quantas maçãs você deseja comprar: ");
    scanf("%i", &m);

    if (m<12) {
        p = m*1.3;
    }
    else {
        p = m;
    }

    printf("%i maçãs vão te custas R$%.2f.\n", m, p);
}