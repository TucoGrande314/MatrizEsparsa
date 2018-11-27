template<class T>
MatrizEsparsa<T>::MatrizEsparsa(T valorPadrao){
    //valorPadrao é o valor mais presente 
    this.valorPadrao = valorPadrao;
    this.maxLinhas = 0;
    this.maxColunas = 0;
}

template<class T>
MatrizEsparsa<T>::MatrizEsparsa(int maxLinhas, int maxColunas, T valorPadrao){
    if(maxLinhas < 0 || maxColunas < 0)
        throw "Tamanho de matriz inválido";
    
    this.valorPadrao = valorPadrao;
    this.maxLinhas = maxLinhas;
    this.maxColunas = maxColunas;
}

template<class T>
MatrizEsparsa<T>::set(int r, int c, T info){
    if(r < 0 || c < 0)
    {
        if(r > maxLinhas)
            maxLinhas = r;

        if(c > maxColunas)
            maxColunas = c;
        

        IndexedInfo<Arvore<IndexedInfo<T> > > testRow (r); 
        IndexedInfo<Arvore<IndexedInfo<T> > > *linha = this->matriz.get(testRow); // "teste" checa se há aquela linha na matriz, se não houver *linha = NULL

        if(linha == NULL)
        {
            if(info != valorPadrao)
            {
                Arvore<IndexedInfo<T> > colunas();
                IndexedInfo<T> cel (c, info); //célula, possui a coluna e a informação
                colunas->add(cel);
                
                linha = new IndexedInfo<Arvore<IndexedInfo<T> > >(r, colunas);
                this->matriz.add(linha);
            }
        }
        else
        {
            IndexedInfo<T> testCol (c);
            IndexedInfo<T> *cel = linha->getInfo().get(testCol);
            if (cel == NULL) 
            {
                if(info != valorPadrao)
                {
                    cel = new IndexedInfo<T>(c, info);
                    linha->add(cel); 
                }
            }
            else
            {
                if(i == valorPadrao)
                {

                }
                else
                {
                    T* a = new T(i);
                    cel->setInfo(a);
                }
            }
        }
    }
    else
        throw "invalid position";
}
/*
template<class T>
T MatrizEsparsa<T>::get(int r, int c){
    //se não conter informação na linha e na coluna desejada é retornado valorPadrao

    if(r > maxLinhas || c > maxLinhas)
        return valorPadrao; 
    

    
}
*/
template<class T>
ostream& operator<<(ostream os&, const MatrizEsparsa<T>& matriz){ 
        os << "valor padrao: " << matriz->valorPadrao << "\ndimensao: " << maxLinhas << "x" << maxColunas << "\n\n" << matriz->matriz;
}
