#ifndef IMPOZIT.HPP
#define IMPOZIT.HPP
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
class Impozit{
    protected:
        int *taxe;
        int nr_taxe;
public:
    Impozit();
    Impozit(const int *v, const int nr);
    Impozit(const Impozit &obj);
    Impozit& operator=(const Impozit &obj);
    ~Impozit();
    void afisare();
    friend int get_suma(const Impozit &obj);

};
#endif