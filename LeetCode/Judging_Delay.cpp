#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, fir, sec, count=0;
        // unordered_map<int, int> mp;
        cin>>n;
        for(int i = 0;i<n;i++){
            cin>>fir>>sec;
            if(sec-fir>5)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}