#include<bits/stdc++.h>
using namespace std;
void klargest(int arr[], int size, int k){
	vector<int> ar;
	priority_queue<int, vector<int>, greater<int>> minh;
	for(int i = 0;i<size;i++){
		minh.push(arr[i]);
		if(minh.size()>k){
			ar.push_back(minh.top());
			minh.pop();
		}
	}
	while(minh.size()>0){
		ar.push_back(minh.top());
		minh.pop();
	}
	for(auto c:ar){
		cout<<c<<" ";
	}
}
int main(){
	int arr[] = {6,5,3,2,8,10,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	klargest(arr,size,k);
}