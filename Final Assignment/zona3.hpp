#ifndef ZONA3_HPP
#define ZONA3_HPP
#include <iostream>
#include <math.h>
class zona3{
    int v1, v2;
    int *nr_populatie;
    int ct1, ct2, ctp, nrp;
    public:
        zona3();
        void add_val1(const int val);
        void add_val2(const int val);
        void add_valp(const int val);
        float get_valv1() const;
        float get_valv2() const;
        int get_totalvotes() const;
        void set_nrp(const int nr);
        void reset_vectors();
        int get_people(const int ct) const;
        float get_totalpercentage(const int ct) const;
        ~zona3();
};
#endif