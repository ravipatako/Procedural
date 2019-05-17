#include <iostream>

int main() {
  std::cout << "Hello World!\n";
  std::string employAccount;
  std::cout << "Enter Account name ";
  getline (std::cin, employAccount);
  std::cout << "My account name is " << employAccount << ".\n";
  
  std::cout << "Production Line Tracker\n";
  std::cout << "1. Add Employee Account.\n";
  std::cout << "2. Add Music Player \n";
  std::cout << "3. Add Movie Player \n";
  std::cout << "4. Display Production Statistics \n";
  std::cout << "5. Exit\n";
  
  
  
  return 0;
}
