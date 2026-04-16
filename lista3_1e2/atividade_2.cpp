#include <iostream>
using namespace std;

bool validarinfo(float altura, string sexo)
{
    if (altura <= 0 || (sexo != "m" && sexo != "f"))
    {
        return false;
    }
    else
    {
        return true;
    }
}

float peso_ideal(float altura, string sexo)
{
    if (sexo == "m")
    {
        return (72.7 * altura) - 58;
    }
    else
    {
        return (62.1 * altura) - 44.7;
    }
}

int main()
{
    float altura;
    string sexo;

    cout << "digite seu sexo (m | f): ";
    cin >> sexo;
    cout << "digite sua altura (ex.: 1.78): ";
    cin >> altura;

    if (validarinfo(altura, sexo))
    {
        cout << "Seu peso ideal e: " << peso_ideal(altura, sexo) << "kg";
    }
    else
    {
        cout << "Valor(es) invalido(s)!";
    }
}