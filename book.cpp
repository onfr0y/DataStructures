#include <iostream>
#include <stdexcept>
#include <string>

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
//
// int main() {
//   // declaration
//   int oldNumber;
//   int Number;
//   int NextNumber;
//
//   // set the number
//   oldNumber = 1;
//   Number = 1;
//
//   while (Number < 100) {
//     NextNumber = Number + oldNumber;
//     std::cout << Number << std::endl;
//
//     oldNumber = Number;
//     Number = NextNumber;
//   }
// }
//
//
//
// exercise 6-1:

int main() {
  int grade;
  std::cout << "Enter your grade (in percent): " << "\n";
  std::cin >> grade;

  std::string letter_grade = "";
  if (grade <= 60) {
    letter_grade = "F";
  } else if (grade <= 70) {
    letter_grade = "D";
  } else if (grade <= 80) {
    letter_grade = "C";
  } else if (grade <= 90) {
    letter_grade = "B";
  } else if (grade <= 100) {
    letter_grade = "A";
  } else {
    std::cout << "invalid grade\n";
    return 0;
  }

  std::string modifier = "";
  int last_digit = grade % 10;

  // Per the instructions, F does not get a modifier.
  // Also, a perfect 100 ends in 0, which falls into the 8-0 rule for a '+'.
  if (letter_grade != "F") {
    if (last_digit >= 1 && last_digit <= 3) {
      modifier = "-";
    } else if (last_digit >= 8 || last_digit == 0) {
      modifier = "+";
    }
    // 4-7 requires a blank, so we leave modifier as ""
  }

  // 3. Print the final result
  std::cout << "grade: " << letter_grade << modifier << "\n";

  return 0;
}
