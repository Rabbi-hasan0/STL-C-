/* Working process in function */

#include<bits/stdc++.h>
using namespace std;

/** Function e mara khabar cause gula:

1. Function e(same function name and same data
   typer er same perameter) declear korle wrong dekhabe.
   *//*Example:
   int add(int x, int y) { //same as 1no function name ,same as 1no function data type,
   return x + y;           //same as 1no function perameter data type;
   }*//**
2. Function name same hoileu data type same howa jabe na.
3. Function name same and same data type er perameter howya jabe na.
4.

}
**/

int add(int a, int b) {
  return a + b;
}
double add(double x, double y) {
  return x + y;
}
int add(int a, int b, int c) {
  return a + b + c;
}
int multiply(int a, int b = 2) {
  return a * b;
}

int main() {
  int result1 = add(2, 3); // Function call to no 1
  double result2 = add(2.5, 3.7); // Function call to no 2
  int result3 = add(2, 3, 4); // Function call to no 3
  int result4 = multiply(5); // Function call to no 4 but b er value already declear kora ache.
  int result5 = multiply(5, 3); // Function call to no 4 but b er value declear kora thakleu update kora hoiteche

  cout << "Result 1: " << result1 << '\n';
  cout << "Result 2: " << result2 << '\n';
  cout << "Result 3: " << result3 << '\n';
  cout << "Result 4: " << result4 << '\n';
  cout << "Result 5: " << result5 << '\n';

  return 0;
}
