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
    int dia, mes, ano;
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

    cout << "\n\tCompromisso cadastrado!\n"
         << cmp.data << endl
         << cmp.horario << endl
         << cmp.texto;
}

struct Estudante
{
    int matricula;
    string nome, situacao;
    float n1, n2, n3, media;
};
void Cadastro07(Estudante &aluno);
int maiorNotaN1(Estudante aluno[5]);
int maiorMediaGeral(Estudante aluno[5]);
int menorMediaGeral(Estudante aluno[5]);
void questao7()
{
    Estudante turma[5];
    int idx_maiorN1, idx_maiorMedia, idx_menorMedia;

    for (int i = 0; i < 5; i++)
    {
        Cadastro07(turma[i]);
    }
    
    idx_maiorN1 = maiorNotaN1(turma);
    idx_maiorMedia = maiorMediaGeral(turma);
    idx_menorMedia = menorMediaGeral(turma);

    cout << "Aluno de maior nota na N1: " << turma[idx_maiorN1].nome << endl << "\t(matricula: " << turma[idx_maiorN1].matricula << " \tsituacao: " << turma[idx_maiorN1].situacao << ")" << endl;
    cout << "Aluno de maior media geral: " << turma[idx_maiorMedia].nome << endl << "\t(matricula: " << turma[idx_maiorMedia].matricula << " \tsituacao: " << turma[idx_maiorMedia].situacao << ")" << endl;
    cout << "Aluno de menor media geral: " << turma[idx_menorMedia].nome << endl << "\t(matricula: " << turma[idx_menorMedia].matricula <<  " \tsituacao: " << turma[idx_menorMedia].situacao << ")" << endl;
}

struct Vetor
{
    float x, y, z;
};
void somaVetores(Vetor vetores[3]);
void questao8()
{
    Vetor vetor[3];

    for (int i = 0; i < 2; i++)
    {
        cout << "\tVetor" << i+1 << endl;
        cout << "Posicao x: "; cin >> vetor[i].x;
        cout << "Posicao y: "; cin >> vetor[i].y;
        cout << "Posicao z: "; cin >> vetor[i].z;
    }

    somaVetores(vetor);

    cout << "Soma dos vetores:\n";
    cout << "\tPosicao x: " << vetor[2].x;
    cout << "\n\tPosicao y: " << vetor[2].y;
    cout << "\n\tPosicao z: " << vetor[2].z;
}

struct Universitario
{
    int matricula, codigo;
    float n1, n2, media;
    string nome;
};
void Cadastro09(Universitario &turma);
void calculoMedia(Universitario &turma);
void questao9()
{
    Universitario turma[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "\n\tCadastro do Aluno" << i+1 << endl;
        Cadastro09(turma[i]);
        calculoMedia(turma[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Apresentacao" << endl;
        cout << "\tNome: " << turma[i].nome;
        cout << "\tMedia: " << turma[i].media << endl;
    }
}

struct Dados
{
    string nome;
    int idade, cpf, nascDia, nascMes, nascAno;
    char sexo, codigo[99];
};
void Cadastro10(Dados &funcionario);
void questao10()
{
    Dados funcionario;

    Cadastro10(funcionario);
}

struct Pessoas
{
    string nome, endereco;
    int telefone;
};
void Cadastro11(Pessoas &p);
void questao11()
{
    Pessoas p[15];
    
    for (int i = 0; i < 15; i++)
    {
        Cadastro11(p[i]);
    }
    
    string maior = p[0].nome;
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (p[j].nome > maior)
            {
                maior = p[j].nome;
            }
            cout << p[i].nome << endl;
        }
    }
}

void questao12()
{
    
}

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
    cout << "Nome da companhia: ";
    getline(cin >> ws, compania.nome);
    cout << "Situacao atual da companhia: ";
    getline(cin >> ws, compania.situacao);
    cout << "Valor atual da acao (em reais): ";
    cin >> compania.v_atual;
    cout << "Valor anterior (em reais): ";
    cin >> compania.v_anterior;
    cout << "Variacao da acao da bolsa (em porcentagem): ";
    cin >> compania.prct_variacao;
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
    cout << "Nome: ";
    getline(cin >> ws, usuario.nome);
    cout << "Idade: ";
    cin >> usuario.idade;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Endereco: ";
    getline(cin >> ws, usuario.endereco);
}
void Cadastro05(Alunos &aluno)
{
    cout << "Nome: ";
    getline(cin >> ws, aluno.nome);
    cout << "Matricula: ";
    cin >> aluno.matricula;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Curso: ";
    getline(cin >> ws, aluno.curso);
}
void CadastroHora(Horario &tempo)
{
    cout << "Hora: ";
    cin >> tempo.horas;
    cout << "Minuto: ";
    cin >> tempo.minutos;
    cout << "Segundo: ";
    cin >> tempo.segundos;
}
void CadastroData(Data &espaco)
{
    cout << "Dia (dd): ";
    cin >> espaco.dia;
    cout << "Mes (mm): ";
    cin >> espaco.mes;
    cout << "Ano (aa): ";
    cin >> espaco.ano;
}
void CadastroCompromisso(Compromisso &cmp, Horario tempo, Data espaco)
{
    cmp.data = to_string(espaco.dia) + "/" + to_string(espaco.mes) + "/" + to_string(espaco.ano);
    cmp.horario = to_string(tempo.horas) + ":" + to_string(tempo.minutos) + ":" + to_string(tempo.segundos);
    cout << "Palavra que resume o compromisso: ";
    getline(cin >> ws, cmp.texto);
}
void Cadastro07(Estudante &aluno)
{
    cout << "\n\tCadastro do Aluno\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Nome do aluno: "; getline(cin >> ws, aluno.nome);
    cout << "Matricula: "; cin >> aluno.matricula;
    cout << "Nota da Primeira prova: "; cin >> aluno.n1;
    cout << "Nota da Segunda prova: "; cin >> aluno.n2;
    cout << "Nota da Terceira prova: "; cin >> aluno.n3;
    aluno.media = (aluno.n1 + aluno.n2 + aluno.n3)/3;
    if (aluno.media >= 6)
    {
        aluno.situacao = "Aprovado";
    }
    else
    {
        aluno.situacao = "Reprovado";
    }
}
int maiorNotaN1(Estudante aluno[5])
{
    int idx = 0;
    float maior = aluno[0].n1;

    for (int i = 1; i < 5; i++)
    {
        if (aluno[i].n1 > maior)
        {
            maior = aluno[i].n1;
            idx = i;
        }
    }

    return idx;
}
int maiorMediaGeral(Estudante aluno[5])
{
    int idx = 0;
    float maior = aluno[0].media;

    for (int i = 1; i < 5; i++)
    {
        if (aluno[i].media > maior)
        {
            maior = aluno[i].media;
            idx = i;
        }
    }

    return idx;
}
int menorMediaGeral(Estudante aluno[5])
{
    int idx = 0;
    float menor = aluno[0].media;

    for (int i = 1; i < 5; i++)
    {
        if (aluno[i].media < menor)
        {
            menor = aluno[i].media;
            idx = i;
        }
    }

    return idx;
}
void somaVetores(Vetor vetores[3])
{
    vetores[2].x = (vetores[0].x + vetores[1].x);
    vetores[2].y = (vetores[0].y + vetores[1].y);
    vetores[2].z = (vetores[0].z + vetores[1].z);
}
void Cadastro09(Universitario &turma)
{
    cout << "Matricula: "; cin >> turma.matricula;
    cout << "Nome: "; cin >> turma.nome;
    cout << "Codigo: "; cin >> turma.codigo;
    cout << "Nota 1: "; cin >> turma.n1;
    cout << "Nota 2: "; cin >> turma.n2;
}
void calculoMedia(Universitario &turma)
{
    turma.media = ((turma.n1 * 1) + (turma.n2 * 2))/3;
}
void Cadastro10(Dados &funcionario)
{
    cout << "Nome: "; 
    getline(cin >> ws, funcionario.nome);
    cout << "Idade: "; cin >> funcionario.idade;
    cout << "Sexo (M/F): "; cin >> funcionario.sexo;
    cout << "CPF (apenas numeros): "; cin >> funcionario.cpf;
    cout << "Data de Nascimento (dd mm aa): "; cin >> funcionario.nascDia >> funcionario.nascMes >> funcionario.nascAno;
    cout << "Codigo do Setor: "; cin >> funcionario.codigo;
}
void Cadastro11(Pessoas &p)
{
    cout << "Nome: "; getline(cin >> ws, p.nome);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Endereco: "; getline(cin >> ws, p.endereco);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Telefone (apenas numeros): "; cin >> p.telefone;
}
