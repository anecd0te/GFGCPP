#include<bits/stdc++.h>
using namespace std;
string swapstr(string str, int left, int right){
	swap(str[left],str[right]);
	return str;
}
void findPermutation(string str, int left, int right){
	if(left == right){
		cout<<str<<endl;
	}
	else{
		for(int i = left; i<=right;i++){
			//do
			str = swapstr(str, left,i);
			//recur
			findPermutation(str,left+1,right);
			//undo
			str = swapstr(str, left,i);

		}
	}
}
int main(){
	string str;
	cin>>str;
	findPermutation(str, 0, str.length()-1);

}