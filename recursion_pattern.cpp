#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
	//base case
	if(n==0)
		return;
	//self work
	for(int i = 0;i<n;i++){
		cout<<"* ";
	}
	cout<<endl;
	//recursion
	pattern1(n-1);
}
void betterPattern(int n, int i){
	//base case
	if(n==0)
		return;
	if(i<n){
		cout<<"* ";//self work
		betterPattern(n,i+1);//recursion
	}
	else{
		cout<<endl;//self work
		betterPattern(n-1,0);//recursion	
	} 
}
void reversePattern(int n, int i){
	if(n==0)
		return;
	if(i<n){
		cout<<"* ";
		reversePattern(n,i-1);
	}
	else{
		cout<<endl;
		reversePattern(n-1,0);

	}
}
int main(){
	int a = 5;
	int b = 3;
	//pattern1(a);
	//betterPattern(a,0);
	reversePattern(a,0);
	return 0;
}