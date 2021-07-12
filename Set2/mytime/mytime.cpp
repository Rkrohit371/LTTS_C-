#include "mytime.h"
#include<iostream>
#include<string>
#include<fstream>

MyTime::MyTime():m_hours(0), m_minutes(0), m_seconds(1) {};

MyTime::MyTime(int h, int m, int s) {
    m_hours = h;
    m_minutes = m;
    m_seconds = s;
}

MyTime::MyTime(int h, int m):m_seconds(0) {
    m_hours = h;
    m_minutes = m;
}

int MyTime::getHours() {
    return m_hours;
}

int MyTime::getMinutes() {
    return m_minutes;
}

int MyTime::getSeconds() {
    return m_seconds;
}

MyTime MyTime::operator+(const MyTime& time) {
    MyTime temp;
    temp.m_hours = m_hours + time.m_hours;
    temp.m_minutes = m_minutes + time.m_minutes;
    temp.m_seconds = m_seconds + time.m_seconds;
    if(temp.m_seconds >= 60) {
        temp.m_seconds -= 60;
        temp.m_minutes += 1;
    }
    if(temp.m_minutes >= 60) {
        temp.m_minutes -= 60;
        temp.m_hours += 1;
    }

    return temp;
}

MyTime MyTime::operator-(const MyTime& time) {
    MyTime temp;
    if(time.m_seconds > m_seconds) {
        m_seconds += 60;
        m_minutes -= 1;
    }
    if(time.m_minutes > m_minutes) {
        m_minutes += 60;
        m_hours -= 1;
    }
    temp.m_hours = m_hours - time.m_hours;
    temp.m_minutes = m_minutes - time.m_minutes;
    temp.m_seconds = m_seconds - time.m_seconds;
    return temp;
}

MyTime& MyTime::operator++() {
    m_hours += 1;
    m_minutes += 1;
    m_seconds += 1;

    if(m_seconds >= 60) {
        m_seconds = 0;
        m_minutes += 1;
    }
    if(m_minutes >= 60) {
        m_minutes = 0;
        m_hours += 1;
    }

    return *this;
}

MyTime MyTime::operator++(int) {
    MyTime duplicate(*this);
    m_hours += 1;
    m_minutes += 1;
    m_seconds += 1;

    if(m_seconds >= 60) {
        m_seconds = 0;
        m_minutes += 1;
    }
    if(m_minutes >= 60) {
        m_minutes = 0;
        m_hours += 1;
    }

    return duplicate; 
}

MyTime& MyTime::operator+=(const MyTime& time) {
    this->m_hours += time.m_hours;
    this->m_minutes += time.m_minutes;
    this->m_seconds += time.m_seconds;

    if(this->m_seconds >= 60) {
        this->m_seconds = 0;
        this->m_minutes += 1;
    }
    if(this->m_minutes >= 60) {
        this->m_minutes = 0;
        this->m_hours += 1;
    }

    return *this;
}

MyTime MyTime::operator+(int) {
    m_hours = +m_hours;
    m_minutes = +m_minutes;
    m_seconds = +m_seconds;

    return MyTime(m_hours, m_minutes, m_seconds);
}

MyTime MyTime::operator-(int) {
    m_hours = -m_hours;
    m_minutes = -m_minutes;
    m_seconds = -m_seconds;

    return MyTime(m_hours, m_minutes, m_seconds);
}

bool MyTime::operator==(const MyTime& time) {
    if(m_hours == time.m_hours && m_minutes == time.m_minutes && m_seconds == time.m_seconds) {
        return 1;
    }
    return 0;
}

bool MyTime::operator>(const MyTime& time) {
    if(m_hours > time.m_hours) {
        return 1;
    } else if(m_hours == time.m_hours && m_minutes > time.m_minutes) {
        return 1;
    } else if(m_hours == time.m_hours && m_minutes == time.m_minutes && m_seconds > time.m_seconds){
        return 1;
    } else if(m_hours == time.m_hours && m_minutes == time.m_minutes && m_seconds == time.m_seconds) {
        return 1;
    }
    return 0;
}

bool MyTime::operator<(const MyTime& time) {
    if(m_hours > time.m_hours) {
        return 0;
    } else if(m_hours == time.m_hours && m_minutes > time.m_minutes) {
        return 0;
    } else if(m_hours == time.m_hours && m_minutes == time.m_minutes && m_seconds > time.m_seconds){
        return 0;
    } else if(m_hours == time.m_hours && m_minutes == time.m_minutes && m_seconds == time.m_seconds){
        return 0;
    }
    return 1;
}

std::ostream& operator<<(std::ostream &output, const MyTime &temp) {
    output<<"Time is: "<<temp.m_hours<<"h:"<<temp.m_minutes<<"m:"<<temp.m_seconds<<"s"<<std::endl;
    return output;
}

void MyTime:: display() const{
    std::cout<<"Time is: "<<m_hours<<"h:"<<m_minutes<<"m:"<<m_seconds<<"s"<<std::endl;
    std::cout<<"--------------------------------------"<<std::endl;
}