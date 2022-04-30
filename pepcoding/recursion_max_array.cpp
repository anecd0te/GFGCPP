#include<bits/stdc++.h>
using namespace std;
int max_arr(vector<int> &v, int n){
	if(n == v.size()-1)
		return v[n];
	int max = max_arr(v, n+1);
	if(max>v[n])
		return max;
	else return v[n];
}
int main(){
	vector<int> v  = {10,20,130,40,50};
	//int n = sizeof(arr)/sizeof(arr[0]);
	int idx = 0;
	cout<<max_arr(v, idx);
	return 0;
}