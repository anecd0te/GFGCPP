#include<bits/stdc++.h>
using namespace std;
int bin_s(vector<int> arr, int k){
    int start = 0, end = arr.size()-1, ans=-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(mid>=0 && arr[mid]==k){
            ans = mid;
            end= mid-1;
        }
        else if(arr[mid]<k)
            start = mid+1;
        else end = mid-1;
    }
    if(ans==-1)
        return ans;
    else return ans+1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k, count=0;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int target = arr[k-1];
        // sort(arr.begin(), arr.end());
        // cout<<bin_s(arr,target)<<endl;
        for(int i = 0;i<n;i++){
            if(arr[i]<target)
                count++;
        }
        cout<<count+1<<endl;
    }
    return 0;
}