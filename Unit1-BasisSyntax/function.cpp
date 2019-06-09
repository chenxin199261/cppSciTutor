/*
  Tutorial 1.4 functions in  cpp

*/
#include <iostream>

using namespace std;

// Add things together
int adder(int a,int b)
{
  return a+b;
}

int main()
{
  int a,b;
  a = 11111;
  b = 22222;
  cout << adder(a,b) << endl;
}
