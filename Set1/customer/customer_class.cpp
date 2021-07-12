#include<iostream>
#include "customer_class.h"

std::string enum_to_string(AccountType type) {
   switch(type) {
      case Prepaid:
         return "Prepaid";
      case Postpaid:
         return "Postpaid";
      default:
         return "Invalid Account type";
   }
}

Customer:: Customer():m_custId("0000"), m_custName("N/A"), 
   m_phone("N/A"), m_type(Prepaid), m_balance(0.0) {};

Customer::Customer(std::string custId,std::string custName,std::string phone,
   AccountType type, double balance) {
   m_custId = custId;
   m_custName = custName;
   m_phone = phone;
   m_type = type;
   m_balance = balance;
}

Customer::Customer(std::string custId,std::string custName,std::string phone, double balance):m_type(Prepaid) {
   m_custId = custId;
   m_custName = custName;
   m_phone = phone;
   m_balance = balance;
}

Customer::Customer(const Customer& obj) {
   m_custId = obj.m_custId;
   m_custName = obj.m_custName;
   m_phone = obj.m_phone;
   m_balance = obj.m_balance;
}

std::string Customer:: getName() {
   return m_custName;
}
std::string Customer:: getID() {
   return m_custId;
}
std::string Customer:: getPhone() {
   return m_phone;
}

AccountType Customer::getType() {
   return m_type;
}

void Customer::credit(double money){
   m_balance += money;
}           //recharge or billPay

void Customer::makeCall(double amount) {
   m_balance -= amount;
}

double Customer::getBalance() const {
   return m_balance;
}

void Customer::dispay() const {
   std::cout<<"Customer Id: "<<m_custId<<std::endl;
   std::cout<<"Customer Name: "<<m_custName<<std::endl;
   std::cout<<"Phone number: "<<m_phone<<std::endl;
   std::cout<<"Balance: "<<m_balance<<std::endl;
   std::cout<<"Account type: "<<enum_to_string(m_type)<<std::endl;
   std::cout<<"------------------------------"<<std::endl;
}
