#include<iostream>
#include "banking.h"

AccountBase::AccountBase():m_accName("N/A"), m_accNumber("N/A"),m_balance(0) {};

AccountBase::AccountBase(std::string name, std::string accNumber, 
        double balance) {
    m_accNumber = accNumber;
    m_accName = name;
    m_balance = balance;
}

AccountBase::AccountBase(std::string name, 
        std::string accNumber):m_balance(100) {
    m_accNumber = accNumber;
    m_accName = name;
}

AccountBase::AccountBase(const AccountBase& obj) {
    m_accName = obj.m_accName;
    m_accNumber = obj.m_accNumber;
    m_balance = obj.m_balance;
}

std::string AccountBase::getaccNumber() {
    return m_accNumber;
}

std::string AccountBase::getaccName() {
    return m_accName;
}

double AccountBase::getBalance() {
    return m_balance;
}

SavingsAccount::SavingsAccount() {};

SavingsAccount::SavingsAccount(std::string name,std::string accNumber, 
        double balance):AccountBase(name, accNumber, balance) {};
        
SavingsAccount::SavingsAccount(std::string name,
        std::string accNumber):AccountBase(name, accNumber) {};

std::string SavingsAccount::getaccNumber() {
    return m_accNumber;
}

std::string SavingsAccount::getaccName() {
    return m_accName;
}

double SavingsAccount::getBalance() {
    return m_balance;
}

void SavingsAccount:: display() const {
    std::cout<<"Account Name: "<<m_accName<<std::endl;
    std::cout<<"Account Number: "<<m_accNumber<<std::endl;
    std::cout<<"Account Name: "<<m_balance<<std::endl;
    std::cout<<"----------------------------------"<<std::endl;
}

CreditAccount::CreditAccount() {};

CreditAccount::CreditAccount(std::string name,std::string accNumber, 
        double balance):AccountBase(name, accNumber, balance) {};
        
CreditAccount::CreditAccount(std::string name,
        std::string accNumber):AccountBase(name, accNumber) {};

void CreditAccount:: display() const {
    std::cout<<"Account Name: "<<m_accName<<std::endl;
    std::cout<<"Account Number: "<<m_accNumber<<std::endl;
    std::cout<<"Account Name: "<<m_balance<<std::endl;
    std::cout<<"----------------------------------"<<std::endl;
}

std::string CreditAccount::getaccNumber() {
    return m_accNumber;
}

std::string CreditAccount::getaccName() {
    return m_accName;
}

double CreditAccount::getBalance() {
    return m_balance;
}

void CreditAccount:: credit(double amount) {
    m_balance += amount;
}
void CreditAccount:: debit(double amount) {
    m_balance -= amount;
}

void SavingsAccount:: credit(double amout) {
    m_balance += amout;
}
void SavingsAccount:: debit(double amount) {
    m_balance -= amount;
}

double AccountBase::getBalance() const {
    return m_balance;
}