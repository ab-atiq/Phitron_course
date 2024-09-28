// convert decimal to binary
#include <stdio.h>
#include <math.h>

long long convert(int);

int main()
{
  int n, bin;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  bin = convert(n);
  printf("%d in decimal =  %d in binary", n, bin);
  return 0;
}

long long convert(int n)
{
  long long bin = 0;
  int rem, power = 1;

  while (n != 0)
  {
    rem = n % 2;
    n /= 2;
    bin += rem * power;
    power *= 10; // increase power 1, means multiply 10
  }

  return bin;
}
