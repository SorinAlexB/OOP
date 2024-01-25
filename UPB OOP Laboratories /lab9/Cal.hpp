#ifndef CAL
#define CAL
#include <stdlib.h>
#include <iostream>
#include "Baza.hpp"
class Cal:public Baza{
    int varsta;
    int greutate;
    public:
        Cal();
        Cal(int x, int y);
        int get_varsta();
        void afisare();
        bool is_gaina();
        ~Cal();
};

#endif 