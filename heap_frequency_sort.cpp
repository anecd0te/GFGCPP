#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {1,1,1,2,2,2,2,3,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	unordered_map<int, int> mp;
	for(int i = 0; i<size;i++){
		mp[arr[i]]++;
	}
	priority_queue<pair<int,int>>maxh;
	for(auto i = mp.begin();i!=mp.end();i++){
		maxh.push({i->second, i->first});
	}
	while(maxh.size()>0){
		int freq = maxh.top().first;
		int num = maxh.top().second;
		for(int  i = 0; i <freq;i++){
			cout<<num;
		}
		maxh.pop();
	}
}