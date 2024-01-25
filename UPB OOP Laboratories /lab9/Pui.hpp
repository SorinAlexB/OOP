#ifndef PUI
#define PUI
#include <stdlib.h>
#include <iostream>
#include "Baza.hpp"
class Pui:public Baza{
    int varsta;
    int greutate;
    public:
        Pui();
        Pui(int x, int y);
        int get_varsta();
        void afisare();
        bool is_gaina();
        ~Pui();
};

#endif 