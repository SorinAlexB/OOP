#include "Produs.hpp"
int main()
{
    
    Produs a;
    a.afisare();
    Produs b("nume1", "producator1", "cod1", 1);
    b.afisare();
    a.modif(b);
    a.afisare();
    cout <<  a.getNume() << " " << a.getPret() << "\n";

    Produs *v;
    v = new Produs[4];
    v[0].modif("n1", "p1", "1", 1);
    v[1].modif("n2", "p2", "2", 4);
    v[2].modif("n3", "p3", "3", 4);
    v[3].modif("n4", "p4", "4", 2);

    int max = -1;
    for(int i = 0; i < 4; i++)
        if(max < v[i].getPret())
            max = v[i].getPret();
    
    cout << "\n\n\n";

    for(int i = 0; i < 4; i++)
        if(max == v[i].getPret())
            cout << v[i].getNume() << " ";
    
    cout << "\n\n";

    Produs aux;

    for(int i = 0; i < 3; i++)
        for(int j = i + 1; j < 4; j++)
            if(v[i].getPret() > v[j].getPret())
                {
                    aux.modif(v[i]);
                    v[i].modif(v[j]);
                    v[j].modif(aux);
                }

    for(int i = 0; i < 4; i++)
        {
            v[i].afisare();
        }
    
    delete [] v;
}