#ifndef PORCI_H
#define PORCI_H
#include "interface.hpp"
class porci: public interface{
    private:
        int nr_porc = 8;
        int nr_kg_mancare1 = 4;
        int nr_kg_mancare2 = 5;
        char *animal, *mancare;
    public:
        porci();
        char* get_name() const override;
        int get_number() const override;
        int get_food_nr1() const;
        int get_food_nr2() const;
        int get_food_nr() const override;
        char* get_food_name() const override;
        double get_food_per_animal1() const;
        double get_food_per_animal2() const;
        double get_food_per_animal() const override;
        ~porci();
};
#endif
