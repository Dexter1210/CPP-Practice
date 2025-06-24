#include <iostream>
using namespace std;

int main() {
    // brute force approach
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] == target) {
                cout << nums[i] << " " << nums[j] << endl;
            }
        }
    }
    // two pointer approach O(n)
    int start = 0, end = nums.size() - 1;
    for(int i = 0; i< nums.size(); i++) {
        if(nums[start] + nums[end] == target) {
            cout << nums[start] << " " << nums[end] << endl;
            break;
        } else if (nums[start] + nums[end] < target ) {
            start ++;
        } else {
            end --;
        }
    }
    return 0;
}