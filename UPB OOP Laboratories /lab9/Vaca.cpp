#include "Vaca.hpp"
int Vaca::get_varsta(){
    return this->varsta;
}

Vaca::Vaca(){
    this->greutate = 0;
    this->varsta = 0;
}

Vaca::Vaca(int x, int y){
    this->greutate = x;
    this->varsta = y;
}

bool Vaca::is_gaina(){
    return false;
}

void Vaca::afisare(){
    std::cout<<this->varsta<<" "<<this->greutate;
}

Vaca::~Vaca(){
    this->greutate=0;
    this->varsta=0;
}