#include<bits/stdc++.h>
using namespace std;
void Print_Stack(stack<int> &s){
	if(s.empty())
		return;
	int x = s.top();
	s.pop();
	cout<<x<<" ";
	Print_Stack(s);
	s.push(x);

}
void Insert(stack<int> &s, int temp){
	if(s.size()==0||s.top()<=temp){
		s.push(temp);
		return;
	}
	int val = s.top();
	s.pop();
	Insert(s, temp);
	s.push(val);
}
void Sort_Stack(stack<int> &s){
	if(s.size()==1)
		return;
	int temp = s.top();
	s.pop();
	Sort_Stack(s);
	Insert(s, temp);
}
int main(){
	stack<int> s;
	int input;
	while(cin>>input){
		s.push(input);
	}
	Print_Stack(s);
	Sort_Stack(s);
	cout<<"\n";
	Print_Stack(s);
	return 0;
}