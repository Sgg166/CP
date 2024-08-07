#include<iostream>
#include<string>
#include"MathFunctions.h"
#include"StringFunctions.h"
#include"JianFunctions.h"
#include"FileFunctions.h"
int main()
{
  double a=5.0;
  double b=3.6;
  std::cout<<"Sum= "<<add(a,b)<<std::endl;
  std::string c="hello,";
  std::string d="CMake!";
  std::cout<<"String: "<<print(c,d)<<std::endl;
  int x=9;
  int y=4;
  std::cout<<"Cha= "<<jian(x,y)<<std::endl;
  std::string filename = "example.txt";
  std::string content = "This is a sample file.";
  writeToFile(filename, content);
  std::cout << "Content read from file: " << readFromFile(filename) << std::endl;

  return 0;
}
