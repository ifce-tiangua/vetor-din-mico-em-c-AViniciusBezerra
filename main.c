#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;
    int *vetor;

    scanf("%d", &tamanho);
    vetor = (int *)malloc(tamanho * sizeof(int));
    
    if (tamanho <= 0) {
        printf("[vazio]\n");
        return 0;
    }
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if( i < tamanho - 1)
            printf(", ");
    }
    printf("]");
    
    free(vetor);
    vetor = NULL;
    return 0;
}
