//==============================================================
// Klasa histogram - tworzy i wyswiatla histogram na podstawie podanych wartosci (plik/klawiatura)
//
// ver data temat autor
// 100 2021/22/04 Pierwszy projekt, Samolej Kamila
//==============================================================
#include <iostream>
#include "hist.h"

using namespace std;

int main()
{
    Hist uno(10,1,11);
    uno.Input(4.4);
    uno.Input(5.4);
    uno.Input(3.6);
    uno.Input(3.0);
    uno.Input(6.6);
    uno.Input(5.2);
    uno.View();
    uno.Draw();

    uno.Input ("data.txt");
    uno.View();
    uno.Draw();
    return 0;
}
