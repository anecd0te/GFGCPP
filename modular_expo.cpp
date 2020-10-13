#include<iostream>
using namespace std;
int Mod_Pow(int x, int n, int M){
	if(n==0)
		return 1;
	else if(n%2==0){
		int y = Mod_Pow(x,n/2,M);
		return ((y%M)*(y%M))%M;
	}
	else return (x%M*Mod_Pow(x,n-1,M))%M;
}
int main(){
	int x,n,M;
	cout<<"Enter x,n and M of x^n mod M"<<"\n";
	cin>>x>>n>>M;
	cout<<"Answer is "<<Mod_Pow(x,n,M);
	return 0;
}