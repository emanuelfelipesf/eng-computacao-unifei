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