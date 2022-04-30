#include<bits/stdc++.h>
using namespace std;
void seg(vector<int> &arr){
    int j = 0;
    for(int i = 0 ;i<arr.size();i++){
        if(arr[i]<0){
            if(i!=j)
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
void two_pointer(vector<int> &arr){
    int low = 0, high = arr.size()-1;
    while(low<=high){
        if(arr[low]<0 && arr[high]<0)
            low++;
        else if(arr[low]<0 && arr[high]>=0)
            low++, high--;
        else if(arr[low]>=0 && arr[high]>=0)
            high--;
        else if(arr[low]>=0 && arr[high]<0){
            swap(arr[low], arr[high]);
            low++, high--;
        }
    }
}
int main(){
    vector<int> arr = {-1,2,-3,4,5,6,-7,8,9};
    // seg(arr);
    two_pointer(arr);
    for(auto x: arr){
        cout<<x<<" ";
    }
    return 0;
}