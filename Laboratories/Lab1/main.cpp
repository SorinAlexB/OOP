#include "Product.hpp"

void print(const Product &obj){
    
    std::cout<<"The name of the product is : "<< obj.get_name() << "\n";
    std::cout<<"The producer of the product is : "<< obj.get_producer() << "\n";
    std::cout<<"The price of the product is : "<< obj.get_price() << "\n\n";

}

int main(){

    // the default constructor is called
    Product x;
    // the parameterized constructor is called
    Product y("product_y","producer_y",12.65);
    // the copy constructor is called
    Product z = y;

    // the print() method is called
    x.print();
    y.print();
    z.print();
    
    std::cout<<"\n\n\n";

    // we can implement another print function for Product objects in main.cpp file
    // let the function be named print
    // we need to have as parameter one Product object so we can use the getters to print  

    // the print function will be called for the three objects
    print(x);
    print(y);
    print(z);

    Product aux("changed", "changed", 1.00);

    // we will test the Modif methods
    y.Modif(aux);
    z.Modif("zzz", "zzz", 1.11);

    print(y);
    print(z);    

    // we will test the setters
    x.set_name("x");
    x.set_producer("x");
    x.set_price(1);

    print(x);

    return 0;
}