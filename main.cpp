#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

//
//
// for the question 
// input: n = 3
// output 6
//
// input : n = 7
// output 28
//
// exp: the sum between  first to n 

int sum(int n) {
  if (n <= 1)
    return n;

  return n + sum(n-1);
}

//second way to approach

int fact(int n) {
  if (n <= 0)
    return 1;

  return n * fact(n-1);
}

int main() {
  int n = 5;
  cout << "sum of first " << n << " is: " << sum(n) << endl;
  cout << "factorial of 5 : " << fact(5) << endl;
  return 0;
}
