#include<iostream>

class IEmployee {
    public:
        virtual void payroll()=0;
        virtual void appraisal()=0;
};

class Employee:public IEmployee {
    protected:
        std::string m_empid;
        std::string m_name;
        double m_salary;
        int m_exp;
    public:
        Employee(std::string id, std::string name, double salary,int exp);
        virtual void display();
};

class Engineer : public Employee {
    int m_projCode;
    public:
        Engineer(std::string id, std::string name, 
            double salary,int exp,int code);
        void payroll();
        void appraisal();
        void display();
        std::string getid();
        std::string getName();
        double getSalary();
        int getExp();
        int getprojectcode();
};

class Manager : public Employee {
    int m_projCode;
    int m_reportees;
    public:
        Manager(std::string id, std::string name, 
            double salary,int exp,int code,int reprtees);
        void payroll();
        void appraisal();
        void display();
        std::string getid();
        std::string getName();
        double getSalary();
        int getExp();
        int getprojectcode();
        int getreportees();
};