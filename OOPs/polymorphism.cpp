#include <iostream>
#include <string>

using namespace std;

class Student{
    public:
        string name;

        Student(){
            name = "default name";
        }

        Student(string name){
            this -> name = name;
        }

        void getInfo(){
            cout << "I am in parent class" << endl;
            cout << "name: " << name << endl;
        }

        virtual void expectations(){
            cout << "I expect u to define me again in child class" << endl;
        }
};

class TA : public Student{
    public:
        string subject;
        TA(string name, string subject) : Student(name){
            this -> subject = subject;
        }

        // method overriding
        void getInfo(){
            cout << "I am in child class" << endl;
            cout << "name: " << name << endl;
            cout << "subject: " << subject << endl;
        }

        void expectations(){
            cout << "Virtual function" << endl;
        }
};
int main(){
    Student s1;
    s1.getInfo();
    Student s2("Vinayak");
    s2.getInfo();
    s2.expectations();
    TA t1("Vinayak", "OS");
    t1.getInfo();
    t1.expectations();
    return 0;
}