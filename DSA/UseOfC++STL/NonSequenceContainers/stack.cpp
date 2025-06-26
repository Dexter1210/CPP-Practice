#include <iostream>
using namespace std;
# include <stack>

int main(){
    // initialistaion of stack
    stack <int> s1;
    stack <int> s2;

    // enter the value to stack
    s1.push(1);
    s1.push(2);
    s1.push(3);

    cout << "size of s1 is : " << s1.size() << endl;

    while(!s1.empty()){
        cout << s1.top() << " ";
        s1.pop(); //deletes the top element
    }

    cout << "size of s1 is post operations : " << s1.size() << endl;

    s2.push(1);
    s2.swap(s1);
    cout << "top element of s1 is : " << s1.top() << endl;
    cout << "top element of s2 is : " << s2.top() << endl;

    return 0;
}