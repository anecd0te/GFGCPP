#include<bits/stdc++.h>
using namespace std;
vector<int> printUnion(int arr1[], int m, int arr2[], int n){
    int i=0, j=0;
    int count = 0;
    vector<int> arr;
    //int k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            //arr[k++] = arr1[i];
            arr.push_back(arr1[i]);
            i++;
            count++;
            //continue;
        }
        else if(arr2[j]<arr1[i]){
            //arr[k++] = arr2[j];
            arr.push_back(arr2[j]);
            j++;
            count++;
            //continue;
        }
        else{
            // arr[k++] = arr1[i];
            arr.push_back(arr1[i]);
            i++;
            j++;
            count++;
        }
    }
    while(i<m){
        // arr[k++] = arr1[i++];
        arr.push_back(arr1[i++]);
        count++;
    }
    while(j<n){
        // arr[k++] = arr2[j++];
        arr.push_back(arr2[j++]);
        count++;
    }
    return arr;
}
int main(){
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7,8,9,19,11,12,13};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> ans;
    ans = printUnion(arr1,m, arr2, n);
    for(auto x: ans){
        cout<<x<<" ";
    }
    return 0;
}