#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        Person(){
            cout<<"Constructor of person class called"<<endl;
        }
        ~Person(){
            cout<<"Destructor of person class called"<<endl;
        }
};
class Teacher{
    public:
        Teacher(){
            cout<<"Constructor of teacher class"<<endl;
        }
        ~Teacher(){
            cout<<"Destructor of teacher class"<<endl;
        }
};
class Student : public Teacher, public Person{
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