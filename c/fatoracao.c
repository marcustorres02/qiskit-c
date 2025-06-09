#include <stdio.h>
#include <time.h>

void fatorar(int n) {
    printf("Fatores primos do numero %d: ", n);

    // Fator par
    while (n % 2 == 0) {
        printf("2 ");
        n = n/2;
    }

    // Fatores ímpares
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n/i;
        }
    }

    // Número primo maior que 2
    if (n > 2) {
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int numero = 0;
    
    while(numero == 0) {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    }

    // Tempo inicial
    clock_t inicio = clock();

    // Chamada de função de fatoração
    fatorar(numero);

    // Tempo final
    clock_t fim = clock();

    // Tempo em segundos
    double tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo de execucao: %f segundos\n", tempo_gasto);

    return 0;
}
