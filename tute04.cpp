/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";//input value for n
  std::cin >> n;//read the value
  std::cout << "Enter a value for r ";//input the value for r
  std::cin >> r;//read the value
  std::cout << "nCr = ";//print the nCr
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)
{
  int i ,j=1;
  for(i = 1; i <= no; i++)
  {
    j = j * i;//calculations
  }
  return j;
}
long nCr(int n, int r)
{
  return (Factorial(n) / Factorial(r) * Factorial (n -r) );
}

