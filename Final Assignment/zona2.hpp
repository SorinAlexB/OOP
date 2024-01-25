#ifndef ZONA2_HPP
#define ZONA2_HPP
#include <iostream>
#include <math.h>
class zona2{
    int *v1, *v2, *nr_populatie;
    int ct1, ct2, ctp, nrp;
    public:
        zona2();
        void add_val1(const int val);
        void add_val2(const int val);
        void add_valp(const int val);
        float get_valv1() const;
        float get_valv2() const;
        int get_totalvotes() const;
        void set_nrp(const int nr);
        void reset_vectors();
        int get_people() const;
        float get_totalpercentage() const;
        ~zona2();
};
#endif