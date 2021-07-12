#include<iostream>
#include "mobile.h"


CustomerBase::CustomerBase():m_custId("N/A"), m_custName("N/A"),
        m_phone("N/A"),m_balance(0.0), m_type(Prepaid) {};

CustomerBase::CustomerBase(std::string custId,std::string cutName
        ,std::string phone,double balance):m_type(Prepaid) {
        m_custId = custId;
        m_custName = cutName;
        m_phone = phone;
        m_balance = balance;
}

CustomerBase::CustomerBase(std::string custId,std::string cutName
        ,std::string phone):m_type(Prepaid),m_balance(0.0) {
        m_custId = custId;
        m_custName = cutName;
        m_phone = phone;
}

CustomerBase::CustomerBase(const CustomerBase &temp) {
    m_custId = temp.m_custId;
    m_custName = temp.m_custName;
    m_phone = temp.m_phone;
    m_balance = temp.m_balance;
    m_type = temp.m_type;
}

void CustomerBase::display() const {
    std::cout<<"Customer id: "<<m_custId<<std::endl;
    std::cout<<"Customer name: "<<m_custId<<std::endl;
    std::cout<<"Phone number: "<<m_phone<<std::endl;
    std::cout<<"Balance: "<<m_balance<<std::endl;
    std::cout<<"Phone type: "<<(m_type?"Prepaid":"Postpaid")<<std::endl;
}

double CustomerBase::getBalance() const {
    return m_balance;
}

PrepaidCustomer::PrepaidCustomer() {};

PrepaidCustomer::PrepaidCustomer(std::string custId, std::string custName,
    std::string phone,double balance):CustomerBase(custId,custName,phone,balance) {};

PrepaidCustomer::PrepaidCustomer(std::string custId, std::string custName,
    std::string phone):CustomerBase(custId,custName,phone) {};

void PrepaidCustomer::recharge(double amount) {
    m_balance += amount;
}

void PrepaidCustomer::credit(double amount) {
    m_balance += amount;
}

void PrepaidCustomer::makeCall(double amount) {
    m_balance -= amount;
}

double PrepaidCustomer::getBalance() const {
    return m_balance;
}

void PrepaidCustomer::display() const {
    std::cout<<"Customer id: "<<m_custId<<std::endl;
    std::cout<<"Customer name: "<<m_custName<<std::endl;
    std::cout<<"Phone number: "<<m_phone<<std::endl;
    std::cout<<"Balance: "<<m_balance<<std::endl;
    std::cout<<"Phone type: "<<(m_type?"Postpaid":"Prepaid")<<std::endl;
    std::cout<<"-----------------------------------"<<std::endl;
}


PostpaidCustomer::PostpaidCustomer() {};

PostpaidCustomer::PostpaidCustomer(std::string custId, std::string custName,
    std::string phone,double balance,int billDate):CustomerBase(custId,custName,phone,balance) {
        m_billDate = billDate;
    }

PostpaidCustomer::PostpaidCustomer(std::string custId, std::string custName,
    std::string phone):CustomerBase(custId,custName,phone),m_billDate(1) {};

void PostpaidCustomer::billPay(double amount) {
    m_balance -= amount;
}

void PostpaidCustomer::credit(double amount) {
    m_balance += amount;
}

void PostpaidCustomer::makeCall(double amount) {
    m_balance -= amount;
}

double PostpaidCustomer::getBalance() const {
    return m_balance;
}

void PostpaidCustomer::display() const {
    std::cout<<"Customer id: "<<m_custId<<std::endl;
    std::cout<<"Customer name: "<<m_custName<<std::endl;
    std::cout<<"Phone number: "<<m_phone<<std::endl;
    std::cout<<"Balance: "<<m_balance<<std::endl;
    std::cout<<"Phone type: "<<(m_type?"Postpaid":"Prepaid")<<std::endl;
    std::cout<<"Bill pay date: "<<m_billDate<<std::endl;
    std::cout<<"-----------------------------------"<<std::endl;
}