#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
#include "array.h"
#include "stat.h"

Stat::Stat() : Array()
{

}

float Stat::Suma()
{
    su = 0.0;
    for(int i=0; i<rozmiar; i++)
    {
        su+= wsk[i];
    }
    return su;
}

float Stat::Srednia()
{
    sr = Suma()/rozmiar;
    return sr;
}

float Stat::Odchylenie()
{
    su = 0.0;
    float su2= 0.0;
    for(int i=0; i<rozmiar; i++)
    {
        su+= wsk[i];
        su2+= wsk[i]*wsk[i];
    }
    float sa, sa2;
    sa = su/rozmiar;
    sa2 = su2/rozmiar;
    return sqrt (sa2-sa*sa);
}

