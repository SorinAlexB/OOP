#ifndef VACA
#define VACA
#include <stdlib.h>
#include <iostream>
#include "Baza.hpp"
class Vaca:public Baza{
    int varsta;
    int greutate;
    public:
        Vaca();
        Vaca(int x, int y);
        int get_varsta();
        void afisare();
        bool is_gaina();
        ~Vaca();
};

#endif 