#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[], int *l, int leftcount, int *r, int rightcount){
	int i,j,k;
	i = 0; j = 0; k = 0;
	while(i<leftcount && j<rightcount){
		if(l[i]<r[j]){
			arr[k++] = l[i++];
		}
		else{
			arr[k++] = r[j++];
		}
	}
	while(i<leftcount)
		arr[k++] = l[i++];
	while(j<rightcount)
		arr[k++] = r[j++];
}
void Merge_Sort(int arr[], int n){
	int mid, *l, *r;
	if(n<2)
		return;
	mid = n/2;
	 l = new int[mid];
	 r = new int[n-mid];
	 for(int i = 0; i<mid; i++)
	 	l[i] = arr[i];
	 for(int i = mid; i<n; i++)
	 	r[i-mid] = arr[i];
	 Merge_Sort(l,mid);
	 Merge_Sort(r,n-mid);
	 Merge(arr,l,mid,r,n-mid);
	 delete[] l;
	 delete[] r;
}
int main(){
	int arr[] = {2,4,3,8,7,6,5,13,32,12};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Sorted Array is \n";
	Merge_Sort(arr,n);
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}