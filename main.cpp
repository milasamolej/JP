//==============================================================
// Klasa Array: tworzy tablice dynamiczne, dane pobiera
// z pliku badz klawiatury
// Klasa pochodna Stat: wykonuje statystyczne obliczenia
//
// ver data temat autor
// 100 2021/22/04 Pierwszy projekt, Samolej Kamila
// 101 2021/26/04 Dodanie klasy Stat, Samolej Kamila
// 101 2021/29/04 Podzial na pliki, Samolej Kamila
//==============================================================
#include <iostream>
#include <math.h>
#include <fstream>
#include "array.h"
#include "stat.h"

using namespace std;

int main()
{
    //ifstream plik;
    //plik.open ("data.txt");
    Array a, b;
    Stat ba;
    ba.Create(cin);
    cout<<ba[2]<<endl;
    cout<< ba.Srednia() <<endl<< ba.Odchylenie()<<endl;
    /*a.Create(cin);
    a.Disp();
    b.Create(plik);
    b.Disp();
    cout<< b;
    cin>>a;
    a.Disp();

    Array kopiaA (a);
    kopiaA.Disp();

    kopiaA = b;
    kopiaA.Disp();*/

    return 0;
}

