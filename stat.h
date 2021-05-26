#ifndef STAT_H
#define STAT_H

#include "array.h"
class Stat : public Array
{
protected:
        float su, sr, od;
public:
    Stat();
    ~Stat(){}
    Stat(const Stat&kopia);
    float Suma();
    float Srednia();
    float Odchylenie();
};
#endif // STAT_H
