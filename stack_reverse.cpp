#include<bits/stdc++.h>
using namespace std;
void Print(stack<int> &s){
	if(s.empty())
		return;
	int x = s.top();
	cout<<x<<" ";
	s.pop();
	Print(s);
	s.push(x);
}
void Insert(stack<int> &s, int temp){
	if(s.empty()){
		s.push(temp);
		return;
	}
	int val = s.top();
	s.pop();
	Insert(s, temp);
	s.push(val);
}
void Reverse(stack<int> &s){
	if(s.size()==1)
		return;
	int temp = s.top();
	s.pop();
	Reverse(s);
	Insert(s, temp);
}
int main(){
	stack<int> s;
	int input;
	while(cin>>input){
		s.push(input);
	}
	Print(s);
	if(s.size()==0){
		cout<<"Stack is empty";
		return 0;
	}
	Reverse(s);
	cout<<"\n";
	Print(s);
	return 0;
}