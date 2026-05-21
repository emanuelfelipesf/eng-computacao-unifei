#include <cstdio>
using namespace std;

struct Funcionario
{
    char nome[60], cargo[40];
    int matricula;
    float salario_bruto, salario_liquido;
};

void Cadastro(Funcionario &dados);
float SalarioLiquido(float salario_bruto);
void Apresentacao(Funcionario pessoa);

int main(int argc, char const *argv[])
{
    Funcionario pessoa;

    Cadastro(pessoa);
    Apresentacao(pessoa);

    return 0;
}

void Cadastro(Funcionario &dados)
{
    printf("%s", "*Cadastro de Funcionario*\n");
    printf("%s", "\tNome: "); scanf(" %59[^\n]", dados.nome);
    printf("%s", "\tMatricula: "); scanf("%i", &dados.matricula);
    printf("%s", "\tCargo: "); scanf(" %39[^\n]", dados.cargo);
    printf("%s", "\tSalario Bruto: "); scanf("%f", &dados.salario_bruto);
    dados.salario_liquido = SalarioLiquido(dados.salario_bruto);
}

float SalarioLiquido(float salario_bruto)
{
    return salario_bruto * (1 - 0.11);
}

void Apresentacao(Funcionario pessoa)
{
    float INSS = pessoa.salario_bruto * 0.11;

    printf("%s", "*Apresentacao de Funcionario*\n");
    printf("\tNome           :  %s", pessoa.nome);
    printf("\n\tMatricula     :  %i", pessoa.matricula);
    printf("\n\tCargo         :  %s", pessoa.cargo);
    printf("\n\tSal. Bruto    :  R$%.2f", pessoa.salario_bruto);
    printf("\n\tINSS          :  R$%.2f", INSS);
    printf("\n\tSal. Liquido  :  R$%.2f", pessoa.salario_liquido);
}