#ifndef TEREN_hpp
#define TEREN_hpp
#include <iostream>
#include <cstring>
#include <stdlib.h>
class Teren
{
    char *proprietar;
    int pret;
    public:
        Teren();
        Teren(const char *pr, const int pret_teren);
        int get_pret_teren();
        Teren& operator=(const Teren &obj);
        virtual char* get_proprietar();
        virtual ~Teren();
};
#endif
