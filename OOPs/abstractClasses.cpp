#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void shapeName() = 0;
};

class Circle : public Shape{
    public:
        void shapeName() {
            cout << "Circle" << endl;
        }
};

int main(){
    Circle c1;
    c1.shapeName();
    return 0;
}