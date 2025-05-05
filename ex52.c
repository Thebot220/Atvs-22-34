#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float s, h, p;

    printf("Informe o seu sexo: [F:1 / M:2]\n");
    printf("R: ");
    scanf("%f", &s);

    printf("Agora informe a sua altura em metros: ");
    scanf("%f", &h);

    if (s==1) {
        p = (72.7*h)-58;
    }

    if (s==2) {
        p = (62.1*h)-44.7;
    }

    printf("O seu peso ideal é de %.2fKg.", p);
}