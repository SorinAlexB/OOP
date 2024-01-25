#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
class Autor
{
    protected:
    char *nume;
    int varsta;
    public:
        Autor();
        Autor(const char *n, int v);
        Autor(const Autor& obj);
        Autor& operator=(const Autor& obj);
        ~Autor();
        friend istream& operator>>(istream &in, Autor &obj);
        friend ostream& operator<<(ostream &out, Autor &obj);


};
