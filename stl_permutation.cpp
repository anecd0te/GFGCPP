//https://www.youtube.com/watch?v=28okqq8raXM
//works for distinct elements;
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int>> ans;
	vector<int> v = {1,2,3};
	sort(v.begin(),v.end());
	do{
		ans.push_back(v);
	}
	while(next_permutation(v.begin(),v.end()));
	for(auto i : ans){
		for(auto j : i){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
