#include <iostream>
using namespace std;

float expressao(int n, int X);
int main()
{
    int n, X;
    cin >> n >> X;

    cout << expressao(n, X);

    return 0;
}

float expressao(int n, int X)
{
    int divisores[4] = {-1, 2, -3, 4};
    float soma = 0;
    int pos = 0, dir = 1;

    for (int i = 0; i < n; i++)
    {
        soma += (i + 1) * X / divisores[pos];
        int next_pos = pos + dir;
        if (next_pos < 0 || next_pos > 3)
        {
            dir = -dir;
            next_pos = pos + dir;
        }
        pos = next_pos;
    }
    
    return soma;
}

// int divisores[4] = {-1, 2, -3, 4};
// float soma = 0;
// int pos = 0;
// int dir = 1;

// for (int i = 0; i < n; i++)
// {
//     int next_pos = pos + dir;

//     soma += (i + 1) * X / divisores[pos];

//     if (next_pos < 0 || next_pos > 3) {
//         dir *= -1;
//         next_pos = pos + dir;
//     }

//     pos = next_pos;
// }

// Desenvolva um programa que leia o número de termos n e um valor positivo para X, passe tais
// parâmetros para um função que irá calcular o valor da série dado abaixo e retornar o valor
// processado, o qual deverá ser impresso na tela.
// S = (X/-1) + (2X/2) + (3X/-3) + (4X/4) + (5X/-3) + (6X/2) + (7X/-1) + (8X/2) ...

// int main(int argc, char const *argv[])
// {
//     int vetor[15], vetor2[15], n = 15;

//     return 0;
// }

// float produtoEscalar(float vetor[], int n, float vetor2[], int m)
// {
//     float produto = 0, angulo;

//     for (int i = 0; i < n; i++)
//     {
//         produto += vetor[i] * vetor2[i];
//     }

//     return angulo;
// }