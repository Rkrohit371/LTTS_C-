#include<iostream>
#include<math.h>

enum Quadrant {
    Q1 = 1,
    Q2 = 2,
    Q3 = 3,
    Q4 = 4
};

class Point {
    int m_x;
    int m_y;
    public:
        Point() : m_x(0), m_y(0) {};
        Point(int x, int y) {
            m_x = x;
            m_y = y;
        }
        Point(const Point& obj) {
            m_x = obj.m_x;
            m_y = obj.m_y;
        } 
        double distanceFromOrigin() const {
            double result;
            result = sqrt(m_x*m_x + m_y*m_y);
            return result;
        }
        Quadrant quadrant() const {
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
        bool isOrigin() const {
            if(m_x == 0 && m_y == 0){
                return true;
            } else {
                return false;
            }
        }
        bool isOnXAxis() const {
            if(m_y == 0 && m_x != 0) {
                return true;
            } else {
                return false;
            }
        }
        bool isOnYAxis() const {
            if(m_x == 0 && m_y != 0) {
                return true;
            } else {
                return false;
            }
        }
        void display() const {
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
};

int main() {

    Point p1 = Point(0, 0);
    p1.display();
    Point p2 = Point(-2, 1);
    p2.display();
    Point p3 = Point(2, 2);
    p3.display();
    Point p4 = Point(-3, -4);
    p4.display();
    
    return 0;
}