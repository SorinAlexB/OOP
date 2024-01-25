#include <iostream>
#include <cstring>
class Soldat{
    char *unitate;
    char *nume;
    char cod[6];
    int salariu;
    public:
        Soldat();
        Soldat(const char *str1, const char *str2, const char c[], int val);
        Soldat(const Soldat &obj);
        ~Soldat();
        void afisare() const;
        void modif(const char *str1, const char *str2, const char c[], int val);
        char* getUnitate() const;
        friend int getSalariu(const Soldat &obj);
        Soldat& operator=(const Soldat &obj);
};

