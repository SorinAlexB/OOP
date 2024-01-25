#include "Autor.hpp"
Autor::Autor()
{
    varsta = 0;
}
Autor::Autor(const char *n, int v)
{
    nume = new char[strlen(n)+1];
    strcpy(nume, n);
    varsta = v;
}
Autor::Autor(const Autor& obj)
{
    nume = new char[strlen(obj.nume)+1];
    strcpy(nume, obj.nume);
    varsta = obj.varsta;
}

Autor::~Autor()
{
    delete []nume;
}

Autor& Autor::operator=(const Autor& obj)
{
    delete []this->nume;
    this->nume = new char[strlen(obj.nume)+1];
    strcpy(this->nume, obj.nume);
    this->varsta = obj.varsta;
    return *this;
}

istream& operator>>(istream &in, Autor &obj)
{
    delete []obj.nume;
    char buf1[100];
    in >> buf1;
    in >> obj.varsta;
    obj.nume = new char[strlen(buf1)+1];
    strcpy(obj.nume, buf1);
    return in;
}

ostream& operator<<(ostream &out, Autor &obj)
{
    out << obj.nume << " "<< obj.varsta;
    return out;
}

