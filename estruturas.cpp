#include <iostream>

struct giovani
{
    int x, y[10];
};

int main(int argc, char const *argv[])
{
    giovani k;
    
    std::cout << sizeof(giovani);

    return 0;
}
