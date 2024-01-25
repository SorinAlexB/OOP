#include "Locuitor.hpp"
Locuitor::Locuitor():Impozit(),Locuinta()
{
    nume = NULL;
}
Locuitor::Locuitor(const int *t, const int nt, const char *a, const int v, const char *n):Impozit(t,nt),Locuinta(a,v)
{
    nume = new char[strlen(n)+1];
    strcpy(nume,n);
}
Locuitor::Locuitor(const Locuitor &obj):Impozit(obj),Locuinta(obj)
{
    nume = new char[strlen(obj.nume)+1];
    strcpy(nume,obj.nume);
}
Locuitor& Locuitor::operator=(const Locuitor &obj)
{
    Impozit::operator=(obj);
    Locuinta::operator=(obj);
    this->nume = new char[strlen(obj.nume)+1];
    strcpy(this->nume,obj.nume);
    return *this;
}
Locuitor::~Locuitor()
{
    delete[] nume;
}
void Locuitor::afisare()
{
    Impozit::afisare();
    Locuinta::afisare();
    std::cout<<nume<<" ";
}