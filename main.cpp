#include <iostream>
#include <stdexcept>
#include <string>
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

  if (n == 1)
    return 1;

  return n + sum(n-1);
}

int main () {
  int n = 5;
  cout << sum(n);
  return 0;
}
