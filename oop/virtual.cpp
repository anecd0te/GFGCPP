#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        virtual void display(){
            cout<<"Hello from person"<<endl;
        }
};
class Student : public Person{
    public:
        void display(){
            cout<<"Hello from student"<<endl;
        }
};
class Dinesh : public Student{
    public:
        void diss(){
            cout<<"Hello from Dinesh"<<endl;
        }
};
void whoisthis(Person &p){
    p.display();
}
int main(){
    Person *p;
    Student s;
    Dinesh d;
    // p = &s;
    // p->display();
    p = &d;
    p->display();
    return 0;
}