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

    cout << "Digite dois números (separe-os por espaço | para números com decimais use ponto): ";
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
        cout << "Salario final: " << salario 1.3;
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

    cout << "Digite a sua altura: "; cin >> altura;
    cout << "Digite o seu sexo: \n[1] Masculino \n[2] Feminino \n"; cin >> escolha;

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
    cout << "[1] Escrituario \n[2] Secretario \n[3] Caixa \n[4] Gerente \n[5] Diretor \nCodigo: "; cin >> codigo;
    cout << "Digite seu salario: "; cin >> salario;
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

    cout << "Digite seu salario: "; cin >> salario;
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
        cout << "Digite o salario da pessoa " << i+1 << " da familia: "; cin >> salario;
        if (salario > 1621)
        {
            contador++;
        }
    }
    cout << contador << "ganham mais que o salario minimo";
}

// 12. Faça um programa que, a partir de um mˆes fornecido (número inteiro de 1 a 12), apresente o nome
// dele por extenso ou uma mensagem de mˆes inv´alido. Faça o teste de mesa para verificar o resultado.
void questao12()
{
    int mes;

    cout << "Digite o numero do mes: "; cin >> mes;
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
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    delta = pow(b, 2) - 4 * a * c;
    x1 = ((b * -1) + sqrt(delta))/2 * a;
    x2 = ((b * -1) - sqrt(delta))/2 * a;

    cout << "As raizes da equacao e: " << x1 << " e " << x2;
}

// 14. Faça um programa que, dados 3 números inteiros, imprima-os em ordem crescente. Faça o teste de
// mesa para verificar o resultado.
void questao14()
{
    
}

// 15. A nota final de uma disciplina é calculada a partir de três notas atribu´ıdas, respectivamente, a uma
// avaliação teórica, a uma avaliação prática e à entrega de exercícios. A média das três notas mencionadas
// anteriormente obedece aos pesos a seguir, respectivamente: 7, 2 e 1. Faça um programa que receba
// as três notas, calcule e mostre a média ponderada e o conceito que segue a tabela abaixo. Aten¸c˜ao:
// utilize corretamente as estruturas condicionais de forma que se evitem compara¸c˜oes desnecess´arias.
// Faça o teste de mesa para verificar o resultado.
void questao15()
{
}

// 16. Faça um programa que receba 3 números obrigatoriamente em ordem crescente e um quarto número
// que não siga esta regra. Mostre, em seguida, os quatro números em ordem decrescente
void questao16()
{
}

// 17. Faça um programa que receba a medida de um ˆangulo em graus. Calcule e mostre o quadrante em
// que se localiza esse ˆangulo. Considere os quadrantes da trigonometria e que os ˆangulos estão sempre
// entre 0 e 360 graus
void questao17()
{
}

// 18. Faça um programa que receba um número indicando a op¸c˜ao do usuário e mais 3 números. O programa
// deve imprimir os três números conforme a op¸c˜ao selecionada pelo usuário.
//     1. Imprima os três números em ordem crescente
//     2. Imprima os três números em ordem decrescente
void questao18()
{
}

// 19. Faça um programa que receba duas datas e imprima a data cronologicamente maior. Cada data deve
// ser fornecida por três valores inteiros:
//      1. Dia
//      2. Mˆes
//      3. Ano
void questao19()
{
}

// 20. O IMC (´ındice de massa corporal) é um critério da Organiza¸c˜ao Mundial de Sa´ude para dar indica¸c˜ao sobre a condi¸c˜ao de peso de uma pessoa adulta. A f´ormula para c´alculo do ´ındice é: IMC =
// peso/altura2
// . Elabore um programa que leia o peso e a altura de um adulto e mostre sua condi¸c˜ao
// de acordo com a tabela abaixo. não se esque¸ca de verificar se o peso e altura digitados s˜ao números
// positivos.
// IMC em Adultos   Condi¸c˜ao
// Abaixo de 18,5   Abaixo do Peso
// Entre 18,5 e 25  Peso Normal
// Entre 25 e 30    Acima do Peso
// Acima de 30      Obeso
void questao20()
{
}

// 21. Escreva um programa em C para inserir qualquer número do usuário e limpar o n-ésimo (também a
// ser inserido pelo usuário) bit do número fornecido usando o operador bit a bit.
void questao21()
{
}

// 22. Efetuar o c´alculo da quantidade de litros de combust´ıvel gasta em uma viagem, utilizando um autom´ovel que faz 12 quilˆometros por litro. Para obter o c´alculo, o usuário deve fornecer o tempo gasto
// (vari´avel TEMPO) e a velocidade média (vari´avel VELOCIDADE) durante a viagem. Desta forma,
// ser´a poss´ıvel obter a distˆancia percorrida com a f´ormula DISTANCIA = TEMPO * VELOCIDADE. ˆ
// A partir do valor da distˆancia, basta calcular a quantidade de combust´ıvel usando LITROS USADOS
// = DISTANCIA/12. O programa deve apresentar os valores da velocidade média, tempo gasto na ˆ
// viagem, a distˆancia percorrida e a quantidade de litros utilizada na viagem.
void questao22()
{
}

// 23. Efetuar a leitura de dois valores numéricos inteiros representados pelas vari´aveis A e B e apresentar o
// resultado da diferen¸ca do maior valor pelo menor valor.
void questao23()
{
}

// 24. Elabore um programa para calcular a nota de um aluno. Para isso, leia três valores referentes a 3
// avalia¸c˜oes escolares do aluno e imprima uma mensagem dizendo que o aluno foi aprovado, se o valor
// da média escolar for maior ou igual a 6. Se o valor da média for menor que 6, solicite a nota da
// recupera¸c˜ao paralela. O programa deve pegar a nota da recupera¸c˜ao paralela mais a média calculada
// anteriormente e gerar uma nova média. Se a nova média for maior ou igual a 6, apresentar uma
// mensagem dizendo que o aluno foi aprovado na recupera¸c˜ao paralela. Se o aluno não foi aprovado,
// indicar uma mensagem informando que ele foi reprovado. Apresentar junto com as mensagens o valor
// da média do aluno, para qualquer condi¸c˜ao.
void questao24()
{
}

// 25. Elabore um algoritmo que, para uma entrada do salário bruto, calcule e apresente a contribui¸c˜ao ao
// INSS e o salário l´ıquido restante. A contribui¸c˜ao para o INSS é calculada da seguinte forma:
// 1. salário bruto até três salários mínimos - 8%
// 2. salário bruto acima de três salários mínimos - 10%
// 3. Para as contribui¸c˜oes que seriam maiores que o salário mínimo, a importˆancia é de um salário
// mínimo.
void questao25()
{
}

// 26. Implemente um programa usando switch que leia um número de 1 a 7 e informe o dia da semana
// correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um dia da semana,
// é mostrado uma mensagem de erro
void questao26()
{
}

// 27. Implemente um programa usando switch para ler um número de 1 a 12 e informar o trimestre correspondente, sendo Jan/Fev/Mar o 1 trimestre. Se for um número incorreto, mostrar mensagem de
// erro.
void questao27()
{
}

// 28. Considere a seguinte equação: W=2T+4Y-3X, na qual X=2T-4 e Y=T/2+4. Faça um programa que
// pe¸ca ao usuário um valor para T, calcule e mostre na tela o valor de W. Observa¸c˜ao: O valor de T deve
// ser maior que 2 e menor ou igual à 100; caso contr´ario, deve ser mostrada uma mensagem informando
// que o valor digitado é inv´alido e o c´alculo não é executado.
void questao28()
{
}

// 29. Escreva um programa que receba 5 notas de um aluno (todas de 0 a 20) e em função da soma destas
// notas determine se este aluno est´a:
// • Aprovado (a partir de 70 pontos);
// • Exame (de 30 a 69 pontos);
// • Reprovado (abaixo de 30 pontos).
// Observa¸c˜ao: Seu programa deve validar os valores, ou seja, caso o usuário digite um valor de nota
// inv´alido (abaixo de 0 ou acima de 20), uma mensagem dever´a ser exibida ao usuário e o programa não
// continua a execu¸c˜ao.
void questao29()
{
}

// 30. Faça um programa que receba a medida de um ˆangulo em graus, calcule e mostre para o usuário
// em qual quadrante esse ˆangulo se localiza. Observa¸c˜ao: Angulos menores que 00 e maiores que 3600 ˆ
// também s˜ao medidas de ˆangulos v´alidas. Exemplos:
// 198 - “Angulo se localiza no 3 ˆ º quadrante”
// 435 - “Angulo se localiza no 1 ˆ º quadrante”
// -215 - “Angulo se localiza no 2 ˆ º quadrante”
void questao30()
{
}

// 31. Escreva um programa em C para inserir qualquer número do usuário e encontrar o bit de menor ordem
// do número fornecido usando o operador bit a bit.
void questao31()
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