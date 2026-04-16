#include <iostream>
#include <cmath>
using namespace std;

bool validaEntrada(float peso, float altura);
float calculaIMC(float peso, float altura);
void exibeClassificacaoIMC(float imc);
void exibeTabelaIMC();

int main()
{
    float altura, peso;

    cout << "Digite sua altura (em metros): ";
    cin >> altura;
    cout << "Digite seu peso (em kg): ";
    cin >> peso;

    if (validaEntrada(peso, altura))
    {
        float imc = calculaIMC(peso, altura);
        cout << "-=-=-=-=-=-=" << endl;
        cout << "Classificacao IMC: ";
        exibeClassificacaoIMC(imc);
        cout << "\n-=-=-=-=-=-=" << endl;
        cout << "\nTabela IMC:\n";
        exibeTabelaIMC();
    }
    else
    {
        cout << "Valor(es) invalido(s)!";
    }

    return 0;
}

bool validaEntrada(float peso, float altura)
{
    if (peso <= 0 || altura <= 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

float calculaIMC(float peso, float altura)
{
    return peso / pow(altura, 2);
}

void exibeClassificacaoIMC(float imc)
{
    if (imc < 18.5)
    {
        cout << "Abaixo do peso";
    }
    else if (imc < 25.0)
    {
        cout << "Peso ideal";
    }
    else if (imc < 30.0)
    {
        cout << "Sobrepeso";
    }
    else if (imc < 35.0)
    {
        cout << "Obesidade grau I";
    }
    else if (imc < 40)
    {
        cout << "Obesidade grau II";
    }
    else
    {
        cout << "Obesidade grau III";
    }
}

void exibeTabelaIMC()
{
    cout << "   IMC     |   Classificacao   " << endl;
    cout << " < 18.5    |   Abaixo do peso   " << endl;
    cout << "18.5 a 25  |     Peso ideal   " << endl;
    cout << " 25 a 30   |     Sobrepeso   " << endl;
    cout << " 30 a 35   |  Obesidade grau I   " << endl;
    cout << " 35 a 40   |  Obesidade grau II   " << endl;
    cout << "  > 40     |   Obesidade grau III   " << endl;
}