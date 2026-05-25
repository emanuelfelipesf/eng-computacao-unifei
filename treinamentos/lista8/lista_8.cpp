#include <iostream>
#include <cctype>
#include <cstdio>
#include <limits>
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

struct Vogais
{
    int a = 0, e = 0, i = 0, o = 0, u = 0;
};
void manipularFrase(Vogais &vogal, string &frase);
void questao5()
{
    string frase;
    Vogais vg;

    cout << "Frase: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, frase);

    frase = inverterString(frase);
    manipularFrase(vg, frase);

    cout << "Frase final: " << frase << endl << "Vogais: " << "\n\t a: " << vg.a << "\n\t e: " << vg.e << "\n\t i: " << vg.i << "\n\t o: " << vg.o << "\n\t u: " << vg.u;
}

void manipularArquivo(string &nome);
void questao6()
{
    string nome;

    cout << "Arquivo .gif: ";
    cin >> nome;

    manipularArquivo(nome);

    cout << nome;
}

void maiusculasMinusculas(string &palavra);
void questao7()
{
    string palavra;

    cout << "Palavra: ";
    cin >> palavra;

    maiusculasMinusculas(palavra);
    cout << "Palavra alterada: " << palavra;
}

struct Vetores
{
    char v1[20], v2[10];
};
void comprimentos(Vetores &vtrs);
void questao8()
{
    Vetores vt;

    for (int i = 0; i < 20; i++)
    {
        cout << i + 1 << ": ";
        cin >> vt.v1[i];
    }
    
    comprimentos(vt);

    for (int i = 0; i < 10; i++)
    {
        cout << vt.v2[i] << endl;
    }
    
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
void manipularFrase(Vogais &vogal, string &frase)
{
    for (int i = 0; i < frase.size(); i++)
    {
        char letra = tolower(frase[i]);
        switch (letra)
        {
        case 'a':
            vogal.a++;
            frase[i] = '?';
            break;
        case 'e':
            vogal.e++;
            frase[i] = '?';
            break;
        case 'i':
            vogal.i++;
            frase[i] = '?';
            break;
        case 'o':
            vogal.o++;
            frase[i] = '?';
            break;
        case 'u':
            vogal.u++;
            frase[i] = '?';
            break;
        
        default:
            break;
        }
    }
    
}
void manipularArquivo(string &nome)
{
    string nomeNovo;

    for (int i = 0; i < nome.size() - 3; i++)
    {
        nomeNovo += nome[i];
    }    
    
    nome = nomeNovo.append("bmp");
}
void maiusculasMinusculas(string &palavra)
{
    for (int i = 0; i < palavra.size(); i++)
    {
        if (isupper(palavra[i]))
        {
            palavra[i] = tolower(palavra[i]);
        }
        else
        {
            palavra[i] = toupper(palavra[i]);
        }
    }
}
void comprimentos(Vetores &vtrs)
{
    for (int i = 9; i < 20; i++)
    {
        vtrs.v2[i] = vtrs.v1[i];
    }
}

