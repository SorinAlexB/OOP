#include "Carte.hpp"

Carte::Carte():Autor()
{
    nr_pagini = 0;
}
Carte::Carte(const char *n, int v, const char *t, int nr):Autor(n,v)
{
    titlu = new char[strlen(t)+1];
    strcpy(titlu, t);
    nr_pagini = nr;
};

Carte::~Carte()
{
    delete[] titlu;
}

Carte::Carte(const Carte& obj):Autor(obj)
{
    titlu = new char[strlen(obj.titlu)+1];
    strcpy(titlu, obj.titlu);
    nr_pagini = obj.nr_pagini;
}

Carte& Carte::operator=(const Carte& obj)
{
    Autor::operator=(obj);
    delete []this->titlu;
    this->titlu = new char[strlen(obj.titlu)+1];
    strcpy(this->titlu,obj.titlu);
    this->nr_pagini=obj.nr_pagini;
    return *this;
}

istream& operator>>(istream &in, Carte &obj)
{
    delete []obj.titlu;
    char buf2[100];
    in>>(Autor &)obj;
    in>>buf2;
    in>>obj.nr_pagini;
    obj.titlu = new char[strlen(buf2)+1];
    strcpy(obj.titlu,buf2);
    return in;

}

ostream& operator<<(ostream &out, Carte &obj)
{
    out<<(Autor &)obj;
    out << obj.titlu << " "<<obj.nr_pagini;
    return out;
}