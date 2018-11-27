#ifndef MATRIZ_ESPARSA_H
#define MATRIZ_ESPARSA_H
#include "ArvoreAVL/Arvore.h"
#include "IndexedInfo.h"
using namespace std;
template<class T>
class MatrizEsparsa
{
    public:
        MatrizEsparsa(T);
        MatrizEsparsa(int, int, T);

        void set(int, int, T);
        T get(int, int);
        
        friend ostream& operator<<(ostream& os, const MatrizEsparsa& dt);
        //void print();
    private:
        int maxLinhas;
        int maxColunas;
        Arvore<IndexedInfo<Arvore<IndexedInfo<T> > > > matriz; // Árvore que guarda uma árvore indexada que guarda um T indexado 
        T valorPadrao;
};
#include "MatrizEsparsa.cpp"
#endif