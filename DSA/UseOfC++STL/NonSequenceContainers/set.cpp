#include <iostream>
using namespace std;
#include <set>
#include <unordered_set>

int main(){
    set <int> s1;
    s1.insert(4);
    s1.insert(2);
    s1.insert(1);
    s1.insert(4);
    s1.insert(3);

    cout << "lower bound of 4 is " << *s1.lower_bound(4) << endl;
    cout << "lower bound of 5 is " << *s1.lower_bound(5) << endl;
    cout << "lower bound of 0 is " << *s1.lower_bound(0) << endl;
    cout << "upper bound of 4 is " << *s1.upper_bound(4) << endl;
    cout << "upper bound of 5 is " << *s1.upper_bound(5) << endl;
    cout << "upper bound of 0 is " << *s1.upper_bound(0) << endl;

    cout << "size of s1 is " << s1.size() << endl;

    for(int i : s1){
        cout << i << " ";
    }
    cout << endl;

    multiset <int> s2;
    s2.insert(4);
    s2.insert(2);
    s2.insert(1);
    s2.insert(4);
    s2.insert(3);

    for(int i : s2){
        cout << i << " ";
    }
    cout << endl;

    unordered_set <int> s3;
    s3.insert(4);
    s3.insert(2);
    s3.insert(1);
    s3.insert(4);
    s3.insert(3);

    for(int i : s3){
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}