#pragma once
#include <array>

using namespace std;


class KolejkaPriorytetowa
{
    public:
    void insert(int x);
    int RemoveRootElem();
    void print();   //opcjonalnie dla wy�wietlenia kolejnych element�w macierzy, w kt�rej trzymany jest kopiec.
    int getRootElem();
    
};