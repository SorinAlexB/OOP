#include "Autor.hpp"
class Carte:public Autor
{
    char *titlu;
    int nr_pagini;
    public:
    Carte();
    Carte(const char *n, int v, const char *t, int nr);
    Carte(const Carte& obj);
    Carte& operator=(const Carte& obj);
    friend istream& operator>>(istream &in, Carte &obj);
    friend ostream& operator<<(ostream &out, Carte &obj);
    ~Carte();
};