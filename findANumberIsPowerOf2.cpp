#include <iostream>
#include <cmath>
using namespace std;

// The idea is that 2^log2(n) will return the number itself
bool approach1(int num) {
  if (num <=0) {
    return 0;
  }
  return (pow(2, log2(num)) == num);
}

// The idea is do repeated division with 2 and break as soon as remainder is not zero.
bool approach2(int num) {
  bool isPower = true;
  while(num>0) {
    if(num%2!=0) {
      isPower=false;
      break;
    }
    num=num/2;
  }
  return isPower;
}

// using bitwise & operator based on the idea that any power of 2 has exactly one bit set as 1
bool approach3(int num) {
  return ((num > 0 && ((num & (num-1)) == 0)));
}

// same idea as approach 3
bool approach4(int num) {
  if(num<=0) {
    return false;
  }
  int count = 0;
  while (num>0) {
    if(num&1) {
      count++;
    }
    num=num>>1;
  }
  return (count == 1);
}

int main() {
  cout << (approach1(513) ? "yes" : "no") << " approach 1" << endl;
  cout << (approach2(513) ? "yes" : "no") << " approach 2" << endl;
  cout << (approach3(512) ? "yes" : "no") << " approach 3" << endl;
  cout << (approach3(4) ? "yes" : "no") << " approach 4" << endl;
  return 0;
}