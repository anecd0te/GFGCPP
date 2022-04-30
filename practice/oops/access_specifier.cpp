#include<bits/stdc++.h>
using namespace std;
class Human{
// private:
private:
    int age;
    string name;
public:
    Human(){
        age = 0;
        name = "John Doe";
    }
    Human(string iname, int iage){
        age = iage;
        name = iname;
    }
    void setAge(int ag){
        age = ag;
    }
    int getAge(){
        return age;
    }
    string getName(){
        return name;
    }
};
int main(){
    Human hanu("Dinesh", 30);
    Human hanuu;
    cout<<hanuu.getAge()<<endl;
    cout<<hanuu.getName()<<endl;
    cout<<hanu.getName();
    // hanu.setAge(20);
    // cout<<hanu.getAge()<<endl;
    return 0;
}