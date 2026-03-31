#include <iostream>
#include <cmath>
using namespace std;

// 1. Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.
void questao1()
{
    int idade;
    while (true)
    {
        cout << "Digite sua idade: ";
        cin >> idade;
        if (idade < 18)
        {
            cout << "Você não é maioridade!";
            break;
        }
        else
        {
            cout << "Você é maioridade";
            break;
        }
    }
}

// 2. Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das
// notas e a mensagem de aprovado ou reprovado, considerando para aprovação média 7.
void questao2()
{
    float notas, total = 0, media;

    for (size_t i = 0; i < 4; i++)
    {
        cout << "Digite a nota " << i + 1 << " do aluno: ";
        cin >> notas;
        total += notas;
    }
    media = total / 4;
    cout << "A media aritmetica do aluno e: " << media;
}

// 3. Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a
// escolha do usuário.
// Se a opção for inválida, mostre uma mensagem de erro e termine a execução do programa. Lembre-se
// de que, na operação 4, o segundo número deve ser diferente de zero
void questao3()
{
    float n1, n2;
    int escolha;

    cout << "Digite dois números (separe-os por espaco | para números com decimais use ponto): ";
    cin >> n1 >> n2;
    cout << "Qual operação você deseja fazer com estes números?";
    cout << "[1] Média entre os números digitados \n[2] Diferença do maior pelo menor \n[3] Produto entre os números digitados \n[4] Divisão do primeiro pelo segundo";
    cout << "Escolha: ";
    cin >> escolha;

    switch (escolha)
    {
    case 1:
        float media;
        media = (n1 + n2) / 2;
        cout << "A média entre os números é: " << media;
        break;
    case 2:
        if (n1 > n2)
        {
            cout << "A diferença do maior pelo menor e: " << n1 - n2;
        }
        else
        {
            cout << "A diferença do maior pelo menor e: " << n2 - n1;
        }
        break;
    case 3:
        cout << "O produto entre os números digitados e: " << n1 * n2;
        break;
    case 4:
        if (n2 != 0)
        {
            cout << "A divisão do primeiro pelo segundo e: " << n1 / n2;
        }
        else
        {
            cout << "A divisão não pode ser feita! O segundo número e igual a 0";
        }
        break;

    default:
        cout << "Escolha invalida! Encerrando...";
        break;
    }
}

// 4. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00.
// Faça um programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma
// mensagem, caso ele não tenha direito ao aumento.
void questao4()
{
    float salario;
    cout << "Digite seu salario: ";
    cin >> salario;
    if (salario > 0)
    {
        if (salario < 500)
        {
            cout << "Seu salario foi reajustado para: " << salario * 1.3;
        }
        else
        {
            cout << "Voce infelizmente nao tem o direito ao aumento do salario.";
        }
    }
    else
    {
        cout << "O salario nao pode ser negativo";
    }
}

// 5. Um banco considerá um crédito especial aos seus clientes, de acordo com o saldo médio no último
// ano. Faça um programa que recebe o saldo médio de um cliente e calcule o valor do crédito, de acordo
// com a tabela a seguir. Mostre o saldo médio e o valor do crédito.
void questao5()
{
    float salario;

    cout << "Digite seu salario: ";
    cin >> salario;

    if (salario < 200)
    {
        cout << "Seu credito especial e: " << salario * 0.1;
        cout << "Salario final: " << salario * 1.1;
    }
    else if (salario >= 200 && salario <= 300)
    {
        cout << "Seu credito especial e: " << salario * 0.2;
        cout << "Salario final: " << salario * 1.2;
    }
    else if (salario > 300 && salario <= 400)
    {
        cout << "Seu credito especial e: " << salario * 0.3;
        cout << "Salario final: " << salario * 1.3;
    }
    else
    {
        cout << "Seu credito especial e: " << salario * 0.4;
        cout << "Salario final: " << salario * 1.4;
    }
}

// 6. Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
// programa deve mostrar uma mensagem de permissão de acesso ou não.
void questao6()
{
    int senha;

    cout << "Digite sua senha: ";
    cin >> senha;

    if (senha == 4531)
    {
        cout << "Usuario liberado!";
    }
    else
    {
        cout << "Senha invalida!";
    }
}

// 7. Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
// A procedência obedece à tabela a seguir:
void questao7()
{
    float preco;
    int codigo;

    cout << "Digite o preco e o codigo de origem do produto";
    cout << "Preco: ";
    cin >> preco;
    cout << "Codigo de Origem: ";
    cin >> codigo;
    if (codigo == 1)
    {
        cout << "Procedencia do produto: Sul.";
    }
    else if (codigo == 2)
    {
        cout << "Procedencia do produto: Norte.";
    }
    else if (codigo == 3)
    {
        cout << "Procedencia do produto: Leste.";
    }
    else if (codigo == 4)
    {
        cout << "Procedencia do produto: Oeste.";
    }
    else if (codigo == 5 || codigo == 6)
    {
        cout << "Procedencia do produto: Nordeste.";
    }
    else if (codigo == 7 || codigo == 8 || codigo == 9)
    {
        cout << "Procedencia do produto: Sudeste.";
    }
    else if ((codigo >= 10) && (codigo <= 20))
    {
        cout << "Procedencia do produto: Centro-Oeste.";
    }
    else if ((codigo >= 21) && (codigo <= 30))
    {
        cout << "Procedencia do produto: Nordeste.";
    }
    else
    {
        cout << "Codigo de Origem invalido!";
    }
}

// 8. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
// utilizando as seguintes fórmulas (onde h é a altura):
//       1. Para homens: (72.7 * h) - 58
//       2. Para mulheres: (62.1 * h) - 44.7
void questao8()
{
    float altura;
    int escolha;

    cout << "Digite a sua altura: ";
    cin >> altura;
    cout << "Digite o seu sexo: \n[1] Masculino \n[2] Feminino \n";
    cin >> escolha;

    if (altura > 0)
    {
        switch (escolha)
        {
        case 1:
            cout << "O peso ideal para voce e: " << (72.7 * altura) - 58;
            break;
        case 2:
            cout << "O peso ideal para voce e: " << (62.1 * altura) - 44.7;
        default:
            cout << "Escolha invalida!";
            break;
        }
    }
    else
    {
        cout << "A altura nao pode ser 0 ou menor.";
    }
}

// 9. Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual
// e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela abaixo:
void questao9()
{
    int codigo;
    float salario;

    cout << "Digite seu codigo correspondente ao seu cargo";
    cout << "[1] Escrituario \n[2] Secretario \n[3] Caixa \n[4] Gerente \n[5] Diretor \nCodigo: ";
    cin >> codigo;
    cout << "Digite seu salario: ";
    cin >> salario;
    switch (codigo)
    {
    case 1:
        cout << "Cargo: Escrituario \nValor de aumento: " << salario * 0.5 << "\nNovo salario: " << salario * 1.5;
        break;
    case 2:
        cout << "Cargo: Secretario \nValor de aumento: " << salario * 0.35 << "\nNovo salario: " << salario * 1.35;
        break;
    case 3:
        cout << "Cargo: Caixa \nValor de aumento: " << salario * 0.2 << "\nNovo salario: " << salario * 1.2;
        break;
    case 4:
        cout << "Cargo: Gerente \nValor de aumento: " << salario * 0.1 << "\nNovo salario: " << salario * 1.1;
        break;
    case 5:
        cout << "Cargo: Diretor \nValor de aumento: " << salario << "\nNovo salario: " << salario;
        cout << "Voce nao tem direito ao aumento.";
        break;

    default:
        cout << "Codigo invalido!";
        break;
    }
}

// 10. Em uma empresa brasileira, um funcionário é bem remunerado se ganha até R$5.000,00 e mal remunerado se ganha abaixo disso. Assim, Faça um programa que verifique se um funcionário é bem ou mal
// remunerado. Faça o teste de mesa para verificar o resultado.
void questao10()
{
    float salario;

    cout << "Digite seu salario: ";
    cin >> salario;
    if (salario >= 5000)
    {
        cout << "Bem remunerado";
    }
    else
    {
        cout << "Mal remunerado";
    }
}

// 11. Uma família brasileira possui cinco pessoas que trabalham fora e ajudam nos gastos domésticos. Faça
// um programa que verifique quantas pessoas dessa família ganham mais que o salário mínimo. Faça o
// teste de mesa para verificar o resultado.
void questao11()
{
    float salario;
    int contador;

    for (size_t i = 0; i < 4; i++)
    {
        cout << "Digite o salario da pessoa " << i + 1 << " da familia: ";
        cin >> salario;
        if (salario > 1621)
        {
            contador++;
        }
    }
    cout << contador << "ganham mais que o salario minimo";
}

// 12. Faça um programa que, a partir de um mês fornecido (número inteiro de 1 a 12), apresente o nome
// dele por extenso ou uma mensagem de mˆes inválido. Faça o teste de mesa para verificar o resultado.
void questao12()
{
    int mes;

    cout << "Digite o numero do mes: ";
    cin >> mes;
    switch (mes)
    {
    case 1:
        cout << "Janeiro";
        break;
    case 2:
        cout << "Fevereiro";
        break;
    case 3:
        cout << "Marco";
        break;
    case 4:
        cout << "Abril";
        break;
    case 5:
        cout << "Maio";
        break;
    case 6:
        cout << "Junho";
        break;
    case 7:
        cout << "Julho";
        break;
    case 8:
        cout << "Agosto";
        break;
    case 9:
        cout << "Setembro";
        break;
    case 10:
        cout << "Outubro";
        break;
    case 11:
        cout << "Novembro";
        break;
    case 12:
        cout << "Dezembro";
        break;

    default:
        cout << "Mes invalido!";
        break;
    }
}

// 13. Faça um programa que calcule as raízes da equação de segundo grau a partir de seus coeficientes a,
// b e c: ax2 + bx + c = 0. Para calcular a raiz quadrada, utilize a função sqrt(número) da biblioteca
// cmath. Faça o teste de mesa para verificar o resultado.
void questao13()
{
    float a, b, c, delta, x1, x2;

    cout << "Digite os coeficientes";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    delta = pow(b, 2) - 4 * a * c;
    x1 = ((b * -1) + sqrt(delta)) / 2 * a;
    x2 = ((b * -1) - sqrt(delta)) / 2 * a;

    cout << "As raizes da equacao e: " << x1 << " e " << x2;
}

// 14. Faça um programa que, dados 3 números inteiros, imprima-os em ordem crescente. Faça o teste de
// mesa para verificar o resultado.
void questao14()
{
    int a, b, c;
    cout << "Digite 3 numeros inteiros (separe-os por espaco): ";
    cin >> a >> b >> c;

    if (a > b)
    {
        swap(a, b);
    }
    if (a > c)
    {
        swap(a, c);
    }
    if (b > c)
    {
        swap(b, c);
    }

    cout << "Em ordem crescente: " << a << ", " << b << ", " << c;
}

// 15. A nota final de uma disciplina é calculada a partir de três notas atribuídas, respectivamente, a uma
// avaliação teórica, a uma avaliação prática e à entrega de exercícios. A média das três notas mencionadas
// anteriormente obedece aos pesos a seguir, respectivamente: 7, 2 e 1. Faça um programa que receba
// as três notas, calcule e mostre a média ponderada e o conceito que segue a tabela abaixo. Aten¸c˜ao:
// utilize corretamente as estruturas condicionais de forma que se evitem compara¸c˜oes desnecess´arias.
// Faça o teste de mesa para verificar o resultado.
void questao15()
{
    float n1, n2, n3, media;

    cout << "Digite as tres notas do aluno (separe-os por espaco): ";
    cin >> n1 >> n2 >> n3;
    media = ((n1 * 7) + (n2 * 2) + (n1)) / 10;
    cout << "A media do aluno e: " << media;
    if (media < 50)
    {
        cout << "Esta no conceito E.";
    }
    else if (media >= 50 && media < 60)
    {
        cout << "Esta no conceito D";
    }
    else if (media >= 60 && media < 70)
    {
        cout << "Esta no conceito C";
    }
    else if (media >= 70 && media < 85)
    {
        cout << "Esta no conceito B";
    }
    else if (media >= 85 && media <= 100)
    {
        cout << "Esta no conceito A";
    }
    else
    {
        cout << "O aluno ficou acima da media 100";
    }
}

// 16. Faça um programa que receba 3 números obrigatoriamente em ordem crescente e um quarto número
// que não siga esta regra. Mostre, em seguida, os quatro números em ordem decrescente
void questao16()
{
    int a, b, c, d;
    cout << "Digite tres numeros em ordem crescente e um quarto que nao siga a regra (separe-os por espaco): ";
    cin >> a >> b >> c >> d;

    while (true)
    {
        if (a > b)
        {
            cout << "O primeiro valor nao segue a regra";
            return;
        }
        else if (b > c)
        {
            cout << "O segundo valor nao segue a regra";
            return;
        }
        else if (d > c){
            cout << "O quarto termo nao pode seguir a regra";
            return;
        }
        else
        {
            if (a < b)
            {
                swap(a, b);
            }
            if (a < c)
            {
                swap(a, c);
            }
            if (a < d)
            {
                swap(a, d);
            }
            if (b < c)
            {
                swap(b, c);
            }
            if (b < d)
            {
                swap(b, d);
            }
            if (c < d)
            {
                swap(c, d);
            }
            cout << "Em ordem decrescente: " << a << ", " << b << ", " << c << ", " << d;
            break;
            break;
        }
        
        
    }
    
}

// 17. Faça um programa que receba a medida de um ângulo em graus. Calcule e mostre o quadrante em
// que se localiza esse ângulo. Considere os quadrantes da trigonometria e que os ângulos estão sempre
// entre 0 e 360 graus
void questao17()
{
    int angulo;

    while (true)
    {
        cout << "Digite um angulo entre 0 - 360: ";
        cin >> angulo;
        if (angulo > 0 && angulo < 90)
        {
            cout << "O angulo esta no primeiro quadrante";
            break;
        }
        else if (angulo > 90 && angulo < 180)
        {
            cout << "O angulo esta no segundo quadrante";
            break;
        }
        else if (angulo > 180 && angulo < 270)
        {
            cout << "O angulo esta no  terceiro quadrante";
            break;
        }
        else if (angulo > 180 && angulo < 360)
        {
            cout << "O angulo esta no quarto quadrante";
            break;
        }
        else if (angulo == 0 || angulo == 90 || angulo == 180 || angulo == 270 || angulo == 360)
        {
            cout << "O angulo nao esta em um quadrante especifico por estar exatamente em um eixo";
            break;
        }
        else
        {
            cout << "O angulo digitado e invalido! \n";
        }
    }
}

// 18. Faça um programa que receba um número indicando a opção do usuário e mais 3 números. O programa
// deve imprimir os três números conforme a opção selecionada pelo usuário.
//     1. Imprima os três números em ordem crescente
//     2. Imprima os três números em ordem decrescente
void questao18()
{
    bool loop = true;
    int op, a, b, c;
    cout << "Digite 3 numeros (separe-os por espaco): ";
    cin >> a >> b >> c;
    while (loop)
    {
        cout << "Operacao: \n[1] Imprimir os numeros em ordem crescente \n[2] Imprimir os numeros em ordem decrescente \nEscolha: ";
        cin >> op;

        switch (op)
        {
        case 1:
            if (a > b)
            {
                swap(a, b);
            }
            if (a > c)
            {
                swap(a, c);
            }
            if (b > c)
            {
                swap(b, c);
            }
            cout << "Em ordem crescente: " << a << ", " << b << ", " << c;
            break;

        case 2:
            if (a < b)
            {
                swap(a, b);
            }
            if (a < c)
            {
                swap(a, c);
            }
            if (b < c)
            {
                swap(b, c);
            }
            cout << "Em ordem decrescente: " << a << ", " << b << ", " << c;
            break;

        default:
            cout << "Escolha invalida";
            break;
        }
        loop = false;
    }
}

// 19. Faça um programa que receba duas datas e imprima a data cronologicamente maior. Cada data deve
// ser fornecida por três valores inteiros:
//      1. Dia
//      2. Mês
//      3. Ano
void questao19()
{
    int d1, d2, a1, a2, m1, m2;

    cout << "Data 1 (separe-os por espaco | dia mes ano): ";
    cin >> d1 >> m1 >> a1;
    cout << "Data 2 (separe-os por espaco | dia mes ano): ";
    cin >> d2 >> m2 >> a2;

    if (a1 > a2 || (a1 == a2 && m1 > m2) || (a1 == a2 && m1 == m2 && d1 > d2))
    {
        cout << "Data maior: " << d1 << "/" << m1 << "/" << a1;
    }
    else
    {
        cout << "Data maior: " << d2 << "/" << m2 << "/" << a2;
    }
}

// 20. O IMC (índice de massa corporal) é um critério da Organização Mundial de Sa´ude para dar indicação sobre a condição de peso de uma pessoa adulta. A fómula para cálculo do índice é: IMC =
// peso/altura2
// . Elabore um programa que leia o peso e a altura de um adulto e mostre sua condição
// de acordo com a tabela abaixo. não se esque¸ca de verificar se o peso e altura digitados são números
// positivos.
// IMC em Adultos   condição
// Abaixo de 18,5   Abaixo do Peso
// Entre 18,5 e 25  Peso Normal
// Entre 25 e 30    Acima do Peso
// Acima de 30      Obeso
void questao20()
{
    float peso, altura, imc;
    string condicao;
    cout << "Peso (em kg): ";
    cin >> peso;
    cout << "Altura (em m): ";
    cin >> altura;

    if (peso <= 0 || altura <= 0)
    {
        cout << "Peso e altura devem ser positivos!";
    }
    else
    {
        imc = peso / pow(altura, 2);
        if (imc < 18.5)
            condicao = "Abaixo do Peso";
        else if (imc < 25)
            condicao = "Peso Normal";
        else if (imc < 30)
            condicao = "Acima do Peso";
        else
            condicao = "Obeso";

        cout << "IMC: " << imc << " | Condicao: " << condicao;
    }
}

// 21. Escreva um programa em C para inserir qualquer número do usuário e limpar o n-ésimo (também a
// ser inserido pelo usuário) bit do número fornecido usando o operador bit a bit.
void questao21()
{
    int num, n, resultado;
    cout << "Numero: ";
    cin >> num;
    cout << "Posicao do bit a ser retirado: ";
    cin >> n;

    resultado = num & ~(1U << n);
    cout << "Resultado: " << resultado;
}

// 22. Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12 km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto
// (variável TEMPO) e a velocidade média (variável VELOCIDADE) durante a viagem. Desta forma,
// será possível obter a distância percorrida com a fómula DISTANCIA = TEMPO * VELOCIDADE. ˆ
// A partir do valor da distância, basta calcular a quantidade de combustível usando LITROS USADOS
// = DISTANCIA/12. O programa deve apresentar os valores da velocidade média, tempo gasto na ˆ
// viagem, a distância percorrida e a quantidade de litros utilizada na viagem.
void questao22()
{
    float tempo, velocidade, distancia, litros;

    cout << "Tempo da viagem (horas): ";
    cin >> tempo;
    cout << "Velocidade media (km/h): ";
    cin >> velocidade;

    distancia = tempo * velocidade;
    litros = distancia / 12.0;

    cout << "Velocidade media: " << velocidade << " km/h";
    cout << "Tempo gasto: " << tempo << " horas";
    cout << "Distancia percorrida: " << distancia << " km";
    cout << "Litros utilizados: " << litros;
}

// 23. Efetuar a leitura de dois valores numéricos inteiros representados pelas variáveis A e B e apresentar o
// resultado da diferença do maior valor pelo menor valor.
void questao23()
{
    int n1, n2;
    cout << "Digite dois numeros inteiros (separe-os por espaco): ";
    cin >> n1 >> n2;

    if (n1 > n2)
    {
        cout << "Diferenca maior - menor: " << n1 - n2;
    }
    else
    {
        cout << "Diferenca maior - menor: " << n2 - n1;
    }
}

// 24. Elabore um programa para calcular a nota de um aluno. Para isso, leia três valores referentes a 3
// avaliações escolares do aluno e imprima uma mensagem dizendo que o aluno foi aprovado, se o valor
// da média escolar for maior ou igual a 6. Se o valor da média for menor que 6, solicite a nota da
// recuperação paralela. O programa deve pegar a nota da recuperação paralela mais a média calculada
// anteriormente e gerar uma nova média. Se a nova média for maior ou igual a 6, apresentar uma
// mensagem dizendo que o aluno foi aprovado na recuperação paralela. Se o aluno não foi aprovado,
// indicar uma mensagem informando que ele foi reprovado. Apresentar junto com as mensagens o valor
// da média do aluno, para qualquer condição.
void questao24()
{
    float n1, n2, n3, media, rec, nova_media;
    cout << "Digite as tres notas do aluno (separe-os por espaco): ";
    cin >> n1 >> n2 >> n3;

    media = (n1 + n2 + n3) / 3;

    cout << "Media: " << media;
    if (media >= 6)
    {
        cout << "Aprovado com media " << media;
    }
    else
    {
        cout << "Nota recuperacao: ";
        cin >> rec;

        nova_media = (media + rec) / 2;

        cout << "Nova media: " << nova_media;
        if (nova_media >= 6)
        {
            cout << "Aprovado na recuperacao com media " << nova_media;
        }
        else
        {
            cout << "Reprovado com media " << nova_media;
        }
    }
}

// 25. Elabore um algoritmo que, para uma entrada do salário bruto, calcule e apresente a contribuição ao
// INSS e o salário líquido restante. A contribuição para o INSS é calculada da seguinte forma:
// 1. salário bruto até três salários mínimos - 8%
// 2. salário bruto acima de três salários mínimos - 10%
// 3. Para as contribuições que seriam maiores que o salário mínimo, a importância é de um salário
// mínimo.
void questao25()
{
    float s_bruto, s_minimo = 1412.0, s_liquido, contribuicao;

    cout << "Salario bruto: ";
    cin >> s_bruto;

    if (s_bruto <= 3 * s_minimo)
    {
        contribuicao = s_bruto * 0.08;
    }
    else
    {
        contribuicao = s_bruto * 0.10;
    }

    if (contribuicao > s_minimo)
        contribuicao = s_minimo;

    s_liquido = s_bruto - contribuicao;

    cout << "Contribuicao INSS: RS " << contribuicao;
    cout << "Salario liquido: RS " << s_liquido;
}

// 26. Implemente um programa usando switch que leia um número de 1 a 7 e informe o dia da semana
// correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um dia da semana,
// é mostrado uma mensagem de erro
void questao26()
{
    int dia;
    cout << "Dia da semana (1-7, 1=Domingo): ";
    cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "Domingo";
        break;
    case 2:
        cout << "Segunda-feira";
        break;
    case 3:
        cout << "Terca-feira";
        break;
    case 4:
        cout << "Quarta-feira";
        break;
    case 5:
        cout << "Quinta-feira";
        break;
    case 6:
        cout << "Sexta-feira";
        break;
    case 7:
        cout << "Sabado";
        break;
    default:
        cout << "Dia invalido!";
    }
}

// 27. Implemente um programa usando switch para ler um número de 1 a 12 e informar o trimestre correspondente, sendo Jan/Fev/Mar o 1 trimestre. Se for um número incorreto, mostrar mensagem de
// erro.
void questao27()
{
    int mes;
    cout << "Mes (1-12): ";
    cin >> mes;

    switch (mes)
    {
    case 1:
    case 2:
    case 3:
        cout << "1o Trimestre";
        break;
    case 4:
    case 5:
    case 6:
        cout << "2o Trimestre";
        break;
    case 7:
    case 8:
    case 9:
        cout << "3o Trimestre";
        break;
    case 10:
    case 11:
    case 12:
        cout << "4o Trimestre";
        break;
    default:
        cout << "Mes invalido!";
    }
}

// 28. Considere a seguinte equação: W=2T+4Y-3X, na qual X=2T-4 e Y=T/2+4. Faça um programa que
// peça ao usuário um valor para T, calcule e mostre na tela o valor de W. Observação: O valor de T deve
// ser maior que 2 e menor ou igual à 100; caso contrário, deve ser mostrada uma mensagem informando
// que o valor digitado é inválido e o cálculo não é executado.
void questao28()
{
    float t, x, y, w;
    cout << "Valor de T (2 < T < 100): ";
    cin >> t;

    if (t <= 2 || t > 100)
    {
        cout << "Valor invalido!";
    }
    else
    {
        x = (2 * t) - 4;
        y = t / (2 + 4);
        w = 2 * t + 4 * y - 3 * x;

        cout << "W = " << w;
    }
}

// 29. Escreva um programa que receba 5 notas de um aluno (todas de 0 a 20) e em função da soma destas
// notas determine se este aluno está:
// • Aprovado (a partir de 70 pontos);
// • Exame (de 30 a 69 pontos);
// • Reprovado (abaixo de 30 pontos).
// Observação: Seu programa deve validar os valores, ou seja, caso o usuário digite um valor de nota
// inválido (abaixo de 0 ou acima de 20), uma mensagem deverá ser exibida ao usuário e o programa não
// continua a execução.
void questao29()
{
    float notas[5], total;

    cout << "Digite as 5 notas do aluno\nAs notas devem ser todas de 0 a 20";
    for (size_t i = 0; i < 5; i++)
    {
        cout << "\nNota " << i + 1 << " do aluno: ";
        cin >> notas[i];
        if (notas[i] > 20 || notas[i] < 0)
        {
            cout << "Nota invalida! Encerrando...";
            return;
        }
        else
        {
            total += notas[i];
        }
    }
    if (total >= 70)
    {
        cout << "O aluno esta aprovado! \nNota total: " << total;
    }
    else if (total >= 30 && total < 70)
    {
        cout << "O aluno esta de exame! \nNota total: " << total;
    }
    else
    {
        cout << "O aluno esta reprovado! \nNota total: " << total;
    }
}

// 30. Faça um programa que receba a medida de um ângulo em graus, calcule e mostre para o usuário
// em qual quadrante esse ângulo se localiza. Observação: Angulos menores que 00 e maiores que 3600 ˆ
// também são medidas de ângulos válidas. Exemplos:
// 198 - "Angulo se localiza no 3 ˆ º quadrante"
// 435 - "Angulo se localiza no 1 ˆ º quadrante"
// -215 - "Angulo se localiza no 2 ˆ º quadrante"
void questao30()
{
    float angulo;

    cout << "Digite o angulo (em graus): ";
    cin >> angulo;

    while (angulo < 0)
        angulo += 360;
    while (angulo >= 360)
        angulo -= 360;

    if (angulo > 0 && angulo < 90)
        cout << "Primeiro quadrante";
    else if (angulo < 180)
        cout << "Segundo quadrante";
    else if (angulo < 270)
        cout << "Terceiro quadrante";
    else if (angulo < 360)
        cout << "Quarto quadrante";
    else
        cout << "Nenhum quadrante! O angulo esta em um dos eixos";
}

// 31. Escreva um programa em C++ para inserir qualquer número do usuário e encontrar o bit de menor ordem
// do número fornecido usando o operador bit a bit.
void questao31()
{
    int num, menor;
    cout << "Numero: ";
    cin >> num;

    menor = num & -num;

    cout << "Bit de menor ordem: " << menor;
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
        case 26:
            questao26();
            break;
        case 27:
            questao27();
            break;
        case 28:
            questao28();
            break;
        case 29:
            questao29();
            break;
        case 30:
            questao30();
            break;
        case 31:
            questao31();
            break;

        default:
            cout << "\nAlternativa invalida!";
            break;
        }
    }

    return 0;
}