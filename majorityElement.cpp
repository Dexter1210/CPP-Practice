#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 2, 1, 1 };
    // brute force approach O(n^2)
    for(int i = 0; i< 5; i++) {
        int freq = 0;
        for (int j = i; j<5 ; j++) {
            if(arr[i] == arr[j]){
                freq++;
            }
            if(freq >= 5/2) {
                cout << "The max frequency element is: " << arr[i] << endl;
                break;
            }
        }
    }
    // optimised approach using sorting O(nlogn)
    vector<int> vec = {1, 2, 2, 1, 1 };
    sort(vec.begin(), vec.end());
    int freq = 1;
    int ans = vec[0];
    for(int i=0; i< vec.size(); i++ ) {
        if(vec[i] == vec[i+1]) {
            freq++;
        } else {
            freq = 1;
            ans = vec[i];
        }
        if(freq > vec.size()/2){
            cout << "the majority element is: " << ans << endl;
            break;
        }
    } {

    }
    return 0;
}