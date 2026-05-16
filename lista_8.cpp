#include <iostream>
using namespace std;

int contarCaracter(string &palavra);
void questao1()
{
    string palavra;

    cout << "Palavra: "; cin >> palavra;
    int quantidade = contarCaracter(palavra);
    cout << "Quantidade: " << quantidade << endl << "Palavra modificada: " << palavra;
}

string nomeDoMes();
string abreviarMes(string mes);
void mes(string mes_abreviado);
void questao2()
{
    string mes_escolhido = nomeDoMes();
    string mesAbreviado = abreviarMes(mes_escolhido);
    mes(mesAbreviado);
}

void cidadesIguais(string cid_nascimento, string cid_atual);
void questao3()
{
    string cid_nascimento, cid_atual;
    cout << "Escreva o nome da sua cidade de nascimento: "; cin >> cid_nascimento;
    cout << "Escreva o nome da sua cidade atual: "; cin >> cid_nascimento;

}

int main()
{
    bool loop = true;
    while (loop)
    {
        int questao;
        cout << endl << "Digite o numero da questao (digite 0 para finalizar): "; cin >> questao; 
        switch (questao)
        {
        case 0:
            cout << "Encerrando...";
            loop = false;
            break;

        case 1:
            questao1();
            break;

        case 2:
            questao2();
            break;

        case 3:
            questao3();
            break;
        
        default:
            cout << "Invalido" << endl;
            break;
        }
    }
    

    return 0;
}

int contarCaracter(string &palavra)
{
    int cont = 0;
    for (int i = 0; i < palavra.size(); i++)
    {
        char letra = palavra[i];
        if (letra == 'a')
        {
            cont++;
            palavra[i] = 'b';
        }
    }
    
    return cont;
}

string nomeDoMes()
{
    string mes;

    cout << "Digite o mes: "; cin >> mes;

    return mes;
}
string abreviarMes(string mes)
{
    char mesAbreviado[4];

    for (int i = 0; i < 3; i++)
    {
        mesAbreviado[i] = mes[i];
    }
    mesAbreviado[3] += '.';
    
    return (string)mesAbreviado;
}
void mes(string mes_abreviado)
{
    cout << mesAbreviado;
}
void cidadesIguais(string cid_nascimento, string cid_atual)
{
    if (cid_nascimento == cid_atual)
    {
        cout << "Sao cidades iguais";
    }
    else
    {
        cout << "Nao sao iguais";
    }
    
}
