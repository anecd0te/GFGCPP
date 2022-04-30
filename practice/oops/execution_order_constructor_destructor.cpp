#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        Person(){
            cout<<"Constructor of base class called"<<endl;
        }
        ~Person(){
            cout<<"Destructor of base class called"<<endl;
        }
};
class Student : public Person{
    public:
        Student(){
            cout<<"Constructor of Derived class called"<<endl;
        }
        ~Student(){
            cout<<"Destructor of Derived class called"<<endl;
        }
};
int main(){
    Student st;
    // Person p;
    return 0;
}