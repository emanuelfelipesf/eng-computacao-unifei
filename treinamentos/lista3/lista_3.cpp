#include <iostream>
#include <cmath>
using namespace std;

float pesoIdeal(float altura, char sexo);
bool validarDados(float altura, char sexo);
void questao3()
{
    float altura;
    char sexo;

    cout << "Digite sua altura (em metros): ";
    cin >> altura;
    cout << "Digite seu sexo (m | f): ";
    cin >> sexo;

    if (validarDados(altura, sexo))
    {
        cout << "Seu peso ideal e: " << pesoIdeal(altura, sexo);
    }
    else
    {
        cout << "Dado(s) invalido(s)!";
    }
}

bool validarSalario(float salario);
void questao4()
{
    float salario, sal_min = 1621.0;
    int quantidade = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o salario da pessoa " << i + 1 << ": ";
        cin >> salario;
        if (validarSalario(salario))
        {
            if (salario > sal_min)
            {
                quantidade++;
            }
        }
        else
        {
            cout << "Dado invalido!";
            break;
        }
    }
    cout << "Ha " << quantidade << " pessoas que ganham mais que o salario minimo";
}

bool validarMes(int mes);
void questao5()
{
    int mes;

    cout << "Digite o numero do mes: ";
    cin >> mes;

    if (validarMes(mes))
    {
        switch (mes)
        {
        case 1:
            cout << "Mes: Janeiro";
            break;
        case 2:
            cout << "Mes: Fevereiro";
            break;
        case 3:
            cout << "Mes: Marco";
            break;
        case 4:
            cout << "Mes: Abril";
            break;
        case 5:
            cout << "Mes: Maio";
            break;
        case 6:
            cout << "Mes: Junho";
            break;
        case 7:
            cout << "Mes: Julho";
            break;
        case 8:
            cout << "Mes: Agosto";
            break;
        case 9:
            cout << "Mes: Setembro";
            break;
        case 10:
            cout << "Mes: Outubro";
            break;
        case 11:
            cout << "Mes: Novembro";
            break;
        case 12:
            cout << "Mes: Dezembro";
            break;
        }
    }
    else
    {
        cout << "Dado invalido!";
    }
}

float mediaDeNotas(float n1, float n2, float n3);
void conceitoDeNotas(float nota);
void questao6()
{
    float n1, n2, n3, nota;

    cout << "Digite a nota da Avaliacao Teorica, da Avaliacao Pratica e de Entrega de Exercicios (separe-os por espaco): ";
    cin >> n1 >> n2 >> n3;

    nota = mediaDeNotas(n1, n2, n3);
    conceitoDeNotas(nota);
}

int retornoNumero(int num);
void questao7()
{
    int numero;

    cout << "Digite um numero de quatro digitos: ";
    cin >> numero;

    if (numero >= 1000)
    {
        cout << retornoNumero(numero);
    }
    else
    {
        cout << "Numero invalido!";
    }
}

bool validarEscolha(char letra);
float mediasAluno(float n1, float n2, float n3, char letra);
void questao8()
{
    float n1, n2, n3, media;
    char letra;

    cout << "Digite as tres notas do aluno (separe-os por espaco): ";
    cin >> n1 >> n2 >> n3;
    cout << "Digite qual media deseja fazer: [a] Aritmetica | [p] Ponderada\n";
    cin >> letra;

    if (validarEscolha(letra))
    {
        media = mediasAluno(n1, n2, n3, letra);
        cout << "A media do aluno e: " << media;
    }
    else
    {
        cout << "Invalido!";
    }
}

void inteiroEDecimal(float num, int &n, float &d);
void questao9()
{
    float num, d;
    int n;

    cout << "Digite um numero com decimal: ";
    cin >> num;

    inteiroEDecimal(num, n, d);
    cout << "Parte inteira: " << n << endl;
    cout << "Parte decimal: " << d << endl;
}

void ordernarChar(char &c1, char &c2, char &c3);
void questao10()
{
    char c1, c2, c3;

    cout << "Digite os tres caracteres (char), separe-os por espaco: ";
    cin >> c1 >> c2 >> c3;

    ordernarChar(c1, c2, c3);
    cout << "Em ordem: " << c1 << ", " << c2 << ", " << c3 << endl;
}

int maiorDeTodos(int n1, int n2);
void questao11()
{
    int n1, n2, maior;

    cout << "Digite dois numeros inteiros (separe-os por espaco): ";
    cin >> n1 >> n2;

    maior = maiorDeTodos(n1, n2);
    cout << "O maior deles e: " << maior << endl;
}

int menu();
void questao12()
{
    float angulo;
    switch (menu())
    {
    case 1:
        cout << "Digite o angulo desejado para o calculo do seno: ";
        cin >> angulo;

        cout << "O seno do angulo e: " << sin(angulo);
        break;
    case 2:
        cout << "Digite o angulo desejado para o calculo do cosseno: ";
        cin >> angulo;

        cout << "O cosseno do angulo e: " << cos(angulo);
    case 3:
        float n1, n2;

        cout << "Digite o numero base e o numero potencia (separe-os por espaco): ";
        cin >> n1 >> n2;

        cout << "O numero " << n1 << " elevado por " << n2 << " e: " << pow(n1, n2);
    case 4:
        float numero;

        cout << "Digite um numero para tirar a raiz: ";
        cin >> numero;

        cout << "A raiz de " << numero << " e: " << sqrt(numero);
    }
}

bool estaNoIntervalo(int n1, int n2, int n3);
void questao13()
{
    int n1, n2, n3;

    cout << "Digite dois numero para definir um intervalo (separe-os por espaco): ";
    cin >> n1 >> n2;
    cout << "Digite um numero para verificar se esta nesse intervalo: ";
    cin >> n3;

    if (estaNoIntervalo(n1, n2, n3))
    {
        cout << "Esta dentro do intervalo!";
    }
    else
    {
        cout << "Esta fora do interevalo!";
    }
}

int quadranteDoAngulo(float angulo);
void questao14()
{
    float angulo;

    cout << "Digite um angulo (em graus) para verificar o seu quadrante: ";
    cin >> angulo;

    if (angulo >= 0)
    {
        quadranteDoAngulo(angulo);
        switch (quadranteDoAngulo(angulo))
        {
        case 1:
            cout << "Esta no primeiro quadrante";
            break;
        case 2:
            cout << "Esta no segundo quadrante";
            break;
        case 3:
            cout << "Esta no terceiro quadrante";
            break;
        case 4:
            cout << "Esta no quarto quadrante";
            break;

        default:
            cout << "Esta em nenhum dos quatro quadrantes";
            break;
        }
    }
    else
    {
        cout << "Angulo invalido!";
    }
}

void orderna(float &c1, float &c2, float &c3, char ordem);
void questao15()
{
    float n1, n2, n3;
    char ordem;

    cout << "Digite tres numeros aleatorio (separe-os por espaco): ";
    cin >> n1 >> n2 >> n3;
    cout << "Digite a ordem que deseja coloca-lo | [c] Crescente | [d] Decrescente\nEscolha: ";
    cin >> ordem;

    orderna(n1, n2, n3, ordem);
}

void anoBissexto(int ano);
void questao16()
{
    int ano;

    cout << "Digite o ano para ser analisado: ";
    cin >> ano;

    anoBissexto(ano);
}

int main()
{
    int resposta;
    bool loop = true;
    while (loop)
    {
        cout << "\nQual questao gostaria de ver? (Digite 0 para sair) \n ";
        cin >> resposta;
        switch (resposta)
        {
        case 0:
            cout << "Saindo...";
            loop = false;
            break;
        case 1:
            cout << "Essa questao esta separada na /lista3/atividade_1";
            break;
        case 2:
            cout << "Essa questao esta separada na /lista3/atividade_2";
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

        default:
            cout << "\nAlternativa invalida!";
            break;
        }
    }

    return 0;
}

float pesoIdeal(float altura, char sexo)
{
    if (sexo == 'm')
    {
        return (72.7 * altura) - 58;
    }
    else
    {
        return (62.1 * altura) - 44.7;
    }
}
bool validarDados(float altura, char sexo)
{
    if (altura <= 0 || (sexo != 'm' && sexo != 'f'))
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool validarSalario(float salario)
{
    if (salario < 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool validarMes(int mes)
{
    if (1 <= mes <= 12)
    {
        return true;
    }
    else
    {
        return false;
    }
}
float mediaDeNotas(float n1, float n2, float n3)
{
    return ((n1 * 7) + (n2 * 2) + (n3 * 1)) / 10;
}
void conceitoDeNotas(float nota)
{
    if (nota < 50)
    {
        cout << "Conceito: E" << endl;
    }
    else if (nota < 60)
    {
        cout << "Conceito: D" << endl;
    }
    else if (nota < 70)
    {
        cout << "Conceito: C" << endl;
    }
    else if (nota < 85)
    {
        cout << "Conceito: B" << endl;
    }
    else
    {
        cout << "Conceito: A" << endl;
    }

    cout << "Tabela de Conceitos: \n";
    cout << "   Media     |  Conceito   " << endl;
    cout << " 85 a 100    |     A   " << endl;
    cout << " 70 a < 85   |     B   " << endl;
    cout << " 60 a < 70   |     C   " << endl;
    cout << " 50 a < 60   |     D   " << endl;
    cout << "Abaixo de 50 |     E   " << endl;
}
int retornoNumero(int num)
{
    int n1, n2;

    n1 = num % 1000;
    n2 = (num - n1) / 100;

    if (pow(n1 + n2, 2) >= 1000)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
float mediasAluno(float n1, float n2, float n3, char letra)
{
    switch (letra)
    {
    case 'a':
        return (n1 + n2 + n3) / 3;
        break;

    case 'p':
        return ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
        break;
    }
}
bool validarEscolha(char letra)
{
    if (letra == 'a' || letra == 'p')
    {
        return true;
    }
    else
    {
        return false;
    }
}
void inteiroEDecimal(float num, int &n, float &d)
{
    n = (int)num;
    d = num - n;
}
void ordernarChar(char &c1, char &c2, char &c3)
{
    if (c1 > c2)
    {
        swap(c1, c2);
    }
    if (c1 > c3)
    {
        swap(c1, c3);
    }
    if (c2 > c3)
    {
        swap(c2, c3);
    }
}
int maiorDeTodos(int n1, int n2)
{
    if (n1 >= n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}
int menu()
{
    int opcao;

    cout << "Escolha e digite uma das opcoes a seguir: " << endl;
    cout << "   Opcao   |               Operacao    " << endl;
    cout << "     1     |       Calcular seno de um angulo    " << endl;
    cout << "     2     |      Calcular cosseno de um angulo    " << endl;
    cout << "     3     | Calcular potencia de um numero por outro    " << endl;
    cout << "     4     |   Calcular raiz quadrada de um numero    " << endl;
    cin >> opcao;

    switch (opcao)
    {
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;
    case 3:
        return 3;
        break;
    case 4:
        return 4;
        break;

    default:
        cout << "Opcao invalida!";
        return 0;
        break;
    }
}
bool estaNoIntervalo(int n1, int n2, int n3)
{
    if ((n1 >= n3 && n2 <= n3) || (n2 >= n3 && n1 <= n3))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int quadranteDoAngulo(float angulo)
{
    while (angulo > 360)
    {
        angulo -= 360;
    }
    if (angulo == 0 || angulo == 90 || angulo == 180 || angulo == 270 || angulo == 360)
    {
        return 0;
    }
    else if (angulo < 90)
    {
        return 1;
    }
    else if (angulo < 180)
    {
        return 2;
    }
    else if (angulo < 270)
    {
        return 3;
    }
    else if (angulo < 360)
    {
        return 4;
    }
}
void orderna(float &c1, float &c2, float &c3, char ordem)
{
    switch (ordem)
    {
    case 'c':
        if (c1 > c2)
        {
            swap(c1, c2);
        }
        if (c1 > c3)
        {
            swap(c1, c3);
        }
        if (c2 > c3)
        {
            swap(c2, c3);
        }
        cout << "Em ordem crescente: " << c1 << ", " << c2 << ", " << c3 << endl;
        break;
    case 'd':
        if (c1 > c2)
        {
            swap(c2, c1);
        }
        if (c1 > c3)
        {
            swap(c3, c1);
        }
        if (c2 > c3)
        {
            swap(c3, c2);
        }
        cout << "Em ordem decrescente: " << c3 << ", " << c2 << ", " << c1 << endl;
        break;

    default:
        cout << "Escolha de ordem invalida!";
        break;
    }
}
void anoBissexto(int ano)
{
    if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))
    {
        cout << "O ano " << ano << " e ano bissexto." << endl;
    }
    else
    {
        cout << "O ano " <<  ano << " nao e ano bissexto." << endl;
    }
}
