#include<iostream>
#include "complex.h"

template<typename T>
Complex<T>::Complex():m_real(0),m_image(0) {};

template<typename T>
Complex<T>::Complex(T real, T image) {
    m_real = real;
    m_image = image;
}

template<typename T>
T Complex<T>::getReal() {
    return m_real;
}

template<typename T>
T Complex<T>::getImage() {
    return m_image;
}

template<typename T>
void Complex<T>::display() {
    std::cout<<"Complex number is: "<<m_real<<" + "<<m_image<<"i"<<std::endl;
    std::cout<<"-----------------------------------"<<std::endl;
}