#include<bits/stdc++.h>
using namespace std;
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
void Print(int arr[],int n){
	cout<<"Elements of the sorted array are :: ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	int arr[] = {4,3,6,8,1,2,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	InsertionSort(arr,size);
	Print(arr, size);
}