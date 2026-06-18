#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char letras[6], *p = &letras[5];

    for (int i = 0; i < 6; i++)
    {
        cin >> letras[i];
    }
    for (int j = 0; j < 6; j++)
    {
        cout << *p << " ";
        p--;
    }
    cout << endl;
    
    return 0;
}
