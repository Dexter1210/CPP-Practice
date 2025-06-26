#include <iostream>
using namespace std;
#include <queue>

int main(){
    queue <int> q1;
    // enter the value to stack
    q1.push(1);
    q1.push(2);
    q1.push(3);

    cout << "size of q1 is : " << q1.size() << endl;

    while(!q1.empty()){
        cout << q1.front() << " ";
        q1.pop(); //deletes the top element
    }

    cout << "size of q1 is post operations : " << q1.size() << endl;
    
    queue <int> q2;

    q2.push(1);
    q2.swap(q1);
    cout << "front element of q1 is : " << q1.front() << endl;
    cout << "front element of s2 is : " << q2.front() << endl;

    return 0;
}