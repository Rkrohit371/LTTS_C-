#include<iostream>
#include<algorithm>
#include "fraction.h"

Fraction::Fraction():m_numerator(0),m_denominator(1) {};

Fraction::Fraction(int numerator, int denominator) {
    m_numerator = numerator;
    m_denominator = denominator;
}

Fraction::Fraction(int numerator):m_denominator(1) {
    m_numerator = numerator;
}

int Fraction::getNumerator() {
    return m_numerator;
}

int Fraction::getDenominator() {
    return m_denominator;
}

Fraction Fraction::operator+(const Fraction& obj) {
    Fraction temp;
    temp.m_numerator = m_numerator + obj.m_numerator;
    temp.m_denominator = m_denominator + obj.m_denominator;
    return temp;
}

Fraction Fraction::operator-(const Fraction& obj) {
    Fraction temp;
    temp.m_numerator = m_numerator - obj.m_numerator;
    temp.m_denominator = m_denominator - obj.m_denominator;
    return temp;
}

Fraction Fraction::operator*(const Fraction& obj) {
    Fraction temp;
    temp.m_numerator = m_numerator * obj.m_numerator;
    temp.m_denominator = m_denominator * obj.m_denominator;
    return temp;
}

Fraction Fraction::operator+(int) {
    m_numerator = +m_numerator;
    m_denominator = +m_denominator;
    return Fraction(m_numerator, m_denominator);
}

Fraction Fraction::operator-(int) {
    m_numerator = -m_numerator;
    m_denominator = -m_denominator;
    return Fraction(m_numerator, m_denominator);
}

bool Fraction::operator==(const Fraction &obj) {
    return (m_numerator == obj.m_numerator && m_denominator == obj.m_denominator); 
}

bool Fraction::operator>(const Fraction &obj) {
    return (m_numerator > obj.m_numerator && m_denominator > obj.m_denominator); 
}

bool Fraction::operator<(const Fraction &obj) {
    return (m_numerator < obj.m_numerator && m_denominator < obj.m_denominator); 
}

Fraction Fraction::simplify() {
    int d = std::__gcd(m_numerator, m_denominator);
    m_numerator = m_numerator / d;
    m_denominator = m_denominator / d;
    return *this;
}

void Fraction::display() const {
    std::cout<<"Numerator is: "<<m_numerator<<std::endl;
    std::cout<<"Denominator is: "<<m_denominator<<std::endl;
}

bool Fraction::isSimplest() const {
    int d = std::__gcd(m_numerator, m_denominator);
    if(d == 1){
        return 1;
    } else {
        return 0;
    }
}

std::ostream& operator<<(std::ostream &output, const Fraction &temp) {
    output<<"Numerator is: "<<temp.m_numerator<<std::endl;
    output<<"Denominator is: "<<temp.m_denominator<<std::endl;
    return output;
}