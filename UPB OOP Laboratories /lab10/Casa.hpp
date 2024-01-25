#ifndef CASA_hpp
#define CASA_hpp
#include "Teren.hpp"
class Casa:public virtual Teren{
    int suprafata;
    int pret;
    public:
        Casa();
        Casa(const int sup, const int pret_casa, const char *pr, const int pret_teren);
        int get_pret_casa();
        int get_suprafata_casa();
        void set_suprafata_casa( int sup1,  int sup2, int ok);
};
#endif