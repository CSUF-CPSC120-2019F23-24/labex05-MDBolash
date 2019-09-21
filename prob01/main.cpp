// examples of overflow/underflow

#include <iostream>
#include <iomanip>

int main()
{
  std::cout << "Overflow/Underflow" << std::endl;
  std::cout << std::fixed << std::setprecision(80);

  float f2 = 3.1111111E-38;
  double d2 = f2;

  std::cout << "\nInitially the double and the float are the same value." << std::endl;
  std::cout << "Notice how neither one is exactly the value we set it to." << std::endl;
  std::cout << "This is because floating-point values are not exact." << std::endl;
  std::cout << sizeof(d2) << " bytes, value: " << d2 << std::endl;
  std::cout << sizeof(f2) << " bytes, value: " << f2 << std::endl;

  d2 *= 0.00001;
  f2 *= 0.00001;

  std::cout << "\nThe values start to drift apart the closer they get to 0." << std::endl;
  std::cout << sizeof(d2) << " bytes, value: " << d2 << std::endl;
  std::cout << sizeof(f2) << " bytes, value: " << f2 << std::endl;

  d2 *= 0.01;
  f2 *= 0.01;

  // TODO#1 add comment describing what's happening
  std::cout << "\nThe numbers of d2 and f2 continue to drift closer to zero and continue to change." << std::endl;
  std::cout << sizeof(d2) << " bytes, value: " << d2 << std::endl;
  std::cout << sizeof(f2) << " bytes, value: " << f2 << std::endl;

  d2 *= 0.1;
  f2 *= 0.1;

  // TODO#2 add comment describing what's happening
  std::cout << "\nThe f2 drift so close to zero that underflow occurs and it begins to read 0 while d2 still has data so it reads more numbers." << std::endl;
  std::cout << sizeof(d2) << " bytes, value: " << d2 << std::endl;
  std::cout << sizeof(f2) << " bytes, value: " << f2 << std::endl;

  double d3 = 3.5E38;
  float f3 = 3.5E38;

  // TODO#3 add comment describing what happened
  std::cout << "\nThe setprecision command is reading all the significant figures in d3 and f2 resulting in d3 having real numbers and f2 having infinity." << std::endl;
  std::cout << std::setprecision(1);
  std::cout << sizeof(d3) << " bytes, value: " << d3 << std::endl;
  std::cout << sizeof(f2) << " bytes, value: " << f3 << std::endl;

  return 0;
}
