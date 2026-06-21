#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Numero impar: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Entrada invalida!";
        return 0;
    }

    int meio = (int)n / 2 + 1, aux = 0;
    for (int i = 1; i <= meio; i++)
    {
        for (int j = 0; j < aux; j++)
        {
            cout << " " << " ";
        }
        aux++;

        for (int j = i; j <= n; j++)
        {
            cout << j << " ";
        }
        n--;
        cout << endl;
    }

    return 0;
}
