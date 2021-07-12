#include "complex.h"
#include<iostream>
#include<string>
#include<fstream>


Complex::Complex():m_real(0), m_imag(0) {};

Complex::Complex(int a, int b) {
    m_real = a;
    m_imag = b;
}

Complex::Complex(int a):m_imag(0) {
    m_real = a;
}

int Complex::real() {
    return m_real;
}

int Complex::image() {
    return m_imag;
}

Complex Complex::operator+(const Complex &C) {
    Complex temp;
    temp.m_real = m_real + C.m_real;
    temp.m_imag = m_imag + C.m_imag;
    return temp;
}

Complex Complex::operator-(const Complex &C) {
    Complex temp;
    temp.m_real = m_real - C.m_real;
    temp.m_imag = m_imag - C.m_imag;
    return temp;
}

Complex Complex::operator*(const Complex &C) {
    Complex temp;
    temp.m_real = (m_real * C.m_real) - (m_imag * C.m_imag);
    temp.m_imag = (m_real * C.m_imag) + (m_imag * C.m_real);
    return temp;
}

Complex& Complex::operator++() {
    m_real += 1;
    m_imag += 1;

    return *this;
}

Complex Complex::operator++(int) {
    Complex duplicate(*this);
    m_real += 1;
    m_imag += 1;

    return duplicate;
}

bool Complex::operator==(const Complex &C) {
    if(m_real == C.m_real && m_imag == C.m_imag) {
        return 1;
    }
    return 0;
}

std::ostream& operator<< (std::ostream &output, const Complex &temp) {
    output<<"Complex number is: "<<temp.m_real<<" + "<<temp.m_imag<<"i"<<std::endl;
    return output;
}

void Complex:: display() const {
    std::cout<<"Complex number is: "<<m_real<<" + "<<m_imag<<"i"<<std::endl;
    std::cout<<"--------------------------------"<<std::endl;
}