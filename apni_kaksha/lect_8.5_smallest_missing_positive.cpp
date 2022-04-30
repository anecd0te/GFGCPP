#include<bits/stdc++.h>
using namespace std;
int smallest_missing(int arr[], int n){
	int ans = -1;
	int N = 1e6+2;
	bool check[N];
	for(int i = 0;i<N;i++){
		check[i] = false;
	}
	for(int i = 0;i<n;i++){
		if(arr[i]>0){
			check[arr[i]]=true;
		}
	}
	for(int i = 1;i<N;i++){
		if(check[i]==false){
			ans = i;
			break;
		}
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	cout<<smallest_missing(arr, n);
	return 0;
}