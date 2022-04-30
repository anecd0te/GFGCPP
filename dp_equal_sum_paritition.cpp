//We have to find whether two artitions of given sum exists in given array.
#include<bits/stdc++.h>
using namespace std;
bool t[10][50];
bool esp(int arr[], int n, int w){
	for(int i = 0;i<n+1;i++){
		for(int j = 0; j<w+1;j++){
			if(i==0){
				t[i][j]=false;
			}
			if(j==0){
				t[i][j]=true;
			}
		}
	}
	for(int i = 1;i<n+1;i++){
		for(int j = 1;j<w+1;j++){
			if(arr[i-1]<=j){
				t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
			}
			else t[i][j] = t[i-1][j];
		}
	}
	return t[n][w];
}
int main(){
	int arr[] = {1,5,11,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int sum = 11;
	int s = 0;
	for(int i = 0;i<size;i++){
		s+=arr[i];
	}
	if(s%2!=0)
		cout<<"Not possible";
	else{
		esp(arr,size,sum)?cout<<"Possible":cout<<"Not possible";
	}
	return 0;
}