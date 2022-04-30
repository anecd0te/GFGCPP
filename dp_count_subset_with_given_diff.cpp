#include<bits/stdc++.h>
using namespace std;
int t[5][5];
int count_subset(int arr[], int n, int w){
		for(int i = 0;i<n+1;i++){
		for(int j = 0;j<w+1;j++){
			if(i==0){
				t[i][j]=0;
			}
			if(j==0){
				t[i][j]=1;
			}
		}
	}
	for(int i = 1;i<n+1;i++){
		for(int j = 1;j<w+1;j++){
			if(arr[i-1]<=j){
				t[i][j] = t[i-1][j]+t[i-1][j-arr[i-1]];
			}
			else{
				t[i][j] = t[i-1][j];
			}
		}
	}
	return t[n][w];
}
int main(){
	int arr[] = {1,1,2,3};//given
	int size = sizeof(arr)/sizeof(arr[0]);
	int sum = accumulate(arr,arr+size, 0);
	int diff = 1;//given
	int act_sum = (diff+sum)/2;
	//cout<<act_sum<<endl;
	int ans = count_subset(arr,size,act_sum);
	cout<<"Number of subsets with given diff are "<<ans;
	return 0;
}