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
            cout<<"I am a student also!!"<<endl;
        }
};
//all 3 mean same thing 
// void whoisthis(Person p){
//     p.intro();
// }
// void whoisthis(Person *p){
//     p->intro();
// }
void whoisthis(Person &p){
    p.intro();
}
int main(){
    Student dinesh;
    dinesh.intro();
    // whoisthis(dinesh);
    // whoisthis(&dinesh);
    whoisthis(dinesh);
    return 0;
}