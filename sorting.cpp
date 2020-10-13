#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[], int start, int end){
	int pivot = arr[end];
	int pi = start;
	for(int i = start; i < end;i++){
		if(arr[i] < pivot){
			swap(arr[i],arr[pi]);
			pi++;
		}
	}
	swap(arr[end],arr[pi]);
	return pi;
}
void QuickSort(int arr[], int start, int end){
	if(start<end){
		int partition = Partition(arr, start, end);
		QuickSort(arr, start, partition-1);
		QuickSort(arr,partition+1, end);
	}
}
void InsertionSort(int arr[], int n){
	for(int i = 1; i < n; i++){
		int value = arr[i];
		int hole = i;
		while(hole>0 && arr[hole-1]>value){
			arr[hole] = arr[hole-1];
			hole = hole-1;
		}
		arr[hole] = value;
	}
}
void merge(int arr[], int l, int m, int r){
	int temp[r-l+1];
	int i = l;
	int j = m+1;
	int k = 0;
	while(i<=m && j<=r){
		if(arr[i]<=arr[j]){
			temp[k] = arr[i];
			i++;
		}
		else{
			temp[k] = arr[j];
			j++;
		}
		k++;
	}
	while(i<=m){
		temp[k] = arr[i];
		k++;
		i++;
	}
	while(j<=r){
		temp[k] = arr[j];
		k++;
		j++;
	}
	for(int i  = l; i<=r;i++){
		arr[i] = temp[i-l];
	}
}
void MergeSort(int arr[],int l,int r ){
	if(l<r){
		int m = l +(r-l)/2;
		MergeSort(arr,l,m);
		MergeSort(arr, m+1,r);
		merge(arr,l,m,r);
	}

}
void Print(int arr[],int n){
	cout<<"Elements of the sorted array are :: ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	int arr[] = {5,3,6,8,1,2,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	//InsertionSort(arr,size);
	//MergeSort(arr,0,size-1);
	cout<<"entering quick"<<"\n";
	QuickSort(arr,0,size-1);
	Print(arr, size);
	return 0;
}