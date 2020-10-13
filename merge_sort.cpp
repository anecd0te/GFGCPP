#include<iostream>
using namespace std;
void Merge(int A[],int start, int mid, int end){
	int p = start;
	int q = mid+1;
	int size = end-start+1;
	int Arr[size],k=0;
	for(int i =start;i<end;i++){
		if(p>mid){
			Arr[k++]=A[q++];
		}
		else if(q>end){
			Arr[k++]=A[p++];
		}
		else if (A[p]<A[q]){
			Arr[k++]=A[p++];
		}
		else Arr[k++]=A[q++];
		}
	for(int i=0;i<k;i++){
		A[start++]=Arr[i];
	}
}
void Merge_Sort(int A[], int start, int end){
	if(start<end){
		int mid = start+(end-start)/2;
		Merge_Sort(A,start,mid);
		Merge_Sort(A,mid+1,end);
		Merge(A,start,mid,end);
	}
}
int main(){
	int Arr[]={2,4,1,6,8,5,3,7};
	int size = sizeof(Arr)/sizeof(Arr[0]);
	Merge_Sort(Arr,0,size-1);
	for(int i=0;i<8;i++)
		cout<<Arr[i]<<" ";
	return 0;
}