#include <cstdio>
#include <cstring>

using namespace std;

#define MAX 30
#define TAM_NOME 60
#define TAM_SITUACAO 15

struct Aluno
{
    char nome[TAM_NOME];
    char situacao[TAM_SITUACAO];
    int matricula;
    float n1, n2, media;
};

void Cadastro(Aluno turma[], int i);
void MediaAluno(Aluno &dados, float &media_geral);
void Apresentacao(Aluno turma[], int i);

int main()
{
    Aluno turma[MAX];
    int n;
    float media_geral = 0.0f;

    printf("%s", "Numero de alunos: ");
    scanf("%i", &n);

    if (n < 0)
        n = 0;
    if (n > MAX)
        n = MAX;

    for (int i = 0; i < n; i++)
    {
        printf("Aluno %i\n", i + 1);
        Cadastro(turma, i);
        MediaAluno(turma[i], media_geral);
    }

    for (int i = 0; i < n; i++)
    {
        Apresentacao(turma, i);
    }

    if (n > 0)
        printf("Media Geral: %.2f", media_geral / n);
    else
        printf("Media Geral: 0.00");

    return 0;
}

void Cadastro(Aluno turma[], int i)
{
    printf("%s", "\tNome: ");
    scanf(" %59[^\n]", turma[i].nome);

    printf("%s", "\tMatricula: ");
    scanf("%i", &turma[i].matricula);

    printf("%s", "\tNota 1: ");
    scanf("%f", &turma[i].n1);

    printf("%s", "\tNota 2: ");
    scanf("%f", &turma[i].n2);
}

void MediaAluno(Aluno &dados, float &media_geral)
{
    dados.media = (dados.n1 + dados.n2) / 2.0f;
    media_geral += dados.media;

    if (dados.media >= 6.0f)
        strcpy(dados.situacao, "Aprovado");
    else if (dados.media >= 4.0f)
        strcpy(dados.situacao, "Recuperacao");
    else
        strcpy(dados.situacao, "Reprovado");
}

void Apresentacao(Aluno turma[], int i)
{
    printf("\t%i | %s | %.2f | %.2f | %.2f | %s\n",
           turma[i].matricula,
           turma[i].nome,
           turma[i].n1,
           turma[i].n2,
           turma[i].media,
           turma[i].situacao);
}