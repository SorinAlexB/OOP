#ifndef VACI_H
#define VACI_H
#include "interface.hpp"
class vaci: public interface{
    private:
        int nr_vaci = 10;
        int nr_kg_mancare = 30;
        char *animal, *mancare;
    public:
        vaci();
        char* get_name() const override;
        int get_number() const override;
        int get_food_nr() const override;
        char* get_food_name() const override;
        double get_food_per_animal() const override;
        ~vaci();
};
#endif