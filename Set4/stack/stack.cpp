#include<iostream>
#include<cstdlib>
#include "stack.h"

template<typename T>
MyStack<T>::MyStack() {};

template<typename T>
MyStack<T>::MyStack(int len) {
    m_arr = new T[len];
    m_maxlen = len;
    m_top = -1;
}

template<typename T>
void MyStack<T>::push(T value) {
    if (isFull())
    {
        std::cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    std::cout << "Inserting " << value <<std:: endl;
    m_arr[++m_top] = value;
}

template <class T>
T MyStack<T>::pop()
{
    // check for MyStack underflow
    if (isEmpty())
    {
        std::cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    std::cout << "Removing " << peek()<<std::endl;
 
    // decrease MyStack size by 1 and (optionally) return the popped element
    return m_arr[m_top--];
}
 
// Function to return the top element of the MyStack
template <class T>
T MyStack<T>::peek() const
{
    if (!isEmpty()) {
        return m_arr[m_top];
    }
    else {
        exit(EXIT_FAILURE);
    }
}
 
// Utility function to check if the MyStack is empty or not
template <class T>
bool MyStack<T>::isEmpty() const {
    return m_top == -1;               // or return size() == 0;
}
 
// Utility function to check if the MyStack is full or not
template <class T>
bool MyStack<T>::isFull() const {
    return m_top == m_maxlen - 1;     // or return size() == m_maxlen;
}