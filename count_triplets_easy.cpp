#include<bits/stdc++.h>
using namespace std;
int counttriplets(int arr[], int n){
	int max_val = 0;
	int ans=0;
	for(int i =0; i<n;i++){
		max_val = max(max_val, arr[i]);
	}
	//cout<<"max_val "<<max_val;
	int freq[100]={0};
	for(int i = 0; i<n;i++){
		freq[arr[i]]++;
	}
	for(int i = 0; i<n;i++){
		for(int j = i+1;j<n;j++){
			if(freq[arr[i]+arr[j]]){
				//cout<<"entered in for loop with "<<arr[i]<<" "<<arr[j]<<endl;
				ans++;
			}
		}
	}
	return ans;
}
int main(){
    int arr[] = {1,5,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    int ans = counttriplets(arr, n);
    cout<<ans;
    return 0;
}