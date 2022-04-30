#include<bits/stdc++.h>
using namespace std;
class Person{
    protected:
        string name;
    public:
        void setName(string iname){
            name = iname;
        }
        string getName(){
            return name;
        }
};
class Student : private Person{
    public:
        int id;
        void setId(int iid){
            id = iid;
        }
        string getStudentName(){
            return getName();
        }
        void setStudentName(string iname){
            setName(iname);
        }

};
class GStudent : public Student{
    public:
        string getGSName(){
            return getStudentName();
        }
        void setGSName(string iname){
            setStudentName(iname);
        }

};
int main(){
    GStudent din;
    din.setGSName("Dinesh");
    // cout<<din.getGSName()<<endl;
    cout<<din.getStudentName()<<endl;
    // Student st;
    // st.setName("Dinesh");
    Person p;
    p.setName("Saini");
    cout<<p.getName()<<endl;

    return 0;
}