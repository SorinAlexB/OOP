#include "Casa.hpp"
Casa::Casa():Teren()
{
    this->suprafata = 0;
    this->pret = 0;
}

Casa::Casa(const int sup, const int pret_casa, const char *pr, const int pret_teren):Teren(pr,pret_teren)
{
    this->suprafata = sup;
    this->pret = pret_casa + pret_teren;
}

int Casa::get_pret_casa()
{
    return this->pret;
}

int Casa::get_suprafata_casa(){
    return this->suprafata;
}

void Casa::set_suprafata_casa(int sup1,  int sup2, int ok)
{
    if(ok == 1)
        this->suprafata = sup1+sup2;
    else 
        this->suprafata = sup1-sup2;  

}