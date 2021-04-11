#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	priority_queue<int,vector<int>,greater<int>> minh;
	for(int i = 0;i<size;i++){
		minh.push(arr[i]);
	}
	int total = 0, sum=0;
	while(minh.size()>=2){
		int first = minh.top();
		minh.pop();
		int second = minh.top();
		minh.pop();
		sum = first+second;
		total+=sum;
		minh.push(sum);
	}
	cout<<"minimum cost is "<<total;
}