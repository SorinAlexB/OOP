#include "Pui.hpp"
#include "Vaca.hpp"
#include "Cal.hpp"
#include "Baza.hpp"
#include "Porc.hpp"
#include "Gaina.hpp"
int main(){
    Baza *aux;
    Baza **v;
    v = new Baza*[5];
    v[0] = new Pui(2,3);
    v[1] = new Vaca(3,5);
    v[2] = new Cal(5,6);
    v[3] = new Porc(7,1);
    v[4] = new Gaina(5,3,0);

    for(int i = 0; i < 5; i++)
        v[i]->afisare(), std::cout<<"\n";
    std::cout<<"\n\n\n\n";

    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
            if(v[i]->get_varsta() > v[j]->get_varsta())
                {
                    aux = v[i];
                    v[i]=v[j];
                    v[j]=aux;
                }
    for(int i = 0; i < 5; i++)
        v[i]->afisare(), std::cout<<"\n";

    std::cout<<"\n\n\n\n";
    for(int i =0; i < 5; i++)
        if(v[i]->is_gaina() == true)
            v[i]->afisare();
    std::cout<<"\n";

    for(int i = 0; i < 5; i++)
        delete v[i];
    delete []v;

    return 0;

}