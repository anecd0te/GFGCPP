#include<bits/stdc++.h>
using namespace std;
void solve(int open, int close, string op, vector<string> &v){
	if(open==0 && close==0){
		v.push_back(op);
		return;
	}
	if(open<close){
		//string op1 = op;
		string op2 = op;
		//op1.push_back('(');
		op2.push_back(')');
		//solve(open-1,close,op1,v);
		solve(open,close-1,op2,v);
	}
	if(open!=0){
		string op1 = op;
		op1.push_back('(');
		solve(open-1, close, op1, v);
	}

}
vector<string> fun(int n){
	int open = n;
	int close =  n;
	vector<string> v;
	string op = " ";
	solve(open,close,op,v);
	return v;
}
int main(){
	int n = 3;
	vector<string> v = fun(n);
	for(auto i:v){
		cout<<i;
	} 
	return 0;
}