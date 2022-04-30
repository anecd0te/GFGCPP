//If a subset present with given sum. Return true or false.
//https://www.youtube.com/watch?v=_gPcYovP7wc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=7
#include<bits/stdc++.h>
bool t[6][25];
bool subset_sum(int arr[], int n, int w){
	for(int i = 0; i <n+1;i++){
		for(int j = 0;j<w+1;j++){
			if(i==0)
				t[i][j] = false;
			else if(j==0)
				t[i][j] = true;
		}
	}
	for(int i = 1;i<n+1;i++){
		for(int j = 1;j<w+1;j++){
			if(arr[i-1]<=j){
				t[i][j] = t[i-1][j-arr[i-1]]||t[i-1][j];
			}
			else t[i][j] = t[i-1][j];
		}
	}
	return t[n][w];

}
using namespace std;
int main(){
	int arr[] = {2,3,7,8,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 24;
	bool answer = subset_sum(arr,n,sum);
	cout<<answer;
	return 0;
}