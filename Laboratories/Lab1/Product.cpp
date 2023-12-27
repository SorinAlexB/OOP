#include "Product.hpp"

Product::Product(){
    
    this->name = new char[8];
    strcpy(this->name, "nothing");
    
    this->producer = new char[8];
    strcpy(this->producer, "nothing");
    
    this->price = 0;
}

Product::Product(const char *new_name, const char *new_producer, const float new_price){
    
    this->name = new char[strlen(new_name)+1];
    strcpy(this->name, new_name);
    
    this->producer = new char[strlen(new_producer)+1];
    strcpy(this->producer, new_producer);
    
    this->price = new_price;
};

Product::Product(const Product &obj){
    
    this->name = new char[strlen(obj.name)+1];
    strcpy(this->name, obj.name);
    
    this->producer = new char[strlen(obj.producer)+1];
    strcpy(this->producer, obj.producer);
    
    this->price = obj.price;
}

void Product::Modif(const char *new_name, const char *new_producer, const float new_price){
    
    delete[] this->name;
    delete[] this->producer;

    this->name = new char[strlen(new_name)+1];
    strcpy(this->name, new_name);

    this->producer = new char[strlen(new_producer)+1];
    strcpy(this->producer, new_producer);

    this->price = new_price;
}

void Product::Modif(const Product &obj){
    
    delete[] this->name;
    delete[] this->producer;

    this->name = new char[strlen(obj.name)+1];
    strcpy(this->name, obj.name);

    this->producer = new char[strlen(obj.producer)+1];
    strcpy(this->producer, obj.producer);

    this->price = obj.price;
}

char* Product::get_name() const{
    
    return this->name;
}

char* Product::get_producer() const{
    
    return this->producer;
}

float Product::get_price() const{
    
    return this->price;
}

void Product::set_name(const char *new_name){
    
    delete[] this->name;
    this->name = new char[strlen(new_name)+1];
    strcpy(this->name, new_name);
}

void Product::set_producer(const char *new_producer){
    
    delete[] this->producer;
    this->producer = new char[strlen(new_producer)+1];
    strcpy(this->producer, new_producer);
}

void Product::set_price(const float new_price){

    this->price = new_price;
}

void Product::print(){

    std::cout<<"The name of the product is : "<< this->name << "\n";
    std::cout<<"The producer of the product is : "<< this->producer << "\n";
    std::cout<<"The price of the product is : "<< this->price << "\n\n";
}

Product::~Product(){
    
    delete[] this->name;
    delete[] this->producer;
}
