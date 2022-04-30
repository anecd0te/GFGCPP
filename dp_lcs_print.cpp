#include<bits/stdc++.h>
using namespace std;
void lcs(string S1, string S2, int x, int y){
	int t[x+1][y+1];
	for(int i = 0;i<x+1;i++){
		for(int j = 0;j<y+1;j++){
			if(i==0||j==0)
				t[i][j]=0;
		}
	}
	for(int i = 1;i<x+1;i++){
		for(int j =1; j<y+1;j++){
			if(S1[i-1]==S2[j-1]){
				t[i][j] = 1+t[i-1][j-1];
			}
			else{
				t[i][j]=max(t[i-1][j], t[i][j-1]);
			}
		}
	}
	int i = x,j=y;
	string S = "";
	while(i>0 && j>0){
		if(S1[i-1]==S2[j-1]){
			S.push_back(S1[i-1]);
			i--;
			j--;
		}
		else{
			if(t[i][j-1]>t[i-1][j]){
				j--;
			}
			else{
				i--;
			}
		}
	}
	reverse(S.begin(),S.end());
	cout<<S;
}
int main(){
	string s1 = "ACBCF";
	string s2 = "ABCDAF";
	int x = s1.length();
	int y = s2.length();
	lcs(s1,s2,x,y);
	return 0;
}