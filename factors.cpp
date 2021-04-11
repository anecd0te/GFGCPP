#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> n1;
    int n = 50;
    for (int i = 1; i < sqrt(n); i++) {
        if(n%i==0){
            n1.push_back(i);
            if(i!=sqrt(n)){
            n1.push_back(n/i);
            }
        }
    }
    sort(n1.begin(), n1.end());
    for (auto i = n1.begin();i!=n1.end();i++) {
        cout<<*i<<" ";
    }
    return 0;
}