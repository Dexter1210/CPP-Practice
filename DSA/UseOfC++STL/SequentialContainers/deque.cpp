# include <iostream>
# include <deque>
using namespace std;

int main(){
    // initialisation of linked list
    deque <int> d = {1,2,3,4,5};
    // insert at back
    d.push_back(6);
    d.push_back(7);
    // insert at front
    d.push_front(0);
    d.push_front(-1);
    //deletion at front
    d.pop_front();
    // deletion at back
    d.pop_back();
    // rest size , erase, clear, begin , end, rbegin, rend, insert, front, back
    for(auto iterator = d.rbegin(); iterator != d.rend(); iterator++){
        cout << *iterator << " ";
    }
    cout << endl;
    return 0;
}