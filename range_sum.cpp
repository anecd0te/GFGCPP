#include<bits/stdc++.h>
using namespace std;
int pre_arr(int arr[], int n, int l, int r){
	int pre[n];
	pre[0] = arr[0];
	for(int i = 1;i < n; i++){
		pre[i] = arr[i]+pre[i-1];
	}
	if(l == 0){
		return pre[r];
	}
	else return pre[r]-pre[l-1];

}
int main(){
	int arr[] = {4,5,3,2,5};
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		int n = sizeof(arr)/sizeof(arr[0]);
		int sum = pre_arr(arr,n,l,r);
		cout<<sum<<"\n";
	}
}