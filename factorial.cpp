#include<iostream>
using namespace std;
int Facortial(int n){
	if(n==0){
		cout<<"We have entered base condition";
		return 1;
	}
	else{
		cout<<"entering recursion for "<<n<<"\n";
		return n*Facortial(n-1);
	}

}
int main(){
	cout<<Facortial(5);
	return 0;
}