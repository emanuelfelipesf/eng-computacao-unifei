#include <iostream>
using namespace std;

template <class TipoItem>
class No{
  private:
    No *prox;
    TipoItem item;
  
  public:
    No(){
      prox = NULL;
    }
    No(TipoItem x){
      item = x;
      prox = NULL;
    }

    TipoItem getItem(){
      return item;
    }
    No* getProx(){
      return prox;
    }

    void setItem(TipoItem x){
      item = x;
    }
    void setProx(No *p){
      prox = p;
    }
};

template <class TipoItem>
class Pilha {
    private:
        No<TipoItem> *topo;
        int quantidade;
    
    public:
        Pilha()
        {
            topo = NULL;
            quantidade = 0;
        }
        Pilha(TipoItem x)
        {
            No<TipoItem> *p;
            p = new No<TipoItem> (x);

            topo = p;
            quantidade = 1;
        }

        bool Vazia()
        {
            return topo == NULL;
        }
        void Empilhar(TipoItem x)
        {
            No<TipoItem> *p;
            p = new No<TipoItem> (x);

            if (!Vazia())
            {
                p->setProx(topo);
            }
            topo = p;
            quantidade++;

            cout << "\nItem " << x << " empilhado!\n";
        }
        void Imprimir()
        {
            No<TipoItem> *p;
            p = topo;

            if (Vazia())
            {
                cout << "\nPilha vazia!\n";
                return;
            }

            while (p != NULL)
            {
                cout << " " << p->getItem();
                p = p->getProx();
            }
            cout << endl;
        }
        void Desempilhar()
        {
            No<TipoItem> *p;
            p = topo;

            topo = topo->getProx();

            delete p;
            cout << "\nItem desempilhado!\n";
        }

        TipoItem itemTopo()
        {
            return topo->getItem();
        }

        ~Pilha()
        {
            No<TipoItem> *p;
            
            while (topo != NULL)
            {
                p = topo;

                topo = topo->getProx();

                delete p;
            }

            quantidade = 0;
            cout << "\nPrograma encerrado!\n";
        }
};

int Menu()
{
    int resp;
    cout << "\n====\tMENU\t====\n";
    cout << "\t[1] Empilhar Item\n\t[2] Desempilhar Item\n\t[3] Imprimir\n\t[4] Retornar Item Topo\n\t[0] Sair\nOpcao: ";
    cin >> resp;
    
    return resp;
}

int main()
{
    Pilha<int> A;
    int resp;

    do {
        resp = Menu();

        switch (resp)
        {
            case 1:
                int i;

                cout << "Item a ser empilhado: ";
                cin >> i;
                A.Empilhar(i);

                break;
            
            case 2:
                A.Desempilhar();
                break;
            
            case 3:
                cout << "\nPilha:\n\t";
                A.Imprimir();

                break;
            
            case 4:
                if (A.Vazia())
                {
                    cout << "\nPilha vazia!\n";
                } else {
                cout << "\nItem Topo: " << A.itemTopo() << endl;
                }

                break;

            default:
                cout << "Entrada invalida!\n";
                break;
        }
    } while (resp != 0);

    return 0;
}