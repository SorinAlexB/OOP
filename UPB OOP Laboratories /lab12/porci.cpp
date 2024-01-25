#include "porci.hpp"
porci::porci(){
    this->animal = new char[5];
    this->mancare = new char[8];
    strcpy(this->animal, "porc");
    strcpy(this->mancare, "nutreti si iarba");
}

porci::~porci(){
    delete[] this->animal;
    delete[] this->mancare;
}
char* porci::get_name() const{
    return this->animal;
}
int porci::get_number() const{
    return this->nr_porc;
}

int porci::get_food_nr() const{
    return this->nr_kg_mancare1 + this->nr_kg_mancare2;
}
int porci::get_food_nr1() const{
    return this->nr_kg_mancare1;
}
int porci::get_food_nr2() const{
    return this->nr_kg_mancare2;
}
char* porci::get_food_name() const{
    return this->mancare;
}
double porci::get_food_per_animal1() const{
    return get_food_nr1()/get_number();
}
double porci::get_food_per_animal2() const{
    return get_food_nr2()/get_number();
}
double porci::get_food_per_animal() const{
    return ((double)get_food_nr2())/get_number() +((double)get_food_nr1())/get_number();
}