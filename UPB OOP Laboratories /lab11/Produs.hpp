#ifndef PRODUS__HPP
#define PRODUS__HPP
#include <iostream>
#include <cstring>

class Produs{
    float pret;
    int cantitate;
    char *nume;
    
    public:
        Produs(const float new_pret, const int new_cantitate, const char *new_nume);
        Produs(const Produs &obj);
        char* get_nume() const;
        int get_cantitate() const;
        float get_pret() const;
        void set_cantitate(const int new_cantitate);
        Produs& operator=(const Produs &obj);
        ~Produs();
};

#endif