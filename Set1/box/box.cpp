
#include "box.h"
#include<iostream>


Box::Box(int length, int breadth, int height) {
    m_length = length;
    m_breadth = breadth;
    m_height = height;
}

Box::Box():m_length(12), m_breadth(2),m_height(3) {
    std::cout<<"This is Box class with no parameters."<<std::endl;
}

Box::Box(int length): m_breadth(2),m_height(3) {
    m_length = length;
}

Box::Box(const Box& obj){
    m_length = obj.m_length;
    m_breadth = obj.m_breadth;
    m_height = obj.m_height;
}

int Box:: length() const {
    return m_length;
}

int Box::breadth() const {
    return m_breadth;
}
int Box::height() const {
    return m_height;
}
int Box::volume() const {
    return m_length*m_breadth*m_height;
}

void Box::display() const {
    std::cout<<"m_length: "<<m_length<<std::endl;
    std::cout<<"m_height: "<<m_height<<std::endl;
    std::cout<<"m_breadth: "<<m_breadth<<std::endl;
}