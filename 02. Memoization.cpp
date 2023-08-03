/* Save calculate value and less time complexity.

সেইম ক্যাল্কুলেশন যেন পরবর্তীতে আর ক্যাল্কুলেট করা না লাগে সেই জন্য 
আগের ক্যালকুলেট করা ভ্যালু  SOTRE করে রাখার জন্য এই পদ্ধতি ব্যাবহার করতে পারি।

How to memoization a solved data in array in recursive?
*/
#include <bits/stdc++.h>
using namespace std;

int memo[20];
int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  if (memo[n] != -1) { // If the result is already calculated
    return memo[n]; // Return the result
  }
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2); // Recursive call: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
   return memo[n];
}

int main() {
  int n = 6;

  // Initialize memo
  for (int i = 0; i < 20; ++i) {
    memo[i] = -1; // -1 means not calculated yet
  }

  // Fibonacci sequence
  cout << "Fibonacci of " << n << " is: " << fibonacci(n) << endl;

  return 0;
}
