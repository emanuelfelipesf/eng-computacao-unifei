#include <iostream>
#include <cmath>
using namespace std;

void numeroImparFor();
void numeroImparWhile();
void numeroImparDoWhile();
void questao1()
{
    cout << "Loop For: \n";
    numeroImparFor();
    cout << "\nLoop While: \n";
    numeroImparWhile();
    cout << "\nLoop Do While: \n";
    numeroImparDoWhile();
}

int quantidadeMaiorIdade(int idades[10]);
void questao2()
{
    int idades[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite a Idade da pessoa " << i + 1 << ": ";
        cin >> idades[i];
    }
    cout << "A quantidade de pessoas com menos de 18 anos e: " << quantidadeMaiorIdade(idades);
}

float polegadasCentimetros(float polegadas);
void questao3()
{
    for (int i = 1; i <= 20; i++)
    {
        cout << i << " polegadas: " << polegadasCentimetros(i) << " centimetros" << endl;
    }
}

int fibonacci(int n);
void questao4()
{
    int n, resultado;

    cout << "Digite a posicao n da sequencia de Fibonacci: ";
    cin >> n;
    resultado = fibonacci(n);
    cout << "O n-esimo termo de Fibonacci e: " << resultado;
}

void sequenciaE(int n, double &e);
void questao5()
{
    int n;
    double e;

    cout << "Digite um numero inteiro positivo: ";
    cin >> n;

    sequenciaE(n, e);
    cout << "O valor de E: " << e;
}

int fatorial(int n);
void questao6()
{
    int n;

    cout << "Digite quantos elementos tera: ";
    cin >> n;

    int numeros[n];

    for (int i = 1; i <= n; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> numeros[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Fatorial de " << numeros[i] << ": " << fatorial(numeros[i]) << endl;
    }
}

void maiorMenorConjunto(int numeros[], int n, int &maior, int &menor);
void questao7()
{
    int numeros[1000];
    int n = 0;
    int valor;

    cout << "Digite valores inteiros e positivos (0 para encerrar):\n";

    while (true)
    {
        cout << "\nValor: ";
        cin >> valor;

        if (valor == 0)
        {
            break;
        }
        else if (valor < 0)
        {
            cout << "Valor negativo! Nao sera incluido nos calculos.\n";
        }
        else
        {
            numeros[n] = valor;
            n++;
        }
    }

    if (n == 0)
    {
        cout << "Nenhum valor valido foi digitado.\n";
    }
    else
    {
        int maior, menor;
        maiorMenorConjunto(numeros, n, maior, menor);
        cout << "Maior valor: " << maior << endl;
        cout << "Menor valor: " << menor << endl;
    }
}

float potencia(int x, int y);
void questao8()
{
    int x, y;

    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    cout << "O valor de x e: " << potencia(x, y);
}

float mediaIdades(int idades, int quantidade);
float mediaHomens(int idades, int quantidade);
float mediaMulheres(int idades, int quantidade);
void questao9()
{
    bool loop = true;
    int idade, qntd_f = 1, qntd_m = 1, qntd_total = 1, soma_idade = 0;
    char sexo;

    int idades[qntd_total], sexos_m[qntd_m], sexos_f[qntd_f];

    while (loop);
    {
        cout << "Digite a idade: ";
        cin >> idade;
        cout << "Digite o sexo: ";
        cin >> sexo;

        if (idade > 0)
        {
            qntd_total++;
            soma_idade += idade;
            idades[qntd_total - 1] = idade;
        }
        else
        {
            loop = false;
        }
        
        if (sexo == 'f')
        {
            qntd_f++;
        }
        else if (sexo == 'm')
        {
            qntd_m++;
        }
        else
        {
            loop = false;
        }
    }

    for (int i = 0; i < qntd_total; i++)
    {
        cout << idades[i] << endl;
    }
    
}

void questao10()
{
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

void questao21()
{
}

void questao22()
{
}

void questao23()
{
}

void questao24()
{
}

void questao25()
{
}

int main()
{
    int resposta;
    bool loop = true;
    while (loop)
    {
        cout << "\nQual questao gostaria de ver? (digite 0 para sair) ";
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
        case 21:
            questao21();
            break;
        case 22:
            questao22();
            break;
        case 23:
            questao23();
            break;
        case 24:
            questao24();
            break;
        case 25:
            questao25();
            break;
        default:
            cout << "\nAlternativa invalida!";
            break;
        }
    }

    return 0;
}

void numeroImparFor()
{
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << ", ";
        }
    }
}
void numeroImparWhile()
{
    int i = 1;
    while (i < 100)
    {
        if (i % 2 != 0)
        {
            cout << i << ", ";
        }
        i++;
    }
}
void numeroImparDoWhile()
{
    int i = 1;
    do
    {
        if (i % 2 != 0)
        {
            cout << i << ", ";
        }
        i++;
    } while (i < 100);
}
int quantidadeMaiorIdade(int idades[10])
{
    int quantidade = 0;

    for (int i = 0; i < 10; i++)
    {
        if (idades[i] < 18)
        {
            quantidade++;
        }
    }
    return quantidade;
}
float polegadasCentimetros(float polegadas)
{
    return polegadas * 2.54;
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
void sequenciaE(int n, double &e)
{
    for (int i = 0; i <= n; i++)
    {
        e += 1 / (tgamma(i + 1));
    }
}
int fatorial(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}
void maiorMenorConjunto(int numeros[], int n, int &maior, int &menor)
{
    maior = numeros[0];
    menor = numeros[0];

    for (int i = 1; i < n; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }
}
float potencia(int x, int y)
{
    int aux = x;

    if (y == 0)
    {
        return 1;
    }

    while (y != 1)
    {
        aux *= x;
        y--;
    }
    return aux;
}
float mediaIdades(int idades, int quantidade)
{
    return idades/quantidade;
}
float mediaHomens(int idades, int quantidade)
{
    return idades/quantidade;
}
float mediaMulheres(int idades, int quantidade)
{
    return idades/quantidade;
}
