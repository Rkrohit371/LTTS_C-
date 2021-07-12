#include<iostream>
#include "employee.h"


Employee::Employee(std::string id, std::string name, double salary,
int exp) {
    m_empid = id;
    m_name = name;
    m_salary = salary;
    m_exp = exp;
}


void Employee::display() {
    std::cout<<"Printing details of Employee"<<std::endl;
    std::cout<<"Employee id: "<<m_empid<<std::endl;
    std::cout<<"Employee name: "<<m_name<<std::endl;
    std::cout<<"Employee salary: "<<m_salary<<std::endl;
    std::cout<<"Employee experience: "<<m_exp<<std::endl;
}

Engineer::Engineer(std::string id, std::string name, double salary,
    int exp,int code):Employee(id, name,salary, exp) {
    m_projCode = code;    
}

std::string Engineer::getid() {
    return m_empid;
}

std::string Engineer::getName() {
    return m_name;
}

double Engineer::getSalary() {
    return m_salary;
}

int Engineer::getExp() {
    return m_exp;
}

int Engineer::getprojectcode() {
    return m_projCode;
}

void Engineer::payroll() {
    std::cout<<"Engineer Salary is: "<<m_salary<<std::endl;
}

void Engineer::appraisal() {
    std::cout<<m_name<<" Engineer got appaisal."<<std::endl;
}

void Engineer::display() {
    std::cout<<"Printing details of Engineer"<<std::endl;
    std::cout<<"Engineer id: "<<m_empid<<std::endl;
    std::cout<<"Engineer name: "<<m_name<<std::endl;
    std::cout<<"Engineer project code: "<<m_projCode<<std::endl;
    std::cout<<"Engineer salary: "<<m_salary<<std::endl;
    std::cout<<"Engineer experience: "<<m_exp<<std::endl;
    std::cout<<"----------------------------------"<<std::endl;
}

Manager::Manager(std::string id, std::string name, double salary,int exp,
    int code,int reprtees):Employee(id, name,salary, exp) {
        m_projCode = code;
        m_reportees = reprtees;
}

void Manager::payroll() {
    std::cout<<"Manager Salary is: "<<m_salary<<std::endl;
}

void Manager::appraisal() {
    std::cout<<m_name<<" Manager got appaisal."<<std::endl;
}

std::string Manager::getid() {
    return m_empid;
}

std::string Manager::getName() {
    return m_name;
}

double Manager::getSalary() {
    return m_salary;
}

int Manager::getExp() {
    return m_exp;
}

int Manager::getprojectcode() {
    return m_projCode;
}

int Manager::getreportees() {
    return m_reportees;
}

void Manager::display() {
    std::cout<<"Printing details of Manager"<<std::endl;
    std::cout<<"Manager id: "<<m_empid<<std::endl;
    std::cout<<"Manager name: "<<m_name<<std::endl;
    std::cout<<"Manager project code: "<<m_projCode<<std::endl;
    std::cout<<"Manager salary: "<<m_salary<<std::endl;
    std::cout<<"Manager experience: "<<m_exp<<std::endl;
    std::cout<<"----------------------------------"<<std::endl;
}