#include<bits/stdc++.h>
using namespace std;
int find_cand(vector<int> arr){
    int cand = 0, count = 1;
    for(int i = 1;i<arr.size();i++){
        if(arr[cand]==arr[i]){
            count++;
        }
        else count--;
        if(count==0){
            cand=i;
            count=1;
        }
    }
    return arr[cand];
}
int find_maj(vector<int> arr, int cand){
    int count = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]==cand){
            count++;
        }
    }
    if(count>(arr.size()/2))
        return cand;
    else return -1;
}
int main(){
    vector<int> arr = {1,1,1,1,2,3,5};
    int cand = find_cand(arr);
    cout<<find_maj(arr, cand);
    return 0;
}