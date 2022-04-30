#include<bits/stdc++.h>
using namespace std;
void disp(vector<int> &v, int n){
	if(n == v.size())
		return;
	disp(v, n+1);
	cout<<v[n]<<" ";
}
int main(){
	vector<int> v  = {10,20,30,40,50};
	//int n = sizeof(arr)/sizeof(arr[0]);
	disp(v, 0);
	return 0;
}