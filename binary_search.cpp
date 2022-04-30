#include<iostream>
using namespace std;
int binary_search(int A[],int low, int high, int n){
	while(low<=high){
			int mid = low+(high-low)/2;
		if(A[mid]==n)
			return mid;
		if (n>A[mid]){
			low = mid+1;
		}
		else high = mid-1;
	}
	return -1;
	}
int better_bs(int A[], int low, int high, int n){
	int size = high+1;
	int k = 0;
	for(int b = n/2;b>=1;b/=2){
		while(k+b < size && A[k+b]<=n)
			k+=b;
	}
	if (A[k]==n){
		return k;
	}
	return -1;
}
/*
int binary_search(int A[],int low, int high, int n){
	if (high>=low){
			int mid = low+(high-low)/2;
		if(A[mid]==n)
			return mid;
		if (n>A[mid]){
			return binary_search(A,mid+1,high,n);
		}
		return binary_search(A,low,mid-1,n);
	}
	return -1;
	}
	*/
int main(){
	int A[]={3,6,8,12,14,17,25,29,31,36,42,47,53,55,62};
	int n = 25;
	int size = sizeof(A)/sizeof(A[0]);
	//int position = binary_search(A,0,size-1,n);
	int position = better_bs(A,0,size-1,n);
	if (position==-1)
		cout<<"Number not present in Array";
	else cout<<"Position of the element "<<n<<" is "<<position;
	return 0;
}