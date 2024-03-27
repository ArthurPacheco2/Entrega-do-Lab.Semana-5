#include <stdio.h>

void diferenca(int A[], int tamA, int B[], int tamB) {
    printf("A - B = {");

    // Verifica cada elemento de A
    for (int i = 0; i < tamA; i++) {
        // Verifica se o elemento de A está em B
        int encontrado = 0;
        for (int j = 0; j < tamB; j++) {
            if (A[i] == B[j]) {
                encontrado = 1;
                break; // Para a busca em B, pois já encontrou o elemento
            }
        }
        if (!encontrado) {
            printf("%d", A[i]);
            if (i < tamA - 1) {
                printf(", ");
            }
        }
    }

    printf("}\n");
}

int main() {
    int A[] = {7, 2, 5, 8, 4};
    int tamA = sizeof(A) / sizeof(A[0]);

    int B[] = {4, 2, 9, 5};
    int tamB = sizeof(B) / sizeof(B[0]);

    diferenca(A, tamA, B, tamB);

    int C[] = {3, 9, 11};
    int tamC = sizeof(C) / sizeof(C[0]);

    int D[] = {2, 6, 1};
    int tamD = sizeof(D) / sizeof(D[0]);

    diferenca(C, tamC, D, tamD);

    return 0;
}
