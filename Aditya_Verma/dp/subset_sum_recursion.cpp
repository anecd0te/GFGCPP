#include<bits/stdc++.h>
using namespace std;
void solve(int op, vector<int> arr, int sum, bool &ans){
    // cout<<"op is "<<op<<" sum is "<<sum<<" and arr size is "<<arr.size()<<endl;
    if(op==sum){
        ans = true;
        return;
    }
    if(op>sum || (op<sum && arr.size()==0)){
        return;
    }
    int temp = arr[0];
    arr.erase(arr.begin()+0);
    solve(op, arr, sum, ans);
    solve(op+temp, arr, sum, ans);

}
int main(){
    vector<int> arr = {2,3,7,8,10};
    int sum = 11;
    int ip = 0;
    bool ans = false;
    solve(ip, arr,sum, ans);
    // cout<<ans<<endl;
    if(ans == 1)
        cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}