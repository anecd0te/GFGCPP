//https://www.youtube.com/watch?v=uVsoUyDO8Ow&list=PLfVsf4Bjg79DLA5K3GLbIwf3baNVFO2Lq&index=26
#include<bits/stdc++.h>
using namespace std;
//this pointer is an implicit parameter to all member functions/.
class Parent{
    public:
        int age;
        void setAge(int age){
            this->age = age;
        }
        void getAge(){
            cout<<this->age<<endl;
        }
};
int main(){
    Parent p;
    p.setAge(23);
    p.getAge();
    return 0;
}