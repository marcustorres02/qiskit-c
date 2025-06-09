#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    int resultado = 0;

    // Gera um número aleatório (0 ou 1)
    for(int i = 0; i < 10; i++) {
        printf("Rodada %d\n", i + 1);
        resultado = rand() % 2;

        // Exibe o resultado
        if (resultado == 0) {
            printf("Resultado: Cara\n");
        } else {
            printf("Resultado: Coroa\n");
        }
    }
    return 0;
}