#include "Casa_cu_gradina.hpp"
Casa_cu_gradina::Casa_cu_gradina():Casa(),Gradina(),Teren(){
    strcpy(this->adresa,"adresa noua");
    this->pret = this->get_pret_casa() + this->get_pret_gradina() - this->get_pret_teren();
}

Casa_cu_gradina::Casa_cu_gradina(const char *adr, const int sup_casa, const int pret_casa, const int sup_gradina, const int pret_gradina, const char *pr, const int pret_teren):Casa(sup_casa, pret_casa,pr, pret_teren), Gradina(sup_gradina,pret_gradina, pr, pret_teren){
    strcpy(this->adresa, adr);
    this->pret = this->get_pret_casa() + this->get_pret_gradina() - this->get_pret_teren();
}

int Casa_cu_gradina::get_pret_total(){
    return this->pret;
}

bool Casa_cu_gradina::operator<(const Casa_cu_gradina &obj){
    if(this->pret < obj.pret)
        return true;
    return false;
}

bool Casa_cu_gradina::operator>(const Casa_cu_gradina &obj){
    if(this->pret > obj.pret)
        return true;
    return false;
}

Casa_cu_gradina& Casa_cu_gradina::operator=(Casa_cu_gradina &obj){
    strcpy(this->adresa, obj.adresa);
    this->pret = obj.pret;
    return *this;
}

Casa_cu_gradina& Casa_cu_gradina::operator+( Casa_cu_gradina &obj)
{
    // obiect nou si return obiect;
    this->pret = this->pret + obj.pret;
    this->set_suprafata_casa(this->get_suprafata_casa(), obj.get_suprafata_casa(), 1);
    this->set_suprafata_gradina(this->get_suprafata_gradina(), obj.get_suprafata_gradina(), 1);
    return *this;
}

Casa_cu_gradina& Casa_cu_gradina::operator-( Casa_cu_gradina &obj)
{
    this->pret = this->pret - obj.pret;
    this->set_suprafata_casa(this->get_suprafata_casa(), obj.get_suprafata_casa(), 0);
    this->set_suprafata_gradina(this->get_suprafata_gradina(), obj.get_suprafata_gradina(), 0);
    return *this;
}