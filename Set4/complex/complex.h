#ifndef _COMPLEX_H_
#define  _COMPLEX_H_

template<typename T>
class Complex {
    T m_real;
    T m_image;
    public:
        Complex();
        Complex(T,T);
        T getReal();
        T getImage();
        void display();
};

#endif