#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        void display(){
            cout<<"Hello from person"<<endl;
        }
};
class Student : public Person{
    public:
        void display(){
            cout<<"Hello from student"<<endl;
        }
};
void whoisthis(Person &p){
    p.display();
}
int main(){
    Student s;
    whoisthis(s);
    return 0;
}