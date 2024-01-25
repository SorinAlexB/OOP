#include "cai.hpp"
cai::cai(){
    this->animal = new char[4];
    this->mancare = new char[8];
    strcpy(this->animal, "cal");
    strcpy(this->mancare, "nutreti");
}

cai::~cai(){
    delete[] this->animal;
    delete[] this->mancare;
}
char* cai::get_name() const{
    return this->animal;
}
int cai::get_number() const{
    return this->nr_cai;
}
int cai::get_food_nr() const{
    return this->nr_kg_mancare;
}
char* cai::get_food_name() const{
    return this->mancare;
}
double  cai::get_food_per_animal() const{
    return ((double)get_food_nr())/get_number();
}
