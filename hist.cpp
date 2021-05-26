#include <iostream>
#include <math.h>
#include <fstream>
#include "hist.h"
using namespace std;

Hist::Hist(int nK, float nLb, float nHb)
{
    tab = new int[k+2];
    k = nK<1 ? 1 : nK; //jezeli warynek przed ? jest spelniony, wstawiana wartosc po znaku zapytania
    lb = nLb;
    hb = nHb;
    for (int i =0; i<(k+2); i++)
    {
        tab[i] = 0;
    }
    h = (hb-lb)/k;
}
//---------------------------------------------------------------------------------
Hist::~Hist()
{
    if (tab)
    {
        delete[] tab;
        tab = NULL;
    }
}
//---------------------------------------------------------------------------------
Hist::Hist(const Hist&co)
{
    k = co.k;
    lb = co.lb;
    hb = co.hb;
    tab = new int [k+2];
    for (int i=0;i<(k+2);i++)
     {
         tab[i]=co.tab[i];
     }

}
//---------------------------------------------------------------------------------
Hist& Hist::operator= (const Hist&co)
{
    if (&co == this) return *this;
    k = co.k;
    lb = co.lb;
    hb = co.hb;
    tab = new int [k+2];
    for (int i=0;i<(k+2);i++)
     {
         tab[i]=co.tab[i];
     }
}
//---------------------------------------------------------------------------------
void Hist::Input (float x)
{
   int where = floor ((x - lb)/h)+1;
   if (where<0) where=0;
   if (where>k+1) where = k+1;
   tab[where]++;
}
//---------------------------------------------------------------------------------
void Hist::Input (const char* fn)
{
    ifstream file;
    file.open(fn);
    double x;
    while(1)
    {
        file >> x;
        if (file.eof()) break; // END OF FILE
        Input (x);
    }
    file.close();
}
//---------------------------------------------------------------------------------
void Hist::Draw()
{
    cout<<"HISTOGRAM:"<<endl;
    for (int i=0; i<(k+2); i++)
    {
        cout<< i+1 <<". ";
        if (i<9) cout<<" ";
        cout<<": ";
        for (int j=0; j<(tab[i]); j++)
        {
            cout<<"x";
        }
        cout<<endl;
    }

}
//---------------------------------------------------------------------------------
void Hist::View()
{
    cout<<"HISTOGRAM:"<<endl;
    for (int i=0; i<(k+2); i++)
    {
        cout<< i+1 <<". ";
        if (i<9) cout<<" ";
        cout<<": "<<tab[i]<<endl;
    }
}
