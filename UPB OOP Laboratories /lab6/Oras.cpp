#include "Oras.hpp"
Oras::Oras()
{
    locuitori = NULL;
    nr_locuitori = 0;
    primar = NULL;
}
Oras::Oras(const Oras &obj)
{
    locuitori = new Locuitor[obj.nr_locuitori];
    nr_locuitori = obj.nr_locuitori;
    primar = new char[strlen(obj.primar)];
    strcpy(primar,obj.primar);
}
Oras::Oras(const int *t, const int nt, const char *a, const int v, const char *n, const int nr_loc, const char *p)
{
    for(int i = 0;  i < nr_loc; i++)
        locuitori[i]=Locuitor(t,nt,a,v,n);
    nr_locuitori=nr_loc;
    primar = new char[strlen(p)+1];
    strcpy(primar,p);
}
Oras& Oras::operator=(const Oras &obj)
{
    this->locuitori = new Locuitor[obj.nr_locuitori];
    for(int i = 0; i < obj.nr_locuitori; i++)
        this->locuitori[i] = obj.locuitori[i];
    this->nr_locuitori = obj.nr_locuitori;
    this->primar = new char[strlen(obj.primar)+1];
    strcpy(this->primar,obj.primar);
}
Oras::~Oras()
{
    delete[] primar;
    delete[] locuitori;
}
void Oras::afisare(){
    for(int i = 0; i < nr_locuitori; i++)   
        {
            locuitori[i].afisare();
            std::cout<<"\n";
        }
    std::cout <<nr_locuitori << "\n" << primar;
}
int get_nr_loc(const Oras &obj)
{
    return obj.nr_locuitori;
}