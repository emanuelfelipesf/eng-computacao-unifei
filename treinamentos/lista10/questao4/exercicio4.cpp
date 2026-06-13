#include <iostream>
using namespace std;

int somaDiagonalPrincipal(const int *mat, int n) {
    int soma = 0;
    const int *p = mat; // ponteiro no elemento (0,0)

    // Para ir de (i,i) para (i+1,i+1), anda (n+1) posições no bloco 1D.
    for (int i = 0; i < n; i++) {
        soma += *p;
        p += (n + 1);
    }

    return soma;
}
    
int main() {
    int n;
    cout << "Tamanho: ";
    cin >> n;

    // Matriz NxN armazenada em bloco contíguo (ponteiro)
    int *matriz = new int[n * n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento " << i+1 << j+1 << ": ";
            matriz[i * n + j] = 0;
            cin >> matriz[i * n + j];
        }
    }

    int soma = somaDiagonalPrincipal(matriz, n);
    cout << "Soma da diagonal principal: " << soma << "\n";

    delete[] matriz;
    return 0;
}

