#include<iostream>

class Account {
    std::string m_accNumber;
    std::string m_accName;
    double m_balance;
    public:
        Account();
        Account(std::string,std::string,double);
        Account(std::string,std::string);
        Account(const Account&);
        std::string getAccNumber();
        std::string getAccName();
        double getAccBalance();
        void debit(double);
        void credit(double);
        double getBalance() const;
        void display() const;
};