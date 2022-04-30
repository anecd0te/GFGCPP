#include<bits/stdc++.h>
using namespace std;
int min_index(int arr[], int n){
	const int N = 100;
	int in[N];
	int min_id = INT_MAX;
	for(int i = 0;i<N;i++){
		in[i] = -1;
	}
	for(int i=0;i<n;i++){
		if(in[arr[i]]!=-1){
			min_id = min(min_id, in[arr[i]]);
		}
		else{
			in[arr[i]] = i;
		}
		
	}
	int ans;
	min_id==INT_MAX?ans= 0:ans= min_id+1;
	return ans;
	
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int ans = min_index(arr, n);
	ans == 0?cout<<"Not Found":cout<<ans;
	return 0;
}