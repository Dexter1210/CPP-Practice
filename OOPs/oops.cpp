#include <iostream>
#include <string>
using namespace std;

class Teacher{
    private:
        double salary; //data hiding
    public:
        // non parameterized constructor
        Teacher(){
            cout << "constructor called" << endl;
            department = "CSE";
        }
        // parameterized constructor
        // use of this keyword
        Teacher(string name, string subject, string department){
            this->name = name;
            this->subject = subject;
            (*this).department = department;
        }

        // copy constructor
        Teacher(Teacher &originalObject){
            cout << "custom copy constructor called" << endl;
            this->name = originalObject.name;
            this->subject = originalObject.subject;
            this->department = originalObject.department;
            this->salary = originalObject.salary;
        }
        // properties // atrributes
        string name;
        string subject;
        string department;

        // methods // member functions
        void changeDept(string newDept){
            department = newDept;
        }

        // setter function
        void setSalary(double s){
            salary = s;
        }

        // getter function
        double getSalary(){
            return salary;
        }

        // info of the teacher
        void info(){
            cout << "name: " << name << endl;
            cout << "subject: " << subject << endl;
            cout << "department: " << department << endl;
            cout << "salary: " << salary << endl;
        }
};

int main(){
    // creating object
    Teacher t1("Vinayak", "OS", "CSE");
    t1.setSalary(20000);
    t1.changeDept("Electronics");
    cout << "department of "<< t1.name << " is " << t1.department << endl; 
    cout << "salary of "<< t1.name << " is " << t1.getSalary() << endl;
    Teacher t2(t1); // default copy constructor now since we have created a custom copy constructor, the default copy constructor is not called
    t2.info();
    return 0;
}