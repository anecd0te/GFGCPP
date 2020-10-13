#include<bits/stdc++.h>
using namespace std;
//, int (*compare)(int,int)
int Compare(int a, int b){
	if(a>b)
		return 1;
	else return -1;
}
int dCompare(int a,int b){
	if(a<b)
		return 1;
	else return -1;
}
void BubbleSort(int *A,int size, int (*compare)(int,int)){
	int temp;
	for(int i = 0;i<size;i++){
		for(int j = 0;j<size-1;j++){
			if(compare(A[j],A[j+1])>0){
				temp = A[j+1];
				A[j+1] = A[j];
				A[j] = temp;
			}
		}
	}
}
int main(){
	int A[] = {6,3,4,5,1,2};
	int size = sizeof(A)/sizeof(A[0]);
	BubbleSort(A,size, dCompare);
	for(int i =0;i<size;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}