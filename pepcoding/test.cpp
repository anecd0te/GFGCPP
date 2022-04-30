#include<bits/stdc++.h>
using namespace std;
vector<string> getPath(int num){
	if(num==0){
		return {""};
	}
	if(num<0)
		return{};
	vector<string> path1 = getPath(num-1);
	vector<string> path2 = getPath(num-2);
	vector<string> path3 = getPath(num-3);
	vector<string> ans;
	for(auto x:path1){
		ans.push_back("1"+x);
	}
	for(auto x:path2){
		ans.push_back("2"+x);
	}
	for(auto x:path3){
		ans.push_back("3"+x);
	}
	return ans;
}
int main(){
	int num;
    cin>>num;
    vector<string> ans = getPath(num);
    cout<<"[";
    for(int i = 0;i<ans.size()-1;i++){
        cout<<ans[i]<<", ";
    }
    cout<<ans[ans.size()-1]<<"]";
    
    return 0;
}