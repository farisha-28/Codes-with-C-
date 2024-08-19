#include<iostream>
using namespace std;

class student{

    string name;
    public:
    bool gender;
    int age;

    void setName(string s){
        name = s;
    }
};

class info{

    string school;
    public:
    float grade;
    int fees;

    void setSchool(string s){
        school = s;
    }

    void printInfo(){
        cout << school << endl;
        cout << grade << endl;
        cout<< fees << endl;
    }
};

int main(){

    student a;
    a.setName("Farisha");
    a.age = 45;
    a.gender = 1;
    cout << a.age;
 
    info arr[4];
    string s;

    for(int i=0; i<4;i++){
        
        cout << "School = ";
        cin >> s;
        arr[i].setSchool(s);
        cout << "Grade = ";
        cin >> arr[i].grade;
        cout << "Fees = ";
        cin >> arr[i].fees;

    }
    for(int i=0; i<4;i++){


        arr[i].printInfo();

    }
   
    

    return 0;


}