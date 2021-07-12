#include<iostream>
#include "stack.h"
#include "stack.cpp"

int main() {
    MyStack<std::string> st(2);
    st.push("Rohit");
    st.push("Kumar");
    st.pop();
    st.pop();
    st.push("A");
    std::cout<<"The top element is: "<<st.peek()<<std::endl;

    if (st.isEmpty()) {
        std::cout << "The stack is empty"<<std::endl;
    }
    else {
        std::cout << "The stack is not empty"<<std::endl;
    }

    return 0;
}