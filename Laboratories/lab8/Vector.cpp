#include "Vector.hpp"
#include "Fractie.hpp"
#include "Nr_complex.hpp"
template<class x>
Vector<x>::Vector(){
    this->dim = 0;
}
template<class x>
Vector<x>::Vector(const int dim,const x *buf){
    this->dim = dim;
    this->buf = new x[dim];
    for(int i=0;i<dim;i++)
        this->buf[i] = buf[i];
}
template<class x>
void Vector<x>::Afisare(){
    cout<<this->dim<<"\n";
    for(int i=0; i<this->dim;i++)
        cout<<this->buf[i]<<"\n";
}
template<class x>
Vector<x>::Vector(const Vector&obj)
{
    this->dim = obj.dim;
    this->buf = new x[obj.dim];
    for(int i=0;i<dim;i++)
        this->buf[i] = obj.buf[i];
}
template<class x>
void Vector<x>::sort()
{
    x aux;
    for(int i=0;i<this->dim-1;i++)
        for(int j=i+1;j<this->dim;j++)
            if(this->buf[j]<this->buf[i])   
                {
                    aux = this->buf[j];
                    this->buf[j] = this->buf[i];
                    this->buf[i] = aux;
                }

}
template<class x>
Vector<x>::~Vector()
{
    delete[] buf;

}
void Test()
{
    int c[]={1,2,3};
    double d[]={1.23,1.23,5.323};
    Vector<int>a,a2(3,c);
    a2.Afisare();
    a2.sort();
    Vector<double>b,b2(3,d);
    b2.Afisare();
    b2.sort();
    Fractie vec3[]={Fractie(3,4), Fractie(5,6), Fractie(7,9)};
    Vector<Fractie>z,z2(3,vec3);
    z2.Afisare();
    z2.sort();
    Nr_complex vec4[]={Nr_complex(3,4), Nr_complex(5,6), Nr_complex(7,9)};
    Vector<Nr_complex>y,y2(3,vec4);
    y2.Afisare();
    y2.sort();
}

