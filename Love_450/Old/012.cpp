#include<bits/stdc++.h>
using namespace std;
void sorti(vector<int> &arr){
    int low = 0, mid = 0, high = arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low++],arr[mid++]);
        }
        else if(arr[mid]==1)
            mid++;
        else if(arr[mid]==2)
            swap(arr[mid],arr[high--]);
    }
}
int main(){
    vector<int> arr = {0,1,2,0,1,0,1,0,1,2,2,0,0};
    sorti(arr);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}