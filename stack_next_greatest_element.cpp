#include<bits/stdc++.h>
using namespace std;
void next_greatest(int arr[], int n){
	stack<int> s;
	int arr1[n];  
	for(int i = n-1;i>=0;i--){
		while(!s.empty() && s.top()<=arr[i]){
			s.pop();
		}
		if(s.empty()){
			arr1[i] = -1;
		}
		else arr1[i] = s.top();
		s.push(arr[i]);
	}
	for(int i = 0 ; i<n;i++){
		cout<<arr1[i]<<" ";
	}
}
int main(){
	int arr[] = {4,5,2,25};
	int size = sizeof(arr)/sizeof(arr[0]);
	next_greatest(arr,size);
	return 0;
}