#ifndef BAZA
#define BAZA
#include <iostream>
#include <stdlib.h>
class Baza{
    public:
        virtual void afisare()=0;
        virtual int get_varsta()=0;
        virtual bool is_gaina()=0;
        virtual ~Baza(){};
};
#endif