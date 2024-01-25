#ifndef LOCUITOR.HPP
#define LOCUITOR.hpp
#include "Locuinta.hpp"
#include "Impozit.hpp"
class Locuitor:public Impozit, public Locuinta{
    char *nume;
public:
    Locuitor();
    Locuitor(const Locuitor &obj);
    Locuitor(const int *t, const int nt, const char *a, const int v, const char *n);
    Locuitor& operator=(const Locuitor &obj);
    ~Locuitor();
    void afisare();
};
#endif