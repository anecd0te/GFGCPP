//Find k closest elements in an array to the given number
#include<bits/stdc++.h>
using namespace std;
void kclosest(int arr[], int size, int k, int x){
	priority_queue<pair<int, int>> maxh;
	for(int i = 0; i<size;i++){
		maxh.push({abs(arr[i]-x),arr[i]});
		if(maxh.size()>k)
			maxh.pop();
	}
	while(maxh.size()>0){
		cout<<maxh.top().second<<" ";
		maxh.pop();
	}
}
int main(){
	int arr[] = {5,6,7,8,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	int k = 3; // k 
	int x = 7; // given number
	kclosest(arr, size, k, x);
	return 0;

}