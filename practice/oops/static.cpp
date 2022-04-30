#include<bits/stdc++.h>
using namespace std;
void display(){
    static int counter = 0;
    cout<<"Counter called "<<++counter<<"times."<<endl;
}
int main(){
    display();
    display();
    display();
    return 0;
}