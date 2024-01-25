#include "Locuinta.hpp"
Locuinta::Locuinta()
{
    adresa = NULL;
    valoare = 0;
}
Locuinta::Locuinta(const Locuinta &obj)
{
    adresa = new char[strlen(obj.adresa)+1];
    strcpy(adresa, obj.adresa);
    valoare = obj.valoare;
}
Locuinta::Locuinta(const char *a, const int v)
{
    adresa = new char[strlen(a)+1];
    strcpy(adresa, a);
    valoare = v;
}
Locuinta& Locuinta::operator=(const Locuinta &obj)
{   
    this->adresa = new char[strlen(obj.adresa)+1];
    strcpy(this->adresa, obj.adresa);
    this->valoare = obj.valoare;
    return *this;
}
Locuinta::~Locuinta()
{
    delete[] adresa;
}
void Locuinta::afisare()
{
    std::cout << adresa << " " << valoare << " ";
}