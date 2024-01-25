#include "Oras.hpp"
namespace cerinta2{
    Locuitor *v;
    Oras x;
}
namespace cerinta3{
    Locuitor aux;
}
int main()
{
    int a[] = {1,2,3,4};
    int b[] = {2,3,4,5};
    char n1[]="abc";
    cerinta2::v = new Locuitor[5];
    cerinta2::x = Oras(a,4,n1,3,"n1",4,"p1");
    for(int i = 0; i < get_nr_loc(cerinta2::x); i++)
        

    cerinta2::v[0] = Locuitor(a,4,n1,3,"n1");
    cerinta2::v[1] = Locuitor(b,4,"cde",3,"n2");
    cerinta2::v[0].afisare();
    

    delete[] cerinta2::v;


}