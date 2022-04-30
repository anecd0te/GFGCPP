#include<bits/stdc++.h>
using namespace std;
void solve(int i, int arr[],int n, set<vector<int>> &s, vector<int> &currset){
	if(i==n){
		s.insert(currset);
		return;
	}
	solve(i+1, arr, n, s, currset);
	currset.push_back(arr[i]);
	solve(i+1, arr, n, s, currset);
	currset.pop_back();
}
void print(set<vector<int> > &s){
    for(auto x:s){
        cout<<"(";
        for(int i = 0;i<x.size();i++){
            if(i == x.size()-1){
                cout<<x[i];
            }
            else{
                cout<<x[i]<<" ";
            }
        }
        cout<<")";
    }
    cout<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	set<vector<int>>s;
	vector<int> currset;
	solve(0, arr,n, s, currset);
	print(s);
	return 0;
}