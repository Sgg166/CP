#include<iostream>
#include<string>
#include<vector>
#include"P.hh"
Person::Person(std::string name,int age,std::string id):m_name(name),m_age(age),m_citizen_id(id),m_isfired(false),m_valid(true)
{
  if(m_citizen_id.size() != 18)
  {
    m_valid=false;
  }
  else
  {
    int a=std::stoi(m_citizen_id.substr(6, 4));
    int b=2024-m_age;
    if(a==b)
    {
      std::cout<<"Age and ID are the same"<<std::endl;
    }
    else
    {
      std::cout<<"Age and ID are the different"<<std::endl;
    }
  }
}
std::string Person::getname()
{
  return m_name;
}
 void Person::fire()
{
  m_isfired=true;
  std::cout<<m_name<<" has been fired."<<std::endl;
}
 bool Person::check()
{
  return m_isfired;
}
 void Person::print()
{
  std::cout<<"======================="<<std::endl;
  std::cout<<"name: "<<m_name<<std::endl;
  std::cout<<"age: "<<m_age<<std::endl;
  std::cout<<"id: "<<m_citizen_id<<std::endl;
  std::cout<<"======================="<<std::endl;
}
Person::~Person()
{
  std::cout<<"Person Destruct"<<std::endl;
}
Student::Student(std::string name,int age,std::string id,std::string school_id, std::string bank_id, uint16_t grade, std::string major):Person(name,age,id),m_school_id(school_id),m_bank_id(bank_id),m_grade(grade),m_major(major),m_is_master(false)
{
  int w=std::stoi(m_school_id.substr(5,2));
  if(w==60)
  {
    std::cout<<getname()<<" is master"<<std::endl;
  }
  else
  {
    std::cout<<getname()<<" is not master"<<std::endl;
  }
}
 void Student::print() 
{
  Person::print();
  std::cout<<"======================="<<std::endl;
  std::cout<<"school_id:"<<m_school_id<<std::endl;
  std::cout<<"bank_id:  "<<m_bank_id<<std::endl;
  std::cout<<"grade:    "<<m_grade  <<std::endl;
  std::cout<<"major:    "<<m_major  <<std::endl;
  std::cout<<"======================="<<std::endl;
}
Student:: ~Student()
{
  std::cout<<"Student Destruct"<<std::endl;
}
Teacher::Teacher(std::string name,int age,std::string id,std::string work_id):Person(name,age,id),m_work_id(work_id){}
void Teacher:: add(Student* student)
{
  V.push_back(student);
}
void Teacher::firdteacherandstudent()
{
  fire();
  for(auto*student:V)
  {
    if(!student->check())
    {
      student->fire();
    }
  }
}
void  Teacher::print()
{
  std::cout<<"======================="<<std::endl;
  std::cout<<"work_id:"<<m_work_id<<std::endl;
  std::cout<<"======================="<<std::endl;
}
Teacher:: ~Teacher()
{
  std::cout<<"ooo"<<std::endl;
  for(auto*student:V)
  {
    delete student;
  }
}

