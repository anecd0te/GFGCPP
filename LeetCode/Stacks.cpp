#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        // stack<int> st;
        vector<int> ans;
        for(auto x: v){
            if(ans.size()==0){
                ans.push_back(x);
            }
            else{
                auto u = upper_bound(ans.begin(), ans.end(),x);
                int pos = u-ans.begin();
                if(pos==ans.size())
                    ans.push_back(x);
                else ans[pos]=x;
            }
        }
        cout<<ans.size()<<" ";
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}