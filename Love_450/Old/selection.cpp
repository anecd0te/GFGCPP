#include<bits/stdc++.h>
using namespace std;

void Selection_sort(int arr[], int n){
	int min_idx;
	for(int i = 0; i<n-1; i++){
		min_idx = i;
		for(int j = i+1; j<n; j++){
			if(arr[j]< arr[min_idx])
				min_idx = j;
		}
		swap(arr[i], arr[min_idx]);
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w", stdout);
	#endif
	int arr[] = {4, 3, 100, 29, 18, 120};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Sort ";
	for(int i = 0; i<arr_size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	Selection_sort(arr, arr_size);
	cout<<"After Sort ";
	for(int i = 0; i<arr_size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0;
}