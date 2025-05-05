#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    char nome[50];
    float sexo, h, pi;
    printf("Informe o seu nome: ");
    gets(nome);
    printf("Informe o seu sexo: [M- 0/N- 1]\n");
    printf("R: ");
    scanf("%f", &sexo);
    printf("Informe a sua altura em metros: ");
    scanf("%f", &h);

    if (sexo==0) {
        pi = (72.7*h)-58;
    }
    if (sexo==1) {
        pi = (62.1*h)-44.7;
    }
printf("%s, O seu peso ideal é de %.2fKg.", nome, pi);
}