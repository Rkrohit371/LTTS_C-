#ifndef _STACK_H_
#define _STACK_H_

constexpr int max_size=50;

template<typename T>
class MyStack {
    T *m_arr;
    int m_top;
    int m_maxlen;
    public:
        MyStack();
        MyStack(int len);
        void push(T val);
        T pop();
        T peek() const;
        bool isEmpty() const;
        bool isFull() const;
};

#endif