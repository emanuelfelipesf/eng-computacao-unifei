#include <iostream>
using namespace std;
const int MAXTAM = 100;

class Paciente {
    private:
        int id;
        string nome;
    public:
        Paciente(int id_p, string nome_p)
        {
            id = id_p;
            nome = nome_p;
        }
        Paciente()
        {
            id = 0;
            nome = " ";
        }

        int getID()
        {
            return id;
        }
        string getNOME()
        {
            return nome;
        }
        void Ler()
        {
            cout << "Digite o ID: "; cin >> id;
            cout << "Digite o NOME: "; cin >> nome;
        }
        void Imprimir()
        {
            cout << "Nome: " << nome;
            cout << "\n\tID: " << id;
        }
};

class Fila {
    private:
        int inicio, fim, quantidade;
        Paciente *itens;
    public:
        Fila()
        {
            inicio = 0;
            fim = 1;
            quantidade = 0;
            itens = new Paciente[MAXTAM];
        }

        void Criar()
        {
            inicio = 0;
            fim = 1;
            quantidade = 0;
        }
        bool Vazia()
        {
            return inicio == fim;
        }
        void Enfileirar(Paciente x)
        {
            itens[fim-1].id = x.id;
            itens[fim-1].nome = x.nome;
            fim++;
        }
        void Desinfileirar()
        {
            if (Vazia())
            {
                cout << "Fila vazia!" << endl;
            }
            else
            {
                inicio++;
            }
        }
        void Imprimir()
        {
            for (int i = inicio; i != fim; (i + 1) % MAXTAM)
            {
                cout << "Nome: " << itens[i].nome;
                cout << "\n\tID: " << itens[i].id << endl;
            }
        }
        int Tamanho()
        {
            return quantidade;
        }
        Paciente ItemFrente()
        {
            return itens[inicio].id;
        }

        void Unificar(Fila &F1,Fila &F2, Fila &F3)
        {
            Paciente P2, P3;
            while (!F2.Vazia() && !F3.Vazia())
            {
                P2 = F2.ItemFrente();
                P3 = F3.ItemFrente();

                if (P2.getID() < P3.getID())
                {
                    F1.Enfileirar(P2);
                    F2.Desinfileirar();
                } 
                else
                {
                    F1.Enfileirar(P3);
                    F3.Desinfileirar();
                }
            }
            while (!F2.Vazia())
            {
                P2 = F2.ItemFrente();

                F1.Enfileirar(P2);
                F2.Desinfileirar();
            }
            while (!F3.Vazia())
            {
                P3 = F3.ItemFrente();

                F1.Enfileirar(P3);
                F3.Desinfileirar();
            }
        }

        ~Fila()
        {
            delete [] itens;
        }
};

int main()
{
    Fila Unimed;
    Unimed.criar();

    Paciente um(1, "Rafael"), dois(2, "Pedro"), tres(3, "Maria");

    Unimed.Enfileirar(um);
    Unimed.Enfileirar(dois);
    Unimed.Enfileirar(tres);

    Unimed.Imprimir();
    cout << "Primeiro da fila: " << Unimed.ItemFrente() << endl;

    Unimed.Desinfileirar();
    Unimed.Desinfileirar();

    return 0;
}
