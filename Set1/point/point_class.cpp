#include<iostream>
#include "point_class.h"
#include<math.h>


Point:: Point() : m_x(0), m_y(0) {};

Point::Point(int x, int y) {
    m_x = x;
    m_y = y;
}

Point::Point(const Point& obj) {
    m_x = obj.m_x;
    m_y = obj.m_y;
} 

double Point::distanceFromOrigin() const {
    double result;
    result = sqrt(m_x*m_x + m_y*m_y);
    return result;
}

Quadrant Point::quadrant() const {
    if(m_x > 0 && m_y > 0) {
        return Q1;
    } else if(m_x < 0 && m_y > 0) {
        return Q2;
    } else if(m_x < 0 && m_y < 0) {
        return Q3;
    } else {
        return Q4;
    }
}

int Point::getmx() {
    return m_x;
}

int Point::getmy() {
    return m_y;
}

bool Point::isOrigin() const {
    if(m_x == 0 && m_y == 0){
        return true;
    } else {
        return false;
    }
}
bool Point::isOnXAxis() const {
    if(m_y == 0 && m_x != 0) {
        return true;
    } else {
        return false;
    }
}
bool Point::isOnYAxis() const {
    if(m_x == 0 && m_y != 0) {
        return true;
    } else {
        return false;
    }
}
void Point::display() const {
    std::cout<<"Coardinate is: ("<<m_x<<", "<<m_y<<")"<<std::endl;
    std::cout<<"The distance from the origin is: "<<distanceFromOrigin()<<std::endl;
    
    if(isOrigin()) {
        std::cout<<"The point is on Origin."<<std::endl;
    } else {
        std::cout<<"The point is not on Origin."<<std::endl;
    }
    if(isOnXAxis()) {
        std::cout<<"The point is on X-axis."<<std::endl;
    } else {
        std::cout<<"The point is not on X-axis."<<std::endl;
    }
    if(isOnYAxis()) {
        std::cout<<"The point is on Y-axis."<<std::endl;
    } else {
        std::cout<<"The point is not on Y-axis."<<std::endl;
    }

    if(isOnXAxis() || isOnYAxis() || isOrigin()) {
        std::cout<<"The point is not in any quadrant."<<std::endl;
    }
    else {
        std::cout<<"The quardrant is "<<quadrant()<<"."<<std::endl;
    }
    std::cout<<"-----------------------------------------"<<std::endl;
}


