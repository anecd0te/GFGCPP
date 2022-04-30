#include<bits/stdc++.h>
using namespace std;
//if a*a == b*b + c*c
bool check(int a, int b, int c){
	int x, y, z;
	x = max(a,max(b,c));
	if(x==a){
		y = b;
		z = c;
	}
	else if(x==b){
		y = a;
		z = c;
	}
	else{
		y = b;
		z = a;
	}
	//cout<<x<<" "<<y<<" "<<z;
	return x*x == y*y + z*z;
}

int main(){
	int a, b, c;
	cin>>a>>b>>c;
	//cout<<a<<" "<<b<<" "<<c;
	if(check(a,b,c))
		cout<<"Pythgorean Triplet";
	else
		cout<<"Not a Pythgorean Triplet";
	return 0;
}
