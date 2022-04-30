//https://www.youtube.com/watch?v=28okqq8raXM
//complexity n!
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> answer;
void permute(vector<int> &num, int idx){
	if(idx == num.size()){
		answer.push_back(num);
		return;
	}
	for(int i  = idx; i<num.size();i++){
		if(i!=idx && num[i]==num[idx])
			continue;
		swap(num[i],num[idx]);
		permute(num,idx+1);
		//swap(num[i],num[idx]); 
	}
	return;
}
int main(){
	vector<int> v = {1,2,3,3};
	permute(v,0);
	for(auto i : answer){
		for(auto j : i){

			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}