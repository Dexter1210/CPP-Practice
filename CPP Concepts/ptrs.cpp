# include <iostream>
using namespace std;

void changeA(int *ptr) {
    *ptr = 20;
}

void changeValue(int &b) {
    // using refernce /alias
    b = 30;
}

int main() {
    int a = 10;
    // pointer is a variable that stores the address of another variable
    int* ptr = &a;
    // pointer to pointer
    int **ptr2 = &ptr;
    // null pointet
    int *ptr3 = NULL;
    cout << "value of ptr3 is" << ptr3 << endl;
    cout << "Address of a is" << ptr << endl;
    cout << "Address of pointer to a is" << ptr2 << endl;
    changeA(ptr);
    cout << "value of a in pass by reference is " << a << endl;
    changeValue(a);
    cout << "value of a in pass by reference is aftef alias is  " << a << endl;
    // array pointer is a constant pointer to first element of array
    int arr[5] = {1, 2, 3, 4, 5};
    cout << " value of arr pointer is" << arr << endl;
    // pointer arthimetic
    int *ptr4 = arr;
    // incrementing pointer
    cout << "value of increment ptr 4 is" << *(++ptr4) << endl;
    // decrementing pointer
    cout << "value of decrement ptr 4 is" << *(--ptr4) << endl;
    // adding and subtracting to a pointer
    cout << "value at 2nd index is" << *(ptr4 + 3 - 1) << endl;
    // subtracting 2 pointers
    int *ptr5 = arr + 4;
    cout << "difference is" << ptr5 - ptr4 << endl;
    // comparison of pointers
    cout << (ptr4 > ptr5) << endl;
    return 0;
}