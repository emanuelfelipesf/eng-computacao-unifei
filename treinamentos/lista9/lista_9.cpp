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
    cout << "Aluno de menor media geral: " << turma[idx_menorMedia].nome << endl << "\t(matricula: " << turma[idx_menorMedia].matricula << " \tsituacao: " << turma[idx_menorMedia].situacao << ")" << endl;
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
        cout << "\tVetor" << i + 1 << endl;
        cout << "Posicao x: ";
        cin >> vetor[i].x;
        cout << "Posicao y: ";
        cin >> vetor[i].y;
        cout << "Posicao z: ";
        cin >> vetor[i].z;
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
        cout << "\n\tCadastro do Aluno" << i + 1 << endl;
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

struct OsCaraQueEstuda
{
    string nome;
    char situacao;
    int matricula;
    float mediaFinal;
};
void Cadastro12(OsCaraQueEstuda &e);
void questao12()
{
    OsCaraQueEstuda turma[10], aprovados[10], reprovados[10];
    int a = 0, r = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "\n\tCadastro do aluno " << i + 1 << endl;
        Cadastro12(turma[i]);

        if (turma[i].situacao == 'a')
        {
            aprovados[a].nome = turma[i].nome;
            aprovados[a].matricula = turma[i].matricula;
            aprovados[a].mediaFinal = turma[i].mediaFinal;
            a++;
        }
        if (turma[i].situacao == 'r')
        {
            reprovados[r].nome = turma[i].nome;
            reprovados[r].matricula = turma[i].matricula;
            reprovados[r].mediaFinal = turma[i].mediaFinal;
            r++;
        }
    }

    cout << "\n\tAprovados\n";
    for (int i = 0; i < a; i++)
    {
        cout << "Nome: " << aprovados[i].nome << endl;
        cout << "Matricula: " << aprovados[i].matricula << endl;
        cout << "Media Final: " << aprovados[i].mediaFinal << endl;
    }

    cout << "\n\tReprovados\n";
    for (int i = 0; i < r; i++)
    {
        cout << "Nome: " << reprovados[i].nome << endl;
        cout << "Matricula: " << reprovados[i].matricula << endl;
        cout << "Media Final: " << reprovados[i].mediaFinal << endl;
    }
}

void questao13() {}

struct Endereco
{
    string rua, complemento, bairro, cidade, estado, pais;
    int numero, cep;
};
struct Telefone
{
    int ddd, numero;
};
struct DataAniversario
{
    int dia, mes, ano;
};
struct Agenda
{
    string nome;
    string email;
    Endereco endereco;
    Telefone telefone;
    DataAniversario aniversario;
    string observacao;
};
static void cadastrarEndereco(Endereco &e)
{
    cout << "Rua: ";
    getline(cin >> ws, e.rua);
    cout << "Numero: ";
    cin >> e.numero;
    cout << "Complemento: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, e.complemento);
    cout << "Bairro: ";
    getline(cin >> ws, e.bairro);
    cout << "CEP: ";
    cin >> e.cep;
    cout << "Cidade: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, e.cidade);
    cout << "Estado: ";
    getline(cin >> ws, e.estado);
    cout << "Pais: ";
    getline(cin >> ws, e.pais);
}
static void cadastrarTelefone(Telefone &t)
{
    cout << "DDD: ";
    cin >> t.ddd;
    cout << "Numero: ";
    cin >> t.numero;
}
static void cadastrarAniversario(DataAniversario &d)
{
    cout << "Dia: ";
    cin >> d.dia;
    cout << "Mes: ";
    cin >> d.mes;
    cout << "Ano: ";
    cin >> d.ano;
}
static void cadastrarPessoa(Agenda &p)
{
    cout << "Nome: ";
    getline(cin >> ws, p.nome);

    cout << "E-mail: ";
    getline(cin >> ws, p.email);

    cout << "Endereco:\n";
    cadastrarEndereco(p.endereco);

    cout << "Telefone:\n";
    cadastrarTelefone(p.telefone);

    cout << "Data de aniversario:\n";
    cadastrarAniversario(p.aniversario);

    cout << "Observacao: ";
    getline(cin >> ws, p.observacao);
}
static void imprimirCompacto(const Agenda &p)
{
    cout << "Nome: " << p.nome << "\n";
    cout << "Telefone: (" << p.telefone.ddd << ") " << p.telefone.numero << "\n";
    cout << "E-mail: " << p.email << "\n";
}
static void imprimirCompleto(const Agenda &p)
{
    imprimirCompacto(p);
    cout << "Endereco: " << p.endereco.rua << ", " << p.endereco.numero;
    if (!p.endereco.complemento.empty())
        cout << " - " << p.endereco.complemento;
    cout << "\n";
    cout << "Bairro: " << p.endereco.bairro << "\n";
    cout << "CEP: " << p.endereco.cep << "\n";
    cout << "Cidade: " << p.endereco.cidade << "\n";
    cout << "Estado: " << p.endereco.estado << "\n";
    cout << "Pais: " << p.endereco.pais << "\n";
    cout << "Aniversario: " << p.aniversario.dia << "/" << p.aniversario.mes << "/" << p.aniversario.ano << "\n";
    cout << "Observacao: " << p.observacao << "\n";
}
static int compararNome(const string &a, const string &b)
{
    if (a < b)
        return -1;
    if (a > b)
        return 1;
    return 0;
}
void questao14()
{
    Agenda agenda[100];
    int n = 0;

    while (true)
    {
        cout << "\n--- Agenda (Questao 14) ---\n";
        cout << "1) Buscar por primeiro nome\n";
        cout << "2) Buscar por mes do aniversario\n";
        cout << "3) Buscar por dia e mes do aniversario\n";
        cout << "4) Inserir pessoa (ordem alfabetica)\n";
        cout << "5) Retirar pessoa (remove todos os dados pelo nome)\n";
        cout << "6) Imprimir agenda\n";
        cout << "0) Voltar\n";
        cout << "Opcao: ";

        int op;
        cin >> op;
        if (op == 0)
            return;

        switch (op)
        {
        case 1:
        {
            string nomeBusca;
            cout << "Digite o primeiro nome: ";
            getline(cin >> ws, nomeBusca);

            bool achou = false;
            for (int i = 0; i < n; i++)
            {
                if (agenda[i].nome.rfind(nomeBusca, 0) == 0)
                {
                    imprimirCompleto(agenda[i]);
                    cout << "-------------------------\n";
                    achou = true;
                }
            }
            if (!achou)
                cout << "Nenhuma pessoa encontrada.\n";
            break;
        }
        case 2:
        {
            int mes;
            cout << "Digite o mes (1-12): ";
            cin >> mes;

            bool achou = false;
            for (int i = 0; i < n; i++)
            {
                if (agenda[i].aniversario.mes == mes)
                {
                    imprimirCompleto(agenda[i]);
                    cout << "-------------------------\n";
                    achou = true;
                }
            }
            if (!achou)
                cout << "Nenhuma pessoa encontrada.\n";
            break;
        }
        case 3:
        {
            int dia, mes;
            cout << "Digite dia (1-31): ";
            cin >> dia;
            cout << "Digite mes (1-12): ";
            cin >> mes;

            bool achou = false;
            for (int i = 0; i < n; i++)
            {
                if (agenda[i].aniversario.dia == dia && agenda[i].aniversario.mes == mes)
                {
                    imprimirCompleto(agenda[i]);
                    cout << "-------------------------\n";
                    achou = true;
                }
            }
            if (!achou)
                cout << "Nenhuma pessoa encontrada.\n";
            break;
        }
        case 4:
        {
            if (n >= 100)
            {
                cout << "Agenda cheia (100 pessoas).\n";
                break;
            }

            Agenda pessoa;
            cout << "\n--- Inserir pessoa ---\n";
            cadastrarPessoa(pessoa);

            int pos = 0;
            while (pos < n && compararNome(agenda[pos].nome, pessoa.nome) < 0)
                pos++;

            for (int i = n; i > pos; i--)
                agenda[i] = agenda[i - 1];

            agenda[pos] = pessoa;
            n++;
            cout << "Pessoa inserida com sucesso!\n";
            break;
        }
        case 5:
        {
            if (n == 0)
            {
                cout << "Agenda vazia.\n";
                break;
            }

            string nomeRemover;
            cout << "Digite o nome exato da pessoa a remover: ";
            getline(cin >> ws, nomeRemover);

            bool achou = false;
            int i = 0;
            while (i < n)
            {
                if (agenda[i].nome == nomeRemover)
                {
                    for (int j = i; j < n - 1; j++)
                        agenda[j] = agenda[j + 1];
                    n--;
                    achou = true;
                }
                else
                {
                    i++;
                }
            }

            if (!achou)
                cout << "Pessoa nao encontrada.\n";
            else
                cout << "Pessoa removida(s) com sucesso!\n";
            break;
        }
        case 6:
        {
            if (n == 0)
            {
                cout << "Agenda vazia.\n";
                break;
            }

            cout << "Imprimir agenda:\n";
            cout << "1) Nome, telefone e email\n";
            cout << "2) Todos os dados\n";
            cout << "Opcao: ";

            int sub;
            cin >> sub;

            for (int i = 0; i < n; i++)
            {
                if (sub == 1)
                {
                    imprimirCompacto(agenda[i]);
                }
                else if (sub == 2)
                {
                    imprimirCompleto(agenda[i]);
                }
                else
                {
                    cout << "Opcao invalida!\n";
                    break;
                }
                cout << "-------------------------\n";
            }
            break;
        }
        default:
            cout << "Opcao invalida!\n";
            break;
        }
    }
}

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
    cout << "Nome do aluno: ";
    getline(cin >> ws, aluno.nome);
    cout << "Matricula: ";
    cin >> aluno.matricula;
    cout << "Nota da Primeira prova: ";
    cin >> aluno.n1;
    cout << "Nota da Segunda prova: ";
    cin >> aluno.n2;
    cout << "Nota da Terceira prova: ";
    cin >> aluno.n3;
    aluno.media = (aluno.n1 + aluno.n2 + aluno.n3) / 3;
    if (aluno.media >= 6)
        aluno.situacao = "Aprovado";
    else
        aluno.situacao = "Reprovado";
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
    vetores[2].x = vetores[0].x + vetores[1].x;
    vetores[2].y = vetores[0].y + vetores[1].y;
    vetores[2].z = vetores[0].z + vetores[1].z;
}
void Cadastro09(Universitario &turma)
{
    cout << "Matricula: ";
    cin >> turma.matricula;
    cout << "Nome: ";
    cin >> turma.nome;
    cout << "Codigo: ";
    cin >> turma.codigo;
    cout << "Nota 1: ";
    cin >> turma.n1;
    cout << "Nota 2: ";
    cin >> turma.n2;
}
void calculoMedia(Universitario &turma)
{
    turma.media = (turma.n1 * 1 + turma.n2 * 2) / 3;
}
void Cadastro10(Dados &funcionario)
{
    cout << "Nome: ";
    getline(cin >> ws, funcionario.nome);
    cout << "Idade: ";
    cin >> funcionario.idade;
    cout << "Sexo (M/F): ";
    cin >> funcionario.sexo;
    cout << "CPF (apenas numeros): ";
    cin >> funcionario.cpf;
    cout << "Data de Nascimento (dd mm aa): ";
    cin >> funcionario.nascDia >> funcionario.nascMes >> funcionario.nascAno;
    cout << "Codigo do Setor: ";
    cin >> funcionario.codigo;
}
void Cadastro11(Pessoas &p)
{
    cout << "Nome: ";
    getline(cin >> ws, p.nome);
    cout << "Endereco: ";
    getline(cin >> ws, p.endereco);
    cout << "Telefone (apenas numeros): ";
    cin >> p.telefone;
}
void Cadastro12(OsCaraQueEstuda &e)
{
    cout << "Nome: ";
    getline(cin >> ws, e.nome);
    cout << "Matricula: ";
    cin >> e.matricula;
    cout << "Media final: ";
    cin >> e.mediaFinal;
    e.situacao = (e.mediaFinal >= 5) ? 'a' : 'r';
}

