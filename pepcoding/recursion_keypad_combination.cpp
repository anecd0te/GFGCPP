//https://www.geeksforgeeks.org/find-possible-words-phone-digits/
//https://www.youtube.com/watch?v=3fjt19bjs3A&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=27
#include<bits/stdc++.h>
using namespace std;
void getKPC(string ip, vector<vecto<char>> kp, vector<string> v){
	if()
		return;
	int fw = ip[0];
	ip.erase(ip.begin()+0);
	getKPC(ip, kp, v);
	vector<int> v1;
	for(int i = 0;i<kp[fw-'0'].size();i++){
		v1.insert(v1.begin(),kp[fw-'0'][i]);
	}
}
int main(){
vector<vector<char>> keypad =     {
        {}, {},        // 0 and 1 digit don't have any characters associated
        { 'a', 'b', 'c' },
        { 'd', 'e', 'f' },
        { 'g', 'h', 'i' },
        { 'j', 'k', 'l' },
        { 'm', 'n', 'o' },
        { 'p', 'q', 'r', 's'},
        { 't', 'u', 'v' },
        { 'w', 'x', 'y', 'z'}
    };
    string ip;
    cin>>ip;
    //int n = sizeof(input)/sizeof(input[0]);
    vector<string> v;
    getKPC(ip, keypad, v);
    for(auto i:v){
    	cout<<*i<<" ";
    }
    return 0;
}