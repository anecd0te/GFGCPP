#include<bits/stdc++.h>
using namespace std;
//polymorphism = having many forms.
//usually occurs when there is hierarchy of classes.
class Person{
    public:
        virtual void intro(){
            cout<<"I am a person"<<endl;
        }
};
class Student : public Person{
    public:
        void intro(){
            cout<<"I am a student also!!"<<endl;
        }
};
class Farmer : public Person{
    public:
        void intro(){
            cout<<"I am a farmer"<<endl;
        }
};
void whoisthis(Person &p){
    p.intro();
}
int main(){
    Student dinesh;
    dinesh.intro();
    // whoisthis(dinesh);
    // whoisthis(&dinesh);
    whoisthis(dinesh);
    Farmer fam;
    whoisthis(fam); //calls the function depending on the object;
    return 0;
}