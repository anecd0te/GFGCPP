#include<bits/stdc++.h>
using namespace std;
void subset(char c[], int n){
	for(int i = 0; i<(1<<n);i++){
		for(int j=0; j<n;j++){
			if(i&(1<<j))
				cout<<c[j]<<"";
		}
		cout<<endl;
	}
}
int main(){
	char s[] = {'a','b','c'};
	int size = sizeof(s)/sizeof(s[0]);
	subset(s,size);
	return 0;
}