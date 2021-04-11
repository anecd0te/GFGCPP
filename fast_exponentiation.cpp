#include<bits/stdc++.h>
using namespace std;
int calc_pow(int a, int b){
	if(b==0)
		return 1;
	if(b%2==0){
		int half_ans = calc_pow(a,b/2);
		return half_ans*half_ans;
	}
	else {
		int half_ans = calc_pow(a,b/2);
		return half_ans*half_ans*a;
	}
}
int main(){
	int a = 2;
	int b = 8;
	cout<<calc_pow(a,b);
	return 0;
}