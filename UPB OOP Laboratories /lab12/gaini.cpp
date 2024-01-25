#include "gaini.hpp"
gaini::gaini(){
    this->animal = new char[6];
    this->mancare = new char[8];
    strcpy(this->animal, "gaina");
    strcpy(this->mancare, "graunte");
}

gaini::~gaini(){
    delete[] this->animal;
    delete[] this->mancare;
}
char* gaini::get_name() const{
    return this->animal;
}
int gaini::get_number() const{
    return this->nr_gaini;
}
int gaini::get_food_nr() const{
    return this->nr_kg_mancare;
}
char* gaini::get_food_name() const{
    return this->mancare;
}
double  gaini::get_food_per_animal() const{
    return ((double)get_food_nr())/get_number();
}
