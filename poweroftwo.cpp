#include<bits/stdc++.h>
using namespace std;
bool ispoweroftwo(int x){
	return (x && !(x&(x-1)));
}
int main(){
	int x = 18;
	ispoweroftwo(x)?cout<<"Yes":cout<<"No";
}