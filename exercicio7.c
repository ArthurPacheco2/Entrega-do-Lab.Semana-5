#include <stdbool.h>

int quantidade_valores_diferentes(int v[], int n) {
    int qtde_diferentes = 0;
    bool encontrado = false;
    int diferentes[n]; // Vetor auxiliar para armazenar os valores diferentes

    // Percorre o vetor de entrada
    for (int i = 0; i < n; i++) {
        encontrado = false;

        // Verifica se o valor já foi contado como diferente
        for (int j = 0; j < qtde_diferentes; j++) {
            if (v[i] == diferentes[j]) {
                encontrado = true;
                break;
            }
        }

        // Se o valor não foi encontrado no vetor de diferentes, adiciona ao vetor
        if (!encontrado) {
            diferentes[qtde_diferentes] = v[i];
            qtde_diferentes++;
        }
    }

    return qtde_diferentes;
}
