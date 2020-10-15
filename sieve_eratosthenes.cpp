/*Given a number n, print all prime numbers
smaller than or equals to n*/
#include<bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n){
	//create a boolean array of [0 to n] and initialize
	//all elements to True. Value will be False if not prime
	//else True
	bool prime[n+1];
	memset(prime, true, sizeof(prime));
	for(int p = 2; p*p<=n;p++){
		if(prime[p]==true){
			// Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.
            for(int i = p*p;i<=n;i+=p){
            	prime[i] = false;
            }
		}
	}
	for(int p = 2; p<=n;p++){
		if(prime[p]==true){
			cout<<p<<" ";
		}
	}
}
int main(){
	int n;
	cout<<"Enter a number \n";
	cin>>n;
	cout<<n<<"\n";
	cout<<"Following are the list of all prime numbers till "<<n<<"\n";
	SieveOfEratosthenes(n);
	return 0;
}