#include <iostream>
using namespace std;

int calculateFib(int term)
{
   if(term <= 1)
      return 1;
   else
      return calculateFib(term-1) + calculateFib(term-2);
}

int factorial(int term)
{
   if(term <= 1)
      return 1;
   else
      return term * factorial(term-1);
}

int main()
{
   int testnum = 8;
   cout << "#" << testnum << " term in fibonacci sequence is "
        << calculateFib(testnum) << endl;
   cout << "Factorial " << testnum << " is " << factorial(testnum) << endl;
}
