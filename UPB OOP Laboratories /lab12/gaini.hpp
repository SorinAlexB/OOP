#ifndef GAINI_H
#define GAINI_H
#include "interface.hpp"
class gaini: public interface{
    private:
        int nr_gaini = 100;
        int nr_kg_mancare = 5;
        char *animal, *mancare;
    public:
        gaini();
        char* get_name() const override;
        int get_number() const override;
        int get_food_nr() const override;
        char* get_food_name() const override;
        double get_food_per_animal() const override;
        ~gaini();
};
#endif