#include<bits/stdc++.h>
using namespace std;
void Print(int n){
	if(n==0)
		return;
	cout<<"* ";
	Print(n-1);
}
void Pattern(int n, int i){
	if(n==0)
		return;
	Print(i);
	cout<<endl;
	Pattern(n-1,i+1);
}
int main(){
	int a = 5;
	Pattern(a,1);
	return 0;
}