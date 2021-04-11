#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[4][2] = {{0,1}, {5,8}, {-2,2}, {1,3}};
	int k = 2;
	priority_queue<pair<int,pair<int,int>>> maxh;
	for(int i = 0; i<4;i++){
		maxh.push({arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1],{arr[i][0],arr[i][1]}});
		if(maxh.size()>k){
			maxh.pop();
		}
	}
	while(maxh.size()>0){
		pair<int, int> p = maxh.top().second;
		cout<<p.first<<" "<<p.second<<endl;
		maxh.pop();
	}
	return 0;
}