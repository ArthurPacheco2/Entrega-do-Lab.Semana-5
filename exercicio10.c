#include <stdio.h>

void uniao(int A[], int tamA, int B[], int tamB) {
    printf("A ∪ B = {");

    // Imprime os elementos de A
    for (int i = 0; i < tamA; i++) {
        printf("%d", A[i]);
        if (i < tamA - 1) {
            printf(", ");
        }
    }

    // Verifica e imprime os elementos de B que não estão em A
    for (int i = 0; i < tamB; i++) {
        int encontrado = 0;
        for (int j = 0; j < tamA; j++) {
            if (B[i] == A[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            printf(", %d", B[i]);
        }
    }

    printf("}\n");
}

int main() {
    int A[] = {7, 2, 5, 8, 4};
    int tamA = sizeof(A) / sizeof(A[0]);

    int B[] = {4, 2, 9, 5};
    int tamB = sizeof(B) / sizeof(B[0]);

    uniao(A, tamA, B, tamB);

    int C[] = {3, 9, 11};
    int tamC = sizeof(C) / sizeof(C[0]);

    int D[] = {2, 6, 1};
    int tamD = sizeof(D) / sizeof(D[0]);

    uniao(C, tamC, D, tamD);

    return 0;
}
