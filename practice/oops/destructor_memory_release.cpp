#include<bits/stdc++.h>
using namespace std;
class Human{
private:
    string *name;
    int *age;
public:
    Human(string iname, int iage){
        name = new string;
        age = new int;
        *name = iname;
        *age = iage;
    }
    void display(){
        cout<<*name<<" is "<<*age<<" years old."<<endl;
    }
    ~Human(){
        delete name;
        delete age;
        cout<<"Memory of variables is released from the heap"<<endl;
    }
};
int main(){
    Human *hanu = new Human("Dinesh", 30);
    hanu->display();
    delete hanu;
    return 0;
}