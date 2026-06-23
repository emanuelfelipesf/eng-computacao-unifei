#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Quantidade de elementos: "; cin >> n;
    int *vetor = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Elementos (separe-os por espaco): ";
        cin >> vetor[i];
    }

    for (int i = 1; i <= n; i++)
    {
        int temp = vetor[i - 1];
        if (temp > vetor[i])
        {
            vetor[i-1] = vetor[i];
            vetor[i] = temp;
        }
    }
    cout << vetor[n-2];
    delete[] vetor;
    
    return 0;
}
