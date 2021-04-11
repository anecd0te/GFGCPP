#include<bits/stdc++.h>
using namespace std;
int ksmallest(int arr[], int size, int k){
	priority_queue<int> maxh;
	for(int i = 0; i<size;i++){
		maxh.push(arr[i]);
		if(maxh.size()>k){
			maxh.pop();
		}
	}
	return maxh.top();
}
int main(){
	int arr[] = {1,3,12,5,15,11};
	int k1 = 3;
	int k2 = 6;
	int sum = 0;
	int size = sizeof(arr)/sizeof(arr[0]);
	int first = ksmallest(arr,size,k1);
	int second = ksmallest(arr,size,k2);
	for(int i = 0;i<size;i++){
		if(arr[i]>first && arr[i]<second)
			sum+=arr[i];
	}
	cout<<sum<<endl;
	return 0;
}