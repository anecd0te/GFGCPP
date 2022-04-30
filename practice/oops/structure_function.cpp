#include<bits/stdc++.h>
using namespace std;
struct Student{
    string name;
    int roll_no;
    char sex;
};
void display(Student s){
    cout<<s.name<<endl;
    cout<<s.roll_no<<endl;
    cout<<s.sex;
}
void display_pointer(Student *s){
    cout<<s->name<<endl;
    cout<<(*s).roll_no<<endl;
    cout<<s->sex;
}
int main(){
    Student s;
    s.name = "Dinesh";
    s.roll_no = 1;
    s.sex = 'M';
    // display(s);
    display_pointer(&s);
    return 0;
}
