#include "Porc.hpp"
int Porc::get_varsta(){
    return this->varsta;
}

Porc::Porc(){
    this->greutate = 0;
    this->varsta = 0;
}

bool Porc::is_gaina()
{
    return false;
}

Porc::Porc(int x, int y){
    this->greutate = x;
    this->varsta = y;
}

void Porc::afisare(){
    std::cout<<this->varsta<<" "<<this->greutate;
}

Porc::~Porc()
{
    this->greutate = 0;
    this->varsta = 0;
}