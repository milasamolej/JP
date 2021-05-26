#ifndef HIST_H
#define HIST_H

using namespace std;

class Hist
{
protected:
    int k, h;
    float lb, hb;
    int *tab;
public:
    Hist(int nK, float nLb, float nHb);
    ~Hist();
    Hist(const Hist&co);
    Hist& operator= (const Hist&co);
    void Input (float x);
    void Input (const char* fn);
    void Draw();
    void View();
};

#endif
