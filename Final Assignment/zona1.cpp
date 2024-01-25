#include "zona1.hpp"
zona1::zona1(){
    this->v1 = new int[5];
    this->v2 = new int[5];
    this->nr_populatie = new int[5];
    this->ct1 = 0;
    this->ct2 = 0;
    this->ctp = 0;
}

void zona1::add_val1(const int val){
    this->v1[ct1] = val;
    this->ct1++;
}

void zona1::add_val2(const int val){
    this->v2[ct2] = val;
    this->ct2++;
}

void zona1::add_valp(const int val){
    this->nr_populatie[ctp] = val;
    this->ctp++;
}

float zona1::get_valv1() const{
    float s = 0;
    for(int i = 0; i < 5; i++)
        s += this->v1[i]*(1 - 0.2*i);
    return s;
}

float zona1::get_valv2() const{
    float s = 0;
    for(int i = 0; i < 5; i++)
        s += this->v2[i]*(1 - 0.2*i);
    return s;
}

void zona1::reset_vectors(){
    for(int i = 0; i < 5; i++)
        {
            this->v1[i] = 0;
            this->v2[i] = 0;
            this->nr_populatie[i] = 0;
        }
    this->ct1 = 0;
    this->ct2 = 0;
    this->ctp = 0;
}

void zona1::set_nrp(const int nr){
    this->nrp = nr;
}

int zona1::get_totalvotes() const{
    int res = 0;
    for(int i = 0; i < 5; i++)
        {
            res += this->v1[i];
            res += this->v2[i];
        }
    return res;
}

float zona1::get_totalpercentage() const{
    float res = (100 * (float)get_totalvotes())/this->nrp;
    res = floor(100*res)/100;
    return res;
}

zona1::~zona1(){
    delete []this->v1;
    delete []this->v2;
    delete []this->nr_populatie;
}
