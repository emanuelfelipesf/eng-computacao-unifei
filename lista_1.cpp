#include <iostream>
#include <cmath>
using namespace std;

string true_false(int auxiliar)
{
    if (auxiliar == 1)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}

// 1. Qual das opções abaixo está INCORRETA, segundo as regras de composição de expressões, para A, B e C inteiros:
// a) A == 0 && !5 + B
// b) B > C && !0 <= A
// c) && !A >= B
// d) !A && B
// e) A||B >= C
void questao1()
{
    cout << "Resposta: Letra C, pois esta sem uma variavel para verificar a condicao. \n";
}

// 2. A expressão !(A && !B||C) será verdadeira quando:
// a) A = 1 e B = 0 e C = 0
// b) A = 1 e B = 1 e C = 1
// c) A = 1 e B = 1 e C = 0
// d) A = 0 e B = 0 e C = 1
// e) A = 0 e B = 1 e C = 1
void questao2()
{
    int A, B, C, aux;
    string resposta;

    cout << "Para A = 1, B = 0 e C = 0 \n";
    A = 1;
    B = 0;
    C = 0;
    aux = (!(A && !B || C));
    resposta = true_false(aux);
    cout << resposta << endl;

    cout << "Para A = 1, B = 1 e C = 1 \n";
    A = 1;
    B = 1;
    C = 1;
    aux = (!(A && !B || C));
    resposta = true_false(aux);
    cout << resposta << endl;

    cout << "Para A = 1, B = 1 e C = 0 \n";
    A = 1;
    B = 1;
    C = 0;
    aux = (!(A && !B || C));
    resposta = true_false(aux);
    cout << resposta << endl;

    cout << "Para A = 0, B = 0 e C = 1 \n";
    A = 0;
    B = 0;
    C = 1;
    aux = (!(A && !B || C));
    resposta = true_false(aux);
    cout << resposta << endl;

    cout << "Para A = 0, B = 1 e C = 1 \n";
    A = 0;
    B = 1;
    C = 1;
    aux = (!(A && !B || C));
    resposta = true_false(aux);
    cout << resposta << endl;

    cout << "Resposta: A expressao sera verdadeira quando A = 1, B = 1 e C = 0, ou seja, letra C";
}

// 3. Qual será o resultado da expressão abaixo, para A=1, B=2, C=0.5, D=3.0 | int(float(B) * D/C + float(A) + C)%(A + B)
// a) 1
// b) 2
// c) 3
// d) 4
// e) 5
void questao3(){
    int A = 1, B = 2, aux;
    float C = 0.5, D = 3.0;

    aux = (int(float(B) * D/C + float(A) + C)%(A + B));
    cout << "O resultado da expressao e: " << aux << endl << "Ou seja, letra A";
}

// 4. Construa a tabela verdade para a expressão: x||y && (!z||x)
void questao4(){
    int x, y, z;
    
    cout << "x | y | z | x || y && (!z || x)" << endl;
    cout << "1 | 1 | 1 |        1" << endl;
    cout << "1 | 1 | 0 |        1" << endl;
    cout << "1 | 0 | 1 |        1" << endl;
    cout << "0 | 1 | 1 |        0" << endl;
    cout << "0 | 0 | 1 |        0" << endl;
    cout << "0 | 1 | 0 |        1" << endl;
    cout << "1 | 0 | 0 |        1" << endl;
    cout << "0 | 0 | 0 |        0" << endl;
}

// 5. Dadas as variáveis numéricas X, Y e Z, contendo os valores 5, 4 e 2.8 respectivamente; as variáveis literais NOME e CURSO, contendo respectivamente "FELIPE" e COMPUTAÇÃO", obter os resultados ˜
// das expressões lógicas a seguir:
// a. ( ) NOME =="FELIPE"|| CURSO == "COMPUTAÇÃO" && X <= Z
// b. ( ) NOME =="JOANA" || Y <= X && CURSO == "ELETRICA"
// c. ( ) (CURSO =="MATERIAIS" || X >= Y ) && 5 * Y > Z
// d. ( ) NOME =="JORGE" || X + 2 < Z + 7
// e. ( ) X * Y ! = Z && (Z + 2) == 15
// f. ( ) NOME! = "JOAQUIM" || Y % Z == 2 * X
void questao5(){
    string NOME = "FELIPE", CURSO = "COMPUTACAO", expressao;
    int X = 5, Y = 4, Z = 2.8, aux;
    
    aux = (NOME =="FELIPE"|| CURSO == "COMPUTACAO" && X <= Z);
    expressao = true_false(aux);
    cout << "a: " << expressao << endl;
    
    aux = (NOME =="JOANA" || Y <= X && CURSO == "ELETRICA");
    expressao = true_false(aux);
    cout << "b: " << expressao << endl;
    
    aux = ((CURSO =="MATERIAIS" || X >= Y ) && 5 * Y > Z);
    expressao = true_false(aux);
    cout << "c: " << expressao << endl;
    
    aux = (NOME =="JORGE" || X + 2 < Z + 7);
    expressao = true_false(aux);
    cout << "d: " << expressao << endl;
    
    aux = (X * Y != Z && (Z + 2) == 15);
    expressao = true_false(aux);
    cout << "e: " << expressao << endl;
    
    aux = (NOME != "JOAQUIM" || Y % Z == 2 * X);
    expressao = true_false(aux);
    cout << "f: " << expressao << endl;
}

// 6. Dadas as variáveis numéricas X, Y e Z, contendo os valores 1.5 , 5 e 13 respectivamente; as variáveis
// literais CIDADE e NOME, contendo respectivamente "ITABIRA" e "Sandro", obter os resultados das
// expressões lógicas a seguir:
// a. ( ) NOME == "MARIA" ||CIDADE == "ITABIRA"
// b. ( ) CIDADE == "TRES CORAÇÕES" || Y >= X && NOME == "SANDRO"
// c. ( ) (CIDADE == "TRES CORAÇÕES" || Y >= X) && 2 * Y < Z
// d. ( ) NOME == "JORGE" || X * 2 < Z + 10
// e. ( ) CIDADE! =!"ITABIRA" || Z % Y == 2 * X
void questao6(){
    string CIDADE = "ITABIRA", NOME = "Sandro", expressao;
    int X = 1.5, Y = 5, Z = 13, aux;
    
    aux = (NOME == "MARIA" ||CIDADE == "ITABIRA");
    expressao = true_false(aux);
    cout << "a: " << expressao << endl;
    
    aux = (CIDADE == "TRES CORAÇÕES" || Y >= X && NOME == "SANDRO");
    expressao = true_false(aux);
    cout << "b: " << expressao << endl;
    
    aux = ((CIDADE == "TRES CORAÇÕES" || Y >= X) && 2 * Y < Z);
    expressao = true_false(aux);
    cout << "c: " << expressao << endl;
    
    aux = (NOME == "JORGE" || X * 2 < Z + 10);
    expressao = true_false(aux);
    cout << "d: " << expressao << endl;
    
    aux = (CIDADE == "ITABIRA" || Z % Y == 2 * X);
    expressao = true_false(aux);
    cout << "e: " << expressao << endl;
}

// 7. Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda.
void questao7(){
    float n1, n2, media;

    while (true)
    {
        cout << "Digite duas notas (separe-os por espaço): ";
        cin >> n1 >> n2;
        if (n1 < 0 || n2 < 0)
        {
            cout << "As notas não podem ser negativas!\n";
        } else {
            media = ((n1 * 2) + (n2 * 3))/5;
            cout << "A média das notas é: " << media << endl;
            break;
        }
    }
}

// 8. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa que
// receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e salário final.
void questao8(){
    float fixo, vendas, salario, comissão;

    while (true)
    {
        cout << "Digite o salario do funcionario: ";
        cin >> fixo;
        cout << "Digite o valor total das vendas: ";
        cin >> vendas;

        if (fixo < 0 || vendas < 0)
        {
            cout << "O salario ou vendas não pode ser negativo!";
        }
        else
        {
            comissão = vendas * 0.04;
            salario = fixo + comissão;
            cout << "O salario final sera: RS" << salario << endl << "Com comissao de: " << comissão << endl;
            break;
        }   
    }
}

// 9. Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.
void questao9(){
    float peso;
    while (true)
    {
        cout << "Digite o peso em quilos: ";
        cin >> peso;
        if (peso < 0)
        {
            cout << "Peso inválido! Digite novamente\n";
        }
        else
        {
            peso *= 100;
            cout << "O peso em gramas e: " << peso << endl;
            break;
        }
    }
}

// 10. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que: A = ((base maior + base menor) * altura) / 2
void questao10(){
    float base_maior, base_menor, altura, area;

    while (true)
    {
        cout << "Digite a base maior do trapezio: ";
        cin >> base_maior;
        cout << "Digite a base menor do trapezio: ";
        cin >> base_menor;
        cout << "Digite a altura do trapezio: ";
        cin >> altura;
        if (base_maior <= 0 || base_menor <= 0)
        {
            cout << "Base invalida! Digite novamente";
        }
        else
        {
            area = ((base_maior + base_menor) * altura) / 2;
            cout << "A area do trapezio e: " << area << endl;
            break;
        }
    }
}

// 11. Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
// e mostre a quantidade de salários mínimos que esse funcionário ganha.
void questao11(){
    float s_minimo, s_funcionario, salarios;

    while (true)
    {
        cout << "Digite o valor do salario minimo: ";
        cin >> s_minimo;
        cout << "Digite o valor do salario do funcionario: ";
        cin >> s_funcionario;
        if (s_funcionario < 0 || s_minimo < 0)
        {
            cout << "Valores invalidos! Digite novamente";
        }
        else
        {
            salarios = s_minimo/s_funcionario;
            cout << "O funcionario recebe: " << salarios << " salarios minimos\n";
            break;
        }
    }
}

// 12. Faça um programa em c++ que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
// a) A idade dessa pessoa em anos;
// b) A idade dessa pessoa em meses;
// c) A idade dessa pessoa em dias;
// d) A idade dessa pessoa em semanas.
void questao12(){
    int ano_nascimento, ano_atual, idade_anos, idade_meses, idade_dias, idade_semanas;

    while (true)
    {
        cout << "Digite o ano de nascimento: ";
        cin >> ano_nascimento;
        cout << "Digite o ano atual: ";
        cin >> ano_atual;
        if (ano_nascimento < 0 || ano_atual < 0 || ano_nascimento >= ano_atual)
        {
            cout << "Dados invalidos! Ano de nascimento deve ser antes do ano atual e ambos positivos.\n";
        }
        else
        {
            idade_anos = ano_atual - ano_nascimento;
            idade_meses = idade_anos * 12;
            idade_dias = idade_anos * 365;
            idade_semanas = idade_anos * 52;
            cout << "a) Idade em anos: " << idade_anos << endl;
            cout << "b) Idade em meses: " << idade_meses << endl;
            cout << "c) Idade em dias: " << idade_dias << endl;
            cout << "d) Idade em semanas: " << idade_semanas << endl;
            break;
        }
    }
}

// 13. Faça um programa que receba o raio, calcule e mostre:
// a) O comprimento de uma esfera; sabe-se que C = 2 * π * R;
// b) A área de uma esfera; sabe-se que A = π * R2;
// c) O volume de uma esfera; sabe-se que V = 3/4 * π * R3
void questao13(){
    float raio, area, comprimento, volume;
    while (true)
    {
        if (raio <= 0)
        {
            cout << "O raio não poode ser menor ou igual a 0";
        } else {
            comprimento = 2 * M_PI * raio;
            area = M_PI * pow(raio, 2);
            volume = (3/4) * M_PI * pow(raio, 3);
            cout << "O comprimento é: " << comprimento << endl;
            cout << "A area é: " << area << endl;
            cout << "O volume é: " << volume << endl;
            break;
        }
    }
}

// 14. Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
// Fahrenheit. Sabe-se que F = 180 * (C+32) / 100.
void questao14(){
    float Celsius, Fahrenheit;

    cout << "Digite a temperatura em Celsius: ";
    cin >> Celsius;
    Fahrenheit = 180 * (Celsius + 32) / 100;
    cout << "A temperatura em Fahrenheit e: " << Fahrenheit << endl;
}

// 15. Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
// de horas extras trabalhadas, calcule e mostre o salário a receber, seguindo as regras abaixo:
// a) A hora trabalhada vale 1/8 do salário mínimo;
// b) A hora extra vale 1/4 do salário mínimo;
// c) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
// d) A quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra;
// e) O salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
void questao15(){
    float horas, s_minimo, horas_extra, hora_trab_valor, hora_extra_valor, s_bruto, quantia_extra, total;
    while (true)
    {
        cout << "Digite o numero de horas trabalhadas: ";
        cin >> horas;
        cout << "Digite o valor do salario minimo: ";
        cin >> s_minimo;
        cout << "Digite o numero de horas extras: ";
        cin >> horas_extra;
        if (horas < 0 || s_minimo < 0 || horas_extra < 0)
        {
            cout << "Valores invalidos! Digite novamente.\n";
        }
        else
        {
            hora_trab_valor = s_minimo / 8;
            hora_extra_valor = s_minimo / 4;
            s_bruto = horas * hora_trab_valor;
            quantia_extra = horas_extra * hora_extra_valor;
            total = s_bruto + quantia_extra;
            cout << "Salario bruto: R$ " << s_bruto << endl;
            cout << "Quantia horas extras: R$ " << quantia_extra << endl;
            cout << "Salario a receber: R$ " << total << endl;
            break;
        }
    }
}


// 16. Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida
// do terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180 graus.
void questao16(){
    float ang1, ang2, ang3;
    while (true)
    {
        cout << "Digite o primeiro angulo: ";
        cin >> ang1;
        cout << "Digite o segundo angulo: ";
        cin >> ang2;
        if (ang1 <= 0 || ang2 <= 0 || (ang1 + ang2) >= 180)
        {
            cout << "Angulos invalidos para um triângulo!\n";
        }
        else
        {
            ang3 = 180 - (ang1 + ang2);
            cout << "Terceiro angulo: " << ang3 << " graus\n";
            break;
        }
    }
}


// 17. Em um curso semestral de uma instituição de ensino, a média final é composta por três notas e é
// ponderada, ou seja, possui peso 2 para a primeira nota, peso 1 para a segunda e peso 3 para a terceira.
// Faça um programa que peça as notas para o usuário e calcule a média final. Faça o teste de mesa para
// conferir o resultado.
void questao17(){
    float n1, n2, n3, media;
    while (true)
    {
        cout << "Digite a primeira nota: ";
        cin >> n1;
        cout << "Digite a segunda nota: ";
        cin >> n2;
        cout << "Digite a terceira nota: ";
        cin >> n3;
        if (n1 < 0 || n2 < 0 || n3 < 0)
        {
            cout << "Notas nao podem ser negativas!\n";
        }
        else
        {
            media = ((n1 * 2) + (n2 * 1) + (n3 * 3)) / 6;
            cout << "Media final: " << media << endl;
            break;
        }
    }
}

// 18. Faça um programa que receba o salário bruto de um funcinário e o seu percentual de imposto. Calcule
// o valor do imposto e do salário líquido. Faça o teste de mesa para conferir os resultados.
void questao18(){
    float s_bruto, imposto, valor_imposto, s_liquido;
    while (true)
    {
        cout << "Digite o salario bruto: ";
        cin >> s_bruto;
        cout << "Digite o percentual de imposto: ";
        cin >> imposto;
        if (s_bruto < 0 || imposto < 0)
        {
            cout << "Valores invalidos!\n";
        }
        else
        {
            valor_imposto = s_bruto * (imposto / 100);
            s_liquido = s_bruto - valor_imposto;
            cout << "Valor do imposto: RS " << valor_imposto << endl;
            cout << "Salario liquido: RS " << s_liquido << endl;
            break;
        }
    }
}

// 19. Um trabalhador recebeu seu salário e o depositou em sua conta corrente bancária. Esse trabalhador
// emitiu dois cheques e agora deseja saber seu saldo atual. Sabe-se que cada opera¸c˜ao bancária de
// retirada paga CPMF de 0,38% e o saldo inicial da conta está zerado. Crie uma constante com o
// valor fixo do CPMF. Qual a vantagem de se utilizar constante? Faça um programa para resolver esse
// problema e Faça o teste de mesa para conferir os resultados.
void questao19(){
    const float CPMF = 0.0038;
    float salario, cheque1, cheque2, saldo;
    while (true)
    {
        cout << "Digite o salario depositado: ";
        cin >> salario;
        cout << "Digite o valor do primeiro cheque: ";
        cin >> cheque1;
        cout << "Digite o valor do segundo cheque: ";
        cin >> cheque2;
        if (salario < 0 || cheque1 < 0 || cheque2 < 0)
        {
            cout << "Valores invalidos!\n";
        }
        else
        {
            saldo = salario - cheque1 * (1 + CPMF) - cheque2 * (1 + CPMF);
            cout << "Saldo atual: R$ " << saldo << endl;
            break;
        }
    }
}

// 20. O índice de massa corporal (IMC) é uma fórmula que indica se um indivíduo está acima do peso, se
// está obeso ou abaixo do peso ideal considerado saudável. A fórmula para calcular o IMC é dividir o
// peso, medido em quilos, pelo quadrado da altura, em metros. Assim, Faça um programa que calcule e
// mostre o IMC. Faça o teste de mesa para conferir o resultado.
void questao20(){
    float peso, altura, imc;
    while (true)
    {
        cout << "Digite o peso em kg: ";
        cin >> peso;
        cout << "Digite a altura em metros: ";
        cin >> altura;
        if (peso <= 0 || altura <= 0)
        {
            cout << "Valores invalidos!\n";
        }
        else
        {
            imc = peso / (altura * altura);
            cout << "IMC: " << imc << endl;
            break;
        }
    }
}

// 21. Um lenhador vende um caminhão de lenha por X reais. O custo de produção é igual a 4/5 do preço da
// venda. Faça um programa que calcule o lucro. Crie uma constante com o valor fixo da porcentagem
// do custo de produção. Faça o teste de mesa para conferir o resultado.
void questao21(){
    const float custo_producao = 4.0/5.0;
    float venda, custo, lucro;
    while (true)
    {
        cout << "Digite o preco de venda X: ";
        cin >> venda;
        if (venda < 0)
        {
            cout << "Valor invalido!\n";
        }
        else
        {
            custo = venda * custo_producao;
            lucro = venda - custo;
            cout << "Custo: R$ " << custo << endl;
            cout << "Lucro: R$ " << lucro << endl;
            break;
        }
    }
}

// 22. Seja a seguinte expressão: n=z+y*x;. Se desejarmos somar z com y e depois multiplicar seu resultado
// com x, o que devemos acrescentar na expressão acima?
void questao22(){
    cout << "Para somar z com y e depois multiplicar por x, deve-se acresentar os parenteses entre a expressão z+y -> n=(z+y)*x";
}

// 23. Idade e sexo válidos são representados em C/C++ como: (idade > 0 && (sexo == 'F' || sexo ==
// 'M')). Por que essa expressão não é equivalente à (idade > 0 && sexo == 'F' || sexo == 'M')? Dê um
// contra-exemplo.
void questao23(){
    cout << "Em C/C++ as condicoes sao analisadas da esquerda para a direita, caso nao houver separacoes, os parenteses, a expressao ficara com uma analise errada.";
    cout << "A condicao sexo == 'F' sera analisada junto com a idade, e nao com a condicao sexo == 'M'";
}

// 24. Qual a diferença entre as instruções a seguir: a = 7 e a == 7?
void questao24(){
    cout << "Para a = 7, estamos atribuindo o valor 7 a variavel a. Já para a == 7, estamos verificando se a e igual ao valor de 7, o que ira retornar verdadeiro ou falso.";
}

// 25. Deseja-se verificar se x está no intervalo −5 <= x <= 5. Por que em C/C++ a expressão −5 <=
// x <= 5 está incorreta? Qual expressão seria correta?
void questao25(){
    cout << "A expressao esta incorreta porque em C/C++ a comparacao ira analisar da esquerda para a direita, ou seja, primeiro comparar -5 <= x e retornar um valor booleano (1, 0) e em seguida comparar esse valor com 5, ou seja, 1 ou 0 <= 5";
    cout << "A maneira certa de verificar essa condicao e: x <= -5 && x <= 5";
}

// 26. Faça um programa que receba o peso de uma pessoa, calcule e mostre:
// a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
// b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.
void questao26(){
    float peso, engordar, emagrecer;
    while (true)
    {
        cout << "Digite o peso atual: ";
        cin >> peso;
        if (peso < 0)
        {
            cout << "Peso invalido!\n";
        }
        else
        {
            engordar = peso * 1.15;
            emagrecer = peso * 0.8;
            cout << "Peso engordando 15%: " << engordar << endl;
            cout << "Peso emagrecendo 20%: " << emagrecer << endl;
            break;
        }
    }
}

// 27. Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar
// 18W de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros),
// calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada.
void questao27(){
    float comprimento, largura, area, potencia, potencia_W = 18;
    while (true)
    {
        cout << "Digite comprimento (m): ";
        cin >> comprimento;
        cout << "Digite largura (m): ";
        cin >> largura;
        if (comprimento <= 0 || largura <= 0)
        {
            cout << "Dimensoes invalidas!\n";
        }
        else
        {
            area = comprimento * largura;
            potencia = area * potencia_W;
            cout << "Area: " << area << " m2" << endl;
            cout << "Potencia: " << potencia << " W" << endl;
            break;
        }
    }
}

// 28. Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo. Calcule e
// mostre o salário a receber seguindo as regras abaixo:
// a) a hora trabalhada vale a metade do salário mínimo;
// b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
// c) o imposto equivale a 3% do salário bruto;
// d) o salário a receber equivale ao salário bruto menos o imposto.
void questao28(){
    float horas, s_min, hora_valor, s_bruto, imposto, s_receber, imposto = 0.03;
    while (true)
    {
        cout << "Digite numero de horas trabalhadas: ";
        cin >> horas;
        cout << "Digite salario minimo: ";
        cin >> s_min;
        if (horas < 0 || s_min < 0)
        {
            cout << "Valores invalidos!\n";
        }
        else
        {
            hora_valor = s_min / 2;
            s_bruto = horas * hora_valor;
            imposto = s_bruto * imposto;
            s_receber = s_bruto - imposto;
            cout << "Salario bruto: R$ " << s_bruto << endl;
            cout << "Imposto (3%): R$ " << imposto << endl;
            cout << "Salario a receber: R$ " << s_receber << endl;
            break;
        }
    }
}

// 29. Faça um programa que receba um número real, calcule e mostre:
// a) A parte inteira desse número;
// b) A parte fracionária desse número;
// c) O arredondamento desse número;
void questao29(){
    float num, inteira, fracionaria;
    int inteira_int;
    while (true)
    {
        cout << "Digite um numero real: ";
        cin >> num;
        inteira_int = (int)num;
        inteira = (float)inteira_int;
        fracionaria = num - inteira;
        cout << "Parte inteira: " << inteira_int << endl;
        cout << "Parte fracionaria: " << fracionaria << endl;
        cout << "Arredondado: " << round(num) << endl;
        break;
    }
}


int main()
{
    int questao;
    bool condicao = true;

    while (condicao)
    {
        cout << "\n\nQual questao voce gostaria de ver?\n(Digite 0 para sair) \n";
        cin >> questao;
        switch (questao)
        {
        case 0:
            condicao = false;
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

        default:
            cout << "Escolha invalida!";
            break;
        }
    }

    return 0;
}