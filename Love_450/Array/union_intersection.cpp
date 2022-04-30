#include<bits/stdc++.h>
using namespace std;
vector<int> unionn(int arr1[], int arr2[], int n1, int n2){
    unordered_set<int> s;
    vector<int> ans;
    for(int i = 0;i<n1;i++){
        s.insert(arr1[i]);
    }
    for(int i = 0;i<n2;i++){
        s.insert(arr2[i]);
    }
    cout<<"Number of unique element "<<s.size()<<endl;
    for(auto i = s.begin();i!=s.end();i++){
        ans.push_back(*i);
    }
    return ans;
}
vector<int> intersection(int arr1[], int arr2[], int size1, int size2){
    unordered_set<int> s;
    for(int i = 0;i<size1;i++){
        s.insert(arr1[i]);
    }
    vector<int> ans;
    int count = 0;
    for(int i = 0;i<size2;i++){
        if(s.find(arr2[i])!=s.end()){
            count++;
            ans.push_back(arr2[i]);
            s.erase(arr2[i]);
        }
    }
    cout<<"Number of comman elements "<<count;
    return ans;
}
int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {4,5,6,7,8,9};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> ans = unionn(arr1, arr2, size1, size2);
    cout<<"Union is ";
    for(auto x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int> an = intersection(arr1, arr2, size1, size2);
    cout<<"Intersection is ";
    for(auto x:an){
        cout<<x<<" ";
    }
    return 0;
}