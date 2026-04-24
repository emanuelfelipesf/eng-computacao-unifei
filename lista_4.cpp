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

void maiorMenor(int &num1, int &num2);
void questao11()
{
    int num1, num2;

    cout << "Digite dois numeros inteiros (separe-os por espaco): ";
    cin >> num1 >> num2;

    maiorMenor(num1, num2);
    cout << "O maior numero e: " << num1 << "\nO menor numero e: " << num2;
}

void parImpar(int num, string &resultado);
void questao12()
{
    string resultado;
    int num;

    cout << "Digite um numero: ";
    cin >> num;

    parImpar(num, resultado);
    cout << "O numero e: " << resultado;
}

void mediaAluno(float n1, float n2, float &media, string &situacao);
void questao13()
{
    string situacao;
    float n1, n2, media;

    cout << "Digite as notas do aluno (separe-as por espaco): ";
    cin >> n1 >> n2;

    mediaAluno(n1, n2, media, situacao);
    cout << "A media do aluno e: " << media << "\nSituacao: " << situacao;
}

void funcaoDivisao(float n1, float n2, float &divisao);
void questao14()
{
    float n1, n2, divisao;

    cout << "Digite dois numeros (separe-os por espaco): ";
    cin >> n1 >> n2;

    funcaoDivisao(n1, n2, divisao);
    cout << "Resultado: " << divisao;
}

void trocarNumeros(int &n1, int &n2);
void questao15()
{
    int n1, n2;

    cout << "Digite dois numeros (separe-os por espaco): ";
    cin >> n1 >> n2;

    cout << "a: " << n1;
    cout << "\nb: " << n2;

    trocarNumeros(n1, n2);
    cout << "a: " << n1;
    cout << "\nb: " << n2;
}

void categoriaPessoa(int idade, string &categoria);
void questao16()
{
    int idade;
    string categoria;

    cout << "Digite sua idade: ";
    cin >> idade;

    categoriaPessoa(idade, categoria);
    cout << "A categoria de " << idade << " anos e: " << categoria;
}

void aumentoSalario(int &salario);
void questao17()
{
    int salario;

    cout << "Salario: ";
    cin >> salario;

    aumentoSalario(salario);
    cout << "Salario aumentado: " << salario;
}

void verificarTriangulo(int a, int b, int c, string &resultado);
void questao18()
{
    string resultado;
    float a, b, c;

    cout << "Digite os lados do triangulo (separe-os por espaco): ";
    cin >> a >> b >> c;

    verificarTriangulo(a, b, c, resultado);
    cout << resultado;
}

void tipoTriangulo(int a, int b, int c, string &resultado);
void questao19()
{
    int a, b, c;
    string resultado;

    cout << "Digite os lado do triangulo (separe-os por espaco): ";
    cin >> a >> b >> c;

    tipoTriangulo(a, b, c, resultado);
    cout << "O triangulo e do tipo: " << resultado;
}

void verificaMaior(int &num1, int &num2, int &num3);
void questao20()
{
    int num1, num2, num3;

    cout << "Digite tres numeros (separe-os por espaco): ";
    cin >> num1 >> num2 >> num3;

    verificaMaior(num1, num2, num3);
    cout << "O maior deles e: " << num1;
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
void maiorMenor(int &num1, int &num2)
{
    if (num1 < num2)
    {
        swap(num1, num2);
    }
}
void parImpar(int num, string &resultado)
{
    if (num % 2 == 0)
    {
        resultado = "par";
    }
    else
    {
        resultado = "impar";
    }
}
void mediaAluno(float n1, float n2, float &media, string &situacao)
{
    media = (n1 + n2)/2;
    if (media >= 6)
    {
        situacao = "Aprovado";
    }
    else
    {
        situacao = "Reprovado";
    }
}
void funcaoDivisao(float n1, float n2, float &divisao)
{
    if (n2 == 0)
    {
        cout << "Erro! O divisor e 0" << endl;
        divisao = 0;
    }
    else
    {
        divisao = n1/n2;
    }
}
void trocarNumeros(int &n1, int &n2)
{
    swap(n1, n2);
}
void categoriaPessoa(int idade, string &categoria)
{
    if (idade <= 12)
    {
        categoria = "Crianca";
    }
    else if (idade <= 17 && idade > 12)
    {
        categoria = "Adolescente";
    }
    else if (idade < 60 && idade > 17)
    {
        categoria = "Adulto";
    }
    else
    {
        categoria = "Idoso";
    }
}
void aumentoSalario(int &salario)
{
    if (salario <= 1000)
    {
        salario *= 1.2;
    }
    else if (salario <= 2000)
    {
        salario *= 1.1;
    }
    else
    {
        salario *= 1.05;
    }
}
void verificarTriangulo(int a, int b, int c, string &resultado)
{
    if ((a + b) > c)
    {
        resultado = "Pode ser triangulo";
    }
    else
    {
        resultado = "Nao pode ser triangulo";
    }
}
void tipoTriangulo(int a, int b, int c, string &resultado)
{
    if (a == b && b == c)
    {
        resultado = "Equilatero";
    }
    else if (a == b || a == c || b == c)
    {
        resultado = "Isoceles";
    }
    else
    {
        resultado = "Escaleno";
    }
}
void verificaMaior(int &num1, int &num2, int &num3)
{
    if (num1 < num2)
    {
        num1 = num2;
    }
    if (num1 < num3)
    {
        num1 = num3;
    }
}