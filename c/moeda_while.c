#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    int i = 0, resultado = 0;

    // Gera um número aleatório (0 ou 1)
    while (i < 10){
        printf("Rodada %d\n", i + 1);
        resultado = rand() % 2;

        // Exibe o resultado
        if (resultado == 0) {
            printf("Resultado: Cara\n");
        } else {
            printf("Resultado: Coroa\n");
        }
        i++;
    }
    return 0;
}