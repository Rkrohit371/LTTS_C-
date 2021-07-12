#include<iostream>
#include<math.h>
#include "point.h"

template<typename T>
Point<T>::Point():m_x(0),m_y(0) {};

template<typename T>
Point<T>::Point(T x, T y) {
    m_x = x;
    m_y = y;
}

template<typename T>
void Point<T>::distanceFromOrigin() {
    T result;
    result = sqrt(m_x*m_x + m_y*m_y);
    std::cout<<"Distance from the origin is: "<<result<<std::endl;
}

template<typename T>
void Point<T>::display() {
    std::cout<<"Coordinate is: ("<<m_x<<" , "<<m_y<<")"<<std::endl;
}

template<typename T>
Quadrant Point<T>::quadrant() {
    if(m_x > 0 && m_y > 0) {
        return Q1;
    } else if(m_x < 0 & m_y > 0) {
        return Q2;
    } else if(m_x < 0 & m_y < 0) {
        return Q3;
    } else {
        return Q4;
    }
}