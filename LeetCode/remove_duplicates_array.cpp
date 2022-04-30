#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int n){
    // int temp[n];
    // int j = 0;
    // for(int i = 0;i<n-1;i++){
    //     if(arr[i]!=arr[i+1])
    //         temp[j++] = arr[i];
    // }
    // temp[j++] = arr[n-1];
    // for(int i = 0;i<j;i++){
    //     arr[i] = temp[i];
    // }
    // return j;
    // --------------------------------------
    // Solution 2 with sets;
    //---------------------------------------
    // set<int> s;
    // for(int i =0;i<n;i++){
    //     s.insert(arr[i]);
    // }
    // int k = 0;
    // for(auto i:s){
    //     arr[k++] = i;
    // }
    // return s.size();
    int i = 0;
    for(int j =1;j<n;j++){
        if(arr[i]!=arr[j])
            i++;
        arr[i] = arr[j];
    }
    return i+1;
}
int main(){
        int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // removeDuplicates() returns new size of
    // array.
    n = removeDuplicates(arr, n);
 
    // Print updated array
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
    return 0;
    
}