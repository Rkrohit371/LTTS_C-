#ifndef _POINT_H_
#define _POINT_H_

enum Quadrant {
    Q1=1,
    Q2=2,
    Q3=3,
    Q4=4
};


template<typename T>
class Point {
    T m_x;
    T m_y;
    public:
        Point();
        Point(T,T);
        void distanceFromOrigin();
        Quadrant quadrant();
        void display();
        T getmx();
        T getmy();
};

#endif