#include<bits/stdc++.h>
using namespace std;
int solve(string a, string b, int m, int n){
    if(m == 0 || n == 0)
        return 0;
    if(a[m-1]==b[n-1])
        return 1 + solve(a,b, m-1, n-1);
    return max(solve(a, b, m-1, n), solve(a, b, m, n-1));
}
int main(){
    string a = "abcdgh";
    string b = "abedfhr";
    int s1 = a.size();
    int s2 = b.size();
    cout<<solve(a,b, s1, s2);
    return 0;
}