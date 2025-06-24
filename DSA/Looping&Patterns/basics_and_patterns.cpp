#include <iostream>
using namespace std;

// Boiler plate code
int main () {
  // sum of n natural numbers
  // int n;
  // cout << "Enter Number: ";
  // cin >> n;
  // int sum = 0;
  // for (int i =1; i<=n; i++) {
  //   sum += i;
  // }
  // int i = 1;
  // while(i<=n) {
  //   sum += i;
  //   i++;
  // }
  // cout << "sum is: " << sum << endl;
  // check whether a number is prime or not.
  // bool isPrime = true;
  // for(int i=2; i<=n-1; i++) {
  //   if(n%i == 0) {
  //     isPrime = false;
  //     break;
  //   }
  // }
  // cout << (isPrime == true ? "number is prime" : "number is not prime");

  // Square pattern
  /*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
  */
  int n;
  cout << "Enter number: ";
  cin >> n;
  // for (int i=1; i<= n; i++) {
  //   for (int j = 1; j<=n; j++) {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }
  // Square pattern
  /*
    1 2 3 
    4 5 6
    7 8 9
  */
//  int row = 0;
//  for (int i=1; i<= n; i++) {
//     for (int j = 1; j<=n; j++) {
//       cout << row + j << " ";
//     }
//     cout << endl;
//     row = row + n;
//   }

/*
Triangle pattern
*
* *
* * *
* * * *

*/
// for (int i=1; i<= n; i++) {
//     for (int j = 1; j<=i; j++) {
//       cout << '*' << " ";
//     }
//     cout << endl;
// }
/*
Triangle pattern
1
2 2
3 3 3
4 4 4 4
*/
// for (int i=1; i<= n; i++) {
//   for (int j = 1; j<=i; j++) {
//     cout << i << " ";
//   }
//   cout << endl;
// }
/*
Triangle pattern
1
1 2
1 2 3
1 2 3 4
*/
// for (int i=1; i<= n; i++) {
//   for (int j = 1; j<=i; j++) {
//     cout << j << " ";
//   }
//   cout << endl;
// }
/*
Triangle pattern
1
2 1
3 2 1
4 3 2 1
*/
// for (int i=1; i<= n; i++) {
//   for (int j = i; j>=1; j--) {
//     cout << j << " ";
//   }
//   cout << endl;
// }
/*
Triangle pattern
1
2 3
4 5 6
7 8 9 10
*/
// int num = 1;
// for (int i=1; i<= n; i++) {
//   for (int j = 1; j<=i; j++) {
//     cout << num << " ";
//     num++;
//   }
//   cout << endl;
// }
/*
Inverted Triangle pattern
1 1 1 1
  2 2 2
    3 3
      4
*/
// for (int i=1; i<= n; i++) {
//   for (int k = 0; k< i; k++) {
//     cout << " ";
//   }
//   for (int j = n-i+1; j>=1; j--) {
//     cout << i;
//   }
//   cout << endl;
// }
/*
  Pyramid pattern
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

Break into multiple patterns using spaces
*/
// for (int i =1 ; i<=n ; i++) {
//   // for spaces
//   for (int j = n-i; j>=1; j--) {
//     cout << " ";
//   }
//   // for number one 
//   for (int k= 1; k<=i; k++) {
//     cout << k;
//   }
//   // for number two
//   for (int m = i-1; m>=1; m--) {
//     cout << m;
//   }
//   cout << endl;
// }

/*
  Hollow Diamond Pattern
          *
        *.  *
      *       *
    *.          *
      *.      *
        *.  *
           *
*/

for (int i=1; i<=n; i++) {
  // for first part
  for (int j =n; j>=1; j--) {
    cout << ( j== i ? "*" : " ");
  }
  // for second part top
  for (int k=1; k<=n-1; k++) {
    cout << ( (i-1) == k ? "*" : " ");
  }
  cout << endl;
}
// for bottom part
for (int i = 1; i<n; i++) {
  for (int j =1; j<n; j++) {
    cout << ((i+1) == j ? "*" : " ");
  }
  for( int k = 1; k<=n; k++) {
    cout << ( k == (n-i) ? "*" : " ");
  }
  cout << endl;
}
  return 0;
}
