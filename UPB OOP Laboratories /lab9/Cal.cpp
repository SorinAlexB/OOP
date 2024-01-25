#include "Cal.hpp"
Cal::Cal(){
    this->greutate=0;
    this->varsta=0;
}

bool Cal::is_gaina(){
    return false;
}

Cal::Cal(int x, int y){
    this->greutate = x;
    this->varsta = y;
}

int Cal::get_varsta(){
    return this->varsta;
}

void Cal::afisare(){
    std::cout<<this->varsta <<" "<< this->greutate;
}

Cal::~Cal(){
    this->greutate=0;
    this->varsta = 0;
}