#include<bits/stdc++.h>
using namespace std;
void Insertion_Sort(int arr[], int n){
	for (int i = 1; i < n-1; i++)
	{
		int hole = i;
		int value = arr[i];
		while(hole>0 && value<arr[hole-1]){
				arr[hole] = arr[hole-1];
				hole--;
			}
			arr[hole] = value;
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
	Insertion_Sort(arr, arr_size);
	cout<<"After Sort ";
	for(int i = 0; i<arr_size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0;
}