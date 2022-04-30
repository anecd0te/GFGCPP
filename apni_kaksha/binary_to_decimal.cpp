#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 35;
    string ans;
    int i;
    while(n>0){
        i = n%2;
        n = n/2;
    }
    reverse(ans.begin(), ans.end());
    cout<<ans;
    return 0;
}