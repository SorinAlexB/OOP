#include "Pui.hpp"

Pui::Pui(){
    this->greutate=0;
    this->varsta=0;
}

Pui::Pui(int x, int y){
    this->greutate=x;
    this->varsta=y;
}

int Pui::get_varsta(){
    return this->varsta;
}

void Pui::afisare(){
    std::cout<<this->varsta<< " " <<this->greutate;

}

bool Pui::is_gaina(){
    return false;
}

Pui::~Pui(){
    this->greutate=0;
    this->varsta=0;
}

