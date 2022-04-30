#include<bits/stdc++.h>
using namespace std;
class Human{
private:
    string name;
    int age;
public:
    Human(string iname="Dinesh", int iage = 30){
        name = iname;
        age = iage;
    }
    ~Human(){
        cout<<"Inside destructor"<<endl;
    }
    int getAge(){
        return age;
    }
    string getname(){
        return name;
    }
};
int main(){
    // Human hanu("Sushma", 27);
    Human *han = new Human("Dinesh Saini", 31);
    // cout<<hanu.getname()<<endl;
    // cout<<hanu.getAge()<<endl;
    cout<<han->getname();
    delete han;
    return 0;    
}