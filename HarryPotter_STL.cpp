#include<bits/stdc++.h>
using namespace std;

int main(){
    
    set<string> persons;
    int n;
    cin>>n;
    int i=0;
    string st;
    while(i !=n){
        cin >>st;
        if(persons.count(st)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        persons.insert(st);
        i++;
    }
    
}
