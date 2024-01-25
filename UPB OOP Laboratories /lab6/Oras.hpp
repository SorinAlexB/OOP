#ifndef ORAS.HPP
#define ORAS.HPP
#include "Locuitor.hpp"
class Oras{
    Locuitor *locuitori;
    int nr_locuitori;
    char *primar;
public:
    Oras();
    Oras(const Oras &obj);
    Oras(const int *t, const int nt, const char *a, const int v, const char *n, const int nr_loc, const char *p);
    Oras& operator=(const Oras &obj);
    ~Oras();
    void afisare();
    friend int get_nr_loc(const Oras &obj);
    
};
#endif