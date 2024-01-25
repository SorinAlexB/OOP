#include "vaci.hpp"
vaci::vaci(){
    this->animal = new char[5];
    this->mancare = new char[8];
    strcpy(this->animal, "vaca");
    strcpy(this->mancare, "nutreti");
}

vaci::~vaci(){
    delete[] this->animal;
    delete[] this->mancare;
}
char* vaci::get_name() const{
    return this->animal;
}
int vaci::get_number() const{
    return this->nr_vaci;
}
int vaci::get_food_nr() const{
    return this->nr_kg_mancare;
}
char* vaci::get_food_name() const{
    return this->mancare;
}
double vaci::get_food_per_animal() const{
    return ((double)get_food_nr())/get_number();
}
