#include<bits/stdc++.h>
using namespace std;
int iPairSum(vector<int> v, int n, int X){
       // int n = v.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            // cout<<"v[i] is "<<v[i]<<endl;
            // cout<<"v[j] is "<<v[j]<<endl;
            if(v[i]+v[j]==X){
                //cout<<v[i]+v[j];
                return 1;
            }
            else if(v[i]+v[j]<X)
                i++;
            else j--;
        }
        return 0;
    }
int main(){
    vector<int> v{2,4,3,1,7,11};
    sort(v.begin(), v.end());
    int X = 10;
    int n = v.size();
    // int sum=0;
    // for(int i = 0;i<v.size();i++){
    //     sum = v[i];
    //     for(int j = i+1;j<v.size();j++){
    //         sum = v[i]+v[j];
            
    //         if(sum==10){
    //             cout<<"Found sum with "<<i<<" and "<<j<<endl;
    //             break;
    //         }
    //         // if(sum>10)
    //     }
    // }
    // int ans = iPairSum(v,n,X);
    // cout<<ans;
    (iPairSum(v,n,X)==1)?cout<<"Yes present":cout<<"Not present"<<endl;
    return 0;
}