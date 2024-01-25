#include "Gradina.hpp"
Gradina::Gradina():Teren(){
    this->suprafata = 0;
    this->pret = 0;
}

Gradina::Gradina(const int sup, const int pret_gradina, const char *pr, const int pret_teren):Teren(pr,pret_teren){
    this->suprafata = sup;
    this->pret = pret_gradina + pret_teren;
}

int Gradina::get_pret_gradina(){
    return this->pret;
}

int Gradina::get_suprafata_gradina(){
    return this->suprafata;
}

void Gradina::set_suprafata_gradina( int sup1, int sup2, int ok)
{
    if(ok == 1)
        this->suprafata = sup1+sup2;
    else 
        this->suprafata = sup1-sup2;
}