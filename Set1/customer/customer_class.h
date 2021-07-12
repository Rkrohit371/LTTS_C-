#include<iostream>

enum AccountType {
  Prepaid,
  Postpaid
};

class Customer {
    std::string m_custId;
    std::string m_custName;
    std::string m_phone; 
    double m_balance;
    public:
      AccountType m_type;
    public:
        Customer();
        Customer(std::string,std::string,std::string, AccountType, double);
        Customer(std::string,std::string,std::string, double);
        Customer(std::string,std::string,std::string);
        Customer(const Customer&);
        std::string getName();
        std::string getID();
        std::string getPhone();
        AccountType getType();
        void credit(double);           //recharge or billPay
        void makeCall(double);
        double getBalance() const;
        void dispay() const;
};