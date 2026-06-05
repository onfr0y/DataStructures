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
//
// bool checkoddeven(int n) {
//   int rem = n % 2;
//
//   if (rem == 0) {
//     return true;
//   } else {
//     return false;
//   }
// }
//
// int main() {
//   std::cout << "your number: " << std::endl;
//   // std::cin
//
//   int n = [] {
//     int i;
//     std::cin >> i;
//     std::cin.ignore();
//     return i;
//   }();
//
//   if (checkoddeven(n)) {
//     std::cout << "true";
//   } else {
//     std::cout << "false";
//   }
// }
//
//
// fourth question:
// input : 6
// output: 1
//         23
//         456
//         78910
//         1112131415
//         161718192021
//

void printfloydtriangle(int n) {
  int i, j, val = 1;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      std::cout << val++;
    }
    std::cout << std::endl;
  }
}

int main() {
  std::cout << "what's your favorite number: " << std::endl;

  int n = [] {
    int i;
    std::cin >> i;
    std::cin.ignore();
    return i;
  }();

  printfloydtriangle(n);
}
