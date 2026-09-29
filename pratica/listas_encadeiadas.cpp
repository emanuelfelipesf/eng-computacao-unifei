template <class TipoItem>

class No{
    private:
        No *prox;
        TipoItem item;
  
    public:
        No(){
            prox = NULL;
        }
        No(TipoItem x){
            item = x;
            prox = NULL;
        }

        TipoItem getItem(){
            return item;
        }
        No* getProx(){
            return prox;
        }

        void setItem(TipoItem x){
            item = x;
        }
        void setProx(No *p){
            prox = p;
        }
};

class Lista_Encadeiada {
    private:
        No<TipoItem> *inicio, *fim;
    
    public:
        Lista_Encadeiada(){
            inicio = NULL;
            fim = NULL;
        }

        void Criar(){
            No<TipoItem> *p;
            
            while(inicio != NULL){
                p = inicio;
                inicio = p->getProx();
                delete p;
            }

            inicio = NULL;
            fim = NULL;
        }
        bool Vazia(){
            return inicio == NULL;
        }

        void Inserir(TipoItem x){
            No<TipoItem> *p;
            p = new No<TipoItem>(x);

            if(Vazia()){
                inicio = p;
                fim = p;
            } else {
                fim->setProx(p);
                fim = p;
            }
        }
        No<TipoItem>* Pesquisar(TipoItem x){
            No<TipoItem> *p = inicio;
            
            while(p != NULL){
                if(p->getItem() == x){
                    return p;
                }

                p = p->getProx();
            }

            return NULL;
        }
        

        ~Lista_Encadeiada(){
            No<TipoItem> *p;
            
            while(inicio != NULL){
                p = inicio;
                inicio = p->getProx();
                delete p;
            }
        }
};