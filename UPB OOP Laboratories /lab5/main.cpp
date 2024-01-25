#include "Carte.hpp"
int main()
{
    Carte *v;
    v = new Carte[5];
    Carte obj("num1", 1, "tit1", 1);
    cout << obj;
    v[0] = Carte("nume1",1,"t1",1);
    Carte z(v[0]);
    cout << z <<"\n"<<v[0];

}