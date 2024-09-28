// *** Fibbonaci using Dynamic Programming ***

#include <iostream>

using namespace std;

int fib(int n) {
  // Create an array to store the Fibonacci numbers.
  int fibs[n + 1];

  // Initialize the first two Fibonacci numbers.
  fibs[0] = 0;
  fibs[1] = 1;

  // Fill in the rest of the array.
  for (int i = 2; i <= n; i++) {
    fibs[i] = fibs[i - 1] + fibs[i - 2];
  }

  // Return the nth Fibonacci number.
  return fibs[n];
}

int main() {
  // Get the input from the user.
  int n;
  cin >> n;

  // Print the nth Fibonacci number.
  cout << fib(n) << endl;

  return 0;
}