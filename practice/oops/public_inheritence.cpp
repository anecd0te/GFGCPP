#include<bits/stdc++.h>
using namespace std;
class Person{
protected:
    string name;
public:
    void setName(string iname){
        name = iname;
    }
};
class Student : public Person{
public:
    //protected member name is accessible in derived class;
    void display(){
        cout<<"Name is "<<name;
    }
};
int main(){
    Student stu;
    //protected member is not available here;
    // stu.name = "Din";
    stu.setName("Dinesh");
    stu.display();
    return 0;
}