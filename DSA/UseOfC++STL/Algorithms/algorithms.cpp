# include <iostream>
using namespace std;

bool comparator(pair <int, int> p1, pair <int, int> p2){
    // sorting on basis of second element
    return p1.second < p2.second;
}

int main(){
    vector <int> v1 = {8, 3, 2, 4, 1, 7};
    // sort the vector in ascending order
    sort(v1.begin(), v1.end());
    cout << "ascending order" << endl;
    for(int i : v1){
        cout << i << " ";
    }
    cout << endl;
    // sort the vector in descending order
    // use of inbuilt comparators
    sort(v1.begin(), v1.end(), greater<int>());
    cout << "descending order" << endl;
    for(int i : v1){
        cout << i << " ";
    }
    cout << endl;
    // pair based sorting
    vector <pair <int, int>> v2 = {{3, 7}, {8, 2}, {5, 11}, {13, 17}};
    sort(v2.begin(), v2.end()); // here the sorting is done on basis of first eleement of pair
    cout << "pair based sorting" << endl;
    for(auto p : v2){
        cout << p.first << " " << p.second << endl;
    }
    // using custom comparator
    cout << "custom comparator" << endl;
    sort(v2.begin(), v2.end(), comparator);
    for(auto p : v2){
        cout << p.first << " " << p.second << endl;
    }
    vector <int> v3 = {1, 2, 11, 52, 10};
    // reverse the vector
    reverse(v3.begin(), v3.end());
    for(int i : v3){
        cout << i << " ";
    }
    cout << endl;
    // find the maximum element
    cout << "maximum element is " << *max_element(v3.begin(), v3.end()) << endl;
    // find the minimum element
    cout << "minimum element is " << *min_element(v3.begin(), v3.end()) << endl;
    // find the count of the vector
    cout << "count of the vector is " << count(v3.begin(), v3.end(), 1) << endl;
    // find the first occurence of the element
    cout << "first occurence of the element is " << *find(v3.begin(), v3.end(), 11) << endl;
    // find the last occurence of the element   
    cout << "last occurence of the element is " << *find(v3.begin(), v3.end(), 11) << endl;
    // find the all occurences of the element
    cout << "all occurences of the element is " << count(v3.begin(), v3.end(), 1) << endl;
    // find next permutation
    string s = "123";
    cout << "next permutation is " << next_permutation(s.begin(), s.end()) << endl;
    int n = 15;
    // find number of set bits
    cout << "number of set bits is " << __builtin_popcount(n) << endl;
    long int n1 = 1234567890;
    // find number of set bits
    cout << "number of set bits is " << __builtin_popcount(n1) << endl;
    long long int n2 = 1234567890123456789;
    // find number of set bits
    cout << "number of set bits is " << __builtin_popcount(n2) << endl;
    return 0;
}
