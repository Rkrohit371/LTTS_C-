#include<iostream>

typedef enum {
    RED=0xFF0000,
    GREEN=0x00FF00,
    BLUE=0x0000FF,
    WHITE=0xFFFFFF,
    BLACK=0x0,
    PINK=0xFFC0CB,
    ORANGE=0xFFA500
} color_t;


class Color {
    int m_r;
    int m_g;
    int m_b;
    color_t colortype;
    public:
        Color();
        Color(int,int,int);       //r,g,b values
        Color(int);               //Hex value as int
        int getmr();
        int getmg();
        int getmb();
        color_t getColortype();
        Color(std::string);       //Hex value as string
        Color(color_t);           //enum 
        void invert();
        void display() const;
};