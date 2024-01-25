#include "Fractie.hpp"
#include "Nr_complex.hpp"
#include "Vector.hpp"
int main(){
    int vec[]={1,3,5,2,1};
    Vector<int>v(5,vec);
    v.Afisare();

    double vec2[]={1.23,3.424,5.3534,2.54646,1.0985};
    Vector<double>v2(5,vec2);
    v2.Afisare();

    Fractie vec3[]={Fractie(3,4), Fractie(5,6), Fractie(7,9)};
    Vector<Fractie>v3(3,vec3);
    v3.Afisare();

    Nr_complex vec4[]={Nr_complex(3,4), Nr_complex(7,9), Nr_complex(5,6)};
    Vector<Nr_complex>v4(3,vec4);
    v4.Afisare();

    v.sort();
    v2.sort();
    v3.sort();
    v4.sort();


    v.Afisare();
    v2.Afisare();
    v3.Afisare();
    v4.Afisare();            
}