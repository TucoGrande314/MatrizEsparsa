#include <iostream>
#include "MatrizEsparsa.h"
using namespace std;

int main()
{
    MatrizEsparsa<int> matriz(0);
    for(int i = 0; i <= 10 ; i++)
        matriz.set(i, i, i*2);
    
    cout << matriz;
}