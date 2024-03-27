#include <stdio.h>

#define TAM 5

void inverterVetor(int v[]) {
    for (int i = 0; i < TAM / 2; i++) {
        int temp = v[i];
        v[i] = v[TAM - 1 - i];
        v[TAM - 1 - i] = temp;
    }
}

int main() {
    int V[TAM] = {4, 9, 10, 8, 6};

    printf("Vetor original: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    }

    inverterVetor(V);

    printf("\nVetor invertido: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    }

    return 0;
}
