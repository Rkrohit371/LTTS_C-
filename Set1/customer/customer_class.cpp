#include<iostream>

enum AccountType {
    Prepaid,
    Postpaid
};

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

class Customer {
   private:
      std::string m_custId;
      std::string m_custName;
      std::string m_phone; 
      double m_balance;
   public:
      AccountType m_type;
   public:
      Customer():m_custId("0000"), m_custName("N/A"), m_phone("N/A"), m_type(Prepaid), m_balance(0.0) {};
      Customer(std::string custId,std::string custName,std::string phone,AccountType type,double balance) {
         m_custId = custId;
         m_custName = custName;
         m_phone = phone;
         m_type = type;
         m_balance = balance;
      }
      Customer(std::string custId,std::string custName,std::string phone, double balance):m_type(Prepaid) {
         m_custId = custId;
         m_custName = custName;
         m_phone = phone;
         m_balance = balance;
      }
      Customer(const Customer& obj) {
         m_custId = obj.m_custId;
         m_custName = obj.m_custName;
         m_phone = obj.m_phone;
         m_balance = obj.m_balance;
      }
      void credit(double money){
         m_balance += money;
      }           //recharge or billPay
      void makeCall(double amount) {
         m_balance -= amount;
      }
      double getBalance() const {
         return m_balance;
      }
      void dispay() const {
         std::cout<<"Customer Id: "<<m_custId<<std::endl;
         std::cout<<"Customer Name: "<<m_custName<<std::endl;
         std::cout<<"Phone number: "<<m_phone<<std::endl;
         std::cout<<"Balance: "<<m_balance<<std::endl;
         std::cout<<"Account type: "<<enum_to_string(m_type)<<std::endl;
         std::cout<<"------------------------------"<<std::endl;
      }
};

int main() {
   Customer cust1 = Customer("2334", "Rohit", "7832424234", Prepaid, 100);
   cust1.dispay();
   cust1.credit(2);
   std::cout<<"Available balance is: "<<cust1.getBalance()<<std::endl;
   std::cout<<"------------------------------"<<std::endl;
   cust1.makeCall(3);
   cust1.dispay();
    return 0;
}