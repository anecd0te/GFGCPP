#include<iostream>
using namespace std;
void BubbleSort(int A[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				int temp = A[j+1];
				A[j+1]=A[j];
				A[j]=temp;

			}
		}
	}
}
int main(){
	int A[]={2,7,4,1,5,3};
	BubbleSort(A,6);
	for(int i=0;i<6;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}