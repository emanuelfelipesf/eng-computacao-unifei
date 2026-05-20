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

string inverterString(string palavra);
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

int contarVogais(string frase);
string alterarString(string frase);
void impressao(int quantidade, string frase);
void questao5()
{
    string frase;
    int quantidade = 0;

    cout << "Frase: ";
    cin >> frase;

    frase = inverterString(frase);
    quantidade = contarCaracter(frase);
    frase = alterarString(frase);
    impressao(quantidade, frase);
}

void questao6()
{

}

void questao7()
{

}

void questao8()
{

}

void questao9()
{

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

        case 5:
            questao5();
            break;

        case 6:
            questao6();
            break;

        case 7:
            questao7();
            break;

        case 8:
            questao8();
            break;

        case 9:
            questao9();
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
string inverterString(string palavra)
{
    int i = 0, j = palavra.length() - 1;
    string invertida = palavra;

    while (i < j)
    {
        swap(invertida[i], invertida[j]);
        i++; j--;
    }
    
    for (int i = 0; i < palavra.size(); i++)
    {
        invertida[i] = tolower(invertida[i]);
    }
    
    return invertida;
}
bool palindromo(string palavra)
{
    string invertida = inverterString(palavra);

    for (int i = 0; i < palavra.size(); i++)
    {
        palavra[i] = tolower(palavra[i]);
    }

    return (palavra == invertida) ? true : false;
}
int contarVogais(string frase)
{
    int cont = 0;
    for (int i = 0; i < frase.size(); i++)
    {
        char letra = tolower(frase[i]);
        if (letra == 'a' || letra == 'o' || letra == 'i' || letra == 'e' || letra == 'u')
        {
            cont++;
        }
    }
    
    return cont;
}
string alterarString(string frase)
{
    for (int i = 0; i < frase.size(); i++)
    {
        char letra = tolower(frase[i]);
        if (letra == 'a' || letra == 'o' || letra == 'i' || letra == 'e' || letra == 'u')
        {
            frase[i] = '?';
        }
    }

    return frase;
}
void impressao(int quantidade, string frase)
{
    cout << frase << endl << "Quantidade de vogais: " << quantidade;
}
