#include<iostream>
#include<string>
#include<vector>
#include"P.hh"
#include<fstream>
#include<iomanip>
/*void test()
{
  std::fstream T1;
  T1.open("Information.txt",std::ios::out);
  T1<<std::setw(3)<<"name"<<std::setw(10)<<"age"<<std::setw(10)<<"citizen_id"<<"student_id"<<"bank_id"<<"grade"<<"major"<<std::endl;
  T1<<std::setw(3)<<"sgg"<<std::setw(10)<<10<<std::setw(10)<<"411426200001178046"<<"202005010081"<<"1111111"<<8<<"physics"<<std::endl;
  T1<<std::setw(3)<<"wwj"<<std::setw(10)<<20<<std::setw(10)<<"411420200202157894"<<"202005010085"<<"2222222"<<8<<"physics"<<std::endl;
  T1<<std::setw(3)<<"zsm"<<std::setw(10)<<30<<std::setw(10)<<"411426200104155698"<<"202005010070"<<"3333333"<<8<<"physics"<<std::endl;
  T1.close();
}*/
int main()
{
  Teacher*teacher=new Teacher("koko",45,"411426199010144567","123456");
  std::ifstream T2;
  T2.open("Information.txt",std::ios::in);
  std::string q,w,o,r,t,y,u;
  T2>>q>>w>>o>>r>>t>>y>>u;
  std::string a;
  int b;
  std::string c,d,e;
  int f;
  std::string g;
  Student*s;
  Person*p1;
  while(1)
  {
    T2>>a>>b>>c>>d>>e>>f>>g;
    if(T2.eof())
      break;
    s=new Student(a,b,c,d,e,f,g);
    teacher->add(s);
    p1=new Student(a,b,c,d,e,f,g);
    p1->print();
  }
  teacher->firdteacherandstudent();
  delete s;
  delete p1;   
  return 0;
}

   
  


 /* Student s1("sgg",18,"411426200001178046","202005010081","1111111",8,"physics");
  Person*p=new Student(s1);
  p->print();
  Person*p1=new Teacher("koko",45,"411426199010144567","123456");
  p1->print();
  Teacher*teacher=new Teacher("koko",45,"411426199010144567","123456");
  teacher->add(&s1);
  teacher->firdteacherandstudent();
  delete p;
  delete p1;
  delete teacher;*/
  
