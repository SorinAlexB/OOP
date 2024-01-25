#include "Nr_complex.hpp"
Nr_complex::Nr_complex(){
    this->real = 0;
    this->imaginar = 0;
}
Nr_complex::Nr_complex(const int real, const int imaginar)
{
    this->real = real;
    this->imaginar = imaginar;
}
ostream& operator<<(ostream &out, Nr_complex &obj)
{
    out<<obj.real<<" "<<obj.imaginar<<"j";
    return out;
}
bool Nr_complex::operator<(Nr_complex &obj)
{
    if(this->real < obj.real)
        return 1;
    return 0;
}