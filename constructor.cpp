#include<iostream>
using namespace std;

class Info{

    string school;

    public:
    float grade;
    int fees;
    string dept;

    Info(){  // default Constructor

        dept = "Computer Engineering";  // Initialisation in constructor
        cout << "default constructor "<< endl;
    }


    Info(string s, float g, int f){  // Parameterised Constructor
        cout << "~~~~~~~ Parameterised Constructor ~~~~~~~"<< endl;
        school = s;
        grade = g;
        fees = f;

    }

     Info(Info &originalObj){  // Custom Copy Constructor

        cout << "~~~~~~~ I am custom copy constructor ~~~~~~~"<< endl;
        this-> school = originalObj.school;
        this-> grade = originalObj.grade;
        this-> fees = originalObj.fees;

    }

    void printInfo(){
        cout << school << endl;
        cout << grade << endl;
        cout<< fees << endl;
    }
};

int main(){
   
   // Constructor is called when object of the class is created.

    Info b;  // Default constructor -- first print
    cout << b.dept << endl;

    Info a("uap", 3.65, 235);  // Parameterised constructor
    a.printInfo();
    Info arr[3]; // 3 times prints default constructor

    // Custom Copy constructor: Special const. (default) used to copy properties of one obj into another.
    
    Info c = a; 
    c.printInfo();
    return 0;


}