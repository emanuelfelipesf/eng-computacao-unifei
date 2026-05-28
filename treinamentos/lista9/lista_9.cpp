#include <iostream>
#include <cmath>
#include <cctype>
#include <limits>
#include <string>
using namespace std;

struct bolsaDeValores
{
    string nome, situacao;
    float v_atual, v_anterior;
    double prct_variacao;
};
void Cadastro01(bolsaDeValores &compania);
void Apresentacao(bolsaDeValores compania);
void questao1()
{
    bolsaDeValores Compania[4];

    for (int i = 0; i < 4; i++)
    {
        Cadastro01(Compania[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        Apresentacao(Compania[i]);
    }
}

void questao2()
{
    bolsaDeValores Compania[4];
    float acaoUsuario;

    for (int i = 0; i < 4; i++)
    {
        cout << "\tCadastro:\n";
        Cadastro01(Compania[i]);
    }

    cout << "Acao objetivo: ";
    cin >> acaoUsuario;
    for (int i = 0; i < 4; i++)
    {
        if (Compania[i].v_atual < acaoUsuario)
        {
            Apresentacao(Compania[i]);
            cout << endl;
        }
    }
}

void questao3()
{
    bolsaDeValores compania[4];
    float media = 0, somaDP = 0, desvioPadrao = 0;

    for (int i = 0; i < 4; i++)
    {
        Cadastro01(compania[i]);
        media += (compania[i].v_atual / 4);
    }

    for (int i = 0; i < 4; i++)
    {
        somaDP += pow(compania[i].v_atual - media, 2);
    }
    desvioPadrao = sqrt(somaDP / 4);

    cout << "\tMedia total: " << media << endl
         << "\tDesvio Padrao: " << desvioPadrao;
}

struct Pessoa
{
    string nome, endereco;
    int idade;
};
void Cadastro04(Pessoa &usuario);
void questao4()
{
    Pessoa usuario;

    Cadastro04(usuario);
}

struct Alunos
{
    string nome, curso;
    int matricula;
};
void Cadastro05(Alunos &aluno);
void questao5()
{
    Alunos turma[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\tCadastro do Aluno " << i + 1 << endl;
        Cadastro05(turma[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "\nAluno " << i + 1 << endl;
        cout << "\tNome: " << turma[i].nome;
        cout << "\tMatricula: " << turma[i].matricula;
        cout << "\tCurso: " << turma[i].curso;
    }
}

struct Horario
{
    int horas, minutos, segundos;
};
struct Data
{
    int dia, ano;
    string mes;
};
struct Compromisso
{
    string data, horario, texto;
};
void CadastroHora(Horario &tempo);
void CadastroData(Data &espaco);
void CadastroCompromisso(Compromisso &cmp, Horario tempo, Data espaco);
void questao6() 
{
    Horario tempo;
    Data espaco;
    Compromisso cmp;

    CadastroHora(tempo);
    CadastroData(espaco);
    CadastroCompromisso(cmp, tempo, espaco);
    
    cout << "\n\tCompromisso cadastrado!\n" << cmp.data << endl << cmp.horario << endl << cmp.texto;
}

void questao7()
{
    
}

void questao8() {}

void questao9() {}

void questao10() {}

void questao11() {}

void questao12() {}

void questao13() {}

void questao14() {}

void questao15() {}

void questao16() {}

int main()
{
    bool loop = true;

    while (loop)
    {
        int escolha;
        cout << "\nQual questao deseja ver (0 para sair): ";
        cin >> escolha;

        switch (escolha)
        {
        case 0:
            cout << "Encerrando...";
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

        default:
            cout << "Invalido!";
            break;
        }
    }

    return 0;
}

void Cadastro01(bolsaDeValores &compania)
{
    cout << "Primeiro Nome da companhia: "; cin >> compania.nome;
    cout << "Situacao resumida atual da companhia: "; cin >> compania.situacao;
    cout << "Valor atual da acao (em reais): "; cin >> compania.v_atual;
    cout << "Valor anterior (em reais): "; cin >> compania.v_anterior;
    cout << "Variacao da acao da bolsa (em porcentagem): "; cin >> compania.prct_variacao;
}
void Apresentacao(bolsaDeValores compania)
{
    cout << "\tNome: " << compania.nome;
    cout << "\tSituacao: " << compania.situacao;
    cout << "\tValor atual: RS" << compania.v_atual;
    cout << "\tValor anterior: RS" << compania.v_anterior;
    cout << "\tPorcentagem da acao: " << compania.prct_variacao << "%";
}
void Cadastro04(Pessoa &usuario)
{
    cout << "Primeiro Nome: "; cin >> usuario.nome;
    cout << "Idade: "; cin >> usuario.idade;
    cout << "CEP do Endereco: "; cin >> usuario.endereco;
}

void Cadastro05(Alunos &aluno)
{
    cout << "Primeiro Nome: "; cin >> aluno.nome;
    cout << "Matricula: "; cin >> aluno.matricula;
    cout << "Sigla do Curso: "; cin >> aluno.curso;
}
void CadastroHora(Horario &tempo)
{
    cout << "Hora: "; cin >> tempo.horas;
    cout << "Minuto: "; cin >> tempo.minutos;
    cout << "Segundo: "; cin >> tempo.segundos;
}
void CadastroData(Data &espaco)
{
    cout << "Dia: "; cin >> espaco.dia;
    cout << "Mes: "; cin >> espaco.mes;
    cout << "Ano: "; cin >> espaco.ano;
}
void CadastroCompromisso(Compromisso &cmp, Horario tempo, Data espaco)
{
    cmp.data = to_string(espaco.dia) + "/" + espaco.mes + "/" + to_string(espaco.ano);
    cmp.horario = to_string(tempo.horas) + ":" + to_string(tempo.minutos) + ":" + to_string(tempo.segundos);

    cout << "Palavra que resume o compromisso: "; cin >> cmp.texto;
}

