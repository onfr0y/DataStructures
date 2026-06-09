#include <iostream>
#include <stdexcept>
#include <string.h>

// exercise 4.1: write the program to print my name:
//
// int main() {
//
//   std::cout << "Kittisak Porkha\n";
//   std::cout << "1342341234234123" << std::endl;
//   std::cout << "01 August 2008";
// }
//

// exercise 4.3
//
// int main() {
//   float pi = 3.14;
//   double r;
//   std::cout << "input your radius: ";
//   std::cin >> r;
//   double outputs = 2 * pi * r;
//   std::cout << outputs;
//   return 0;
// }
//

// string

int main() {
  // declaration
  int oldNumber;
  int Number;
  int NextNumber;

  // set the number
  oldNumber = 1;
  Number = 1;

  while (Number < 100) {
    NextNumber = Number + oldNumber;
    std::cout << Number << std::endl;

    oldNumber = Number;
    Number = NextNumber;
  }
}
