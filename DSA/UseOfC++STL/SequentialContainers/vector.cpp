#include <iostream>
using namespace std;

int main(){
    // Intialisatio of vectors
    // 1. direct assignment
    vector <int> v1 = {1,2,3,4,5};
    // 2, creates a vector of size 5 with default at all indexes as 10
    vector <int> v2(5, 10);
    // 3. creates a copy of v2
    vector <int> v3(v2);
    
    // insert values at end of vector
    v1.push_back(6);
    // deletes a value at end of vector
    v2.pop_back();
    // differnce between size and capacity
    cout << "size of v2 is "<< v2.size() << " but its capacity is " << v2.capacity() << endl;
    // use of at() is same as vector[index]
    cout << "value at index 2 of v3 operator is " << v3.at(2) << " " << v3[2] << endl;
    // use of front and back
    cout << "front of v1 is " << v1.front() << " and back of v1 is " << v1.back() << endl;
    // use of clear
    v3.clear();
    char ans = v3.empty() ? 'y' : 'n';
    cout << "Is v3 empty? " << ans << endl;
    // some expensive operations now
    // erase() -> deletes a value at a given index
    v1.erase(v1.begin() + 2);
    // insert() -> inserts a value at a given index
    v1.insert(v1.begin() + 2, 100);

    // iterators
    vector <int> :: iterator it;
    for(it = v1.begin(); it!= v1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    // the same could have been implemented using auto keyword
    for(auto iterator = v1.rbegin(); iterator != v1.rend(); iterator++){
        cout << *iterator << " ";
    }
    cout << endl;


    return 0;
}