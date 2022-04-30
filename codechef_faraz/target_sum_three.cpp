#include<bits/stdc++.h>
using namespace std;
void target(vector<int> arr, int tar){
    for(int i = 0;i<arr.size();i++){
        for(int j = i+1;j<arr.size();j++){
            for(int k = j+1;k<arr.size();k++){
                if(arr[i]+arr[j]+arr[k]==tar){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" gives"<<tar<<endl;
                    // break;
                }
            }
        }
    }
}
void better_tar(vector<int> arr, int tar){
    sort(arr.begin(), arr.end());
    for(int i = 0;i<arr.size();i++){
        int start = i+1, end = arr.size()-1, target = tar-arr[i];
        while(start<end){
            int sum = arr[start] + arr[end];
            if(sum==target){
                cout<<arr[i]<<" "<<arr[start]<<" "<<arr[end]<<endl;
                break;
            }
            else if(sum>target)
                end--;
            else start++;
        }
    }
}
int main(){
    vector<int> arr{1,6,3,9,12,7};
    int tar = 13;
    // target(arr, tar);
    better_tar(arr, tar);
    return 0;
}