// LISTA
const int MAXTAM = TAMANHO;
using tipoItem = int;

class Lista
{
	private:
		int inicio, fim;
		tipoItem *itens;
	public:
		Lista()
		{
			inicio = 0;
			fim = 0;
			itens = new tipoItem[MAXTAM];
		}

		void Criar()
		{
			inicio = 0;
			fim = 0;
		}
		bool Vazia()
		{
			return fim == inicio;
		}
		void Imprimir()
		{
			for (int i = inicio; i < fim; i++)
			{
				std::cout << itens[i] << std::endl;
			}
		}

		int Pesquisar(tipoItem item)
		{
			for (int i = inicio; i < fim; i++)
			{
				if (itens[i] == item)
				{
					return i;
				}
			}
		}
		void Inserir(tipoItem item)
		{
			itens[fim] = item;
			fim++;
		}
		void Retirar(tipoItem &item)
		{
			int index = Pesquisar(item);
			for (int i = index; i < fim - 1; i++)
			{
				itens[i] = itens[i+1];
			}
			fim--;
		}

		~Lista()
		{
			delete [] itens;
		}
};
