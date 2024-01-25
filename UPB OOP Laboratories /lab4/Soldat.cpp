#include "Soldat.hpp"

Soldat::Soldat(){
    unitate = new char[30];
    nume = new char[30];
    strcpy(unitate,"Unitate Noua");
    strcpy(nume, "Nume Nou");
    strcpy(cod, "00000");
    salariu = 0;

}

Soldat::Soldat(const char *str1, const char *str2, const char c[], int val){

    unitate = new char[strlen(str1)+1];
    nume = new char[strlen(str2)+1];
    strcpy(unitate, str1);
    strcpy(nume,str2);
    strcpy(cod,c);
    salariu = val;    
}

Soldat::Soldat(const Soldat &obj){
    unitate = new char[strlen(obj.unitate)+1];
    nume = new char[strlen(obj.nume)+1];
    strcpy(unitate, obj.unitate);
    strcpy(nume, obj.nume);
    strcpy(cod, obj.cod);
    salariu = obj.salariu;
}

Soldat::~Soldat(){
    delete []unitate;
    delete []nume;
}

void Soldat::afisare() const{
    std::cout << "Unitatea : " << unitate << "\n";
    std::cout << "Numele : " << nume << "\n";
    std::cout << "Codul : " << cod << "\n";
    std::cout << "Salariul : " << salariu << "\n\n\n";

}

void Soldat::modif(const char *str1, const char *str2, const char c[], int val){
    delete []unitate;
    delete []nume;
    unitate = new char[strlen(str1)+1];
    nume = new char[strlen(str2)+1];
    strcpy(unitate, str1);
    strcpy(nume, str2);
    strcpy(cod, c);
    salariu = val;
}

char* Soldat::getUnitate() const{
    return unitate;
}

int getSalariu(const Soldat &obj){
    return obj.salariu;
}

Soldat& Soldat::operator=(const Soldat &obj) {
    delete []this->unitate;
    delete []this->nume;
    this->unitate = new char[strlen(obj.unitate)+1];
    this->nume = new char[strlen(obj.nume)+1];
    strcpy(this->unitate, obj.unitate);
    strcpy(this->nume, obj.nume);
    strcpy(this->cod, obj.cod);
    this->salariu = obj.salariu;

    return *this;
}
