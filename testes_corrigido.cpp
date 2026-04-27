#include <iostream>
using namespace std;

int main()
{
    bool loop = true;
    int s = 0, f = 0, soma_filhos = 0;
    float salario, filho, soma_salarios = 0, maior_salario = 0, qnt_salInferior = 0;

    do
    {
        cout << "Salario (0 para sair): ";
        cin >> salario;
        if (salario == 0)
        {
            break;  // Sai imediatamente sem processar o 0
        }
        cout << "Numero de filhos: ";
        cin >> filho;

        soma_salarios += salario;
        soma_filhos += filho;

        if (maior_salario < salario)
        {
            maior_salario = salario;
        }
        if (salario < 650)
        {
            qnt_salInferior++;
        }
        
        s++;
        f++;
    } while (loop);
    
    if (s > 0) {
        cout << "Media salarial da populacao: " << soma_salarios/s << endl;
        cout << "Media numero de filhos: " << soma_filhos/f << endl;
        cout << "Maior salario: " << maior_salario << endl;
        cout << "Porcentagem salario inferior: " << qnt_salInferior/s * 100 << endl;
    } else {
        cout << "Nenhum dado foi inserido." << endl;
    }

    return 0;
}

