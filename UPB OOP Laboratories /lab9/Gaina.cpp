#include "Gaina.hpp"
Gaina::Gaina():Pui(){
    this->nr_oua = 0;
}

Gaina::Gaina(int x, int y, int z):Pui(x,y)
{
    this->nr_oua = z;
}

bool Gaina::is_gaina()
{
    return true;
}

void Gaina::afisare(){
    Pui::afisare();
    std::cout<<" "<<this->nr_oua;
}

Gaina::~Gaina()
{
    this->nr_oua = 0;
}