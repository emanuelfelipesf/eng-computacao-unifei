#include <iostream>
#include <cctype>
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
int segundaCidade(string &cidade);
void questao3()
{
    string cid_nascimento, cid_atual;

    cout << "Escreva o nome da sua cidade de nascimento: "; cin >> cid_nascimento;
    cout << "Escreva o nome da sua cidade atual: "; cin >> cid_atual;

    cidadesIguais(cid_nascimento, cid_atual);
    int vogais = segundaCidade(cid_atual);

    cout << endl << "Quantidade de vogais: " << vogais << endl << "Cidade alterada: " << cid_atual;
}

bool palindromo(string palavra);
void questao4()
{
    string palavra;
    cout << "Palavra: "; cin >> palavra;
    if (palindromo(palavra))
    {
        cout << "E palindroma";
    }
    else
    {
        cout << "Nao e palindroma";
    }
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

        case 4:
            questao4();
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
    cout << mes_abreviado;
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
int segundaCidade(string &cidade)
{
    int qntd_vogais = 0;
    for (int i = 0; i < cidade.size(); i++)
    {
        char letra = tolower(cidade[i]);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        {
            qntd_vogais++;
            cidade[i] = '?';
        }
    }
    
    return qntd_vogais;
}
bool palindromo(string palavra)
{
    char contrario[palavra.size()];

    for (int i = 0; i < palavra.size(); i++)
    {
        palavra[i] = tolower(palavra[i]);
        contrario[i] = palavra[palavra.size() - i];
    }

    if (palavra == (string)contrario)
    {
        return true;
    }
    else
    {
        return false;
    }
}

