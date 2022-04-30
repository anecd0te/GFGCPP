// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printPermutations(string str, string asf){
    // write your code here
    if(str.length()==0){
        cout<<asf<<endl;
        return;
    }
    for(int i = 0;i<str.size();i++){
        char c = str[i];
        string temp = str;
        temp.erase(temp.begin()+i);
        printPermutations(temp, asf+c);
    }
}

int main(){
    string str;
    cin>>str;
    printPermutations(str,"");
    
}