#include "Produs.hpp"
#include <vector>
#include <fstream>
using namespace std;
ofstream f1("lista_cumparare.txt");
ofstream f2("lista_vanzare.txt");

void afisare(vector<Produs> x, ofstream &of) {
    for(int i = 0; i < x.size(); i++)
        of<<x[i].get_nume()<<" "<<x[i].get_pret()<<" "<<x[i].get_cantitate()<<"\n";
}

int main(){

    vector<Produs> cumparare;
    vector<Produs> vanzare;

    Produs a(12.3, 2, "ciocolata");
    Produs b(6, 1, "lamai");
    Produs c(2.65, 3, "banane");

    cumparare.push_back(b);
    cumparare.push_back(a);
    cumparare.push_back(c);

    for(int i = 0; i < cumparare.size(); i++)
        if(strcmp(cumparare[i].get_nume(), "ciocolata") == 0)
            {
                cumparare[i].set_cantitate(cumparare[i].get_cantitate() + 1);
                break;
            
            } else if(i == cumparare.size() - 1) {
                cumparare.push_back(a);
            }

    vanzare.push_back(b);
    vanzare.push_back(a);
    vanzare.push_back(c);

    f1<<"Lista cumparare :\n";
    afisare(cumparare, f1);
    f2<<"Lista vanzare :\n";
    afisare(vanzare, f2);

    cout<<"Cantitate ciocolata : ";
    for(int i = 0; i < cumparare.size(); i++)
        if(strcmp(cumparare[i].get_nume(), "ciocolata") == 0)
            for(int j = 0; j < vanzare.size(); j++)
                if(strcmp(vanzare[j].get_nume(), "ciocolata") == 0)
                    cout<<cumparare[i].get_cantitate() - vanzare[j].get_cantitate();
    cout<<"\n\n";

    float sum;
    for(int i = 0; i < vanzare.size(); i++)
        sum += vanzare[i].get_cantitate()*vanzare[i].get_pret();
    cout<<"Totalul vanzarilor din aceasta luna este : "<<sum<<"\n\n";

    sum = 0;
    for(int i = 0; i < cumparare.size(); i++)
        sum += cumparare[i].get_cantitate()*cumparare[i].get_pret() - vanzare[i].get_cantitate()*vanzare[i].get_pret();
    cout<<"Valoarea produselor de pe stoc este "<<sum<<"\n";

    return 0;
}