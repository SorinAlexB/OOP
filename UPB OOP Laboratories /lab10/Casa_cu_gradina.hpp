#ifndef CASA_CU_GRADINA_hpp
#define CASA_CU_GRADINA_hpp
#include "Casa.hpp"
#include "Gradina.hpp"
class Casa_cu_gradina:public Casa, public Gradina{
    char adresa[30];
    int pret;
    public:
        Casa_cu_gradina();
        Casa_cu_gradina(const char *adr, const int sup_casa, const int pret_casa, const int sup_gradina, const int pret_gradina, const char *pr, const int pret_teren);
        int get_pret_total();
        bool operator<(const Casa_cu_gradina &obj);
        bool operator>(const Casa_cu_gradina &obj);
        Casa_cu_gradina& operator+(Casa_cu_gradina &obj);
        Casa_cu_gradina& operator-(Casa_cu_gradina &obj);
        Casa_cu_gradina& operator=(Casa_cu_gradina &obj);
        ~Casa_cu_gradina();
};
#endif