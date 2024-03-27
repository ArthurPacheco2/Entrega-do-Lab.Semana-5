int busca_qtde(int v[], int n, int e) {
    int qtde = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            qtde++;
        }
    }
    return qtde;
}
