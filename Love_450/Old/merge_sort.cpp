#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[], int l, int m, int r){
	int i, j, k;
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1];
	int R[n2];
	for(i = 0; i < n1; i++){
		L[i] = arr[l+i];
	}
	for(j = 0; j < n2; j++){
		R[j] = arr[m+1+j];
	}
	i = 0; j = 0; k = l;
	while(i < n1 && j < n2){
		if(L[i]<R[j]){
			arr[k] = L[i];
			i++;
		}
		else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	if(i<n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	if(j<n2){
		arr[k] = R[j];
		j++;
		k++;
	}
}
void MergeSort(int arr[], int l, int r){
	if(l<r){
		int m = l+(r-l)/2;
		MergeSort(arr, l, m);
		MergeSort(arr, m+1, r);
		Merge(arr, l, m, r);
	}
}
void Print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int arr[] = {4, 3, 100, 29, 18, 120};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	Print(arr, arr_size);
	MergeSort(arr, 0, arr_size-1);
	cout<<"After merge sort \n";
	Print(arr, arr_size);
	return 0;
}