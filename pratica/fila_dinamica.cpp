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
class Fila
{
    private:
        No<TipoItem> *inicio, *fim;
        int quantidade;
    
    public:
        Fila()
        {
            inicio = NULL;
            fim = NULL;
            quantidade = 0;
        }
        
        void Criar()
        {
            inicio = NULL;
            fim = NULL;
            quantidade = 0;
        }
        bool Vazia()
        {
            return inicio == NULL;
        }

        void Enfileirar(TipoItem x)
        {
            No<TipoItem> *p;
            p = new No<TipoItem>(x);

            if (Vazia())
            {
                inicio = p;
            } else {
                fim->setProx(p);
            }

            quantidade++;
            fim = p;
        }
        void Desinfileirar()
        {
            if (Vazia())
            {
                cout << "\nFila vazia!\n";
                return;
            }

            No<TipoItem> *p;

            p = inicio;
            inicio = inicio->getProx();
            if (inicio == NULL)
            {
                fim = NULL;
            }

            delete p;
            quantidade--;
            cout << "\nItem desinfileirado!\n";
        }
        void Imprimir()
        {
            No<TipoItem> *p;
            p = inicio;

            if (Vazia())
            {
                cout << "\nFila vazia!\n";
            } else {
                cout << "| ";
                while(p != NULL)
                {
                    cout << p->getItem() << " | ";
                    p = p->getProx();
                }
                cout << endl;
            }
        }
        void Prioridade(TipoItem x)
        {
            No<TipoItem> *p, *ant;
            p = inicio;

            if (Vazia())
            {
                cout << "\nFila vazia!\n";
                return;
            }
            if (p->getItem() == x)
            {
                cout << "\nItem ja na primeira posicao!\n";
                return;
            }

            ant = inicio;
            p = p->getProx();
            while (p != NULL)
            {
                if (p->getItem() == x)
                {
                    break;
                }
                p = p->getProx();
                ant = ant->getProx();
            }
            if (p == NULL)
            {
                cout << "\nItem nao encontrado!\n";
                return;
            }

            ant->setProx(p->getProx());
            p->setProx(inicio);
            inicio = p;
            if (p == fim)
            {
                fim = ant;
            }
            cout << "\nItem " << x << " foi colocado na primeira posicao!\n";
        }

        TipoItem ItemFrente()
        {
            return inicio->getItem();
        }
        int Tamanho()
        {
            return quantidade;
        }

        ~Fila()
        {
            while(inicio != NULL)
            {
                No<TipoItem> *p;
                p = inicio;
                inicio = p->getProx();

                delete p;
            }
            fim = NULL;
            cout << "Programa encerrado!\n";
        }
};

int Menu()
{
    int resp;
    cout << "\n====\tMENU\t====\n";
    cout << "\t[1] Enfileirar Item\n\t[2] Desinfileirar Item\n\t[3] Imprimir\n\t[4] Retornar Item Frente\n\t[5] Prioridade\n\t[0] Sair\nOpcao: ";
    cin >> resp;
    
    return resp;
}

int main()
{
    Fila<int> A;
    int resp;

    do {
        resp = Menu();

        switch (resp)
        {
            case 1:
                int i;

                cout << "Item a ser enfileirado: ";
                cin >> i;
                A.Enfileirar(i);

                break;
            
            case 2:
                A.Desinfileirar();

                break;
            
            case 3:
                cout << "\nFila:\n\t";
                A.Imprimir();

                break;
            
            case 4:
                if (A.Vazia())
                {
                    cout << "\nFila vazia!\n";
                } else {
                cout << "\nItem Frente: " << A.ItemFrente() << endl;
                }

                break;
            
            case 5:
                int prioritario;
                cout << "Item a ter prioridade: ";
                cin >> prioritario;
                A.Prioridade(prioritario);
                
                break;
            default:
                cout << "Entrada invalida!\n";
                break;
        }
    } while (resp != 0);

    return 0;
}