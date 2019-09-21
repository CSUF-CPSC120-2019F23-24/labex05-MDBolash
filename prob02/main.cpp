// This program asks the user for their first name and middle/last initials
// and outputs their user name.

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  // ask for first name
  std::string first_name;
    std::cout << "Enter your first name: ";
  getline(std::cin, first_name);
  // ask for middle initial
  char middle_initial;
  std::cout << "Enter the first initial of your middle name: ";
  std::cin.get(middle_initial);
  char last_initial;
  std::cin.ignore();
  //ask for last iniial
std::cout << "Enter the first initial of your last name: ";
  last_initial = std::cin.get();
  std::cin.ignore();

  // create username out of user's first name and middle/last initials
  std::string username = first_name+middle_initial+last_initial;
  std::cout << "Your user name is \"" << username << "\"" "\n" ;

  return 0;
}
