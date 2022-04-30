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
        void intro(){
            cout<<"I am a student"<<endl;
        }
};
int main(){
    Student dinesh;
    dinesh.intro();
    return 0;
}