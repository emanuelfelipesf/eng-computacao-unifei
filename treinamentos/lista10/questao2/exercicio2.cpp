#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

char *acheSobrenome(char nome[])
{
    char *pnome;
    int i = 0;

    while (nome[i] != ' ')
    {
        i++;
    }
    i++;
    pnome = &nome[i];
    
    return pnome;
}

int main()
{
    char nomeCompleto[20] = {"Giovani Bernardes"}, *p = acheSobrenome(nomeCompleto);

    puts(p);

    return 0;
}

// SAIDA: Bernardes