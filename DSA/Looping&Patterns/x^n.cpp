# include <iostream>
using namespace std;

// function to calculate x^n
// we do not follow the traditional approach 
/*
    why? because the traditional approach is O(n) which is not efficient for large values of n
    we use the binary exponentiation approach to reduce the time complexity to O(log n)
*/
double myPow(double x, int n) {
    double ans = 1.0;
    // if power is negative we make the reciprocal of base number so 3^-5 = (1/3)^5
    if(n < 0) {
        x = 1/x;
        n = -n;
    }

    // so lets take an example 3^5
    // x = 3
    // in first iteration
    /*
    n = 5
    ans = 1
    ans = 1* 3 = 3
    x = 9
    n = 2
    */
    // in second iteration
    /*
    n = 2
    ans = 3
    x = 81
    n = 1

    */
    // in third approach
    /*
    n = 1
    ans = 3 * 81 = 243
    n =0 end of loop
    */
    // steps needed were 3 i.e. log2(5) + 1 hence O(logn) complexity


    while(n > 0){
        if(n % 2 == 1){
            ans *= x;
        }
        x*= x;
        n = n/2;
    }

    return ans;
        
}

int main() {
    cout << myPow(2,100) << endl;
    return 0;
}
