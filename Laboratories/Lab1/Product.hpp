#ifndef PRODUCT_HPP
#define PRODUCT_HPP
#include <iostream>
#include <cstring>
class Product{
    private:
        char *name;
        char *producer;
        float price;
    public:
        Product();
        Product(const char *new_name, const char *new_producer, const float new_price);
        Product(const Product &obj);
        void Modif(const char *new_name, const char *new_producer, const float new_price);
        void Modif(const Product &obj);
        char* get_name() const;
        char* get_producer() const;
        float get_price() const;
        void set_name(const char *new_name);
        void set_producer(const char *new_producer);
        void set_price(const float new_price);
        void print();
        ~Product();
};
#endif