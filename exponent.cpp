#include<iostream>
using namespace std;
int Pow(int x, int n){
	if(n==0)
		return 1;
	else if(n%2==0){
		int y = Pow(x,n/2);
		return y*y;
	}
	else return x * Pow(x,n-1);
}
int main(){
	int x,n;
	cout<<"Enter base: "<<"\n";
	cin>>x;
	cout<<"Enter power of the base"<<"\n";
	cin>>n;
	cout<<"Answer is "<<Pow(x,n);
	return 0;
}