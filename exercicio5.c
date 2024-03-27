int busca_ultimo(int v[], int n, int e) {
    int indice = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            indice = i;
        }
    }
    return indice;
}
