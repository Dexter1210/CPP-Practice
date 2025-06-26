# include <iostream>
# include <list>
using namespace std;

int main(){
    // initialisation of linked list
    list <int> l1 = {1,2,3,4,5};
    // insert at back
    l1.push_back(6);
    l1.push_back(7);
    // insert at front
    l1.push_front(0);
    l1.push_front(-1);
    //deletion at front
    l1.pop_front();
    // deletion at back
    l1.pop_back();
    // rest size , erase, clear, begin , end, rbegin, rend, insert, front, back
    for(auto iterator = l1.rbegin(); iterator != l1.rend(); iterator++){
        cout << *iterator << " ";
    }
    cout << endl;
    return 0;
}