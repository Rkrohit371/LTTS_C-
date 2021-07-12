#include<iostream>

class Fraction {
    int m_numerator;
    int m_denominator;
    public:
        Fraction();
        Fraction(int,int);
        Fraction(int);
        int getNumerator();
        int getDenominator();
        Fraction operator+(const Fraction&);
        Fraction operator-(const Fraction&);
        Fraction operator*(const Fraction&);
        Fraction operator+(int);
        Fraction operator-(int);
        bool operator==(const Fraction&);
        bool operator<(const Fraction&);
        bool operator>(const Fraction&);
        Fraction simplify();
        bool isSimplest() const;
        void display() const;
        friend std::ostream& operator<<(std::ostream&, const Fraction&);
};