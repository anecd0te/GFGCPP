#include<bits/stdc++.h>
using namespace std;
void solve(string ip, string op, set<string> &s){

	if(ip.length()==0){
		//cout<<op<<" ";
		s.insert(op);
		return;
	} 
	string op1 = op;
	string op2 = op;
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	solve(ip, op1, s);
	solve(ip, op2, s);
	return;
}
int main(){
	//string ip = "aab";
	string ip = "123";
	string op = " ";
	set<string> s;
	solve(ip, op, s);
	for(auto i = s.begin(); i!=s.end();i++){
		cout<<*i<<endl;
	}
	return 0;
}