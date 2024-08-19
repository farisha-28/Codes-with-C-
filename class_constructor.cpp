#include<iostream>
#include <string>
using namespace std;

class Teacher{

private:
    double salary;

public:  // properties / attributes
    string name;
    string dept;
    string course;

    Teacher(){
        cout << "I am teacher t1 -----"<< endl;
    }

    Teacher(string name, string dept, string course, double salary){  // parameterised constructor

        cout << "----- I am Parameterised Constructor ----"<< endl;
        this -> name = name;
        this -> dept = dept;
        this -> course = course;
        this -> salary = salary;
    }

    // method / functions
    void changeName(string newName){
        name = newName;
    }
    void setSalary(double sal){     // setter function to access private attributes
        salary = sal;
    }
    double getSalary(){            // getter function to get the value
        return salary;
    }
    void printInfo(){
        
        cout << "Name: "<< name << endl;
        cout << "Department: " << dept << endl;
        cout<< "Course: " << course << endl;
        cout << "Salary: "<< salary << endl;
    }
    
};

class Account{

private:        // Encapsulation
    double balance;
    string password;

public:  // properties / attributes
    string name;
    string dept;
    string course;

    void changeBalance(double newBal){
        balance = newBal;
    }
  
};


int main(){

    Teacher t1;     // during object creation default contructor is automatically called.
    t1.name = "Farisha";
    t1.dept = "Computer Science";
    t1.course = "C++";
    t1.setSalary(24000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
    t1.changeName("Amyraa");
    cout << "Changed Name: "<< t1.name << endl;

    // Parameterised constructor : No need to assign values.
    Teacher t2("Aziara", "CSE", "C++", 4500.56);
    t2.printInfo();

    // Default Copy Constructor
    cout << "~~~~~~~~ Default Copy Constructor ~~~~~~~"<< endl;
    Teacher t3(t2);
    t3.printInfo();


}