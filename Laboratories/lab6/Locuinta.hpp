#ifndef LOCUINTA_HPP
#define LOCUINTA_HPP
#include <stdio.h>
#include <iostream>
#include <string.h>
class Locuinta{
    protected:
        char *adresa;
        int valoare;
public:
    Locuinta();
    Locuinta(const Locuinta &obj);
    Locuinta(const char *a, const int v);
    Locuinta& operator=(const Locuinta &obj);
    ~Locuinta();
    void afisare();
};
#endif
