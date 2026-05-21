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

float mediaIdades(int idades[], int n, int quantidade);
void questao9()
{
    bool loop = true;
    int idade = 0, qntd_f = 1, qntd_m = 1, qntd_total = 1, soma_idade = 0;
    char sexo;

    int idades[qntd_total], sexos_m[qntd_m], sexos_f[qntd_f];

    while (loop)
    {
        cout << "Idade: ";
        cin >> idade;
        cout << "Sexo: ";
        cin >> sexo;

        if (idade > 0 && (sexo == 'f' || sexo == 'm'))
        {
            soma_idade += idade;
            idades[qntd_total - 1] = idade;
            qntd_total++;

            switch (sexo)
            {
            case 'f':
                sexos_f[qntd_f - 1] = idade;
                qntd_f++;
                break;
            case 'm':
                sexos_m[qntd_m - 1] = idade;
                qntd_m++;
                break;
            
            default:
                loop = false;
                break;
            }
        }
        else
        {
            loop = false;
        }
        
    }
    
    cout << "Media das idades totais: " << mediaIdades(idades, qntd_total, qntd_total) << endl;
    for (int i = 0; i < qntd_total - 1; i++)
    {
        cout << idades[i] << endl;
    }
    
    cout << "Media das idades dos homens: " << mediaIdades(sexos_m, qntd_m, qntd_m) << endl;
    for (int i = 0; i < qntd_m - 1; i++)
    {
        cout << sexos_m[i] << endl;
    }
    cout << "Media das idades das mulheres: " << mediaIdades(sexos_f, qntd_f, qntd_f) << endl;
    for (int i = 0; i < qntd_f - 1; i++)
    {
        cout << sexos_f[i] << endl;
    }
}

void questao10()
{
    int idades[5][11], qnt_maiorIdade = 0, qnt_peso = 0;
    float alturas, soma_alturas = 0, pesos, soma_Idades = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Time " << i + 1;
        for (int j = 0; j < 11; j++)
        {
            cout << "\nIdade do jogador " << j + 1 << ": ";
            cin >> idades[i][j];
            if (idades[i][j] < 18)
            {
                qnt_maiorIdade++;
            }
            
            cout << "\nAltura do jogador " << j + 1 << " em metros: ";
            cin >> alturas;
            soma_alturas += alturas;

            cout << "\nPeso do jogador " << j + 1 << " em kg: ";
            cin >> pesos;
            if (pesos >= 80)
            {
                qnt_peso++;
            }
        }
    }

    cout << "A quantidade de jogadores menor de 18 anos: " << qnt_maiorIdade << endl;

    for (int i = 0; i < 5; i++)
    {
        soma_Idades = 0;
        for (int j = 0; j < 11; j++)
        {
            soma_Idades += idades[i][j];
        }
        cout << "A media da idade do time " << i + 1 << " e: " << soma_Idades/11 << endl;
    }
    
    cout << "A media da alturas de todos os jogadores: " << soma_alturas/55 << endl;

    cout << "A porcentagem de jogadores com mais de 80 quilos: " << (float)qnt_peso/55*100 << "%";
}

void mediaAritmetica();
void mediaPonderada();
void questao11()
{
    int escolha;

    cout << "Escolha uma das opcoes\n[1] Media Aritmetica\n[2] Media Ponderada\n[3] Sair\nEscolha: ";
    cin >> escolha;

    switch (escolha)
    {
    case 1:
        mediaAritmetica();
        break;
    case 2:
        mediaPonderada();
        break;
    case 3:
        cout << "Saindo...";
        break;

    default:
        cout << "Escolha invalida!";
        break;
    }
}

bool ehPrimo(int numero);
void questao12()
{
    int numeros[10], qnt_primos = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Numero " << i+1 << ": ";
        cin >> numeros[i];
    }
    for (int i = 0; i < 10; i++)
    {
        bool resultado = ehPrimo(numeros[i]);
        if (resultado)
        {
            cout << "Numero " << numeros[i] << " e primo" << endl;
            qnt_primos++;
        }
        else
        {
            cout << "Numero " << numeros[i] << " nao e primo" << endl;
        }
    }
    cout << "A quantidade de primos e: " << qnt_primos;
}

float mediaDosNumeros(int soma, int quantidade);
void questao13()
{
    int n, quantidade = 0, soma = 0;

    do
    {
        cout << "Numero (0 para sair): ";
        cin >> n;

        if (n == 0)
        {
            break;
        }
        
        quantidade++;
        soma += n;
    } while (n != 0);
    
    cout << "Media Aritmetica dos numeros: " << mediaDosNumeros(soma, quantidade);
}

void questao14()
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
            break;
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
}

void questao15()
{
    
}

void questao16()
{
    int pares[5][2];

    for (int i = 0; i < 5; i++)
    {
        cout << "a " << i + 1 << ": ";
        cin >> pares[i][1];
        cout << "b " << i + 1 << ": ";
        cin >> pares[i][2];
    }
    for (int i = 0; i < 5; i++)
    {
        while (pares[i][1] <= pares[i][2])
        {
            if (pares[i][1] % 2 == 0)
            {
                cout << pares[i][1] << ", ";
            }
            pares[i][1]++;
        }
        cout << endl;
    }
}

void questao17()
{
    int cidades[10][2], aux = 0, qnt_habitantes = 0, soma_idades = 0, mais_nova = 0, qnt_anosEspc = 0;

    while (aux < 10)
    {
        cout << "Populacao e Idade (separe-os por espaco): ";
        cin >> cidades[aux][1] >> cidades[aux][2];

        soma_idades += cidades[aux][2];

        if (mais_nova < cidades[aux][2])
        {
            mais_nova = cidades[aux][2];
        }
        if (cidades[aux][1] < 10000)
        {
            qnt_habitantes++;
        }
        if (cidades[aux][2] > 300 && cidades[aux][2] < 10000)
        {
            qnt_anosEspc++;
        }
        
        aux++;
    }
    
    cout << "Menos de 10000 habitantes: " << qnt_habitantes << endl;
    cout << "Media das cidades: " << soma_idades/10 << endl;
    cout << "Cidade mais nova: " << mais_nova << " anos" << endl;
    cout << "Mais de 300 anos e menos de 10000 anos: " << qnt_anosEspc << endl;
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
float mediaIdades(int idades[], int n, int quantidade)
{
    int soma = 0;

    for (int i = 0; i < n - 1; i++)
    {
        soma += idades[i];
    }
    return (float)soma/(quantidade - 1);
}
void mediaAritmetica()
{
    float n1, n2;

    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;

    cout << "Media Aritmetica: " << (n1 + n2)/2;
}
void mediaPonderada()
{
    float n1, n2, n3;
    int p1, p2, p3;

    cout << "Digite a Nota e Peso 1 (separe-os por espaco): ";
    cin >> n1 >> p1;
    cout << "Digite a Nota e Peso 2 (separe-os por espaco): ";
    cin >> n2 >> p2;
    cout << "Digite a Nota e Peso 3 (separe-os por espaco): ";
    cin >> n3 >> p3;

    cout << "Media Ponderada: " << ((n1 * p1) + (n2 * p2) + (n3 * p3))/(p1 + p2 + p3);
}
bool ehPrimo(int numero)
{
    if (numero < 1)
    {
        return false;
    }
    else if (numero == 1)
    {
        return true;
    }
    else
    {
        for (int i = 2; i <= sqrt(numero); i++)
        {
            if (numero % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
float mediaDosNumeros(int soma, int quantidade)
{
    return soma/quantidade;
}

