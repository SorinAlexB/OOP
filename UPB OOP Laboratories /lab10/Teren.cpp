#include "Teren.hpp"
Teren::Teren(){
    this->proprietar = new char[30];
    strcpy(this->proprietar,"proprietar nou");
    this->pret = 0;
}

Teren::Teren(const char *pr, const int pret_teren){
    this->proprietar = new char[strlen(pr)+1];
    strcpy(this->proprietar, pr);
    this->pret = pret_teren;
}

int Teren::get_pret_teren(){
    return this->pret;
}
Teren& Teren::operator=(const Teren &obj){
    delete []this->proprietar;
    this->proprietar = new char[strlen(obj.proprietar)+1];
    strcpy(this->proprietar, obj.proprietar);
    this->pret = obj.pret;
    return *this;
}

char* Teren::get_proprietar(){
    return this->proprietar;
}

Teren::~Teren(){
    delete []this->proprietar;
}