#include <stdio.h>

int main() {
    char c = 'a';
    int numero_inteiro = 0;
    float numero_real_simples = 0;
    double numero_real_dupla = 0;

    printf("Digite um caractere: ");
    scanf("%c", &c);
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero_inteiro);
    printf("Digite um numero real (float): ");
    scanf("%f", &numero_real_simples);
    printf("Digite um numero real (double): ");
    scanf("%lf", &numero_real_dupla);
    printf("\n");
    printf("Caractere digitado: %c\n", c);
    printf("Inteiro digitado: %d\n", numero_inteiro);
    printf("Numero real (float) digitado: %.10f\n", numero_real_simples);
    printf("Numero real (double) digitado: %.10f\n", numero_real_dupla);

    return 0;
}