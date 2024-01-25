#include "Fractie.hpp"
Fractie::Fractie(){
    this->numarator=0;
    this->numitor=1;
}
Fractie::Fractie(const int numarator, const int numitor)
{
    this->numarator=numarator;
    this->numitor=numitor;
}
ostream& operator<<(ostream &out, Fractie &obj)
{
    out<<obj.numarator<<" "<<obj.numitor;
    return out;
}
bool Fractie::operator<(const Fractie &obj)
{
    if(this->numarator/this->numitor < obj.numarator/obj.numitor)
        return 1;
    return 0;
}