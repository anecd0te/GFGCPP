#include<bits/stdc++.h>
using namespace std;
void countsort(int arr[], int n){
	int k = 0;
	for(int i = 0; i < n; i++){
		k = max(k,arr[i]);
	}
	int aux[k];
	for(int j = 0; j <=k ; j++){
		aux[j] = 0;
	}
	for(int i = 0; i < n; i++){
		aux[arr[i]]++;
	}
	int temp, j = 0;
	int sorted[n];
	for(int i = 0; i <=k ; i++){
		temp = aux[i];
		while(temp--){
			sorted[j] = i;
			j++;
		}
	}
	for(int i = 0; i < n; i++){
		arr[i] = sorted[i];
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[] = {2, 7, 4, 1, 2, 6, 5, 3, 6, 8, 8, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	countsort(arr, n);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
}