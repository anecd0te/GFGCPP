#include<bits/stdc++.h>
using namespace std;
bool isoverlapping(int start1, int end1, int start2, int end2){
    if(end1<=start2 || end2<=start1)
        return false;
    return true;
}
bool overlap(int *arr1, int *arr2, int n){
    for(int i =0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(isoverlapping(arr1[i],arr2[i], arr1[i+1], arr2[i+1]))
                return true;
        }
    }
    return false;
}
bool overlap_better(int *arr1, int *arr2, int n){
    vector<pair<int,int>> interval(n);
    for(int i = 0;i<n;i++){
        interval[i].first = arr1[i];
        interval[i].second = arr2[i];
    }
    sort(interval.begin(), interval.end());
    for(int i = 0;i<n-1;i++){
        if(interval[i].second>interval[i+1].first)
        return true;
    }
    return false;
}
int main(){
    int arr1[] = {2,1};
    int arr2 []= {3,4};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    // cout<<overlap(arr1, arr2, n);
    cout<<overlap_better(arr1, arr2, n);
    return 0;

}