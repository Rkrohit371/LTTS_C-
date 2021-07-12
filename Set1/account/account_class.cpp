#include<iostream>
#include "account_class.h"

Account::Account():m_accName("N/A"),
    m_accNumber("N/A"),m_balance(0) {};

Account::Account(std::string accNumber, std::string accName, double balance) {
    m_accNumber = accNumber;
    m_accName = accName;
    m_balance = balance;
}

Account:: Account(std::string accNumber, std::string accName):m_balance(100) {
    m_accNumber = accNumber;
    m_accName = accName;
}

Account::Account(const Account& obj) {
    m_accNumber = obj.m_accNumber;
    m_accName = obj.m_accName;
    m_balance = obj.m_balance;
}

std::string Account::getAccName() {
    return m_accName;
}

std::string Account::getAccNumber() {
    return m_accNumber;
}

double Account::getAccBalance() {
    return m_balance;
}

void Account:: debit(double balance) {
    if((m_balance-balance) < 0) {
        std::cout<<"Not enough balance"<<std::endl;
    } else {
        m_balance -= balance;
        std::cout<<balance<<" Amount Debited"<<std::endl;
    }
}

void Account:: credit(double balance) {
    m_balance += balance;
    std::cout<<balance<<" Amount credited"<<std::endl;
}
double Account:: getBalance() const {
    return m_balance;
}

void Account:: display() const {
    std::cout<<"-----------------------------------"<<std::endl;
    std::cout<<"Account Number: "<<m_accNumber<<std::endl;
    std::cout<<"Account Name: "<<m_accName<<std::endl;
    std::cout<<"Account Balance: "<<m_balance<<std::endl;
    std::cout<<"-----------------------------------"<<std::endl;
}


