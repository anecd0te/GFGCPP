#include<bits/stdc++.h>
using namespace std;
int F[51];
int Fibonacci(int n){
	if(n<=1)
		return n;
	else if(F[n]!=-1){
			return F[n];
		}
		F[n]=Fibonacci(n-1)+Fibonacci(n-2);
		return F[n];
	}
int main(){
	for(int i=0;i<51;i++){
		F[i]=-1;
	}
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"Fibonacci sequence of "<<n<<" is:"<<Fibonacci(n);
	return 0;
}