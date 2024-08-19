#include <iostream>
#include <string>
using namespace std;

class Student
{

public:
    string name;
    string dept;
    double *cgpaPtr; // just pointer initialisation

    Student(string name, string dept, double cgpa)
    {
        this->name = name;
        this->dept = dept;
        cgpaPtr = new double; // creates a new memory in heap. It stores address.
        *cgpaPtr = cgpa;
    }

    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("Aziara", "CSE", 3.65);
    s1.printInfo();

    Student s2(s1);
    *(s2.cgpaPtr) = 4.00; // cgpaPr = address(5050 )
    s1.printInfo();       // On changing the cgpa of s2, s1 changes. Problem of shallow copy.
}