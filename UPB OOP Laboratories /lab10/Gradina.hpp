#ifndef GRADINA_hpp
#define GRADINA_hpp
#include "Teren.hpp"
class Gradina:public virtual Teren{
    int suprafata;
    int pret;
    public:
        Gradina();
        Gradina(const int sup, const int pret_gradina, const char *pr, const int pret_teren);
        int get_pret_gradina();
        int get_suprafata_gradina();
        void set_suprafata_gradina( int sup1,  int sup2, int ok);
};
#endif