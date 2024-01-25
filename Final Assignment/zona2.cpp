#include "zona2.hpp"
zona2::zona2(){
    this->v1 = new int[10];
    this->v2 = new int[10];
    this->nr_populatie = new int[10];
    this->ct1 = 0;
    this->ct2 = 0;
    this->ctp = 0;
}

void zona2::add_val1(const int val){
    this->v1[ct1] = val;
    this->ct1++;
}

void zona2::add_val2(const int val){
    this->v2[ct2] = val;
    this->ct2++;
}

void zona2::add_valp(const int val){
    this->nr_populatie[ctp] = val;
    this->ctp++;
}

float zona2::get_valv1() const{
    float s = 0;
    for(int i = 0; i < 6; i++)
        s += this->v1[i]*(10 - i);
    return s;
}

float zona2::get_valv2() const{
    float s = 0;
    for(int i = 0; i < 6; i++)
        s += this->v2[i]*(10 - i);
    return s;
}

void zona2::reset_vectors(){
    for(int i = 0; i < 10; i++)
        {
            this->v1[i] = 0;
            this->v2[i] = 0;
            this->nr_populatie[i] = 0;
        }
    this->ct1 = 0;
    this->ct2 = 0;
    this->ctp = 0;
}

void zona2::set_nrp(const int nr){
    this->nrp = nr;
}

int zona2::get_totalvotes() const{
    int res = 0;
    for(int i = 0; i < 6; i++)
        {
            res += this->v1[i];
            res += this->v2[i];
        }
    return res;
}
int zona2::get_people() const{
    int res = 0;
    for(int i = 0; i < 5; i++)
        res += this->nr_populatie[i];
    return res;
}

float zona2::get_totalpercentage() const{
    float res = (100 * (float)get_totalvotes())/get_people();
    res = floor(100*res)/100;
    return res;
}

zona2::~zona2(){
    delete []this->v1;
    delete []this->v2;
    delete []this->nr_populatie;
}
