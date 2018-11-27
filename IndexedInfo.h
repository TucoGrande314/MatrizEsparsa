#ifndef INDEXED_INFO_INCLUDED
#define INDEXED_INFO_INCLUDED

template<class T>
class IndexedInfo{
    public:
        IndexedInfo(int);
        IndexedInfo(int, T*);
        ~IndexedInfo();

        T getInfo();
        void setInfo(T*);
        void setInfo(T);

        int getIndex();

        bool operator>(const IndexedInfo<T>&);
        bool operator<(const IndexedInfo<T>&);
        bool operator==(const IndexedInfo<T>&);

        friend &ostream operator<<(&ostream, const IndexedInfo<T>&);

    private:
        int index;
        T* info;
};

#include "IndexedInfo.cpp"
#endif // SPARSE_MATRIX_INCLUDED