// This program creates a Random Rectangle
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstring>
#include <cstdlib>


int main()
{

  //Create max for width and length of rectangle.
  const int MAX = 40 ;

  //create random numbers
  srand(time(0)) ;
  int num;
  num = rand() % MAX + 1 ;

  std::string rect;

  rect.assign(num, '#') ;

  std::cout << rect << std::endl;

  std::cout << rect << std::endl;

  std::cout << rect << std::endl;

  return 0 ;
}
