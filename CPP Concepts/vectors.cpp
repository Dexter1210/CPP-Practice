#include <iostream>
using namespace std;
#include <vector>
// #include <bits/stdc++.h>

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    for(int i : vec) {
        cout << i << endl;
    }
    vector <int> vec2;
    vec2.push_back(1);
    vec2.push_back(2);
    vec2.push_back(3);
    vec2.pop_back();
    cout << "size of the vector is : " << vec2.size() << endl;
    cout << "capacity of the vector is : " << vec2.capacity() << endl;
    cout << "front of the vector is : " << vec2.front() << endl;
    cout << "back of the vector is : " << vec2.back() << endl;
    return 0;
}