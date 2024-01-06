#ifndef COMPLEXNUMBER_HPP
#define COMPLEXNUMBER_HPP
#include <iostream>
#include <cstring>
class ComplexNumber{
    private:
        float x;
        float y;
        char *nr;
    public:
        // default constructor
        ComplexNumber();
        // constructor with paramethers
        ComplexNumber(const float new_x, const float new_y, const char *new_nr);
        // copy constructor
        ComplexNumber(const ComplexNumber &obj);
        
        // getters
        float get_x() const;
        float get_y() const;
        char get_nr() const;
        
        // setters
        void set_x(const float new_x);
        void set_y(const float new_y);
        void set_nr(const char *new_nr);

        // operators  
        // they will work only if we have ComplexNumber + type_defined_for_operators
        ComplexNumber& operator=(const ComplexNumber &obj);
        ComplexNumber operator+(const ComplexNumber &obj);
        ComplexNumber operator+(const float new_x);
        ComplexNumber operator+(const char *new_nr);
        ComplexNumber operator-(const ComplexNumber &obj);
        ComplexNumber operator-(const float new_x);
        ComplexNumber operator-(const char *new_nr);
        ComplexNumber operator/(const ComplexNumber &obj);
        ComplexNumber operator/(const float new_x);
        ComplexNumber operator*(const ComplexNumber &obj);
        ComplexNumber operator*(const float new_x);

        // friend operators
        // they will work only if we have type_defined_for_operators + ComplexNumber
        friend ComplexNumber operator+(const float new_x, const ComplexNumber &obj);
        friend ComplexNumber operator+(const char *new_nr, const ComplexNumber &obj);
        friend ComplexNumber operator-(const float new_x, const ComplexNumber &obj);
        friend ComplexNumber operator-(const char *new_nr, const ComplexNumber &obj);
        friend ComplexNumber operator/(const float new_x, const ComplexNumber &obj);
        friend ComplexNumber operator*(const float new_x, const ComplexNumber &obj);
        
        // logical operators
        // they will work only if we have ComplexNumber + type_defined_for_operators
        bool operator<(const ComplexNumber& obj) const;
        bool operator<(const float new_x) const;
	    bool operator<=(const ComplexNumber& obj) const;
        bool operator<=(const float new_x) const;
	    bool operator>(const ComplexNumber& obj) const;
        bool operator>(const float new_x) const;
	    bool operator>=(const ComplexNumber& obj) const;
        bool operator>=(const float new_x) const;
	    bool operator==(const ComplexNumber& obj) const;
        bool operator==(const float new_x) const;
	    bool operator!=(const ComplexNumber& obj) const;
        bool operator!=(const float new_x) const;

        // logical operators
        // they will work only if we have ComplexNumber + type_defined_for_operators
        friend bool operator<(const float new_x, const ComplexNumber &obj);
        friend bool operator<=(const float new_x, const ComplexNumber &obj);
        friend bool operator>(const float new_x, const ComplexNumber &obj);
        friend bool operator>=(const float new_x, const ComplexNumber &obj);
        friend bool operator==(const float new_x, const ComplexNumber &obj);
        friend bool operator!=(const float new_x, const ComplexNumber &obj);

        // input and output for ComplexNumber
        friend std::istream& operator>>(std::istream &in, ComplexNumber &obj);
        friend std::ostream& operator<<(std::ostream &out, const ComplexNumber & obj);
};  
#endif