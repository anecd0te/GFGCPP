#include<bits/stdc++.h>
using namespace std;
void PrintSubset(int *arr, int i, int n, string op){
	if(i==n){
		cout<<op<<"\n";
		return;
	}
	PrintSubset(arr, i+1, n,op+to_string(arr[i]));
	PrintSubset(arr,i+1,n,op);
}
int main(){
	int arr[] = {1,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	PrintSubset(arr,0,n,"");
	return 0;
}