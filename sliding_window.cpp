#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n, int k){
	if(n<k){
		cout<<"Invalid choices"<<"\n";
		return -1;
	}
	int max_sum = 0;
	for(int i = 0; i < k; i++)
		max_sum+= arr[i];
	int window_sum = max_sum;
	for(int i = k;i<n;i++){
		window_sum+=arr[i]-arr[i-k];
		max_sum = max(max_sum, window_sum);
	}
	return max_sum;

}
int main(){
	int arr[]={5,2,-1,0,3};
	int n =  sizeof(arr)/sizeof(arr[0]);
	int k = 3, sum = 0, max_s = 0;
	/*for(int i = 0;i<k;i++){
		max_s+=arr[i];
	}
	sum = max_s;
	for(int i = k;i<n;i++){
		sum = sum+arr[i]-arr[i-k];
		max_s = max(sum,max_s);
	}
	cout<<max_s;*/
	int maximum = maxSum(arr,n,k);
	cout<<maximum;
	return 0;

}