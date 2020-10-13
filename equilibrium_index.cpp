/*Equilibrium index of an array is an index such that
the sum of elements at lower indexes is equal to the
sum of elements at higher indexes.*/
#include<bits/stdc++.h>
using namespace std;
int equi_in(int arr[], int n){
	int sum = 0;
	for(int i = 1; i < n; i++){
		sum+=arr[i];
	}
	int lsum = 0,rsum = 0;
	for(int j = 0; j < n ; j++){
		lsum+= arr[j];
		rsum = sum-lsum;
		if(lsum == rsum){
			return j;
		}
		else return -1;
	}
	return 0;
}
int main(){
	int arr[] = {-7,1,5,2,-4,3,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	int ans = equi_in(arr, n);
	cout<<"index is "<<ans<<"\n";
	return 0;
}