#include <stdio.h>

int i, soma, avaliacoes, notas;
float media;

int main() {
    // Inicialização
    printf("Quantas avaliacoes deseja informar? ");
    scanf("%d", &avaliacoes);

    i = 0;        // Inicializa o contador
    soma = 0;     // Inicializa a soma das notas

    // Loop para leitura das notas
    while (i < avaliacoes) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &notas);  // Lê a nota
        soma += notas;        // Soma as notas
        i++;                  // Incrementa o contador
    }

    // Calcula a média
    media = (float)soma / avaliacoes;

    // Exibe o resultado
    printf("Sua media e: %.2f\n", media);

    return 0;
}
