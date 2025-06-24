#include <iostream>
#include "add.h"
using namespace std;

int main() {
    int x,y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    int result = Add(x, y);
    cout << "The sum is :" << result << endl;
}
