#include<bits/stdc++.h>
using namespace std;
union Student{
    int age;
    int sal;
};
int main(){
    Student s;
    s.age = 10;
    cout<<s.sal;
    return 0;
}