#include<bits/stdc++.h>
using namespace std;
void all_index(vector<int> v, int n,int num, vector<int> &ans){
	// if(n==v.size()-1){
	// 	if(v[n]==num){
	// 		ans.push_back(n);
	// 	}
	// 	return;
	// }
	if(n==v.size())
		return;
	if(v[n]==num){
		ans.push_back(n);
	}
	all_index(v,n+1,num, ans);
}
int main(){
	vector<int> v = {2,3,6,9,8,3,2,3,6,4};
	vector<int> ans;
	int num = 3;
	all_index(v, 0, num, ans);
	//sort(ans.begin(), ans.end());
	for(int i = 0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}