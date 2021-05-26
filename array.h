#ifndef ARRAY_H
#define ARRAY_H

using namespace std;
class Array
{
protected:
     int rozmiar;
     float*wsk;
     bool ifExist;
public:
    Array();
    ~Array();
    Array (const Array&kopia);
    void Set (int r, float x);
    float Get (int r);
    bool Create (istream&is);
    void Disp();
    Array& operator= (const Array&kopia);
    friend ostream& operator<<(ostream& os, const Array& tab);
    friend istream& operator>>(istream& is, Array&c);
    float& operator[]( int i);
};
#endif // ARRAY_H
