// PILHA
const int MAXTAM = TAMANHO;
using tipoItem = int;

class Pilha
{
	private:
		int topo;
		tipoItem *itens;
	public:
		Pilha()
		{
			topo = 0;
			itens = new tipoItem[MAXTAM]
		}
		
		void Criar()
		{
			topo = 0;
		}
		bool Vazia()
		{
			return Tamanho() == 0;
		}
		bool Cheia()
		{
			return Tamanho() == MAXTAM;
		}
		int Tamanho()
		{
			return topo;
		}
		
		void Empilhar(tipoItem item)
		{
			if (Cheia())
			{
				std::cout << "Pilha cheia!\n";
				return;
			}
			itens[topo] = item;
			topo++;
		}
		void Desempilhar()
		{
			if (!Vazia())
			{
				topo--;
				return;
			}
			std::cout << "Pilha vazia!\n";
		}
		void Imprimir()
		{
			for (int i = topo; i > 0; i--)
			{
				std::cout << itens[i] << endl;
			}
		}
		
		tipoItem itemTopo()
		{
			return itens[topo];
		}
		~Pilha()
		{
			delete [] itens;
		}
};
