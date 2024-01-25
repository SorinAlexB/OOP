#include <iostream>
#include <cstring>
using namespace std;

class Produs
{
    char *nume;
    char *producator;
    char cod[14];
    int pret;

    public:
        Produs();
        Produs(const char *n, const char *p, const char c[], int b);
        ~Produs();
        void afisare();
        void modif(const char *n, const char *p, const char c[], int b);
        void modif(const Produs&obj);
        int getPret()const;
        char* getNume()const;

};
