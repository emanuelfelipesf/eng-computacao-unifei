template <class TipoItem>

class No {
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

    No* getProx(){
      return prox;
    }
