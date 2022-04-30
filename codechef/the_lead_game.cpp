/***
input
5
140 82
89 134
90 110
112 106
88 90

Output 1 58

***/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s1=0, s2=0, diff=INT_MIN, win, in1, in2;
    for(int i = 0;i<n;i++){
        cin>>in1>>in2;
        s1 += in1;
        s2 += in2; 
        if(s1>=s2 && s1-s2>diff){
            win = 1;
            diff = s1-s2;
        }
        else if(s2>s1 && s2-s1>diff){
            win = 2;
            diff = s2-s1;
        }
    }
    cout<<win<<" "<<diff;
    // int n;//number of rounds
    // cin>>n;
    // vector<int> p1(n+1);
    // vector<int> p2(n+1);
    // int input;
    // for(int i = 0;i<n;i++){
    //     cin>>input;
    //     p1.push_back(input);
    // }
    // for(int i = 0;i<n;i++){
    //     cin>>input;
    //     p2.push_back(input);
    // }
    // vector<int> res1;
    // vector<int> res2;
    // partial_sum(p1.begin(), p1.end(), res1.begin());
    // partial_sum(p2.begin(), p2.end(), res2.begin());
    // int res;//resulting lead
    // int pl;// player
    // for(int i = 0;i<n;i++){
    //     if(res1[i]>res2[i] && ((res1[i]-res2[i])>res)){
    //         pl = 1;
    //         res = res1[i]-res2[i];
    //     }
    //     else if(res2[i]>res1[i] && ((res1[i]-res2[i])>res)){
    //         pl = 2;
    //         res = res2[i]-res1[i];
    //     }
    // }
    // cout<<pl<<" "<<res;
    return 0;
}