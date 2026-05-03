#include <iostream>
using namespace std;

float expressao(int n, int X);

int main() {
    int n, X;
    cin >> n >> X;
    cout << expressao(n, X);
    return 0;
}

float expressao(int n, int X) {
    int divisores[4] = {-1, 2, -3, 4};
    float soma = 0;
    int pos = 0;
    int dir = 1;
    for (int i = 0; i < n; i++) {
        soma += (i + 1) * X / divisores[pos];
        int next_pos = pos + dir;
        if (next_pos < 0 || next_pos > 3) {
            dir = -dir;
            next_pos = pos + dir;
        }
        pos = next_pos;
    }
    return soma;
}
