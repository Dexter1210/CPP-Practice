#include <iostream>

using namespace std;
// friend class is a class that can access private and protected members of other classes

class A{
    private:
        int a = 10;
    protected:
        int b = 20;

    public:
        friend class B;
        friend void displayInDiff(A &obj);
};

class B{
    public:
        void display(A &obj){
            cout << "the value of a is: " << obj.a << endl;
            cout << "the value of b is: " << obj.b << endl;
        }
};
// friend function is a function that can access private and protected members of other classes
void displayInDiff(A &obj){
    cout << "The value of a is : " << obj.a << " and the value of b is : " << obj.b << endl;
}
int main(){
    A obj1;
    B obj2;
    obj2.display(obj1);
    displayInDiff(obj1);
    return 0;
}
