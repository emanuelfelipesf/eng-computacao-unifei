#include <iostream>
using namespace std;

int somarAnterior(int numero, int aux);
void questao1()
{
    int numero, aux = 0, soma;

    cout << "Digite um numero inteiro: ";
    cin >> numero;
    soma = somarAnterior(numero, aux);
    cout << "Somando os anteriores: " << soma;
}

int fatorialNumero(int numero, int aux);
void questao2()
{
    int numero, aux = 1, fatorial;

    cout << "Digite um numero inteiro: ";
    cin >> numero;
    fatorial = fatorialNumero(numero, aux);
    cout << "O fatorial do numero e: " << fatorial;
}

int potenciaNumero(int numero, int potencia, int aux);
void questao3()
{
    int numero, potencia, aux = 1;

    cout << "Digite um numero inteiro: ";
    cin >> numero;
    cout << "Digite sua potencia: ";
    cin >> potencia;

    cout << "O numero " << numero << " elevado a " << potencia << " e: " << potenciaNumero(numero, potencia, aux);
}

int somarDigitos(int numero);
void questao4()
{
    int numero, soma;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    soma = somarDigitos(numero);
    cout << "A soma dos digitos e: " << soma;
}

int contarDigitos(int numero, int aux);
void questao5()
{
    int numero, aux = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    cout << "O numero contem " << contarDigitos(numero, aux) << " digitos";
}

int inverterNumero(int numero, int aux);
void questao6()
{
    int numero, aux = 0, invertido;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;
    invertido = inverterNumero(numero, aux);
    cout << "O numero invertido e: " << invertido;
}

bool numeroPalindromo(int numero);
void questao7()
{
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    if (numeroPalindromo(numero))
    {
        cout << "O numero " << numero << " e palindromo";
    }
    else
    {
        cout << "O numero " << numero << " nao e palindromo";
    }
}

int multiplicarPorSoma(int numero, int multiplo);
void questao8()
{
    int numero, multiplo, aux = 0, resultado;

    cout << "Digite um numero inteiro: ";
    cin >> numero;
    cout << "Digite o seu multiplo: ";
    cin >> multiplo;

    resultado = multiplicarPorSoma(numero, multiplo);
    cout << "O resultado e: " << resultado;
}

int mdc(int a, int b);
void questao9()
{
    int a, b, resultado;

    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;

    resultado = mdc(a, b);
    cout << "O MDC de " << a << " e " << b << " e: " << resultado;
}

int fibonacci(int n);
void questao10()
{
    int n, resultado;

    cout << "Digite a posicao n da sequencia de Fibonacci: ";
    cin >> n;
    resultado = fibonacci(n);
    cout << "O " << n << "-esimo termo de Fibonacci e: " << resultado;
}


void questao11()
{
    
}
void questao12()
{
}
void questao13()
{
}
void questao14()
{
}
void questao15()
{
}
void questao16()
{
}
void questao17()
{
}
void questao18()
{
}
void questao19()
{
}
void questao20()
{
}

int main()
{
    int resposta;
    bool loop = true;
    while (loop)
    {
        cout << "\nQual questao gostaria de ver? ";
        cin >> resposta;
        switch (resposta)
        {
        case 0:
            cout << "Saindo...";
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
        case 10:
            questao10();
            break;
        case 11:
            questao11();
            break;
        case 12:
            questao12();
            break;
        case 13:
            questao13();
            break;
        case 14:
            questao14();
            break;
        case 15:
            questao15();
            break;
        case 16:
            questao16();
            break;
        case 17:
            questao17();
            break;
        case 18:
            questao18();
            break;
        case 19:
            questao19();
            break;
        case 20:
            questao20();
            break;
        default:
            cout << "\nAlternativa invalida!";
            break;
        }
    }

    return 0;
}

int somarAnterior(int numero, int aux)
{
    if (numero == 0)
    {
        return aux;
    }
    else
    {
        aux += numero;
        return somarAnterior(numero - 1, aux);
    }
}
int fatorialNumero(int numero, int aux)
{
    if (numero == 0)
    {
        return aux;
    }
    else
    {
        aux *= numero;
        return fatorialNumero(numero - 1, aux);
    }
}
int potenciaNumero(int numero, int potencia, int aux)
{
    if (potencia == 0)
    {
        return aux;
    }
    else
    {
        aux *= numero;
        return potenciaNumero(numero, potencia - 1, aux);
    }
}
int somarDigitos(int numero)
{
    if (numero == 0)
    {
        return 0;
    }
    else
    {
        return (numero % 10) + somarDigitos(numero / 10);
    }
}
int contarDigitos(int numero, int aux)
{
    if (numero == 0)
    {
        return aux;
    }
    else
    {
        aux++;
        return contarDigitos(numero / 10, aux);
    }
}
int inverterNumero(int numero, int aux)
{
    if (numero == 0)
    {
        return aux;
    }
    else
    {
        aux = aux * 10 + numero % 10;
        return inverterNumero(numero / 10, aux);
    }
}
bool numeroPalindromo(int numero)
{
    if (inverterNumero(numero, 0) == numero)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int multiplicarPorSoma(int numero, int multiplo)
{
    if (multiplo == 0)
    {
        return 0;
    }
    else
    {
        return numero + multiplicarPorSoma(numero, multiplo - 1);
    }
}
int mdc(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return mdc(b, a % b);
    }
}
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

