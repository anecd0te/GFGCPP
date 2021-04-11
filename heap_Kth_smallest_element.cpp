//Finding kth smallest element in an array via heap
#include<bits/stdc++.h>
using namespace std;
int kelement(int arr[], int size, int k){
	priority_queue <int> maxh;
	for(int i = 0; i <size;i++){
		maxh.push(arr[i]);
		if(maxh.size()>k){
			maxh.pop();
		}
	}
	return maxh.top();
}
int main(){
	int arr[] = {7, 10, 4, 3, 20, 15};
	int k = 3; //kth smallest element;
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<kelement(arr,size,k)<<endl;


}