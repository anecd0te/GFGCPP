#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        void intro(){
            cout<<"I am a person"<<endl;
        }
};
class Student : public Person{
    public:
        // void intro(){
        //     cout<<"I am a student"<<endl;
        // }
        void intro(){
            cout<<"I am a student"<<endl;
            Person::intro();
        }
};
//how to access overriden method. here intro is overriden in derived class;
int main(){
    Student dinesh;
    dinesh.intro();
    // dinesh.Person::intro(); //one way of accessing overriden method
    
}