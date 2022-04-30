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
// class Student : public Person{
class Student : protected Person{
    public:
        int id;
        void setId(int iid){
            id = iid;
        }
        void setStudentName(string iname){
            setName(iname);
        }
        string getStudentName(){
            return getName();
        }
};
int main(){
    Student st;
    //Inaccessible with protected inheritence but can be used with public inheritence.
    // st.setName("Dinesh");
    // cout<<st.getName();
    st.setStudentName("Dinesh");
    cout<<st.getStudentName();
    return 0;
}