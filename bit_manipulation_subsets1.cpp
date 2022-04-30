#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> getSubsets(vector<int> num){
	int size = num.size(); // size = {1,2,3} == 3
	int subsetNum = (1<<size); //2^size
	vector<vector<int>> answer;
	for(int subsetmask = 0; subsetmask<subsetNum;subsetmask++){
		vector<int> v;
		for(int i = 0;i<size;i++){
			if((subsetmask&(1<<i))!=0){
				v.push_back(num[i]);
			}
		}
		answer.push_back(v);
	}
	return answer;
}
int main(){
	vector<int> v = {1,2,3};
	vector<vector<int>> ans = getSubsets(v);
	for(auto i : ans){
		for(auto j : i){

			cout<<j;
		}
		cout<<endl;
	}
	return 0;
	
}