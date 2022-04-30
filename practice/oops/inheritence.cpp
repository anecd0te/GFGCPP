#include<bits/stdc++.h>
using namespace std;
class Person{
    string name;
    int age;
public:
    void setName(string iname){
        name = iname;
    }
    void setAge(int iage){
        age = iage;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};
class Student : public Person{
public:
    int id;
    void setId(int iid){
        id = iid;
    }
    void display(){
        cout<<"Hello my name is "<<getName()<<" and I am "<<getAge()<<" years old with student id "<<id<<endl;
    }
};
int main(){
    Student dinesh;
    dinesh.setName("Dinesh");
    dinesh.setAge(30);
    dinesh.setId(1234);
    dinesh.display();
    return 0;
}