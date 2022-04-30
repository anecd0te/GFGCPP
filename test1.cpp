#include<bits/stdc++.h>
using namespace std;
void print_stack(stack<int> &st){
	if(st.empty())
		return;
	int temp = st.top();
	st.pop();
	cout<<temp<<" \n";
	print_stack(st);
	st.push(temp);
}
void del_middle(stack<int> &st, int mid){
	if(mid == 1){
		st.pop();
		return;
	}
	int temp = st.top();
	st.pop();
	del_middle(st, mid-1);
	st.push(temp);
}
int main(){
	stack<int> st;
	st.push(2);
	st.push(4);
	st.push(6);
	st.push(8);
	st.push(10);
	print_stack(st);
	int middle = st.size()/2+1;
	// 	while(!st.empty()){
	// 	cout<<st.top();
	// 	st.pop();
	// }
	del_middle(st, middle);
	cout<<"Stack after deletion\n";
	print_stack(st);
	// while(!st.empty()){
	// 	cout<<st.top();
	// 	st.pop();
	// }
	return 0;
}