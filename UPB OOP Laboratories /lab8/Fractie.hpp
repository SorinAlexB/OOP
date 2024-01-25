#ifndef FRACTIE
#define FRACTIE
#include <iostream>
using namespace std;
class Fractie{
    private:
        int numitor, numarator;
    public:
        Fractie();
        Fractie(const int numitor, const int numarator);
        bool operator<(const Fractie &obj);
        friend ostream& operator<<(ostream &out, Fractie &obj);
};
#endif