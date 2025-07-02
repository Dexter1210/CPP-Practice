#include <iostream>
using namespace std;

class Complex{
    public:
        int real, img;

        Complex(int real = 0, int img = 0){
            this -> real = real;
            this -> img = img;
        }

        Complex operator+(Complex &obj){
            Complex res;
            res.real = real + obj.real;
            res.img = img + obj.img;
            return res;
        }

        void printInfo(){
            cout << real << " + " << img << "i" << endl; 
        }
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3 = c1 + c2;
    c3.printInfo();

    return 0;
}