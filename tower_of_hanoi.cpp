#include<bits/stdc++.h>
using namespace std;
void toh(string src, string dest, string help, int n){
	if(n==0)
		return;
	toh(src,help,dest,n-1);
	cout<<"Move "<<n<<" disk from "<<src<<"to "<<dest<<"\n";
	toh(help,dest,src,n-1);
}
int main(){
	toh("A","B","C", 3);
	return 0;
} 