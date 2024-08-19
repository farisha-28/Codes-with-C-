#include <iostream>
#include <string>
using namespace std;

class Student
{

public:
    string name;
    string dept;
    double *cgpaPtr; 

    Student(string name, string dept, double cgpa)
    {
        this->name = name;
        this->dept = dept;
        cgpaPtr = new double; 
        *cgpaPtr = cgpa;
    }

    Student(Student &originalObj){  // Custom Copy Constructor : Deep Copy

        cout << "~~~~ Custom copy constructor is called ~~~~~"<< endl;
        this-> name = originalObj.name;
        this-> dept = originalObj.dept;
        cgpaPtr = new double;           // dynamically allocates another new memory in heap
        *cgpaPtr = *originalObj.cgpaPtr;  // the passed original val is stored in new memory value

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
    *(s2.cgpaPtr) = 4.00; 
    s1.printInfo();     

    s2.name = "Elinaa";
    s2.printInfo();  
}