#ifndef PORC
#define PORC
#include <stdlib.h>
#include <iostream>
#include "Baza.hpp"
class Porc:public Baza{
    int varsta;
    int greutate;
    public:
        Porc();
        Porc(int x, int y);
        int get_varsta();
        void afisare();
        bool is_gaina();
        ~Porc();
};

#endif 