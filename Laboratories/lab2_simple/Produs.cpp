#include "Produs.hpp"

Produs::Produs()
{
    nume = new char[5];
    strcpy(nume, "abcd");
    producator = new char[5];
    strcpy(producator, "efgh");
    strcpy(cod, "11223344");
    pret = 12;

}

Produs::Produs(const char *n, const char *p, const char c[], int b)
{
    nume = new char[strlen(n)+1];
    strcpy(nume, n);
    producator = new char[strlen(n)+1];
    strcpy(producator, p);
    strcpy(cod, c);
    pret = b;

}

void Produs::modif(const char *n, const char *p, const char c[], int b)
{
    delete []nume;
    nume = new char[strlen(n)+1];
    strcpy(nume, n);
    delete []producator;
    producator = new char[strlen(n)+1];
    strcpy(producator, p);
    strcpy(cod, c);
    pret = b;

}

void Produs::modif(const Produs&obj){
    delete[] nume;
    nume = new char[strlen(obj.nume) + 1];
    strcpy(nume, obj.nume);
    delete[] producator;
    producator = new char[strlen(obj.producator) + 1];
    strcpy(producator, obj.producator);
    strcpy(cod, obj.cod);
    pret = obj.pret;
}

Produs::~Produs()
{
    delete[]nume;
    delete[]producator;
}

int Produs::getPret()const{
    return pret;
}

char* Produs::getNume()const{
    return nume;
}

void Produs::afisare()
{

    cout << "Producatorul : " << producator << "\n";
    cout << "Numele : " << nume << "\n";
    cout << "Codul : " << cod << "\n";
    cout << "Pretul : " << pret << "\n";
    
}