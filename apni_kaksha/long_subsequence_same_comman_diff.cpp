#include<bits/stdc++.h>
using namespace std;
int longest_sub(int arr[], int n){
	int cd = arr[1]-arr[0];
	int ans = 2;
	int curr = 2;
	int j =2;
		while(j<n){
			if(arr[j]-arr[j-1]==cd){
				curr++;
			}
			else{
				cd = arr[j]-arr[j-1];
				curr = 2;
			}
			ans = max(ans, curr);
			j++;
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
	int ans = longest_sub(arr, n);
	cout<<ans;
}