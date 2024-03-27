#include <stdbool.h>

bool crescente(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (v[i] >= v[i + 1]) {
            return false;
        }
    }
    return true;
}
