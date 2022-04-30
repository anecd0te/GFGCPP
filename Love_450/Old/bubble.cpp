#include<bits/stdc++.h>
using namespace std;
void Bubble_Sort(int arr[], int n){
	for(int i = 0; i <n-1;i++)
		for(int j = 0; j<n-i-1;j++)
			if(arr[j]>arr[j+1])
				swap(arr[j], arr[j+1]);
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
	Bubble_Sort(arr, arr_size);
	cout<<"After Sort ";
	for(int i = 0; i<arr_size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0;
}