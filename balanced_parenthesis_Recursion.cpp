#include<bits/stdc++.h>
using namespace std;
void solve(int open, int close,string op, vector<string> &v){
	if(open==0&&close==0){
		v.push_back(op);
		return;
	}
	if(open!=0){
		string op1 = op;
		op1.push_back('(');

		solve(open-1, close,op1,v);

	}
	if(close>open){
		string op1 = op;
		op1.push_back(')');
		solve(open, close-1, op1, v);

	}
	return;
}
vector<string> fun(int n){
	vector<string> v;
	int open = n;
	int close = n;
	string op = " ";
	solve(open,close,op,v);
	return v;

}
int main(){
	int num = 3;
	vector<string> v = fun(num);
	for(auto i:v){
		cout<<i;
	}
	return 0;
}