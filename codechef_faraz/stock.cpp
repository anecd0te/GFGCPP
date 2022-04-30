#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v = {15,22,6,9,8,11};
    vector<int> v = {7,6,5,4,2,1};
    int max_profit = 0, mini = INT_MAX;
    for(int i = 0;i<v.size();i++){
        max_profit = max(v[i]-mini, max_profit);
        mini = min(v[i], mini);
    }
    cout<<max_profit;
    return 0;
}