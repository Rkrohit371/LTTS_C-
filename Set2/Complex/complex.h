#include<iostream>
#include<fstream>


class Complex {
    int m_real;
    int m_imag;
    public:
        Complex();
        Complex(int,int);
        Complex(int);
        int real();
        int image();
        Complex operator+(const Complex&);
        Complex operator-(const Complex&);
        Complex operator*(const Complex&);
        Complex& operator++();
        Complex operator++(int);
        bool operator==(const Complex&);
        void display() const;
        friend std::ostream& operator<<(std::ostream&, const Complex&);
};