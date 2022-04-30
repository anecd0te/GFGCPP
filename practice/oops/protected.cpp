#include<bits/stdc++.h>
using namespace std;
class Person{
protected:
    string name;
public:
    void setName(string iname){
        name = iname;
    }
};
class Student : public Person{
public:
    string getName(){
        return name;
    }
};
int main(){
  Person din;
  din.setName("Dinesh");
  Student dine;
  dine.setName("Saini");
  cout<<dine.getName();
  return 0;  
}