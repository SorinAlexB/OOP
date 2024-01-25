#include "zona3.hpp"
zona3::zona3(){
    this->nr_populatie = new int[5];
    this->ctp = 0;
}

void zona3::add_val1(const int val){
    this->v1 = val;
}

void zona3::add_val2(const int val){
    this->v2 = val;
}

void zona3::add_valp(const int val){
    this->nr_populatie[ctp] = val;
    this->ctp++;
}

float zona3::get_valv1() const{
    return this->v1;
}

float zona3::get_valv2() const{
    return this->v2;
}

void zona3::reset_vectors(){
    for(int i = 0; i < 5; i++)
            this->nr_populatie[i] = 0;
    this->ctp = 0;
}

void zona3::set_nrp(const int nr){
    this->nrp = nr;
}

int zona3::get_totalvotes() const{
    return this->v1 + this->v2;
}
int zona3::get_people(const int ct) const{
    int res = 0;
    for(int i = ct; i < 5; i++)
        res += this->nr_populatie[i];
    return res;
}

float zona3::get_totalpercentage(const int ct) const{
    float res = (100 * (float)get_totalvotes())/get_people(ct);
    res = floor(100*res)/100;
    return res;
}

zona3::~zona3(){
    delete []this->nr_populatie;
}
