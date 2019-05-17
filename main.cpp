//Procedural Project created by Ravi Pathak
//Done during the course of COP 2001
#include <iostream>

int main() {
  //Bellow is commented out but prints out Hello World
  //then takes a string into Employ account and prints out the statement 
  std::cout << "Hello World!\n";
  std::string employAccount;
  std::cout << "Enter Account name ";
  getline (std::cin, employAccount);
  std::cout << "My account name is " << employAccount << ".\n";
  
  
  //Prints out the statements
  std::cout << "Production Line Tracker\n";
  std::cout <<"\n";
  std::cout << "1. Add Employee Account\n";
  std::cout << "2. Add Music Player\n";
  std::cout << "3. Add Movie Player\n";
  std::cout << "4. Display Production Statistics\n";
  std::cout << "5. Exit\n";
  
  
  
  return 0;
}
