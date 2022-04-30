#include<bits/stdc++.h>
using namespace std;
void toh(int n, string t1, string t2, string t3){
	if(n==0)
		return;
	toh(n-1, t1,t3,t2);
	cout<<n<<" [ "<<t1<<" --> "<<t2<<" ] \n";
	toh(n-1, t3,t2,t1);
}
int main(){
	int n = 3;
	string t1 = "A";
	string t2 = "B";
	string t3 = "C";
	toh(n,t1,t2,t3);
	return 0;

}