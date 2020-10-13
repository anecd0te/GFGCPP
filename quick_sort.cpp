#include<bits/stdc++.h>
using namespace std;
int partition(int *arr, int start, int end){
	int pivot = arr[end];
	int partitionIndex = start;
	for(int i = start; i < end; i++){
		if(arr[i] <= pivot){
			swap(arr[i],arr[partitionIndex]);
			partitionIndex++;
		}
	}swap(arr[partitionIndex],arr[end]);
	return partitionIndex;
}
void quickSort(int *arr, int start, int end){
	if(start < end){
		int partitionIndex = partition(arr, start, end);
		quickSort(arr, start, partitionIndex-1);
		quickSort(arr, partitionIndex+1, end);
	}
}
int main(){
	int arr[] = {9,5,2,4,1,8};
	int size = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,size-1);
	for(int i = 0; i < size; i++){
		cout<<arr[i];
	}
	cout<<"\n";
	return 0;
}