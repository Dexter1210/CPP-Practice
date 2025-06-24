# include <iostream>
# include <math.h>
using namespace std;


int max (int a, int b) {
 return (a > b ? a : b);
}

int factorial (int num) {
  int product = 1;
  for(int i=2; i<=num; i++) {
    product = product * i;
  }
  return product;
}

int sumOfDigits (int num) {
  int rem, sum;
  sum = 0;
  while (num!=0) {
    rem = num % 10;
    sum = sum + rem;
    num = num/10;
  }

  return sum;
}

int calcBinomialCofficient (int n, int r) {
  return (factorial(n)/(factorial(r) * factorial(n-r)));
}

int convertDecimalToBinary (int num) {
  int binaryNum = 0;
  int rem;
  int pow = 1;
  while (num!=0) {
    rem = num % 2;
    binaryNum = binaryNum +(pow * rem);
    pow = pow * 10;
    num=num/2;
  }
  return binaryNum;
}

int convertBinaryToDecimal (int num) {
  int decimalNum = 0;
  int rem;
  int pow = 1;
  while (num !=0) {
    rem = num%10;
    decimalNum = decimalNum + pow*rem;
    num = num/10;
    pow = pow*2;
  }
  return decimalNum;
}

int main() {
  cout << "greater of two numbers is " << max(2, 3) << endl;
  cout << "the factorial of the number is "<< factorial(5) << endl;
  cout << "the sum of digits of the number is "<< sumOfDigits(727) << endl;
  cout << "7C3 = "<< calcBinomialCofficient(7, 3) << endl;
  cout << "The binary for this number is: "<< convertDecimalToBinary(5) << endl;
  cout << "The decimal for this number is: "<< convertBinaryToDecimal(101) << endl;
  cout<<(3>>1);
  return 0;
}