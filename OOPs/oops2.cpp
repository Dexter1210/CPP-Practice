#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        double *cgpaPtr;

        Student(string name, double cgpa){
            this->name = name;
            this->cgpaPtr = new double(cgpa);
        }

        // deep copy for dynamic memory allocation
        Student(Student &originalObject){
            this->name = originalObject.name;
            this->cgpaPtr = new double(*originalObject.cgpaPtr);

        }

        ~Student(){
            cout << "Destructor called" << endl;
            delete cgpaPtr; // if not then memory leak will occur
        }

        void info(){
            cout << "name: " << name << endl;
            cout << "cgpa: " << *cgpaPtr << endl;
        }
};

int main(){
    Student s1("Vinayak", 9.5);
    s1.info();
    Student s2(s1);
    (*s2.cgpaPtr) = 8.9;
    s1.info();
    s2.info();
}