#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
#include "array.h"

//-------------------------------------------------------------
Array::Array (const Array&kopia)
{
    rozmiar = kopia.rozmiar;
     ifExist = kopia.ifExist;
        wsk = new float [rozmiar];
     for (int i=0;i<rozmiar;i++)
     {
         wsk[i]=kopia.wsk[i];
     }
}
//-------------------------------------------------------------
Array& Array::operator= (const Array&kopia)
 {
     if (&kopia == this) return *this;
     rozmiar = kopia.rozmiar;
     ifExist = kopia.ifExist;
     wsk = new float [rozmiar];
     for (int i=0; i<rozmiar;i++)
     {
         wsk[i]=kopia.wsk[i];
     }
     return *this;
 }
 //-------------------------------------------------------------
istream& operator>>(istream& is, Array&c)
{
//    if(!tab.ifExist) {cout<< "Nie moge wyswietlic tablicy, gdyz jej nie ma.";}

}
//-------------------------------------------------------------
ostream& operator<<(ostream& os, const Array& tab)
{
  if(!tab.ifExist) {cout<< "Nie moge wyswietlic tablicy, gdyz jej nie ma.";}
        for (int i=0; i<tab.rozmiar; i++)
    {
        os<<i+1<<". "<<tab.wsk[i]<<" "<<endl;
    }
    os<<endl;
    return os;
}
//-------------------------------------------------------------
Array::~Array()
{
    delete [] wsk;
    rozmiar = 0;
    wsk = NULL;
    ifExist = false;
}
//-------------------------------------------------------------
Array::Array()
{
    rozmiar = 0;
    wsk = NULL;
    ifExist = false;
}
//-------------------------------------------------------------
float Array::Get (int r)
{
    if (r<0||r>=rozmiar) throw "";
    return wsk[r];
}
//-------------------------------------------------------------
void Array::Set(int r, float x)
{
    if (!ifExist) throw "pusto";
    if (r<0||r>=rozmiar) throw "zly index";
    wsk[r]= x;
}
//-------------------------------------------------------------
float & Array::operator[]( int i)
{
    if ((i-1)<0||(i-1)>=rozmiar) throw "";
    return wsk[i-1];
}
//-------------------------------------------------------------
void Array::Disp()
{
    if(!ifExist) throw "Nie moge wyswietlic tablicy, gdyz jej nie ma.";
    else
    {
        for (int i=0; i<rozmiar; i++)
    {
        cout<<i+1<<". "<<wsk[i]<<" "<<endl;
    }
    cout<<endl;
    }
}
//-------------------------------------------------------------
bool Array::Create (istream&is)
{
    if (ifExist)
    {
        delete [] wsk;
        rozmiar = 0;
        wsk = NULL;
        ifExist = false;
    }
    rozmiar=0;
    is >> rozmiar;
    if (rozmiar<1) throw "nie moge utworzyc tablicy, brak danych w pliku";
    wsk = new float [rozmiar];
    for (int i=0; i<rozmiar; i++)
    {
        is>>wsk[i];
    }
    ifExist = true;
    return ifExist;
}
