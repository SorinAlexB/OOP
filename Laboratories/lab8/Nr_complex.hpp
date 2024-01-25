#ifndef NR_COMPLEX
#define NR_COMPLEX
#include<iostream>
using namespace std;
class Nr_complex{
    private:
        int real, imaginar;
    public:
        Nr_complex();
        Nr_complex(const int real, const int imaginar);
        friend ostream& operator<<(ostream &out, Nr_complex &obj);
        bool operator<(Nr_complex &obj);
};
#endif