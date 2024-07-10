#include<iostream>
#include<string>

class Person {
  public:
  std::string firstName;
  std::string lastName;

  void printFullname() {
    std::cout << firstName << " " << lastName << std::endl;
  }
};

int main() {
  
  Person p;

  p.firstName = "Mwakanemela";
  p.lastName = "Kayange";

  p.printFullname();

  return 0;
}