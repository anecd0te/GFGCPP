#include <iostream>
using namespace std;

void printStairPaths(int n, string psf){
    // write your code here
    if(n==0){
        cout<<psf<<endl;
        return;
    }
    if(n<0)
        return;
    for(int i = 1;i<=3;i++){
        printStairPaths(n-i,psf+to_string(i));
    }
    
}

int main(){

    int n;
    cin >> n;
    printStairPaths(n, "");
}