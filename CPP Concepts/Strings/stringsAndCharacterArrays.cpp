#include <iostream>
using namespace std;

int main(){
    // use of character arrays
    char str[5];
    // can also take a delimiter
    cin.getline(str, 5);
    cout << str << endl;

    //prints each letter in string
    for (char i : str){
        cout << i << " ";
    }

    // use of strings
    string s1;
    getline(cin, s1);

    cout << s1 << endl;

    // reverse of a string
    int start = 0, end = s1.length() - 1;
    while(start < end){
        swap(s1[start], s1[end]);
        start++;
        end--;
    }
    cout << "The swapped string is " << s1 << endl;

}