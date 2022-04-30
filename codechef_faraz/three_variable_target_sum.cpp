#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,4,3,1,7,11};
    sort(v.begin(), v.end());
    int start = 0;
    int end = v.size()-1;
    int target = 10;
    while(start<=end){
        int sum = v[i]+v[j];
        if(sum==target){
            cout<<"Yes";
            break;
        }
        else if(sum>target)
            j--;
        else i++;
    }
    return 0;
    
}