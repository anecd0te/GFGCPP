#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n, int d){
	int temp[d];
	for(int i = 0;i<d;i++){
		temp[i] = arr[i];
	}
	for(int i = 0;i<n-d;i++){
		arr[i] = arr[i+d];
	}
	for(int i = n-d,j=0;i<n;i++){
		arr[i] = temp[j++];
	}
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
/*
step1: Reverse first d elements.
step2: Reverse n-d elements.
step3: reverse n.
*/
void effRotate(int arr[], int n, int d){
	reverse(arr,arr+d);
	reverse(arr+d,arr+n);
	reverse(arr,arr+n);
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[] = {1,2,3,4,5,6,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	int d = 2;
	effRotate(arr, size, d);
	return 0;
}