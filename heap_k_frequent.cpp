#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {1,1,1,3,2,2,4};
	int k = 2;

	unordered_map<int, int> mp;
	priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> minh;
	for(int i = 0;i<7;i++){
		mp[arr[i]]++;
	}
	for(auto i = mp.begin();i!=mp.end();i++){
		minh.push({i->second, i->first});
		if(minh.size()>k){
			minh.pop();
		}
	}
	while(minh.size()>0){
		cout<<minh.top().second<<" ";
		minh.pop();
	}
	return 0;
}