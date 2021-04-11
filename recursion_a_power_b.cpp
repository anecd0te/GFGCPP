#include<bits/stdc++.h>
using namespace std;
int optimized_power(int a, int b){
	//base case
	if(b==0)
		return 1;
	if(b==1)
		return a;
	//recursive assumption
	int temp = optimized_power(a,b/2);

	//self work
	if(b%2==0)
		return temp*temp;
	else return a * temp*temp;
}
int power(int a, int b){
	if(b==0){
		return 1;
	}
	int ans = power(a,b-1);
	return a*ans;
}
int main(){
	int a = 3;
	int b = 4;
	cout<<optimized_power(a,b);
	//cout<<power(a,b);
	return 0;
}