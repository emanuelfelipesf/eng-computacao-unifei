#include <iostream>
using namespace std;

int main()
{
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, **p;
    *p = matriz[0];

    for (int i = 0; i < 9; i++)
    {
        cout << *(*p + i) << " ";
    }
    cout << endl;
    
    
    return 0;
}
