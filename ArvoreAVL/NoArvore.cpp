template<class T>
NoArvore<T>::NoArvore()
{
	info = NULL;
	esquerdo = NULL;
	direito = NULL;
}

template<class T>
NoArvore<T>::NoArvore(T i)
{
	info = i;
	esquerdo = NULL;
	direito = NULL;
}

template<class T>
NoArvore<T>::~NoArvore()
{
}

template<class T>
T NoArvore<T>::getInfo()
{
	return info;
}

template<class T>
void NoArvore<T>::setInfo(T i)
{
	this->info = i;
}
