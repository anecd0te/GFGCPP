#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
    if(s.length()==1)
        return true;
    if(s[0]!=s[s.length()-1])
    {
        return false;
    }
    s.erase(s.begin()+0);
    s.erase(s.begin()+(s.length()-1));
    return check(s);
    // else{
    //     return false;
    // } 
        
    // return true;
}
int main()
{
    string s = "malayalam";
    check(s)?cout<<"It is a Palindrome": cout<<"No it's not a Palindrome";
    return 0;
}