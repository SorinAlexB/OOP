#include "cai.hpp"
#include "gaini.hpp"
#include "porci.hpp"
#include "vaci.hpp"
void test(vaci &a, gaini &b, cai &c, porci &d){
    std::cout<<a.get_name()<<" "<<a.get_number()<<" "<<a.get_food_nr()<<" "<<a.get_food_name()<<" "<<a.get_food_per_animal()<<"\n";
    std::cout<<b.get_name()<<" "<<b.get_number()<<" "<<b.get_food_nr()<<" "<<b.get_food_name()<<" "<<b.get_food_per_animal()<<"\n";
    std::cout<<c.get_name()<<" "<<c.get_number()<<" "<<c.get_food_nr()<<" "<<c.get_food_name()<<" "<<c.get_food_per_animal()<<"\n";
    std::cout<<d.get_name()<<" "<<d.get_number()<<" "<<d.get_food_nr()<<" "<<d.get_food_name()<<" "<<d.get_food_per_animal()<<"\n\n\n\n";
}
void cant_stocata(vaci &a, gaini &b, cai &c, porci &d, int &s){
    
    s = (a.get_food_nr()+c.get_food_nr())*360;
    std::cout<<"cantitate nutret "<<s<<"\n";

    s += (b.get_food_nr() + d.get_food_nr1())*360;
    std::cout<<"cantitate graunte "<<(b.get_food_nr() + d.get_food_nr1())*360<<"\n";

    s += d.get_food_nr2()*360;
    std::cout<<"cantitate iarba "<<d.get_food_nr2()*360<<"\n";
}

void reumplere(int &s){
    double tmp = ((double)s)/2000;
    if(((int)tmp%100) > 0 )
        tmp = (int)tmp +1;
    else tmp =(int)tmp;
    std::cout<<"\n\nva trebui reumplut de "<<tmp<<"\n\n\n";
}

void consum_zi(vaci &a, gaini &b, cai &c, porci &d){
    std::cout<<"cantitate nutret consumat "<<a.get_food_nr()+c.get_food_nr()<<"\n";
    std::cout<<"cantitate graunte "<<b.get_food_nr() + d.get_food_nr1()<<"\n";
    std::cout<<"cantitate iarba "<<d.get_food_nr2()<<"\n";
    std::cout<<"cantitate totala "<<a.get_food_nr()+c.get_food_nr()+b.get_food_nr() + d.get_food_nr1()+d.get_food_nr2()<<"\n\n";
}
int main(){
    int s = 0;
    vaci a;
    gaini b;
    cai c;
    porci d;
    test(a,b,c,d);
    cant_stocata(a,b,c,d,s);
    reumplere(s);
    consum_zi(a,b,c,d);


}