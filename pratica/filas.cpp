// FILA
const int MAXTAM = TAMANHO;
using tipoItem = int;

class Fila
{
	private:
		int inicio, fim, quantidade;
		tipoItem *itens;
	public:
		Fila()
		{
			inicio = 0;
			fim = 0;
			quantidade = 0;
			itens = new tipoItem[MAXTAM];
		}

		void Criar()
		{
			inicio = 0;
			fim = 0;
			quantidade = 0;
		}
		bool Vazia()
		{
			return fim == inicio;
		}
		void Imprimir()
		{
			for (int i = inicio; i != fim; i = (i+1)%MAXTAM)
			{
				std::cout << itens[i] << std::endl;
			}
		}

		void Enfileirar(tipoItem item)
		{
			if ((fim + 1)%MAXTAM == inicio)
			{
				std::cout << "Fila cheia!\n";
				return;
			}
			itens[fim] = item;
			fim = (fim + 1)%MAXTAM;
			quantidade++;
		}
		void Desenfileirar()
		{
			if(Vazia())
			{
				std::cout << "Fila vazia!\n";
				return;
			}
			inicio = (inicio + 1)%MAXTAM;
			quantidade--;
		}
		int Tamanho()
		{
			return quantidade;
		}
		tipoItem ItemFrente()
		{
			return itens[inicio];
		}

		~Fila()
		{
			delete [] itens;
		}
};
			 
