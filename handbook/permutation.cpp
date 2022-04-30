#include<bits/stdc++.h>
using namespace std;
void permute(string a, int l, int h){
    if(l==h){
        cout<<a<<endl;
        return;
    }
    for(int i = l;i<=h;i++){
        swap(a[l],a[i]);
        permute(a,l+1,h);
        swap(a[l], a[i]);
    }
}
int main(){
    vector<int> permutation;
    vector<vector<int>> ans;
    for(int i = 0 ;i < 4;i++){
        permutation.push_back(i);
    }
    do{
        ans.push_back(permutation);
    }while(next_permutation(permutation.begin(), permutation.end()));
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    string a = "abc";
    cout<<"--------------------------------"<<endl;
    permute(a, 0, 2);
}