#include <iostream>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end) {
        int mid = (start+end)/2;
        // for coding platforms in order to prevent value overflow
        // int mid = start + (end - start)/2;
        if(arr[mid] == target) {
            return mid;
        // if middle value is smaller than the target look in the right half
        } else if(arr[mid] < target) {
            start = mid + 1;
        // if middle value is bigger than the target look in the left half
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

// uses recursion to find the target element
int binarySearchRecursive(vector<int> arr, int target, int start, int end) {
    // base case condition
    if(start > end) {
        return -1;
    }
    int mid = start + (end-start)/2;
    if(arr[mid] == target) {
        return mid;
    } else if(target > arr[mid]) {
        return binarySearchRecursive(arr, target, mid+1, end);
    } else {
        return binarySearchRecursive(arr, target, start, mid-1);
    }
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int target = 10;
    cout << "the element is found at index " <<binarySearch(arr, target) << endl;;
    cout << "the element is found at index " <<binarySearchRecursive(arr, target, 0, arr.size()-1) << endl;
    return 0;
}