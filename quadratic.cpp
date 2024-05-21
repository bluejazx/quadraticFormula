#include <iostream>
#include <cmath>

int main()
{
  //the variables of the quadratic formula
  int a;
  int b;
  int c;
  int x1;
  int x2;

  //Collects the values for a ,b ,and c from the uses
  std::cout << "Enter the value of a or the leading coefficent below: ";
  std::cin >> a;

  std::cout << "Enter the value of b or the following coefficent below: ";
  std::cin >> b;

  std::cout << "Enter the value of b or the following coefficent below: ";
  std::cin >> c;

  //Preforms necessary computations of the quadratic formula and prints the results
  x1 = ((b-(2*b)) + sqrt((b*b)-(4*a*c)))/(2*a);
  x2 = ((b-(2*b)) - sqrt((b*b)-(4*a*c)))/(2*a);

  std::cout << "The first zero is located at x = " << x1 << "\n";
  std::cout << "The second zero is located at x = " << x2 << "\n";
}
