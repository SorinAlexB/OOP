#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>
#include <cstring>
class interface{
    public:
        virtual char* get_name() const = 0;
        virtual int get_number() const = 0;
        virtual int get_food_nr() const = 0;
        virtual char* get_food_name() const = 0;
        virtual double  get_food_per_animal() const = 0;
        // virtual ~interface() = 0;
};
#endif