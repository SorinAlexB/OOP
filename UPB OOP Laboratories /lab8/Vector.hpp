#ifndef VECTOR
#define VECTOR
#include<iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
template<class x>
class Vector{
    private:
        int dim;
        x *buf;
    public:
        Vector();
        Vector(const int dim, const x *buf);
        Vector(const Vector &obj);
        void Afisare();
        ~Vector();
        void sort();
};
#endif