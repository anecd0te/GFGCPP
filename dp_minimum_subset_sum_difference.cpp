#include<bits/stdc++.h>
using namespace std;
bool t[4][11];
vector<int> subset(int arr[], int n, int w){
	for(int i = 0;i<n+1;i++){
		for(int j = 0;j<w+1;j++){
			if(i==0){
				t[i][j]=false;
			}
			if(j==0){
				t[i][j]=true;
			}
		}
	}
	for(int i = 1;i<n+1;i++){
		for(int j =1;j<w+1;j++){
			if(arr[i-1]<=j){
				t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
			}
			else {
				t[i][j] = t[i-1][j];
			}
		}
	}
	vector<int> v;
	for(int i = 2;i<n+1;i++){
		for(int j=0;j<(w+1)/2;j++){
			if(t[i][j]==true)
				v.push_back(j);
		}
	}
	return v;
}
int main(){
	int arr[] = {1,2,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	int sum = 0;
	for(int i = 0;i<size;i++){
		sum+=arr[i];
	}
	vector<int> v = subset(arr,size, sum);
	int mn = INT_MAX;
	for(int i = 0;i<v.size();i++){
		mn = min(mn,sum-(2*v[i]));
	}
	cout<<"Minimum subset sum difference is  "<<mn;
	return 0;
}	