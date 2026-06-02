#include <iostream>
using namespace std;

struct Ponto
{
    int x, y, z;
};

int main(int argc, char const *argv[])
{
    Ponto p1 = {10, 20, 30}, *p = &p1;

    cout << p->x << endl;
    cout << (*p).y << endl;

    p->z += 100;

    cout << p1.z << endl;
    
    return 0;
}

// SAIDA: 10\n20\n130\n