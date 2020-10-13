#include<bits/stdc++.h>
using namespace std;
int Subarray(int A[],int size){
	int best = 0;
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum = max(A[i],sum+A[i]);
		best = max(best,sum);
	}
	return best;
}
int main(){
	int A[] = {-1,2,4,-3,5,2,-5,2};
	int size = sizeof(A)/sizeof(A[0]);
	cout<<"Maximum Subarray sum is "<<Subarray(A,size);
	return 0;
}