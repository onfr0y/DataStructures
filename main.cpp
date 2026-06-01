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
//
// int sum(int n) {
//   if (n <= 1)
//     return n;
//
//   return n + sum(n-1);
// }
//
// //second way to approach
//
// int fact(int n) {
//   if (n <= 0)
//     return 1;
//
//   return n * fact(n-1);
// }
//
// int main() {
//   int n = 5;
//   cout << "sum of first " << n << " is: " << sum(n) << endl;
//   cout << "factorial of 5 : " << fact(5) << endl;
//   return 0;
// }
//
//
// Second-Question
// input n - 3, m= 5
// output:  * * * * *
//          * * * * *
//          * * * * *
//
//                       
//
//
// //
// int main () {
//
//   int n = 3 , m = 5;
//
//   for (int i = 1; i <= m; i++) {
//
//     for (int j = 1; j <= m ; j++) {
//
//       std::cout << " * ";
//     }
//
//     cout << std::endl;
// }
// }
//
//
// Third-Question:
// input n = 15
// output: false
//
// input n= 44
// out = turee

  bool CheckOddEven(int n) {
      int rem  = n % 2                                                ;
    
      if (rem == 0) {
        return true;
      }   else {
        return false;
      }
  
  }

  int main () {
    // std::cin

    int n = []{int i; std::cin >> i; return i;} ();

     if (CheckOddEven(n)) {
       std::cout << "True";
     }  else {
       std::cout << "False";
     }

  }
