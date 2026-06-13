#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream arquivo("notas.txt");

struct Aluno
{
    char nome[50];
    float notas[5], media;
};

int main()
{
    if (!arquivo.is_open())
    {
        cout << "\tErro ao abrir o arquivo!\n";
        return 1;
    }

    Aluno turma[4], *p = &turma[0];
    float m_notas[5];
    for (int i = 0; i < 4; i++)
    {
        arquivo >> turma[i].nome >> turma[i].notas[0] >> turma[i].notas[1] >> turma[i].notas[2] >> turma[i].notas[3] >> turma[i].notas[4];

        turma[i].media = 0;
        for (int j = 0; j < 5; j++)
        {
            turma[i].media += turma[i].notas[j];
        }
        turma[i].media = turma[i].media/5;
    }
    arquivo.close();

    for (int i = 0; i < 5; i++)
    {
        m_notas[i] = 0;
        for (int j = 0; j < 4; j++)
        {
            m_notas[i] += turma[j].notas[i];
        }
        m_notas[i] = m_notas[i]/5;
    }
    
    for (int i = 0; i < 4; i++)
    {
        cout << "Nome: " << p->nome << endl;
        cout << "Media: " << p->media << endl;
        cout << endl;
        p++;
    }
    cout << "============================================\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Media da prova " << i+1 << ": " << m_notas[i] << endl;
    }

    return 0;
}