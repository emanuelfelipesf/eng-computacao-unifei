#include <iostream>
#include <string>
using namespace std;

using tipoItem = char;
const int MAXTAM = 10;

class Pilha 
{
    private:
        int topo;
        tipoItem *itens;

    public:
        Pilha()
        {
            topo = 0;
            itens = new tipoItem[MAXTAM];
        }

        bool Vazia()
        {
            return topo == 0;
        }

        bool Cheia()
        {
            return topo == MAXTAM;
        }

        void Empilhar(tipoItem item)
        {
            if (Cheia())
                return;

            itens[topo] = item;
            topo++;
        }

        void Desempilhar()
        {
            if (!Vazia())
                topo--;
        }

        int Tamanho()
        {
            return topo;
        }

        ~Pilha()
        {
            delete[] itens;
        }
};

int main()
{
    string expressao;
    Pilha P;

    cin >> expressao;

    for (char c : expressao)
    {
        if (c == '(')
        {
            if (P.Cheia())
            {
                cout << "Pilha cheia!\n";
                break;
            }

            P.Empilhar(c);
        }
        else if (c == ')')
        {
            if (P.Vazia())
            {
                P.Empilhar(c);
                cout << "Pilha vazia!\n";
                break;
            }

            P.Desempilhar();
        }
    }

    if (P.Vazia())
    {
        cout << "Expressao valida!\n";
    }
    else
    {
        cout << "Expressao invalida!\n";
    }

    return 0;
}
