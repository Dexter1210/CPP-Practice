#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string name, int age){
            this -> name = name;
            this -> age = age;
        }
};

class Student : public Person {
    public:
        int rollNo;

        Student(string name, int age, int rollNo) : Person(name, age){
            this -> rollNo = rollNo;
        }

        void info(){
            cout << "name: " << name << endl;
            cout << "age: " << age << endl;
            cout << "rollNo: " << rollNo << endl;
        }
};

class Teacher: public Person{
    public:
        string subject;
        double salary;
}

class TA : public Student, public Teacher{
    
};

int main(){
    Student s1("Vinayak", 20, 123);
    s1.info();
}