#include <iostream>
using namespace std;
#include <queue>

int main(){
    priority_queue <int> q1;
    // enter the value to stack
    q1.push(10);
    q1.push(40);
    q1.push(30);

    cout << "size of q1 is : " << q1.size() << endl;

    while(!q1.empty()){
        cout << q1.top() << " ";
        q1.pop(); //deletes the top element
    }

    cout << "size of q1 is post operations : " << q1.size() << endl;
    
    priority_queue <int> q2;

    q2.push(10);
    q2.swap(q1);
    cout << "top element of q1 is : " << q1.top() << endl;
    cout << "top element of q2 is : " << q2.top() << endl;

    // functor passed will ensure that reverse order is maintained
    priority_queue <int, vector<int>, greater<int>> q3;
    // enter the value to stack
    q3.push(10);
    q3.push(40);
    q3.push(30);

    while(!q3.empty()){
        cout << q3.top() << " ";
        q3.pop(); //deletes the top element
    }
    
    return 0;
}