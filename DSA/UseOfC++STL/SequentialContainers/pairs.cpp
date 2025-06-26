# include <iostream>
using namespace std;

int main(){
    // initialisation of pair
    pair <char, int> p1 = {'a', 1};
    cout << "first element of p1 is " << p1.first << " and second element of p1 is " << p1.second << endl;
    // pair of pairs
    pair <char, pair <char, int>> p2 = {'a', {'b', 2}};
    cout << "first element of p2 is " << p2.first << " and second element of p2 is " << p2.second.first << " and third element of p2 is " << p2.second.second << endl;
    // vector of pairs
    vector <pair <char, int>> v1 = {{'a', 1}, {'b', 2}, {'c', 3}};
    // difference between push_back and emplace_back
    v1.push_back({'d', 4});
    // already does object inplace creation
    v1.emplace_back('e', 5);
    for(auto iterator = v1.begin(); iterator != v1.end(); iterator++){
        cout << iterator->first << " " << iterator->second << endl;
    }
    return 0;
}