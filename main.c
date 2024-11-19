#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int *vetor;

    scanf("%d", &tamanho);
    vetor = (int *)malloc(tamanho * sizeof(int));
    
    if (tamanho <= 0) {
        printf("[vazio]\n");
        return 0;
    }
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
    vetor = NULL;

    return 0;
}
