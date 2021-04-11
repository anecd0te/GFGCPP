#include<bits/stdc++.h>
using namespace std;
#define MAX_ARR 256
void printDuplicate(string s){
	int count[MAX_ARR] = {};
	for(int i = 0; i < s.size(); i++){
		//increment the count of each character by using ASCII of character as key
		count[s[i]]++;
		//cout<<count[105]<<" ";
	}
	cout<<"\n";
	for(int i = 0; i <s.size();i++){
		if(count[s[i]]>1){
			cout<<s[i]<<" count is :"<<count[s[i]]<<"\n";
			count[s[i]]=0;
		}
	}
}
int main(){
	string s = "Dinesh Saini";
	cout<<"Input String is : "<<s<<"\n";
	printDuplicate(s);
	return 0;
}