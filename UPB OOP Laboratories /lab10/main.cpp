#include "Casa_cu_gradina.hpp"
int main(){
    Teren *aux;
    Teren **v;
    v = new Teren*[4];
    v[0] = new Teren("p1", 1);
    v[1] = new Casa(2,2,"p2",2);
    v[2] = new Gradina(3,3,"p3",3);
    v[4] = new Casa_cu_gradina("adr4",4,4,4,4,"p4",4);

    for(int i = 0; i < 5; i++)
        std::cout<<v[i]->get_proprietar()<<"\n";

    // for(int i = 0; i < 4; i++)
    //     for(int j = i+1; j < 5; j++)

    for(int i = 0 ; i<5; i++)
        delete v[i];
    delete[] v;

    Casa_cu_gradina c1 = Casa_cu_gradina("adr4",4,4,4,4,"p4",4), c2 = Casa_cu_gradina("adr5",5,5,5,5,"p5",5);
    std::cout<<(c1<c2);
    std::cout<<(c1>c2);
    c1=c1-c2;
    std::cout<<c1.get_pret_total()<<" "<<c1.get_suprafata_casa()<<" "<<c1.get_suprafata_gradina()<<"\n";


    return 0;
    

}