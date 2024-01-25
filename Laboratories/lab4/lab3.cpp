#include "Soldat.hpp"
int main(){
    Soldat a;
    Soldat b("Unitate 1", "Nume 1", "00001", 10);
    Soldat c(b);

    a.afisare();
    b.afisare();
    c.afisare();

    std::cout << getSalariu(a) << "  " << getSalariu(b) << "  " << getSalariu(c) << "\n\n\n";

     Soldat *v, aux;
     int max = -1;
     v = new Soldat[5];
     v[0].modif("Ua", "N1", "1", 10);
     v[1].modif("Ub", "N3", "3", 30);
     v[2].modif("Uc", "N4", "4", 40);
     v[3].modif("Ud", "N2", "2", 20);
     v[4].modif("Ue", "N5", "5", 40);

    // for(int i = 0; i < 5; i++)
    //     v[i].afisare();

     for(int i = 0; i < 4; i++)
        for(int j = i+1; j < 5; j++)
            if(strcmp(v[i].getUnitate(), v[j].getUnitate()) > 0)
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }

    for(int i = 0; i < 5; i++)
         v[i].afisare();


    for(int i = 0; i < 5; i++)
        if(max < getSalariu(v[i]))
            max = getSalariu(v[i]); 

    for(int i = 0; i < 5; i++)
    if(max == getSalariu(v[i]))
         v[i].afisare();

    delete []v;
} 