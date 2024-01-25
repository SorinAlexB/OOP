#include "Produs.hpp"

Produs::Produs(const float new_pret, const int new_cantitate, const char *new_nume) {
    this->cantitate = new_cantitate;
    this->pret = new_pret;
    this->nume = new char[strlen(new_nume) + 1];
    strcpy(this->nume, new_nume);
}

int Produs::get_cantitate() const {
    return this->cantitate;
}

char* Produs::get_nume() const {
    return this->nume;
}

void Produs::set_cantitate(const int new_cantitate) {
    this->cantitate = new_cantitate;
}

float Produs::get_pret() const{
    return this->pret;
}

Produs& Produs::operator=(const Produs &obj) {
    this->cantitate = obj.cantitate;
    this->pret = obj.pret;
    delete []this->nume;
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);
    return *this;
}

Produs::Produs(const Produs &obj) {
    this->cantitate = obj.cantitate;
    this->pret = obj.pret;
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);
}

Produs::~Produs() {
   delete []this->nume;
}