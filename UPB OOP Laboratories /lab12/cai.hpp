#ifndef CAI_H
#define CAI_H
#include "interface.hpp"
class cai: public interface{
    private:
        int nr_cai = 2;
        int nr_kg_mancare = 8;
        char *animal, *mancare;
    public:
        cai();
        char* get_name() const override;
        int get_number() const override;
        int get_food_nr() const override;
        char* get_food_name() const override;
        double  get_food_per_animal() const override;
        ~cai();
};
#endif
