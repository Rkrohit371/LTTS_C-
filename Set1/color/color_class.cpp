#include<iostream>
#include<string>
#include "color_class.h"



Color:: Color():m_r(0xFF0000), m_g(0x00FF00), m_b(0x0000FF),colortype(BLUE) {};

Color::Color(int r, int g, int b){
    m_r = r;
    m_g = g;
    m_b = b;
}       //r,g,b values

Color::Color(int r):m_g(0x00FF00), m_b(0x0000FF),colortype(BLUE) {
    m_r = r;
}               //Hex value as int

Color::Color(std::string r):m_g(0x00FF00), m_b(0x0000FF),colortype(BLUE){
    m_r = stoi(r);
}       //Hex value as string

Color::Color(color_t color):m_r(0xFF0000), m_g(0x00FF00), m_b(0x0000FF),colortype(BLUE){
    colortype = color;
}           //enum 

int Color::getmr() {
    return m_r;
}

int Color::getmg() {
    return m_g;
}

int Color::getmb() {
    return m_b;
}

color_t Color::getColortype() {
    return colortype;
}

void Color::invert() {
    m_r = 0xFFFFFF - m_r;
    m_g = 0xFFFFFF - m_g;
    m_b = 0xFFFFFF - m_b;
}

void Color::display() const {
    std::cout<<"Value of r: "<<m_r<<std::endl;
    std::cout<<"Value of g: "<<m_g<<std::endl;
    std::cout<<"Value of b: "<<m_b<<std::endl;
    std::cout<<"Color type is: "<<colortype<<std::endl;
    std::cout<<"-------------------------"<<std::endl;
}


