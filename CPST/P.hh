#include<iostream>
#include<string>
#include<vector>
class Person
{
  private:
    std::string m_name;
    int m_age;
    std::string m_citizen_id;
    bool m_isfired;
    bool m_valid;
  public:
    Person(std::string name,int age,std::string id);
    std::string getname();
    virtual void  fire();
    virtual bool check();
    virtual void print();
    ~Person();
};
class Student:public Person
{
  public:
  Student(std::string name,int age,std::string id,std::string school_id, std::string bank_id, uint16_t grade, std::string major);
  virtual void print() override;

  ~Student();
   private:
  std::string m_school_id;
  std::string m_bank_id;
  uint16_t m_grade;
  std::string m_major;
  bool m_is_master;
};
class Teacher:public Person
{
  private:
    std::string m_work_id;
    std::vector<Student*>V;
  public:
    Teacher(std::string name,int age,std::string id,std::string work_id);
    void add(Student* student);
    void firdteacherandstudent();
    virtual void  print()override;
    ~Teacher();
};




