#include<bits/stdc++.h>
using namespace std;
int substrg(string s1, string s2, int m, int n, int count){
    if(m==0 || n==0)
        return count;
    if(s1[m-1]==s2[n-1]){
        count =  substrg(s1, s2, m-1, n-1, count+1);
    }
    count =  max(count, max(substrg(s1, s2, m, n-1, 0), substrg(s1, s2, m-1, n, 0)));
    return count;
}
int main(){
    string s1 = "abcde";
    string s2 = "abfce";
    int m = s1.size();
    int n =  s1.size();
    // cout<<m<<" "<<n;
    int count = 0;
    cout<<substrg(s1, s2, m, n, count);
    return 0;
}