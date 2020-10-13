#include<iostream>
using namespace std;
void SelectionSort(int A[],int n){
	for(int i=0;i<n-1;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(A[j] < A[min])
				min = j;
		}
		int temp = A[i];
		A[i]=A[min];
		A[min]=temp;
	}
}
int main(){
int A[]={2,7,4,1,5,3};
SelectionSort(A,6);
for(int i = 0;i<6;i++)
	cout<<A[i]<<" ";
return 0;
}