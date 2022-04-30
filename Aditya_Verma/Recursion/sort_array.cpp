#include<bits/stdc++.h>
using namespace std;
void inser(vector<int> &arr, int temp){
    if(arr.size()==0 || arr[arr.size()-1]<=temp){
        arr.push_back(temp);
        return;
    }
    int tem = arr[arr.size()-1];
    arr.pop_back();
    inser(arr, temp);
    arr.push_back(tem);
}
void sor(vector<int> &arr){
    if(arr.size()==1)
        return;
    int temp = arr[0];
    arr.erase(arr.begin()+0);
    sor(arr);
    inser(arr, temp);
}
int main(){
    vector<int> arr = {3,4,1,2,5,7,6};
    sor(arr);
    for(auto x:arr)
        cout<<x<<" ";
    return 0;
}