template<class T>
IndexedInfo<T>::IndexedInfo(int index){
    this->index = index;
}

template<class T>
IndexedInfo<T>::IndexedInfo(int index, T* info){
    this->index = index;
    this->info = info;
}

template<class T>
T* IndexedInfo<T>::getInfo(){
    return info;
}

template<class T>
void IndexedInfo<T>::setInfo(T* info){
    this-> info = info;
}

template<class T>
void IndexedInfo<T>::setInfo(T info){
    
    this-> info = info;
}

template<class T>
int IndexedInfo<T>::getIndex(){
    this->index = index;
}

template<class T>
bool IndexedInfo<T>::operator>(const IndexedInfo<T>& outro){
    return this->index > outro.index;
}

template<class T>
bool IndexedInfo<T>::operator<(const IndexedInfo<T>& outro){
    return this->index < outro.index;
}

template<class T>
bool IndexedInfo<T>::operator==(const IndexedInfo<T>& outro){
    return this->index == outro.index;
}

template<class T>
ostream& operator<<(ostream os&, const IndexedInfo<T>& indexed){
    os << indexed->index << ":" indexed->info;
    return os;
}