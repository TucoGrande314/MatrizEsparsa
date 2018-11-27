#ifndef ARVORE_H
#define ARVORE_H
#include "NoArvore.h"
template <class T>
class Arvore
{
public:
	Arvore();
	~Arvore();
	void incluir(T);
	void preorder();
	void Balancear(NoArvore<T>*);
	T* get(T);
private:
	NoArvore<T>* raiz;
	int Altura(NoArvore<T>*);
	int Equilibrio(NoArvore<T>*);

	void rotacaoEsquerda(NoArvore<T>&);
	void rotacaoDuplaEsquerda(NoArvore<T>&);
	void rotacaoDireita(NoArvore<T>&);
	void rotacaoDuplaDireita(NoArvore<T>&);

	void preorder(NoArvore<T>* p);
};

#include "Arvore.cpp"
#endif // ARVORE_H
