#include "Impozit.hpp"
Impozit::Impozit()
{
    taxe = new int;
    taxe = 0;
    nr_taxe=0;
}

Impozit::Impozit(const int *v, int nr)
{
    
    taxe = new int[nr];
    for(int i = 0; i < nr; i++)
        taxe[i] = v[i];
    nr_taxe = nr; 
}

Impozit::Impozit(const Impozit &obj)
{
    taxe = new int[obj.nr_taxe];
    for(int i = 0; i < obj.nr_taxe; i++)
        taxe[i] = obj.taxe[i];
    nr_taxe = obj.nr_taxe;
}

Impozit& Impozit::operator=(const Impozit &obj)
{
    this->taxe = new int[obj.nr_taxe];
    for(int i = 0; i < obj.nr_taxe; i++)
        this->taxe[i] = obj.taxe[i];
    this->nr_taxe = obj.nr_taxe;
    return *this;
}
Impozit::~Impozit()
{
    delete[] taxe;
    nr_taxe = 0;
}
void Impozit::afisare()
{
    std::cout << nr_taxe << " "<< taxe << " ";
}
int get_suma(const Impozit &obj)
{
    int s=0;
    for(int i =0; i < nr_taxe; i++)
        s+=obj.taxe
}