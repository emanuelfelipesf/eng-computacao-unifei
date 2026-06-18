#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Numero impar: ";
    cin >> n;
    
    for (int i = 0; i < (int)n/2 + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
        if (j == i)
        {
            for (int k = 0; k < n; k++)
            {
                cout << k + 1 << " ";
            }
        }
        else 
        { 
            cout << " ";
        }
        }
        
        cout << endl;
    }
    
    return 0;
}
