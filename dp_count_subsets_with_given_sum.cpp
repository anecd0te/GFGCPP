#include<bits/stdc++.h>
int t[7][12];
using namespace std;
int solve(int arr[], int n, int w){
	for(int i = 0;i<n+1;i++){
		for(int j =0; j<w+1;j++){
			if(i==0)
				t[i][j] = 0;
			if(j==0)
				t[i][j]=1;
		}
	}
	for(int i =1;i<n+1;i++){
		for(int j = 1;j<w+1;j++){
			if(arr[i-1]<=j){
				t[i][j] = t[i-1][j] + t[i-1][j-arr[i-1]];
			}
			else t[i][j]= t[i-1][j];
		}
	}
	return t[n][w];
}
int main(){
	int arr[] = {2,3,5,6,8,10};
	int sum = 11;
	int size = sizeof(arr)/sizeof(arr[0]);
	int ans = solve(arr,size,sum);
	cout<<"Number of subsets are "<<ans;
	return 0;
}