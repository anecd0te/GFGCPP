#include<iostream>
using namespace std;
void InsertionSort(int A[], int n){
	int val,hole;
	for(int i=1;i<n;i++){
		val = A[i];
		hole = i;
		while(hole>0 && A[hole-1]>val){
			A[hole]=A[hole-1];
			hole=hole-1;
		}
		A[hole]=val;
	}
}
int main(){
	int A[]={7,2,4,1,5,3};
	InsertionSort(A,6);
	for(int i=0;i<6;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}