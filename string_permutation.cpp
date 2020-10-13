#include <bits/stdc++.h>
using namespace std;
void swaper(char *x, char *y){
	char temp = *x;
	*x = *y;
	*y = temp;
}
void permute(char s[], int l, int r){
	if(l==r){
		cout<<s<<" ";
	}
	else{
		for(int i = l;i<=r;i++){
			swaper(s+l,s+i);
			sort(s+l+1, s+r+1);
			permute(s,l+1,r);
			sort(s+l+1,s+r+1);
			swaper(s+l,s+i);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		char s[5];
		cin>>s;
		//int n = sizeof(s)/sizeof(s[0]);
		int n = strlen(s)-1;
		sort(s,s+n+1);
		permute(s,0,n);
		cout<<"\n";
	}
	return 0;
}