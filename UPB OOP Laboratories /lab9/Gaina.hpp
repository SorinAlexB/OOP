#ifndef GAINA
#define GAINA
#include "Pui.hpp"
#include <stdlib.h>
#include <iostream>
class Gaina:public Pui{
    int nr_oua;
    public:
        Gaina();
        Gaina(int x, int y, int z);
        void afisare();
        bool is_gaina();
        ~Gaina();
};

#endif 