#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Quantidade de elementos: "; cin >> n;
    int *vetor = new int[n], maior = vetor[0];

    for (int i = 1; i <= n; i++)
    {
        int temp = vetor[i - 1];
        if (maior < vetor[i])
        {
            
        }
        
    }
    
    
    return 0;
}
