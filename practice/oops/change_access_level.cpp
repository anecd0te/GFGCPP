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
        using Person :: name;
        string getStudentName(){
            return getName();
        }
        void setStudentName(string iname){
            setName(iname);
        }
};
int main(){
    Student st;
    // st.setName("Dinesh");
    // st.getName();
    st.name="Saini";
    // st.setStudentName("Dinesh");
    cout<<st.getStudentName();
    return 0;
}