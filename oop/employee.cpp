#include<bits/stdc++.h>
using namespace std;
class AbstractEmployee{
    virtual void AskPromotion() = 0;
};
class Employee:AbstractEmployee{
protected:
    string Name;
private:
    string Company;
    int age;
public:
    void setName(string Name){
        this->Name = Name;
    }
    string getName(){
        return Name;
    }
    void setAge(int age){
        this->age = age;
    }
    void setCompany(string Company){
        this->Company = Company;
    }
    int getAge(){
        return age;
    }
    string getCompany(){
        return Company;
    }
    void IntroduceYourself(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Company: "<<Company<<endl;
    }
    void AskPromotion(){
        if(age>=30)
            cout<<Name<<" got promoted!!"<<endl;
        else
            cout<<Name<<" wasn't promoted."<<endl;
    }
    virtual void Work(){
        cout<<Name<<" is working on email and office routine"<<endl;
    }
    Employee(string Name, string Company, int age){
        this->Name = Name;
        this->Company = Company;
        this->age = age;
        // Name = name;
        // Company = company;
        // age = Age;
    }

};
class Developer:public Employee{
public:
    string favProgLanguage;
    Developer(string Name, string Company, int age, string favProgLanguage)
    :Employee(Name, Company, age){
        this->favProgLanguage = favProgLanguage;
    }
    void fixBug(){
        cout<<getName()<<" fixed bug using "<<favProgLanguage<<endl;
    }
    void Work(){
        cout<<Name<<" is working on code"<<endl;
    }
};
class Teacher: public Employee{
public:
    string Subject;
    Teacher(string Name, string Company, int age, string Subject)
    :Employee(Name, Company, age){
        this->Subject = Subject;
    }
    void prepareLesson(){
        cout<<Name<<" is preparing lessons for subject "<<Subject<<endl;
    }
    void Work(){
        cout<<Name<<" is working on teaching the subject "<<Subject<<endl;
    }
};
int main(){
    // Employee emp = Employee("Dinesh", "HanumanJi", 30);
    // emp.IntroduceYourself();
    // emp.AskPromotion();
    // Employee emp1 = Employee("d","jai",21);
    // emp1.setName("Dinesh Saini");
    // emp1.setAge(20);
    // emp1.setCompany("JaiHanumanJi");
    // cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old"<<endl;
    // emp1.AskPromotion();
    Developer d = Developer("Pooja", "Sopra", 25, "C#");
    // d.IntroduceYourself();
    // d.fixBug();
    // d.Work();
    // d.AskPromotion();
    Teacher t = Teacher("Sushma","Byjus", 27, "Science");
    t.prepareLesson();
    t.AskPromotion();
    t.Work();
    //Polymorphism common use case: when parent class reference is used to refer a child
    //class object.
    Employee *e1;
    Employee *e2;
    e1 = &d;
    e2 = &t;
    e1->Work();
    e2->Work();
    return 0;
}