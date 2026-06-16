#include <iostream>
using namespace std;

struct Produto
{
    int codigo, quantidade;
    char nome[50];
    float preco;
};

void cadastroProduto(Produto &item);
int maiorPreco(Produto estoque[], int N);
int maiorQuantidade(Produto estoque[], int N);

int N;
int main(int argc, char const *argv[])
{
    cout << "Quantos produtos serao cadastrados?\n";
    cin >> N;

    Produto *estoque = NULL;
    estoque = new Produto[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Item " << i+1 << ": \n";
        cadastroProduto(estoque[i]);
    }
    
    int n = maiorPreco(estoque, N);
    cout << "Produto de maior preco de venda: " << estoque[n].nome << endl;
    n = maiorQuantidade(estoque, N);
    cout << "Produto de maior quantidade: " << estoque[n].nome << endl;
    
    delete[] estoque;
    return 0;
}

void cadastroProduto(Produto &item)
{
    cout << "\tCodigo de identificacao: "; cin >> item.codigo;
    cout << "\tNome (sem espacos): "; cin >> item.nome;
    cout << "\tQuantidade disponivel no estoque: "; cin >> item.quantidade;
    cout << "\tPreco de venda: "; cin >> item.preco;
}
int maiorPreco(Produto estoque[], int N)
{
    int cod_maior = 0;
    float prc_maior = estoque[0].preco;

    for (int i = 1; i <= N; i++)
    {
        if (prc_maior < estoque[i].preco)
        {
            cod_maior = i;
            prc_maior = estoque[i].preco;
        }
    }

    return cod_maior;
}
int maiorQuantidade(Produto estoque[], int N)
{
    int cod_maior = 0;
    float prc_quantidade = estoque[0].quantidade;
    
    for (int i = 1; i <= N; i++)
    {
        if (prc_quantidade < estoque[i].quantidade)
        {
            cod_maior = i;
            prc_quantidade = estoque[i].quantidade;
        }
    }

    return cod_maior;
}