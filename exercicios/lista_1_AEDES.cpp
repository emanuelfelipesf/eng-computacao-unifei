#include <iostream>
using namespace std;

class Retangulo {
    private:
        float largura, altura;
    public:
        Retangulo()
        {
            cin >> largura;
            cin >> altura;
        }
        Retangulo(int l, int h)
        {
            largura = l;
            altura = h;
        }
        float CalcularArea()
        {
            return largura * altura;
        }
        float CalcularPerimetro()
        {
            return (largura * 2) + (altura * 2);
        }
        void Aprensentar()
        {
            cout << "Altura: " << altura << "\tLargura: " << largura << endl;
            cout << "Area: " << CalcularArea() << "\tPerimetro: " << CalcularPerimetro() << endl;
        }
};

int main()
{
    Retangulo A(5, 10);

    A.Aprensentar();

    return 0;
}