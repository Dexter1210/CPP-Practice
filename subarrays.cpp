#include <iostream>
using namespace std;

int main() {
    int arr[7] = {3, 4, 5, 4, -1, 7, -8};
    // int maxSum = INT_MIN;
    // // print all the possible subarrays & take sum for max sum approach
    // // cout << "All the subarrays are : " << endl;
    // // brute force approach;
    // for(int start = 0; start < 5; start ++){
    //     int currentSum = 0;
    //     for (int end = start; end < 5; end ++) {// cout << arr[j] << " ";
    //         currentSum += arr[end];
    //     }
    //     maxSum = max(currentSum, maxSum);
    // }
    // cout << "max sum of subarray is: "<< maxSum << endl;

    // kadane's algorithm
    int maxSum1 = INT_MIN;
    int currentSum = 0;
    for(int i=0; i< 7; i++) {
        currentSum += arr[i];
        maxSum1 = max(currentSum, maxSum1);
        if(currentSum < 0) {
            currentSum = 0;
        }
    }
    cout << "max sum of subarray using kadane's algorithm is: "<< maxSum1 << endl;
    return 0;
}