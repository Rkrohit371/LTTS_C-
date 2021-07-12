#include<iostream>
#include "color_class.h"

int main() {
    Color color1 = Color(0xFF0000, 0x00FF00, 0x0000FF);
    color1.display();
    color1.invert();
    color1.display();
    Color color2 = Color(ORANGE);
    color2.display();
    return 0;
}